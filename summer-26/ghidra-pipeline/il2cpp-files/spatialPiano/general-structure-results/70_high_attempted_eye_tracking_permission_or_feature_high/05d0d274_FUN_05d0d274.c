/*
FUNCTION_NAME: FUN_05d0d274
ENTRY_POINT: 05d0d274
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint FUN_05d0d274(long *param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 local_34;
  undefined8 local_28;
  
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
  if ((DAT_06bc3616 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                );
    DAT_06bc3616 = 1;
  }
  lVar4 = *param_1;
  local_28 = 0;
  local_34 = 0;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_05d0d30c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0(param_1,*(long *)puVar1,4);
LAB_05d0d30c:
  uVar2 = (*(code *)*puVar3)(param_1,&local_28,&local_34,puVar3[1]);
  if (((uVar2 & 1) == 0) && ((param_2 & 1) != 0)) {
    FUN_05d09580(local_28,local_34);
  }
  return uVar2 & 1;
}



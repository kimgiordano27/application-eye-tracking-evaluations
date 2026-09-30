/*
FUNCTION_NAME: FUN_05d03fac
ENTRY_POINT: 05d03fac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_05d03fac(char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_06bc35f2 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9340);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__);
    DAT_06bc35f2 = 1;
  }
  puVar1 = PTR_DAT_067c9338;
  *param_3 = 3;
  *param_2 = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__;
  if (*param_1 == '\0') {
    lVar6 = *(long *)Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar6);
      lVar6 = *(long *)puVar1;
    }
    uVar3 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    if (DAT_06bc363f == '\0') {
      FUN_02f08768(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__);
      DAT_06bc363f = '\x01';
    }
    if (*(char *)(*(long *)(*(long *)
                             Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__
                           + 0xb8) + 8) != '\0') {
      return 1;
    }
    if (*(int *)(*(long *)PTR_DAT_067c9340 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_0610dca8(0);
    puVar1 = 
    Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
    plVar4 = (long *)thunk_FUN_02f45174(uVar3,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                                       );
    puVar2 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__;
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_05d04164;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar1,4);
LAB_05d04164:
      uVar7 = (*(code *)*puVar5)(plVar4,param_2,param_3,puVar5[1]);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar3 = FUN_05d0ad4c(param_2,param_3);
      return uVar3;
    }
    lVar6 = *(long *)Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar6);
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    *param_3 = 2;
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
  }
  *param_2 = uVar3;
  return 0;
}



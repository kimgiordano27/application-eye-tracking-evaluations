/*
FUNCTION_NAME: FUN_06069518
ENTRY_POINT: 06069518
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long FUN_06069518(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar3 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
  if ((DAT_06b87b97 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067820b8);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__);
    DAT_06b87b97 = 1;
  }
  puVar2 = PTR_DAT_0675e258;
  uVar6 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_05015c2c(uVar6,0);
  if (param_1 != (long *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x218))(param_1,uVar6,0,*(undefined8 *)(*param_1 + 0x220));
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) {
        plVar5 = *(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
      }
      else {
        plVar5 = (long *)FUN_033a51b8(lVar4,*(undefined8 *)PTR_DAT_067820b8);
        if (plVar5 == (long *)0x0) goto LAB_06069620;
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__ +
                         0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_UnityEngine_InputSystem_InputSystem_GetDevice<MetaAimHand>__)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88();
        }
        plVar5 = plVar5 + 3;
      }
      return *plVar5;
    }
  }
LAB_06069620:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



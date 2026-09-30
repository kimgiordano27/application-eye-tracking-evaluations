/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$RayCastDebugger
ENTRY_POINT: 06e3afe4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_MRUtilityKit_SceneDebugger__RayCastDebugger(long *param_1,long param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x20) + 1) goto LAB_06e3b020;
  }
  FUN_07199c28(0);
LAB_06e3b020:
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    lVar3 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  lStack_40 = param_1[2];
  lStack_38 = param_1[3];
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&lStack_40);
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c(*(long *)(param_2 + 0x20));
  }
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_07143704(&uStack_30,uVar4,param_1[4],0);
  auVar2._8_8_ = uStack_28;
  auVar2._0_8_ = uStack_30;
  return auVar2;
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 06446144
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03ac4090(param_3);
  }
  lVar2 = thunk_FUN_03ac73c0();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03ac4090(lVar2);
    }
    lVar2 = thunk_FUN_03ac73c0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
LAB_06446278:
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40();
      }
      thunk_FUN_03ac7604();
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090(lVar2);
      }
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) goto LAB_06446278;
      thunk_FUN_03ac7604();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto FUN_06446260;
    }
  }
  FUN_0677195c(2,0);
  uVar1 = 0;
FUN_06446260:
  return uVar1 & 1;
}



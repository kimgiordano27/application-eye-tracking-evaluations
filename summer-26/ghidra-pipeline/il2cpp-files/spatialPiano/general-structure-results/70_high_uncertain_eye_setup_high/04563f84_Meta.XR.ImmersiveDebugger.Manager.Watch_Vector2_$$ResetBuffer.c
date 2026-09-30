/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 04563f84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer
          (ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if ((*param_1 & 1) == 0) {
    FUN_02f41e9c(param_3);
  }
  lVar1 = thunk_FUN_02f45174();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar1);
    }
    lVar1 = thunk_FUN_02f45174();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c(lVar1);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
        thunk_FUN_02f453b8();
        lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02f41e9c(lVar1);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
          thunk_FUN_02f453b8();
          uVar2 = (**(code **)(*unaff_x19 + 0x198))();
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
  }
  FUN_050f5b58(2,0);
  return 0;
}



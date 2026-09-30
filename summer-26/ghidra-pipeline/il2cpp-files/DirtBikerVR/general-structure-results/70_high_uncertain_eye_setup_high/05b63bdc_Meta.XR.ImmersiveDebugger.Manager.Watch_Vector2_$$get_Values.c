/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 05b63bdc
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values(undefined8 param_1)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (!in_ZR) {
    *(undefined8 *)(unaff_x19 + 0x28) = param_1;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x28),param_1);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)PTR_DAT_08487018;
      thunk_FUN_03afed3c();
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      uVar2 = FUN_066abc3c(unaff_x20 + 4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xd0));
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x38),uVar2);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_0848f8e8;
          thunk_FUN_03afed3c();
          FUN_065ce45c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}



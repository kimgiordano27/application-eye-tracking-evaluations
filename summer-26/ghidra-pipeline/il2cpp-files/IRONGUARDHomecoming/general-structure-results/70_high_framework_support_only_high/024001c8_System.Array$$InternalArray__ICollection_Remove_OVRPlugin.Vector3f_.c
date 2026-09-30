/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector3f>
ENTRY_POINT: 024001c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector3f>(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *unaff_x20;
  long unaff_x21;
  long *plVar4;
  undefined8 *unaff_x22;
  long unaff_x23;
  size_t unaff_x24;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar5 [16];
  undefined4 unaff_s8;
  
  if (unaff_x23 != 0) {
    lVar2 = FUN_04070398();
    plVar4 = *(long **)(unaff_x21 + 0x38);
    if (-1 < *(int *)(*plVar4 + 0x28)) {
      unaff_x20 = (void *)(unaff_x29 + -0xa0);
    }
    memcpy(unaff_x22,unaff_x20,unaff_x24);
    puVar1 = (undefined8 *)plVar4[1];
    uVar3 = *puVar1;
    if (-1 < *(int *)(*plVar4 + 0x28)) {
      unaff_x22 = (undefined8 *)*unaff_x22;
    }
    *(undefined4 *)(unaff_x29 + -0x84) = unaff_s8;
    *(undefined8 **)(unaff_x29 + -0x98) = unaff_x22;
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x84;
    (*(code *)puVar1[2])(uVar3,puVar1,0,unaff_x29 + -0x98,unaff_x29 + -0x80);
    FUN_03c7c6bc(*(undefined4 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x7c),
                 *(undefined4 *)(unaff_x29 + -0x78),0);
    if (lVar2 != 0) {
      FUN_0407ba80(lVar2,0);
      auVar5 = FUN_03c7c6c0(0);
      if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x28)) {
        return auVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



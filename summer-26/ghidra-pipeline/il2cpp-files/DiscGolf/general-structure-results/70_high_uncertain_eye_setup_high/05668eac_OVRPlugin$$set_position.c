/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 05668eac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  long unaff_x21;
  
  plVar3 = *(long **)(unaff_x20 + 0x868);
  if ((*(byte *)(unaff_x21 + 0x618) & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<ERBlendVecs>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e868);
    *(undefined1 *)(unaff_x21 + 0x618) = 1;
  }
  FUN_0552aca4();
  lVar1 = *plVar3;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar1 = *plVar3;
  }
  plVar3 = *(long **)(lVar1 + 0xb8);
  lVar1 = plVar3[1];
  lVar2 = *plVar3;
  *(int *)(unaff_x19 + 0x10) = (int)lVar1;
  *(int *)(plVar3 + 1) = (int)lVar1 + 1;
  if (lVar2 != 0) {
    FUN_04d966b8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



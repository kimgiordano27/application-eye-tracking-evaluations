/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02cdaec8
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  uint unaff_w21;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  uVar1 = FUN_031d2bdc();
  if (unaff_w21 < uVar1) {
    memcpy(&stack0x00000008,
           (void *)((long)unaff_x20 +
                   (ulong)*(uint *)(*unaff_x20 + 0x100) * (long)(int)unaff_w21 + 0x20),
           (ulong)*(uint *)(*unaff_x20 + 0x100));
    param_1[1] = uStack0000000000000010;
    *param_1 = uStack0000000000000008;
    param_1[2] = uStack0000000000000018;
    return;
  }
  thunk_FUN_0159f088(PTR_DAT_06df0bd0);
  uVar2 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  uVar3 = thunk_FUN_0159f088(PTR_DAT_06e56518);
  System_Collections_Generic_List<UIPlayersMenu_PlayerOrSeparatorData>__Contains(uVar2,uVar3,0);
  uVar3 = thunk_FUN_0159f088(PTR_DAT_06d8c788);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar2,uVar3);
}



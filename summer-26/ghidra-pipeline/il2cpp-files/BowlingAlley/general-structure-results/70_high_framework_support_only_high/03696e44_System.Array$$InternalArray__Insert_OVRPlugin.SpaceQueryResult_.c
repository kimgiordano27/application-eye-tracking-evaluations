/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03696e44
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>
               (void *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = 0;
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_2;
  uVar1 = FUN_0593be7c();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(param_1,&stack0x00000000,0x48);
    return;
  }
  thunk_FUN_032e1da0(PTR_DAT_0727dd28);
  uVar2 = thunk_FUN_032a56a0();
  uVar3 = thunk_FUN_032e1da0(PTR_DAT_0727e618);
  FUN_0589fe50(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar2);
}



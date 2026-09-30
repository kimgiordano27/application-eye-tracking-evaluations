/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04c3b084
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  iVar1 = thunk_FUN_03d9e884(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_03d1e194(PTR_DAT_091f9158);
    uVar4 = thunk_FUN_03d2ef40();
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091f9160);
    FUN_071895f4(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4);
  }
  uVar2 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000030,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000020 = unaff_x22;
      in_stack_00000028 = unaff_x21;
      thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_03d8f26c(lVar6);
      }
      uVar3 = thunk_FUN_071d4ed8();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03d9e840();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03d9e840();
  return iVar1 + -1;
}



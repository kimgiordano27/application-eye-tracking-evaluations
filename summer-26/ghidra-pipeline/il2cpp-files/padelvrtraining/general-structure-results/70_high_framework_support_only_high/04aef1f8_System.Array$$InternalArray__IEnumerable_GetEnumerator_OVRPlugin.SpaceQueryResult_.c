/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04aef1f8
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


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03d8f2c8(param_3);
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  iVar2 = thunk_FUN_03d9e884(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_03d1e194(PTR_DAT_091f9158);
    uVar5 = thunk_FUN_03d2ef40();
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091f9160);
    FUN_071895f4(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar5,param_3);
  }
  uVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000050,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        FUN_03d8f26c(lVar7);
      }
      uVar4 = thunk_FUN_071d4ed8();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}



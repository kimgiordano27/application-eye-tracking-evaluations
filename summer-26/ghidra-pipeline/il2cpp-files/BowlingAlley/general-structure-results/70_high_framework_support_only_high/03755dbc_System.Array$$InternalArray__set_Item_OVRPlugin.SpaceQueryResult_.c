/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03755dbc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>
              (long param_1,undefined1 *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_s8;
  undefined4 in_stack_00000008;
  
  while( true ) {
    uVar2 = FUN_05935d18(param_2,param_3,*(undefined8 *)(param_1 + 0x10));
    if ((uVar2 & 1) != 0) {
      iVar1 = thunk_FUN_032f6624();
      return iVar1 + (int)unaff_x21;
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x23 == unaff_x21) break;
    memcpy(&stack0x0000000c,(void *)(unaff_x22 + unaff_x21 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000008 = unaff_s8;
    param_3 = thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000008);
    param_1 = *(long *)(unaff_x19 + 0x38);
    param_2 = &stack0x0000000c;
  }
  iVar1 = thunk_FUN_032f6624();
  return iVar1 + -1;
}



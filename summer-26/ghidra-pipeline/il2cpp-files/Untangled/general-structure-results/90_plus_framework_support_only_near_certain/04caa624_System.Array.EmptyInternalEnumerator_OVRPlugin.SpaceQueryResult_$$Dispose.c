/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 04caa624
PROGRAM: Untangled-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000038;
  
  lStack0000000000000038 = param_1;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_056138a8(5);
  }
  FUN_03ba3e08(param_4,0xf,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x200));
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_02ef170c(param_3,lVar3);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(param_3,lVar3);
    }
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(long *)(*param_4 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(param_4);
  }
  puVar2 = (undefined8 *)thunk_FUN_02ef195c(param_4);
  in_stack_00000030 = puVar2[2];
  in_stack_00000028 = puVar2[1];
  in_stack_00000020 = *puVar2;
  FUN_04ca8d94(param_2,lVar1,&stack0x00000020,1,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x208
                                              ) + 0x20) + 0xc0) + 0x110));
  if (*(long *)(unaff_x25 + 0x28) == lStack0000000000000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



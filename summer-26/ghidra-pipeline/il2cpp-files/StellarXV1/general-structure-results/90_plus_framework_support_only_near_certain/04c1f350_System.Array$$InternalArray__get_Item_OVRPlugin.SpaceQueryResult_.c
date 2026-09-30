/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04c1f350
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  void *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
                    /* try { // try from 04c1f354 to 04d1f363 has its CatchHandler @ 04c1f390 */
  if (param_1 == 0) {
    FUN_040b1b28();
  }
                    /* try { // try from 04c1f36c to 04d1f377 has its CatchHandler @ 04c1f3a0 */
  in_stack_000000e0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
                    /* try { // try from 04c1f378 to 04d1f3c3 has its CatchHandler @ 04c1f200 */
  iVar1 = thunk_FUN_04086990(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_040dedf8(&DAT_094bbea8);
    uVar4 = thunk_FUN_040b4efc();
    uVar5 = thunk_FUN_040dedf8(&DAT_0954b640);
    FUN_0768b53c(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4);
  }
  uVar2 = FUN_0769286c(param_2,0);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f354 with catch @ 04c1f390
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f344 with catch @ 04c1f394
                        */
  if (0 < (int)uVar2) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f314 with catch @ 04c1f398
                        */
    uVar7 = 0;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f290 with catch @ 04c1f39c
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f36c with catch @ 04c1f3a0
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f2b0 with catch @ 04c1f3a4
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f23c with catch @ 04c1f3a8
                        */
    do {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f258 with catch @ 04c1f3ac
                       catch(type#1 @ 08d635d8) { ... } // from try @ 04c1f2dc with catch @ 04c1f3ac
                        */
      memcpy(&stack0x000000a0,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
                    /* try { // try from 04c1f3c4 to 04d1f3db has its CatchHandler @ 04c1f434 */
      memcpy(&stack0x00000058,unaff_x21,0x48);
                    /* try { // try from 04c1f3dc to 04d1f423 has its CatchHandler @ 04c1f200 */
      thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000058);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_040b1acc(lVar6);
      }
      memcpy(&stack0x00000010,&stack0x000000a0,0x48);
      uVar3 = thunk_FUN_076d5148();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_04086950(param_2,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_04086950(param_2,0,0);
  return iVar1 + -1;
}



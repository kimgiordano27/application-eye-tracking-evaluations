/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 04c260c4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_Qpl_Annotation_Builder_Entry>
              (long *param_1,void *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
                    /* try { // try from 04c260c4 to 04d260cb has its CatchHandler @ 04c260e8 */
                    /* try { // try from 04c260cc to 04d26107 has its CatchHandler @ 04c26048 */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c260c4 with catch @ 04c260e8
                        */
  if (*(long *)(param_3 + 0x38) == 0) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04c260ac with catch @ 04c260ec
                        */
    FUN_040b1b28(param_3);
  }
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
                    /* try { // try from 04c26108 to 04d2610b has its CatchHandler @ 04c26124 */
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
                    /* try { // try from 04c2610c to 04d26127 has its CatchHandler @ 04c26048 */
  iVar1 = thunk_FUN_04086990(param_1,0);
  if (1 < iVar1) {
                    /* try { // try from 04c2621c to 04d26223 has its CatchHandler @ 04c2622c */
                    /* try { // try from 04c26224 to 04d2622f has its CatchHandler @ 04c2613c */
    thunk_FUN_040dedf8(&DAT_094bbea8);
    uVar4 = thunk_FUN_040b4efc();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c2621c with catch @ 04c2622c
                        */
                    /* try { // try from 04c26230 to 04d26293 has its CatchHandler @ 04c26230
                       catch() { ... } // from try @ 04c26230 with catch @ 04c26230
                       catch() { ... } // from try @ 04c262b4 with catch @ 04c26230
                       catch() { ... } // from try @ 04c262f4 with catch @ 04c26230
                       catch() { ... } // from try @ 04c26318 with catch @ 04c26230 */
    uVar5 = thunk_FUN_040dedf8(&DAT_0954b640);
    FUN_0768b53c(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,param_3);
  }
  uVar2 = FUN_0769286c(param_1,0);
                    /* catch() { ... } // from try @ 04c26108 with catch @ 04c26124 */
                    /* try { // try from 04c26128 to 04d2612f has its CatchHandler @ 04c26138 */
  if (0 < (int)uVar2) {
    uVar7 = 0;
                    /* try { // try from 04c26130 to 04d2613b has its CatchHandler @ 04c26048 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c26128 with catch @ 04c26138
                        */
                    /* try { // try from 04c2613c to 04d2619f has its CatchHandler @ 04c2613c
                       catch() { ... } // from try @ 04c2613c with catch @ 04c2613c
                       catch() { ... } // from try @ 04c261c0 with catch @ 04c2613c
                       catch() { ... } // from try @ 04c26200 with catch @ 04c2613c
                       catch() { ... } // from try @ 04c26224 with catch @ 04c2613c */
    do {
      memcpy(&stack0x000000d0,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(&stack0x00000070,param_2,0x60);
      thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000070);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_040b1acc(lVar6);
      }
                    /* try { // try from 04c261a0 to 04d261af has its CatchHandler @ 04c261e0 */
      memcpy(&stack0x00000010,&stack0x000000d0,0x60);
      uVar3 = thunk_FUN_076d5148();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_04086950(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_04086950(param_1,0,0);
  return iVar1 + -1;
}



/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_SetControllerDrivenHandPosesAreNatural
ENTRY_POINT: 04f96370
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_87_0__ovrp_SetControllerDrivenHandPosesAreNatural(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined4 *puVar6;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  long in_stack_00000048;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x20 + 0xdf8) = 1;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000048 = unaff_x19;
  thunk_FUN_02bb0e9c(&stack0x00000048);
                    /* try { // try from 04f96398 to 0509639b has its CatchHandler @ 04f963a8 */
                    /* try { // try from 04f9639c to 0509639f has its CatchHandler @ 04f963a4 */
  if (in_stack_00000048 != 0) {
                    /* try { // try from 04f963a0 to 050963cf has its CatchHandler @ 04f960fc */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9639c with catch @ 04f963a4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f96398 with catch @ 04f963a8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f962d8 with catch @ 04f963ac
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f96208 with catch @ 04f963b0
                        */
    lVar3 = FUN_02b3c908(*(undefined8 *)System_Func<float[],_Pose>_TypeInfo,
                         *(undefined4 *)(in_stack_00000048 + 0x18));
    puVar1 = System_Collections_IEnumerable_var;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f962ec with catch @ 04f963b4
                        */
    if (in_stack_00000048 != 0) {
      uVar5 = 0;
      puVar6 = (undefined4 *)(lVar3 + 0x20);
      do {
                    /* try { // try from 04f963d0 to 050963d3 has its CatchHandler @ 04f963ec */
                    /* try { // try from 04f963d4 to 050963ef has its CatchHandler @ 04f960fc */
        if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)uVar5) {
          lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
          FUN_04f965b8();
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
            thunk_FUN_02bb0e9c((long *)(lVar4 + 0x10),lVar3);
            return lVar4;
          }
          break;
        }
        if (*(uint *)(in_stack_00000048 + 0x18) <= uVar5) {
LAB_04f964a4:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(in_stack_00000048 + uVar5 * 8 + 0x20),1,0)
        ;
        in_stack_00000028 = in_stack_00000000._12_4_;
        in_stack_00000020 = in_stack_00000000._4_8_;
        uStack0000000000000034 = (undefined4)in_stack_00000018;
        in_stack_00000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack000000000000002c = uStack0000000000000010;
        in_stack_00000030 = uStack0000000000000014;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar2 = FUN_04f964a8(uVar5 & 0xffffffff,&stack0x00000048);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04f964a4;
        *puVar6 = uVar2;
        puVar6[8] = 0;
        uVar5 = uVar5 + 1;
        *(ulong *)(puVar6 + 3) = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *(undefined8 *)(puVar6 + 1) = in_stack_00000020;
        *(ulong *)(puVar6 + 6) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(puVar6 + 4) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        puVar6 = puVar6 + 9;
      } while (in_stack_00000048 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



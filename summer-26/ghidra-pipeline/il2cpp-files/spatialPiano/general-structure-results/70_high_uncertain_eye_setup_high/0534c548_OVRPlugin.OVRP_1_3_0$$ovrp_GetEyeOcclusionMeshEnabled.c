/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetEyeOcclusionMeshEnabled
ENTRY_POINT: 0534c548
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_3_0__ovrp_GetEyeOcclusionMeshEnabled(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  undefined4 *puVar7;
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
  undefined8 in_stack_00000048;
  
  if ((*(byte *)(unaff_x20 + 0x536) & 1) == 0) {
    FUN_02f08768(UnityEngine_XR_ARFoundation_FixedLengthSwapchainStrategy_TypeInfo);
                    /* try { // try from 0534c564 to 0544c59b has its CatchHandler @ 0534c190 */
    FUN_02f08768(System_Predicate<BaseInvokableCall>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x536) = 1;
  }
  puVar1 = System_Predicate<BaseInvokableCall>_TypeInfo;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  if (unaff_x19 != 0) {
                    /* try { // try from 0534c59c to 0544c59f has its CatchHandler @ 0534c5a4 */
    lVar3 = FUN_02f0880c(*(undefined8 *)
                          UnityEngine_XR_ARFoundation_FixedLengthSwapchainStrategy_TypeInfo,
                         *(undefined4 *)(unaff_x19 + 0x18));
                    /* try { // try from 0534c5a0 to 0544c5d7 has its CatchHandler @ 0534c190 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534c59c with catch @ 0534c5a4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534c2dc with catch @ 0534c5a8
                        */
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar6 = 0;
      uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined4 *)(lVar3 + 0x20);
      do {
        if (uVar5 <= uVar6) {
LAB_0534c678:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        FUN_052c2324(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x20 + uVar6 * 8),1,0);
        in_stack_00000028 = in_stack_00000000._12_4_;
        in_stack_00000020 = in_stack_00000000._4_8_;
        uStack0000000000000034 = (undefined4)in_stack_00000018;
        in_stack_00000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack000000000000002c = uStack0000000000000010;
        in_stack_00000030 = uStack0000000000000014;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar2 = FUN_0534c680(uVar6 & 0xffffffff,&stack0x00000048);
        if (lVar3 == 0) goto LAB_0534c67c;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_0534c678;
        uVar6 = uVar6 + 1;
        *puVar7 = uVar2;
        *(ulong *)(puVar7 + 3) = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *(undefined8 *)(puVar7 + 1) = in_stack_00000020;
        *(ulong *)(puVar7 + 6) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(puVar7 + 4) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        puVar7[8] = 0;
        puVar7 = puVar7 + 9;
        uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
      } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0534c790();
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
      return lVar4;
    }
  }
LAB_0534c67c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



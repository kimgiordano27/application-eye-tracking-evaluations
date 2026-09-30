/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 0534c5ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(ulong param_1)

{
  char in_NG;
  char in_OV;
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  long *unaff_x22;
  undefined4 *puVar4;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534c3f4 with catch @ 0534c5ac
                        */
  if (in_NG == in_OV) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534c470 with catch @ 0534c5b0
                        */
    uVar3 = 0;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534c4ec with catch @ 0534c5b4
                        */
    param_1 = param_1 & 0xffffffff;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534c378 with catch @ 0534c5b8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534c2f8 with catch @ 0534c5bc
                        */
    puVar4 = (undefined4 *)(unaff_x20 + 0x20);
    do {
      if (param_1 <= uVar3) {
LAB_0534c678:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
                    /* try { // try from 0534c5d8 to 0544c5db has its CatchHandler @ 0534c5fc */
      FUN_052c2324(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x20 + uVar3 * 8),1,0);
                    /* try { // try from 0534c5dc to 0544c5ff has its CatchHandler @ 0534c190 */
      uStack0000000000000028 = in_stack_00000000._12_4_;
      in_stack_00000020 = in_stack_00000000._4_8_;
      uStack0000000000000034 = in_stack_00000018;
      uStack000000000000002c = uStack0000000000000010;
      uStack0000000000000030 = uStack0000000000000014;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
                    /* catch() { ... } // from try @ 0534c5d8 with catch @ 0534c5fc */
                    /* try { // try from 0534c600 to 0544c607 has its CatchHandler @ 0534c610 */
      uVar1 = FUN_0534c680(uVar3 & 0xffffffff,&stack0x00000048);
                    /* try { // try from 0534c608 to 0544c613 has its CatchHandler @ 0534c190 */
      if (unaff_x20 == 0) goto LAB_0534c67c;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0534c600 with catch @ 0534c610
                        */
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_0534c678;
      uVar3 = uVar3 + 1;
      *puVar4 = uVar1;
      *(ulong *)(puVar4 + 3) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(puVar4 + 1) = in_stack_00000020;
      *(undefined8 *)(puVar4 + 6) = uStack0000000000000034;
      *(ulong *)(puVar4 + 4) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      puVar4[8] = 0;
      puVar4 = puVar4 + 9;
      param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
  }
  lVar2 = thunk_FUN_02f45270(*unaff_x22);
  FUN_0534c790();
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = unaff_x20;
    return lVar2;
  }
LAB_0534c67c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



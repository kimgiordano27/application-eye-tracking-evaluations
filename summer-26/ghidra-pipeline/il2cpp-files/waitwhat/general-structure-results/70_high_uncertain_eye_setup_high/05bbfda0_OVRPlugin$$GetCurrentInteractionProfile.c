/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfile
ENTRY_POINT: 05bbfda0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfile
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  float unaff_s8;
  undefined4 unaff_s9;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  long *in_stack_00000060;
  long *in_stack_00000068;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
                    /* try { // try from 05bbfdac to 05cbfdb3 has its CatchHandler @ 05bbfde0 */
  if (param_1 == 0) goto LAB_05bc0178;
  *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 05bbfdb4 to 05cbfdb7 has its CatchHandler @ 05bbfdd4 */
                    /* try { // try from 05bbfdb8 to 05cbfdbb has its CatchHandler @ 05bbfdd0 */
  if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05bc0178;
                    /* try { // try from 05bbfdbc to 05cbfdbf has its CatchHandler @ 05bbfdc4 */
                    /* try { // try from 05bbfdc0 to 05cbfdfb has its CatchHandler @ 05bbfc24 */
  fVar8 = (float)FUN_069e9470(*(long *)(unaff_x20 + 0x18),0);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfdbc with catch @ 05bbfdc4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfd00 with catch @ 05bbfdc8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfd48 with catch @ 05bbfdcc
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfdb8 with catch @ 05bbfdd0
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfdb4 with catch @ 05bbfdd4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfd68 with catch @ 05bbfdd8
                        */
  FUN_05bc017c(unaff_s8 / fVar8,*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000068,&stack0x00000060,
               (undefined1 *)((long)&stack0x00000050 + 0xc));
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfd4c with catch @ 05bbfddc
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbfdac with catch @ 05bbfde0
                        */
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (0.0 <= (float)uStack000000000000005c) {
    if (1.0 < (float)uStack000000000000005c) {
      if ((lVar4 == 0) || (in_stack_00000060 == (long *)0x0)) goto LAB_05bc0178;
      (**(code **)(*in_stack_00000060 + 0x1a8))(unaff_s9);
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18), lVar4 == 0)) goto LAB_05bc0178;
      FUN_05b75584(&stack0x00000000 + 4,*(undefined8 *)(unaff_x20 + 0x18),lVar4 + 0x20,0);
      plVar7 = in_stack_00000068;
      puVar1 = PTR_DAT_07116400;
      lVar4 = *(long *)PTR_DAT_07116400;
      uStack0000000000000028 = in_stack_00000000._12_4_;
      uStack0000000000000020 = in_stack_00000000._4_8_;
      uStack0000000000000034 = (undefined4)in_stack_00000018;
      uStack0000000000000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
      uStack000000000000002c = uStack0000000000000010;
      uStack0000000000000030 = uStack0000000000000014;
      param_3 = uStack0000000000000010;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar4 = *(long *)puVar1;
      }
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_05bc0178;
      puVar5 = *(undefined4 **)(lVar4 + 0xb8);
      lVar4 = *plVar7;
      puVar2 = &stack0x00000020;
      goto LAB_05bbff3c;
    }
    if ((((lVar4 == 0) || (in_stack_00000068 == (long *)0x0)) ||
        ((**(code **)(*in_stack_00000068 + 0x1a8))(unaff_s9), *(long *)(unaff_x20 + 0x20) == 0)) ||
       (in_stack_00000060 == (long *)0x0)) goto LAB_05bc0178;
    (**(code **)(*in_stack_00000060 + 0x1a8))(unaff_s9);
  }
  else {
    if ((lVar4 == 0) || (in_stack_00000068 == (long *)0x0)) goto LAB_05bc0178;
                    /* try { // try from 05bbfdfc to 05cbfdff has its CatchHandler @ 05bbfe18 */
                    /* try { // try from 05bbfe00 to 05cbfe1b has its CatchHandler @ 05bbfc24 */
    (**(code **)(*in_stack_00000068 + 0x1a8))(unaff_s9);
                    /* catch() { ... } // from try @ 05bbfdfc with catch @ 05bbfe18 */
                    /* try { // try from 05bbfe1c to 05cbfe23 has its CatchHandler @ 05bbfe2c */
                    /* try { // try from 05bbfe24 to 05cbfe2f has its CatchHandler @ 05bbfc24 */
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10), lVar4 == 0)) goto LAB_05bc0178;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bbfe1c with catch @ 05bbfe2c
                        */
                    /* try { // try from 05bbfe30 to 05cbfe97 has its CatchHandler @ 05bbfe30
                       catch() { ... } // from try @ 05bbfe30 with catch @ 05bbfe30
                       catch() { ... } // from try @ 05bbfea4 with catch @ 05bbfe30
                       catch() { ... } // from try @ 05bbfee4 with catch @ 05bbfe30
                       catch() { ... } // from try @ 05bbff54 with catch @ 05bbfe30 */
    FUN_05b75584(&stack0x00000000 + 4,*(undefined8 *)(unaff_x20 + 0x18),lVar4 + 0x20,0);
    plVar7 = in_stack_00000060;
    puVar1 = PTR_DAT_07116400;
    lVar4 = *(long *)PTR_DAT_07116400;
    uStack0000000000000048 = in_stack_00000000._12_4_;
    in_stack_00000040 = in_stack_00000000._4_8_;
    uStack0000000000000054 = in_stack_00000018;
    uStack000000000000004c = uStack0000000000000010;
    uStack0000000000000050 = uStack0000000000000014;
    param_3 = uStack0000000000000010;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *(long *)puVar1;
    }
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_05bc0178;
    puVar5 = *(undefined4 **)(lVar4 + 0xb8);
    lVar4 = *plVar7;
    puVar2 = &stack0x00000040;
LAB_05bbff3c:
    (**(code **)(lVar4 + 0x1a8))(*puVar5,plVar7,puVar2);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0x10), lVar3 == 0)) goto LAB_05bc0178;
  lVar4 = *(long *)(lVar4 + 0x18);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    if (lVar4 == 0) goto LAB_05bc0178;
    if (*(char *)(lVar4 + 0x10) != '\0') {
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto LAB_05bc0178;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_05bc0178;
      FUN_05bc03b4(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar4 = *unaff_x19;
      if ((lVar4 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05bc0178;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x05bc00bc;
    }
  }
  else {
    if (lVar4 == 0) goto LAB_05bc0178;
    lVar6 = *unaff_x19;
    if (*(char *)(lVar4 + 0x10) == '\0') {
      if (lVar6 == 0) goto LAB_05bc0178;
      *(undefined1 *)(lVar6 + 0x10) = 1;
      if (*(long *)(lVar6 + 0x18) == 0) goto LAB_05bc0178;
      FUN_05bc03b4(*(long *)(lVar6 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar4 = *unaff_x19;
      if ((lVar4 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05bc0178;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x05bc00bc:
      if (lVar3 == 0) goto LAB_05bc0178;
      FUN_05b74f50(lVar4 + 0x20,lVar3 + 0x20,0);
    }
    else {
      if (lVar6 == 0) goto LAB_05bc0178;
      *(undefined1 *)(lVar6 + 0x10) = 1;
      if (*(long *)(lVar6 + 0x18) == 0) goto LAB_05bc0178;
      FUN_05bc03b4(*(long *)(lVar6 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) || (*(long *)(lVar4 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_05bc0178;
      FUN_05bc0494(uStack000000000000005c,*(long *)(lVar4 + 0x10) + 0x18,
                   *(long *)(lVar4 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) ||
         ((*(long *)(lVar4 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_05bc0178;
      FUN_05b74e80(uStack000000000000005c,*(long *)(lVar4 + 0x10) + 0x20,
                   *(long *)(lVar4 + 0x18) + 0x20,*unaff_x19 + 0x20,0);
    }
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (((lVar4 != 0) && (lVar3 = *(long *)(lVar4 + 0x10), lVar3 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
    lVar6 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_07113e80 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar9 = FUN_05bc066c(uStack000000000000005c,lVar3 + 0x3c,lVar4 + 0x3c);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x3c) = uVar9;
      *(undefined4 *)(lVar6 + 0x40) = param_3;
      *(undefined4 *)(lVar6 + 0x44) = param_4;
      return;
    }
  }
LAB_05bc0178:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}



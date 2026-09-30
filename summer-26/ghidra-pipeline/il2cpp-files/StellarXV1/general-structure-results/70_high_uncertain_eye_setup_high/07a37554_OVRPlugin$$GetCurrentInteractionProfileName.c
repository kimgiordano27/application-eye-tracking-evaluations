/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 07a37554
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfileName
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 in_w8;
  undefined8 *unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_s16;
  float in_s17;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float in_stack_00000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float in_stack_00000128;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float in_stack_00000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float in_stack_00000148;
  float in_stack_00000150;
  float fStack0000000000000154;
  float in_stack_00000158;
  float fStack000000000000015c;
  float in_stack_00000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  float fStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000178;
  float fStack000000000000017c;
  undefined4 uStack00000000000001e8;
  float fStack00000000000001ec;
  
                    /* try { // try from 07a37580 to 07b37587 has its CatchHandler @ 07a375e8 */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a374f0 with catch @ 07a37588
                       try { // try from 07a37588 to 07b375ab has its CatchHandler @ 07a37444 */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a37520 with catch @ 07a3758c
                        */
  fStack0000000000000040 = (unaff_s14 * param_2 + param_6 + param_5) - unaff_s13 * param_3;
  fStack000000000000003c = (unaff_s12 * param_3 + param_7 + param_8) - unaff_s14 * param_1;
  fStack0000000000000038 = (unaff_s13 * param_1 + in_s16 + in_s17) - unaff_s12 * param_2;
  fStack0000000000000034 =
       ((unaff_s11 * param_4 - unaff_s12 * param_1) - unaff_s13 * param_2) - unaff_s14 * param_3;
  fVar4 = unaff_s10;
  fVar5 = unaff_s8;
  fVar6 = unaff_s9;
  fStack0000000000000170 = fStack0000000000000040;
  fStack0000000000000174 = fStack000000000000003c;
  fStack0000000000000178 = fStack0000000000000038;
  fStack000000000000017c = fStack0000000000000034;
                    /* try { // try from 07a375ac to 07b375af has its CatchHandler @ 07a375bc */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a375ac with catch @ 07a375bc
                        */
                    /* try { // try from 07a375c4 to 07b375cb has its CatchHandler @ 07a37624 */
                    /* try { // try from 07a375cc to 07b37607 has its CatchHandler @ 07a37444 */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a374f4 with catch @ 07a375d0
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a374d0 with catch @ 07a375d4
                        */
  fVar3 = (float)FUN_089b9364(in_w8);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a374c4 with catch @ 07a375d8
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a3753c with catch @ 07a375e8
                       catch(type#1 @ 08d635d8) { ... } // from try @ 07a37580 with catch @ 07a375e8
                        */
                    /* try { // try from 07a37608 to 07b3760b has its CatchHandler @ 07a37610 */
                    /* catch() { ... } // from try @ 07a37608 with catch @ 07a37610 */
                    /* try { // try from 07a37614 to 07b3761b has its CatchHandler @ 07a37624 */
                    /* try { // try from 07a3761c to 07b37627 has its CatchHandler @ 07a37444 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07a375c4 with catch @ 07a37624
                       catch(type#2 @ 00000000) { ... } // from try @ 07a37614 with catch @ 07a37624
                        */
  in_stack_00000160 =
       (unaff_s14 * fVar4 + unaff_s12 * fVar6 + unaff_s11 * fVar3) - unaff_s13 * fVar5;
  fStack0000000000000024 =
       (unaff_s12 * fVar5 + unaff_s13 * fVar6 + unaff_s11 * fVar4) - unaff_s14 * fVar3;
  in_stack_00000168 =
       (unaff_s13 * fVar3 + unaff_s14 * fVar6 + unaff_s11 * fVar5) - unaff_s12 * fVar4;
  fStack000000000000001c =
       ((unaff_s11 * fVar6 - unaff_s12 * fVar3) - unaff_s13 * fVar4) - unaff_s14 * fVar5;
  fStack0000000000000164 = fStack0000000000000024;
  fStack000000000000016c = fStack000000000000001c;
  fVar4 = (float)FUN_089b9364(0xc2b40000,0);
  in_stack_00000150 =
       (unaff_s14 * unaff_s10 + unaff_s12 * unaff_s9 + unaff_s11 * fVar4) - unaff_s13 * unaff_s8;
  fStack0000000000000014 =
       (unaff_s12 * unaff_s8 + unaff_s13 * unaff_s9 + unaff_s11 * unaff_s10) - unaff_s14 * fVar4;
  in_stack_00000158 =
       (unaff_s13 * fVar4 + unaff_s14 * unaff_s9 + unaff_s11 * unaff_s8) - unaff_s12 * unaff_s10;
  fStack000000000000000c =
       ((unaff_s11 * unaff_s9 - unaff_s12 * fVar4) - unaff_s13 * unaff_s10) - unaff_s14 * unaff_s8;
  fStack0000000000000154 = fStack0000000000000014;
  fStack000000000000015c = fStack000000000000000c;
  fVar4 = (float)FUN_07a37ae0(&stack0x00000180,&stack0x00000190);
  fVar5 = (float)FUN_07a37ae0(&stack0x00000170,&stack0x00000190);
  fStack000000000000005c = (float)FUN_07a37ae0(&stack0x00000160,&stack0x00000190);
  fVar6 = (float)FUN_07a37ae0(&stack0x00000150,&stack0x00000190);
  if (DAT_098854ea == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854ea = '\x01';
  }
  fVar3 = fStack000000000000006c;
  fVar8 = fStack00000000000001ec;
  fVar7 = (float)FUN_089b9694(uStack00000000000001e8,0);
  fStack0000000000000044 = fVar8;
  fStack000000000000004c = fVar3;
  if (DAT_098854ec == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854ec = '\x01';
  }
  puVar1 = PTR_DAT_0928f3a8;
  fVar3 = fStack00000000000001ec;
  fStack00000000000001ec =
       (float)FUN_089b9694(uStack00000000000001e8,fStack000000000000006c,fStack00000000000001ec,0);
  FUN_07a36574();
  fVar8 = fStack000000000000005c;
  if (fStack000000000000005c <= fVar6) {
    fVar8 = fVar6;
  }
  fVar6 = fVar5;
  if (fVar5 <= fVar8) {
    fVar6 = fVar8;
  }
  fVar8 = fVar4;
  if (fVar4 <= fVar6) {
    fVar8 = fVar6;
  }
  if (fVar4 == fVar8) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    uVar2 = FUN_068cd8bc(fStack0000000000000050 * fVar7 + fStack0000000000000140,
                         fStack0000000000000050 * fStack000000000000004c + fStack0000000000000144,
                         fStack0000000000000050 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar7 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar1);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = in_stack_00000100;
    FUN_07a36784(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                 &stack0x000000d0);
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (fVar5 == fVar8) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_068cd8bc(fStack0000000000000120 - fStack0000000000000054 * fVar7,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fStack0000000000000050 * fVar7,
                           fStack0000000000000114 - fStack0000000000000050 * fStack000000000000004c,
                           in_stack_00000118 - fStack0000000000000050 * fStack0000000000000044,
                           &stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = in_stack_00000100;
      FUN_07a36784(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                   &stack0x000000b0);
    }
    else if (fStack000000000000005c == fVar8) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_068cd8bc(fStack0000000000000140 - in_stack_00000030 * fStack00000000000001ec,
                           fStack0000000000000144 - in_stack_00000030 * fStack000000000000006c,
                           in_stack_00000148 - in_stack_00000030 * fVar3,
                           fStack0000000000000120 - in_stack_00000028._4_4_ * fStack00000000000001ec
                           ,fStack0000000000000124 -
                            in_stack_00000028._4_4_ * fStack000000000000006c,
                           in_stack_00000128 - in_stack_00000028._4_4_ * fVar3,&stack0x000000f0,
                           *(undefined8 *)puVar1);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = in_stack_00000100;
      FUN_07a36784(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                   &stack0x00000090);
    }
    else {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_068cd8bc(in_stack_00000028._4_4_ * fStack00000000000001ec + fStack0000000000000130
                           ,in_stack_00000028._4_4_ * fStack000000000000006c +
                            fStack0000000000000134,
                           in_stack_00000028._4_4_ * fVar3 + in_stack_00000138,
                           in_stack_00000030 * fStack00000000000001ec + fStack0000000000000110,
                           in_stack_00000030 * fStack000000000000006c + fStack0000000000000114,
                           in_stack_00000030 * fVar3 + in_stack_00000118,&stack0x000000f0,
                           *(undefined8 *)puVar1);
      in_stack_00000078 = in_stack_000000f8;
      in_stack_00000070 = in_stack_000000f0;
      in_stack_00000080 = in_stack_00000100;
      FUN_07a36784(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                   &stack0x00000070);
    }
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  FUN_089d99f0();
  return;
}



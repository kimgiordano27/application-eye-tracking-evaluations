/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 073c55c4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetOpenVRControllerOffset
               (float *param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
               undefined4 param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined8 uStack0000000000000084;
  undefined4 uStack00000000000000dc;
  
  if (*param_1 <= param_2) {
    fVar7 = unaff_s14 * unaff_s8 + unaff_s12 * unaff_s9 + unaff_s13 * unaff_s11;
    unaff_s12 = unaff_s12 - (unaff_s9 * fVar7) / param_2;
    unaff_s13 = unaff_s13 - (unaff_s11 * fVar7) / param_2;
    unaff_s14 = unaff_s14 - (unaff_s8 * fVar7) / param_2;
  }
  uStack00000000000000dc = param_5;
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar7 = SQRT(unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13);
  if (fVar7 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar7 = pfVar2[2];
  }
  else {
    fVar8 = unaff_s12 / fVar7;
    fVar9 = unaff_s13 / fVar7;
    fVar7 = unaff_s14 / fVar7;
  }
  if (*(char *)(unaff_x20 + 0xefb) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x20 + 0xefb) = 1;
  }
  lVar3 = *(long *)(*unaff_x21 + 0xb8);
  FUN_085d28c8(fVar8,fVar9,fVar7,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  FUN_085e9668(&stack0x00000050,0);
  uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  in_stack_00000078 = in_stack_00000058;
  in_stack_00000070 = in_stack_00000050;
  uStack000000000000007c = uStack000000000000005c;
  in_stack_00000080 = in_stack_00000060;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08eb23f0) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_073c5798;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08eb23f0,2);
                    /* try { // try from 073c5784 to 074c5863 has its CatchHandler @ 073c5784
                       catch() { ... } // from try @ 073c5784 with catch @ 073c5784
                       catch() { ... } // from try @ 073c5888 with catch @ 073c5784
                       catch() { ... } // from try @ 073c5924 with catch @ 073c5784
                       catch() { ... } // from try @ 073c595c with catch @ 073c5784
                       catch() { ... } // from try @ 073c5984 with catch @ 073c5784 */
LAB_073c5798:
  (*(code *)*puVar1)(&stack0x00000010,plVar6,&stack0x00000070,puVar1[1]);
  *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  return;
}



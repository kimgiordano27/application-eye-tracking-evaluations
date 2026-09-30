/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 076e62d4
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_53_0___cctor
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined4 uVar7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == **(long **)(in_x10 + 0x448)) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_076e6360;
      }
                    /* try { // try from 076e62fc to 077e62ff has its CatchHandler @ 076e632c */
      uVar4 = uVar4 - 1;
                    /* try { // try from 076e6300 to 077e6303 has its CatchHandler @ 076e6338 */
      piVar5 = piVar5 + 4;
                    /* try { // try from 076e6304 to 077e6307 has its CatchHandler @ 076e631c */
    } while (uVar4 != 0);
  }
                    /* try { // try from 076e6308 to 077e630b has its CatchHandler @ 076e6314 */
                    /* try { // try from 076e630c to 077e630f has its CatchHandler @ 076e6334 */
                    /* catch() { ... } // from try @ 076e6180 with catch @ 076e6310
                       try { // try from 076e6310 to 077e634f has its CatchHandler @ 076e604c */
  puVar1 = (undefined8 *)FUN_0406ae20();
                    /* catch() { ... } // from try @ 076e6308 with catch @ 076e6314 */
LAB_076e6360:
  uVar7 = (*(code *)*puVar1)(unaff_s12,unaff_s13,param_4);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_076e3c48(&stack0x00000024);
    FUN_076e64a8(uVar7,unaff_s13,param_4);
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x50) = unaff_s11;
      *(undefined4 *)(lVar2 + 0x54) = unaff_s10;
      *(undefined4 *)(lVar2 + 0x58) = unaff_s9;
      *(undefined4 *)(lVar2 + 0x5c) = unaff_s8;
      plVar6 = *(long **)(unaff_x19 + 0x48);
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (plVar6 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fab668) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_076e6440;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08fab668,0);
LAB_076e6440:
        uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x28);
        *(undefined4 *)(lVar2 + 0x78) = uVar7;
        if (lVar3 != 0) {
          FUN_076502cc(lVar3,*(undefined8 *)(unaff_x19 + 0x68),0,0);
          FUN_076e6b00(unaff_s11,unaff_s10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



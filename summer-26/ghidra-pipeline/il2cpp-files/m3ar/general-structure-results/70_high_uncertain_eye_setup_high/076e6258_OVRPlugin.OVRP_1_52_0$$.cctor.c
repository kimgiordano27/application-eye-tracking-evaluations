/*
FUNCTION_NAME: OVRPlugin.OVRP_1_52_0$$.cctor
ENTRY_POINT: 076e6258
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_52_0___cctor
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if (*(long *)(param_1 + 200) != 0) {
    uVar10 = 0x3f800000;
                    /* try { // try from 076e6264 to 077e626b has its CatchHandler @ 076e6328 */
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    if (*(char *)(*(long *)(param_1 + 200) + 0xb0) == '\0') {
      uVar13 = *(undefined4 *)(unaff_x19 + 0x54);
      uVar12 = *(undefined4 *)(unaff_x19 + 0x58);
      uVar11 = *(undefined4 *)(unaff_x19 + 0x5c);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x60);
    }
    plVar6 = *(long **)(unaff_x19 + 0x70);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (plVar6 == (long *)0x0) {
      if (lVar2 == 0) goto LAB_076e64a4;
      in_stack_00000060 = *(undefined8 *)(lVar2 + 0x168);
      in_stack_00000048 = *(undefined8 *)(lVar2 + 0x150);
      in_stack_00000040 = *(undefined8 *)(lVar2 + 0x148);
      in_stack_00000058 = *(undefined8 *)(lVar2 + 0x160);
      uVar9 = *(undefined8 *)(lVar2 + 0x158);
      in_stack_00000050 = uVar9;
      if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar8 = (undefined4)uVar9;
      uVar7 = FUN_076e2da4(&stack0x00000040);
    }
    else {
      if (lVar2 == 0) goto LAB_076e64a4;
      in_stack_00000060 = *(undefined8 *)(lVar2 + 0x168);
      in_stack_00000048 = *(undefined8 *)(lVar2 + 0x150);
      in_stack_00000040 = *(undefined8 *)(lVar2 + 0x148);
      in_stack_00000058 = *(undefined8 *)(lVar2 + 0x160);
      uVar9 = *(undefined8 *)(lVar2 + 0x158);
                    /* try { // try from 076e62ac to 077e62e3 has its CatchHandler @ 076e6338 */
      in_stack_00000050 = uVar9;
      if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar8 = (undefined4)uVar9;
      uVar7 = FUN_076e2da4(&stack0x00000040);
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fae448) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_076e6360;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08fae448,0);
LAB_076e6360:
      uVar7 = (*(code *)*puVar1)(uVar7,uVar8,param_4,plVar6,puVar1[1]);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_076e3c48(&stack0x00000024);
      FUN_076e64a8(uVar7,uVar8,param_4);
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x50) = uVar13;
        *(undefined4 *)(lVar2 + 0x54) = uVar12;
        *(undefined4 *)(lVar2 + 0x58) = uVar11;
        *(undefined4 *)(lVar2 + 0x5c) = uVar10;
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
            FUN_076e6b00(uVar13,uVar12,uVar11,uVar10);
            return;
          }
        }
      }
    }
  }
LAB_076e64a4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



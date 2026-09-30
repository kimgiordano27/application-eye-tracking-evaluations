/*
FUNCTION_NAME: OVRPlugin.OVRP_1_51_0$$.cctor
ENTRY_POINT: 076e61dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_51_0___cctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f65598);
  FUN_0403162c(PTR_DAT_08fae310);
  *(undefined1 *)(unaff_x20 + 0x2d1) = 1;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if (lVar3 == 0) goto LAB_076e64a4;
  if (*(int *)(lVar3 + 0x84) == 3) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar3 + 200);
  if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = FUN_08589e5c(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 200), lVar3 == 0)) goto LAB_076e64a4;
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    if (*(char *)(lVar3 + 0xb0) == '\0') goto LAB_076e6278;
  }
  else {
LAB_076e6278:
    uVar13 = *(undefined4 *)(unaff_x19 + 0x54);
    uVar12 = *(undefined4 *)(unaff_x19 + 0x58);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x5c);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x60);
  }
  plVar7 = *(long **)(unaff_x19 + 0x70);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (plVar7 == (long *)0x0) {
    if (lVar3 == 0) goto LAB_076e64a4;
    in_stack_00000060 = *(undefined8 *)(lVar3 + 0x168);
    in_stack_00000048 = *(undefined8 *)(lVar3 + 0x150);
    in_stack_00000040 = *(undefined8 *)(lVar3 + 0x148);
    in_stack_00000058 = *(undefined8 *)(lVar3 + 0x160);
    uVar6 = *(undefined8 *)(lVar3 + 0x158);
    in_stack_00000050 = uVar6;
    if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar9 = (undefined4)uVar6;
    uVar8 = FUN_076e2da4(&stack0x00000040);
  }
  else {
    if (lVar3 == 0) goto LAB_076e64a4;
    in_stack_00000060 = *(undefined8 *)(lVar3 + 0x168);
    in_stack_00000048 = *(undefined8 *)(lVar3 + 0x150);
    in_stack_00000040 = *(undefined8 *)(lVar3 + 0x148);
    in_stack_00000058 = *(undefined8 *)(lVar3 + 0x160);
    uVar6 = *(undefined8 *)(lVar3 + 0x158);
    in_stack_00000050 = uVar6;
    if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar9 = (undefined4)uVar6;
    uVar8 = FUN_076e2da4(&stack0x00000040);
    lVar3 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fae448) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076e6360;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fae448,0);
LAB_076e6360:
    uVar8 = (*(code *)*puVar2)(uVar8,uVar9,param_3,plVar7,puVar2[1]);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_076e3c48(&stack0x00000024);
    FUN_076e64a8(uVar8,uVar9,param_3);
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x50) = uVar13;
      *(undefined4 *)(lVar3 + 0x54) = uVar12;
      *(undefined4 *)(lVar3 + 0x58) = uVar11;
      *(undefined4 *)(lVar3 + 0x5c) = uVar10;
      plVar7 = *(long **)(unaff_x19 + 0x48);
      lVar3 = *(long *)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        lVar4 = *plVar7;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fab668) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_076e6440;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fab668,0);
LAB_076e6440:
        uVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      }
      if (lVar3 != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x28);
        *(undefined4 *)(lVar3 + 0x78) = uVar8;
        if (lVar4 != 0) {
          FUN_076502cc(lVar4,*(undefined8 *)(unaff_x19 + 0x68),0,0);
          FUN_076e6b00(uVar13,uVar12,uVar11,uVar10);
          return;
        }
      }
    }
  }
LAB_076e64a4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



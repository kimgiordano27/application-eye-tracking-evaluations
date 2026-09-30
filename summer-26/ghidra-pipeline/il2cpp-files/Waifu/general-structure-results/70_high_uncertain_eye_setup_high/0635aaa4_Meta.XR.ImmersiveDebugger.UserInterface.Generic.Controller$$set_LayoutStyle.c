/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$set_LayoutStyle
ENTRY_POINT: 0635aaa4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__set_LayoutStyle(code *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long unaff_x19;
  undefined8 uVar28;
  undefined4 unaff_w20;
  long unaff_x22;
  int unaff_w23;
  undefined4 uVar29;
  float unaff_s11;
  undefined1 auVar30 [16];
  undefined4 in_stack_00000058;
  float in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000108;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_033d1b68("UnityEngine.Time::get_fixedDeltaTime()");
    *(code **)(unaff_x22 + 0x6c0) = param_1;
  }
  uVar29 = (*param_1)();
  lVar11 = *(long *)(unaff_x19 + 0x28);
  if ((((((lVar11 != 0) && (lVar17 = *(long *)(unaff_x19 + 0x30), lVar17 != 0)) &&
        (lVar21 = *(long *)(unaff_x19 + 0x38), lVar21 != 0)) &&
       ((lVar22 = *(long *)(unaff_x19 + 0x48), lVar22 != 0 &&
        (lVar23 = *(long *)(unaff_x19 + 0x50), lVar23 != 0)))) &&
      ((lVar24 = *(long *)(unaff_x19 + 0x58), lVar24 != 0 &&
       ((lVar25 = *(long *)(unaff_x19 + 0x60), lVar25 != 0 &&
        (lVar26 = *(long *)(unaff_x19 + 0x68), lVar26 != 0)))))) &&
     (lVar27 = *(long *)(unaff_x19 + 0x20), lVar27 != 0)) {
    in_stack_00000108 = unaff_w20;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      uVar1 = *(undefined8 *)(lVar11 + 0x10);
      uVar6 = *(undefined8 *)(lVar11 + 0x18);
      uVar2 = *(undefined8 *)(lVar24 + 0x10);
      uVar7 = *(undefined8 *)(lVar24 + 0x18);
      uVar3 = *(undefined8 *)(lVar25 + 0x10);
      uVar8 = *(undefined8 *)(lVar25 + 0x18);
      uVar4 = *(undefined8 *)(lVar26 + 0x10);
      uVar9 = *(undefined8 *)(lVar26 + 0x18);
      uVar12 = *(undefined8 *)(lVar17 + 0x10);
      uVar5 = *(undefined8 *)(lVar27 + 0x10);
      uVar10 = *(undefined8 *)(lVar27 + 0x18);
      uVar13 = *(undefined8 *)(lVar17 + 0x18);
      uVar18 = *(undefined8 *)(lVar21 + 0x10);
      uVar14 = *(undefined8 *)(lVar21 + 0x18);
      uVar19 = *(undefined8 *)(lVar22 + 0x10);
      uVar15 = *(undefined8 *)(lVar22 + 0x18);
      uVar20 = *(undefined8 *)(lVar23 + 0x10);
      uVar16 = *(undefined8 *)(lVar23 + 0x18);
      lVar11 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
      if ((*(long *)(unaff_x19 + 0x18) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
        uVar28 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x10);
        lVar17 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
        if (lVar17 != 0) {
          in_stack_00000058 = in_stack_00000108;
          in_stack_00000060 = unaff_s11 * (float)unaff_w23;
          uStack000000000000006c = 0;
          uStack0000000000000068 = uVar29;
          in_stack_00000070 = uVar1;
          in_stack_00000078 = uVar6;
          in_stack_00000080 = uVar12;
          in_stack_00000088 = uVar13;
          in_stack_00000090 = uVar18;
          in_stack_00000098 = uVar14;
          in_stack_000000a0 = uVar19;
          in_stack_000000a8 = uVar15;
          in_stack_000000b0 = uVar20;
          in_stack_000000b8 = uVar16;
          in_stack_000000c0 = uVar2;
          in_stack_000000c8 = uVar7;
          in_stack_000000d0 = uVar3;
          in_stack_000000d8 = uVar8;
          in_stack_000000e0 = uVar4;
          in_stack_000000e8 = uVar9;
          in_stack_000000f0 = uVar5;
          in_stack_000000f8 = uVar10;
          auVar30 = FUN_04006540(&stack0x00000058,uVar28,*(undefined8 *)(lVar17 + 0xd0),
                                 *(undefined8 *)(lVar17 + 0xd8),DAT_0840f128);
          if (lVar11 != 0) {
            *(undefined1 (*) [16])(lVar11 + 0xd0) = auVar30;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



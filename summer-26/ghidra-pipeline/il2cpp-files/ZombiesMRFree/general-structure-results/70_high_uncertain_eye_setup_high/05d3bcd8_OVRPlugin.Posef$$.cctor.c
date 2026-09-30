/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 05d3bcd8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef___cctor
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar3;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  
  while (lVar2 = *(long *)(unaff_x19 + 0x70), lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x22) {
LAB_05d3bebc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar4 = *(long *)(param_1 + 0x38);
    FUN_05cc36a0(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x58),
                 *(undefined8 *)(lVar2 + unaff_x22 * 8 + 0x20),0);
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    in_stack_00000048 = uStack0000000000000028;
    uStack0000000000000050 = uStack0000000000000030;
    if (lVar4 == 0) break;
    unaff_x22 = unaff_x22 + 1;
    uVar3 = (uint)unaff_x22;
    if (*(uint *)(lVar4 + 0x18) <= uVar3 - 1) goto LAB_05d3bebc;
    puVar1 = (undefined8 *)(lVar4 + unaff_x23);
    unaff_x23 = unaff_x23 + 0x1c;
    *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *puVar1 = in_stack_00000020;
    lVar2 = *(long *)(unaff_x19 + 0x70);
    unaff_x21 = unaff_x21 + 0x10;
    if (lVar2 == 0) break;
    if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar3) {
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        lVar2 = *(long *)(unaff_x19 + 0x80);
        FUN_05caf184(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x58),0,0);
        in_stack_00000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack0000000000000054 = uStack0000000000000034;
        uStack0000000000000050 = uStack0000000000000030;
        if (lVar2 == 0) break;
        *(undefined8 *)(lVar2 + 0x28) = uStack0000000000000034;
        *(ulong *)(lVar2 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(lVar2 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(lVar2 + 0x14) = in_stack_00000020;
        if (*(long *)(unaff_x19 + 0x58) == 0) break;
        lVar2 = *(long *)(unaff_x19 + 0x80);
        uVar5 = FUN_06905eb0(*(long *)(unaff_x19 + 0x58),0);
      }
      else {
        FUN_05caf184(&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x58),1,0);
        in_stack_00000088 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        uStack0000000000000094 = uStack0000000000000054;
        uStack0000000000000090 = uStack0000000000000050;
        uStack0000000000000074 = *(undefined8 *)(unaff_x20 + 0x44);
        in_stack_00000060 = *(undefined8 *)(unaff_x20 + 0x30);
        uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
        uStack0000000000000068 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
        uStack000000000000006c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x38) >> 0x20);
        if (*(long *)(unaff_x19 + 0x80) == 0) break;
        FUN_05cac094(&stack0x00000060,&stack0x00000080,*(long *)(unaff_x19 + 0x80) + 0x14,0);
        if (*(long *)(unaff_x19 + 0x58) == 0) break;
        lVar2 = *(long *)(unaff_x19 + 0x80);
        uVar5 = FUN_06904a04(*(long *)(unaff_x19 + 0x58),0);
      }
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x70) = uVar5;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
          return;
        }
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x80) == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_05d3bebc;
    lVar2 = *(long *)(lVar2 + unaff_x22 * 8 + 0x20);
    if (lVar2 == 0) break;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x48);
    uVar6 = in_stack_00000020;
    uVar5 = FUN_0690459c(lVar2,0);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_05d3bebc;
    lVar4 = lVar4 + unaff_x21;
    *(undefined4 *)(lVar4 + 0x20) = uVar5;
    *(int *)(lVar4 + 0x24) = (int)uVar6;
    *(undefined4 *)(lVar4 + 0x28) = param_4;
    *(undefined4 *)(lVar4 + 0x2c) = param_5;
    param_1 = *(long *)(unaff_x19 + 0x80);
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



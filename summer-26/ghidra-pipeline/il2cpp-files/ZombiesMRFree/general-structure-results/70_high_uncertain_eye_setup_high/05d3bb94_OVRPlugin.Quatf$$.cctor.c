/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 05d3bb94
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf___cctor
               (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  long in_x10;
  undefined8 uVar3;
  uint in_w11;
  long in_x12;
  uint in_w13;
  uint in_w15;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  
  if (in_x12 != 0) {
    uVar5 = *(uint *)(in_x12 + 0x18);
    if ((((((uVar5 == 0) || (*(undefined4 *)(in_x12 + 0x20) = param_4, in_w11 < 2)) ||
          (*(undefined1 *)(in_x9 + 0x21) = 1, in_w13 < 2)) ||
         (((*(byte *)(in_x10 + 0x21) = (byte)(in_w15 >> 5) & 1, uVar5 < 2 ||
           (*(int *)(in_x12 + 0x24) = (int)param_3, in_w11 < 3)) ||
          ((*(undefined1 *)(in_x9 + 0x22) = 1, in_w13 < 3 ||
           ((*(byte *)(in_x10 + 0x22) = (byte)(in_w15 >> 4) & 1, uVar5 < 3 ||
            (*(undefined4 *)(in_x12 + 0x28) = param_2, in_w11 < 4)))))))) ||
        (*(undefined1 *)(in_x9 + 0x23) = 1, in_w13 < 4)) ||
       ((((*(undefined1 *)(in_x10 + 0x23) = 0, uVar5 < 4 ||
          (*(undefined4 *)(in_x12 + 0x2c) = 0, in_w11 < 5)) ||
         (*(undefined1 *)(in_x9 + 0x24) = 1, in_w13 < 5)) ||
        (*(undefined1 *)(in_x10 + 0x24) = 0, uVar5 < 5)))) {
LAB_05d3bebc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined4 *)(in_x12 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x90) = 2;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x68);
    *(undefined8 *)(param_1 + 0x84) = uVar3;
    *(undefined8 *)(param_1 + 0x7c) = uVar12;
    *(undefined8 *)(param_1 + 0x74) = uVar11;
    lVar2 = *(long *)(unaff_x19 + 0x70);
    if (lVar2 != 0) {
      lVar4 = 0;
      lVar6 = 0;
      lVar7 = 0x20;
      while( true ) {
        uVar10 = (undefined4)param_3;
        uVar5 = (uint)lVar6;
        if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) break;
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_05d3bec0;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_05d3bebc;
        lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_05d3bec0;
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x48);
        uVar9 = FUN_0690459c(lVar2,0);
        if (lVar8 == 0) goto LAB_05d3bec0;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_05d3bebc;
        lVar8 = lVar8 + lVar4;
        *(undefined4 *)(lVar8 + 0x20) = uVar9;
        *(undefined4 *)(lVar8 + 0x24) = uVar10;
        *(undefined4 *)(lVar8 + 0x28) = param_4;
        *(undefined4 *)(lVar8 + 0x2c) = param_5;
        if ((*(long *)(unaff_x19 + 0x80) == 0) || (lVar2 = *(long *)(unaff_x19 + 0x70), lVar2 == 0))
        goto LAB_05d3bec0;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_05d3bebc;
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
        FUN_05cc36a0(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x58),
                     *(undefined8 *)(lVar2 + lVar6 * 8 + 0x20),0);
        in_stack_00000040 = in_stack_00000020;
        uStack0000000000000054 = uStack0000000000000034;
        in_stack_00000048 = uStack0000000000000028;
        uStack0000000000000050 = uStack0000000000000030;
        if (lVar8 == 0) goto LAB_05d3bec0;
        lVar6 = lVar6 + 1;
        if (*(uint *)(lVar8 + 0x18) <= (int)lVar6 - 1U) goto LAB_05d3bebc;
        puVar1 = (undefined8 *)(lVar8 + lVar7);
        lVar7 = lVar7 + 0x1c;
        *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *puVar1 = in_stack_00000020;
        lVar2 = *(long *)(unaff_x19 + 0x70);
        lVar4 = lVar4 + 0x10;
        param_3 = in_stack_00000020;
        if (lVar2 == 0) goto LAB_05d3bec0;
      }
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        lVar2 = *(long *)(unaff_x19 + 0x80);
        FUN_05caf184(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x58),0,0);
        in_stack_00000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack0000000000000054 = uStack0000000000000034;
        uStack0000000000000050 = uStack0000000000000030;
        if (lVar2 == 0) goto LAB_05d3bec0;
        *(undefined8 *)(lVar2 + 0x28) = uStack0000000000000034;
        *(ulong *)(lVar2 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(lVar2 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(lVar2 + 0x14) = in_stack_00000020;
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05d3bec0;
        lVar2 = *(long *)(unaff_x19 + 0x80);
        uVar10 = FUN_06905eb0(*(long *)(unaff_x19 + 0x58),0);
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
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_05d3bec0;
        FUN_05cac094(&stack0x00000060,&stack0x00000080,*(long *)(unaff_x19 + 0x80) + 0x14,0);
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05d3bec0;
        lVar2 = *(long *)(unaff_x19 + 0x80);
        uVar10 = FUN_06904a04(*(long *)(unaff_x19 + 0x58),0);
      }
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x70) = uVar10;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
          return;
        }
      }
    }
  }
LAB_05d3bec0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



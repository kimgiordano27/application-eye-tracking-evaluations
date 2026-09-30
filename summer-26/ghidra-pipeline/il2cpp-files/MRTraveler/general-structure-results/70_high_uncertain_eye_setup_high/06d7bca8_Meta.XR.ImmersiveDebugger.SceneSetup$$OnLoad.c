/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.SceneSetup$$OnLoad
ENTRY_POINT: 06d7bca8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_SceneSetup__OnLoad
               (undefined4 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  byte *pbVar9;
  uint in_w9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x27;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  long in_stack_00000158;
  
  uStack0000000000000128 = param_4._8_8_;
  uStack0000000000000120 = param_4._0_8_;
  uStack0000000000000138 = param_3._8_8_;
  uStack0000000000000130 = param_3._0_8_;
  uVar12 = param_2._8_8_;
  uVar13 = param_2._0_8_;
  while( true ) {
    uStack0000000000000118 = *(undefined8 *)((long)param_1 + 0x1a);
    uStack0000000000000110 = *(undefined8 *)((long)param_1 + 0x12);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar15 = *(undefined8 *)(param_1 + 2);
    bVar3 = *(byte *)(param_1 + 4);
    bVar4 = *(byte *)((long)param_1 + 0x11);
    *(undefined8 *)(unaff_x25 + 0x82) = uVar12;
    *(undefined8 *)(unaff_x25 + 0x7a) = uVar13;
    bVar5 = *(byte *)(param_1 + 0x13);
    if (in_w9 == 0) {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = 1;
    }
    lVar8 = *(long *)(in_stack_00000038 + 0x148);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar2) {
LAB_06d7be58:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar8 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
    if (lVar8 == 0) break;
    if ((bVar5 & 1) == 0) {
      uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar8 + 0x14) >> 0x20),
                        (float)*(undefined8 *)(lVar8 + 0x20) - (float)*(undefined8 *)(lVar8 + 0x14))
      ;
      fVar14 = *(float *)(lVar8 + 0x28) - *(float *)(lVar8 + 0x1c);
    }
    else {
      uVar13 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar14 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
    }
    *(undefined8 *)(unaff_x25 + 0x32) = *(undefined8 *)(unaff_x25 + 0x82);
    *(undefined8 *)(unaff_x25 + 0x2a) = *(undefined8 *)(unaff_x25 + 0x7a);
    uVar12 = *in_stack_00000030;
    in_stack_00000028[1] = in_stack_00000030[1];
    *in_stack_00000028 = uVar12;
    pbVar9 = (byte *)(*(long *)(unaff_x21 + 0x48) + unaff_x27 * 0x50);
    *pbVar9 = (byte)uVar1 & 1;
    pbVar9[3] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    *(uint *)(pbVar9 + 4) = uVar2;
    *(undefined8 *)(pbVar9 + 8) = uVar15;
    pbVar9[0x10] = bVar3 & 1;
    pbVar9[0x11] = bVar4 & 1;
    uVar15 = *(undefined8 *)(unaff_x25 + 0x44);
    uVar12 = *(undefined8 *)(unaff_x25 + 0x3c);
    *(undefined2 *)(pbVar9 + 0x22) = in_stack_00000108._4_2_;
    *(undefined8 *)(pbVar9 + 0x1a) = uVar15;
    *(undefined8 *)(pbVar9 + 0x12) = uVar12;
    uVar1 = *(undefined4 *)(in_stack_00000020 + 1);
    uVar12 = *in_stack_00000020;
    *(undefined8 *)(pbVar9 + 0x30) = uVar13;
    *(float *)(pbVar9 + 0x38) = fVar14;
    *(undefined4 *)(pbVar9 + 0x2c) = uVar1;
    *(undefined8 *)(pbVar9 + 0x24) = uVar12;
    uVar12 = in_stack_00000018[1];
    uVar13 = *in_stack_00000018;
    pbVar9[0x4c] = bVar5 & 1;
    pbVar9[0x4f] = 0;
    *(undefined8 *)(pbVar9 + 0x44) = uVar12;
    *(undefined8 *)(pbVar9 + 0x3c) = uVar13;
    pbVar9[0x4d] = 0;
    pbVar9[0x4e] = 0;
    do {
      do {
        unaff_x24 = unaff_x24 + 1;
        lVar8 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x22) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06d7bc30;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06d7bc30:
        iVar6 = (*(code *)*puVar7)();
        if ((long)iVar6 <= (long)unaff_x24) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000158) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar8 = *(long *)(unaff_x21 + 0x58);
        if (lVar8 == 0) goto LAB_06d7be54;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x24) goto LAB_06d7be58;
        uVar2 = *(uint *)(lVar8 + unaff_x24 * 4 + 0x20);
        unaff_x27 = (long)(int)uVar2;
      } while (uVar2 == 0xffffffff);
      lVar8 = *(long *)(unaff_x21 + 200);
      if (lVar8 == 0) goto LAB_06d7be54;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_06d7be58;
    } while (*(char *)(lVar8 + unaff_x27 + 0x20) == '\0');
    in_w9 = (uint)DAT_0940fff5;
    param_1 = (undefined4 *)(*(long *)(unaff_x21 + 0x48) + unaff_x27 * 0x50);
    uVar12 = *(undefined8 *)(param_1 + 0x11);
    uVar13 = *(undefined8 *)(param_1 + 0xf);
    uStack0000000000000138 = *(undefined8 *)((long)param_1 + 0x3a);
    uStack0000000000000130 = *(undefined8 *)((long)param_1 + 0x32);
    uStack0000000000000128 = *(undefined8 *)((long)param_1 + 0x2a);
    uStack0000000000000120 = *(undefined8 *)((long)param_1 + 0x22);
  }
LAB_06d7be54:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



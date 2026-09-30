/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.SceneSetup$$SetupImmersiveDebugger
ENTRY_POINT: 06d7bd00
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_SceneSetup__SetupImmersiveDebugger(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long unaff_x25;
  byte unaff_w26;
  long unaff_x27;
  undefined4 unaff_w28;
  byte unaff_w29;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 unaff_d8;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000108;
  long in_stack_00000158;
  
code_r0x06d7bd00:
  lVar7 = *(long *)(param_1 + (long)(int)unaff_w23 * 8 + 0x20);
  if (lVar7 != 0) {
    if ((unaff_w29 & 1) == 0) {
      uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar7 + 0x14) >> 0x20),
                        (float)*(undefined8 *)(lVar7 + 0x20) - (float)*(undefined8 *)(lVar7 + 0x14))
      ;
      fVar13 = *(float *)(lVar7 + 0x28) - *(float *)(lVar7 + 0x1c);
    }
    else {
      uVar12 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
    }
    *(undefined8 *)(unaff_x25 + 0x32) = *(undefined8 *)(unaff_x25 + 0x82);
    *(undefined8 *)(unaff_x25 + 0x2a) = *(undefined8 *)(unaff_x25 + 0x7a);
    uVar11 = *in_stack_00000030;
    in_stack_00000028[1] = in_stack_00000030[1];
    *in_stack_00000028 = uVar11;
    pbVar8 = (byte *)(*(long *)(unaff_x21 + 0x48) + unaff_x27 * 0x50);
    *pbVar8 = (byte)unaff_w28 & 1;
    pbVar8[3] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    *(uint *)(pbVar8 + 4) = unaff_w23;
    *(undefined8 *)(pbVar8 + 8) = unaff_d8;
    pbVar8[0x10] = unaff_w20 & 1;
    pbVar8[0x11] = unaff_w26 & 1;
    uVar14 = *(undefined8 *)(unaff_x25 + 0x44);
    uVar11 = *(undefined8 *)(unaff_x25 + 0x3c);
    *(undefined2 *)(pbVar8 + 0x22) = in_stack_00000108._4_2_;
    *(undefined8 *)(pbVar8 + 0x1a) = uVar14;
    *(undefined8 *)(pbVar8 + 0x12) = uVar11;
    uVar1 = *(undefined4 *)(in_stack_00000020 + 1);
    uVar11 = *in_stack_00000020;
    *(undefined8 *)(pbVar8 + 0x30) = uVar12;
    *(float *)(pbVar8 + 0x38) = fVar13;
    *(undefined4 *)(pbVar8 + 0x2c) = uVar1;
    *(undefined8 *)(pbVar8 + 0x24) = uVar11;
    uVar11 = in_stack_00000018[1];
    uVar12 = *in_stack_00000018;
    pbVar8[0x4c] = unaff_w29 & 1;
    pbVar8[0x4f] = 0;
    *(undefined8 *)(pbVar8 + 0x44) = uVar11;
    *(undefined8 *)(pbVar8 + 0x3c) = uVar12;
    pbVar8[0x4d] = 0;
    pbVar8[0x4e] = 0;
    do {
      do {
        unaff_x24 = unaff_x24 + 1;
        lVar7 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06d7bc30;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06d7bc30:
        iVar4 = (*(code *)*puVar5)();
        cVar3 = DAT_0940fff5;
        if ((long)iVar4 <= (long)unaff_x24) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000158) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar7 = *(long *)(unaff_x21 + 0x58);
        if (lVar7 == 0) goto LAB_06d7be54;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06d7be58;
        uVar2 = *(uint *)(lVar7 + unaff_x24 * 4 + 0x20);
        unaff_x27 = (long)(int)uVar2;
      } while (uVar2 == 0xffffffff);
      lVar7 = *(long *)(unaff_x21 + 200);
      if (lVar7 == 0) goto LAB_06d7be54;
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_06d7be58;
    } while (*(char *)(lVar7 + unaff_x27 + 0x20) == '\0');
    puVar6 = (undefined4 *)(*(long *)(unaff_x21 + 0x48) + unaff_x27 * 0x50);
    uVar12 = *(undefined8 *)(puVar6 + 0xf);
    unaff_w28 = *puVar6;
    unaff_w23 = puVar6[1];
    unaff_d8 = *(undefined8 *)(puVar6 + 2);
    unaff_w20 = *(byte *)(puVar6 + 4);
    unaff_w26 = *(byte *)((long)puVar6 + 0x11);
    *(undefined8 *)(unaff_x25 + 0x82) = *(undefined8 *)(puVar6 + 0x11);
    *(undefined8 *)(unaff_x25 + 0x7a) = uVar12;
    unaff_w29 = *(byte *)(puVar6 + 0x13);
    if (cVar3 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    param_1 = *(long *)(in_stack_00000038 + 0x148);
    if (param_1 != 0) goto code_r0x06d7bcf4;
  }
LAB_06d7be54:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
code_r0x06d7bcf4:
  if (*(uint *)(param_1 + 0x18) <= unaff_w23) {
LAB_06d7be58:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  goto code_r0x06d7bd00;
}



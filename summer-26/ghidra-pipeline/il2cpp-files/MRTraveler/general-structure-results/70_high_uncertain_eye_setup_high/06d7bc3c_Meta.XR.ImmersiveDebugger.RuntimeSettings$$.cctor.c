/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$.cctor
ENTRY_POINT: 06d7bc3c
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


void Meta_XR_ImmersiveDebugger_RuntimeSettings___cctor(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000108;
  long in_stack_00000158;
  
  do {
    cVar6 = DAT_0940fff5;
    if ((long)param_1 <= (long)unaff_x24) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000158) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar8 = *(long *)(unaff_x21 + 0x58);
    if (lVar8 == 0) goto LAB_06d7be54;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x24) {
LAB_06d7be58:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar5 = *(uint *)(lVar8 + unaff_x24 * 4 + 0x20);
    lVar8 = (long)(int)uVar5;
    if (uVar5 != 0xffffffff) {
      lVar9 = *(long *)(unaff_x21 + 200);
      if (lVar9 == 0) goto LAB_06d7be54;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_06d7be58;
      if (*(char *)(lVar9 + lVar8 + 0x20) != '\0') {
        puVar10 = (undefined4 *)(*(long *)(unaff_x21 + 0x48) + lVar8 * unaff_x26);
        uVar14 = *(undefined8 *)(puVar10 + 0xf);
        uVar1 = *puVar10;
        uVar5 = puVar10[1];
        uVar17 = *(undefined8 *)(puVar10 + 2);
        bVar2 = *(byte *)(puVar10 + 4);
        bVar3 = *(byte *)((long)puVar10 + 0x11);
        *(undefined8 *)(unaff_x25 + 0x82) = *(undefined8 *)(puVar10 + 0x11);
        *(undefined8 *)(unaff_x25 + 0x7a) = uVar14;
        bVar4 = *(byte *)(puVar10 + 0x13);
        if (cVar6 == '\0') {
          FUN_03c8f898(PTR_DAT_08e68e18);
          DAT_0940fff5 = '\x01';
        }
        lVar9 = *(long *)(in_stack_00000038 + 0x148);
        if (lVar9 == 0) {
LAB_06d7be54:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_06d7be58;
        lVar9 = *(long *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_06d7be54;
        if ((bVar4 & 1) == 0) {
          uVar14 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) -
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x14) >> 0x20),
                            (float)*(undefined8 *)(lVar9 + 0x20) -
                            (float)*(undefined8 *)(lVar9 + 0x14));
          fVar15 = *(float *)(lVar9 + 0x28) - *(float *)(lVar9 + 0x1c);
        }
        else {
          uVar14 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
          fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
        }
        *(undefined8 *)(unaff_x25 + 0x32) = *(undefined8 *)(unaff_x25 + 0x82);
        *(undefined8 *)(unaff_x25 + 0x2a) = *(undefined8 *)(unaff_x25 + 0x7a);
        uVar16 = *in_stack_00000030;
        in_stack_00000028[1] = in_stack_00000030[1];
        *in_stack_00000028 = uVar16;
        unaff_x26 = 0x50;
        pbVar11 = (byte *)(*(long *)(unaff_x21 + 0x48) + lVar8 * 0x50);
        *pbVar11 = (byte)uVar1 & 1;
        pbVar11[3] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        *(uint *)(pbVar11 + 4) = uVar5;
        *(undefined8 *)(pbVar11 + 8) = uVar17;
        pbVar11[0x10] = bVar2 & 1;
        pbVar11[0x11] = bVar3 & 1;
        uVar16 = *(undefined8 *)(unaff_x25 + 0x44);
        uVar17 = *(undefined8 *)(unaff_x25 + 0x3c);
        *(undefined2 *)(pbVar11 + 0x22) = in_stack_00000108._4_2_;
        *(undefined8 *)(pbVar11 + 0x1a) = uVar16;
        *(undefined8 *)(pbVar11 + 0x12) = uVar17;
        uVar1 = *(undefined4 *)(in_stack_00000020 + 1);
        uVar17 = *in_stack_00000020;
        *(undefined8 *)(pbVar11 + 0x30) = uVar14;
        *(float *)(pbVar11 + 0x38) = fVar15;
        *(undefined4 *)(pbVar11 + 0x2c) = uVar1;
        *(undefined8 *)(pbVar11 + 0x24) = uVar17;
        uVar17 = in_stack_00000018[1];
        uVar14 = *in_stack_00000018;
        pbVar11[0x4c] = bVar4 & 1;
        pbVar11[0x4f] = 0;
        *(undefined8 *)(pbVar11 + 0x44) = uVar17;
        *(undefined8 *)(pbVar11 + 0x3c) = uVar14;
        pbVar11[0x4d] = 0;
        pbVar11[0x4e] = 0;
      }
    }
    unaff_x24 = unaff_x24 + 1;
    lVar8 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06d7bc30;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06d7bc30:
    param_1 = (*(code *)*puVar7)();
  } while( true );
}



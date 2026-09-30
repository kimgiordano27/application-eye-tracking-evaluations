/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData$$Clone
ENTRY_POINT: 05232a8c
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8
MagicaCloth2_ColliderCollisionConstraint_SerializeData__Clone
          (undefined8 param_1,undefined1 param_2 [16])

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  long *plVar14;
  uint unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000008;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  uStack0000000000000078 = param_2._8_8_;
  uStack0000000000000070 = param_2._0_8_;
  do {
    plVar14 = *(long **)(unaff_x19 + 0x30);
    uStack0000000000000060 = unaff_x21[2];
    uStack0000000000000058 = unaff_x21[1];
    uStack0000000000000050 = *unaff_x21;
    uStack0000000000000080 = param_1;
    if (plVar14 == (long *)0x0) {
LAB_05232cb8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768(lVar9);
    }
    uVar5 = uStack0000000000000080;
    uVar4 = uStack0000000000000078;
    uVar3 = uStack0000000000000070;
    uVar2 = uStack0000000000000060;
    uVar8 = uStack0000000000000058;
    uVar7 = uStack0000000000000050;
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05232b34;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar14,lVar9,0);
LAB_05232b34:
    in_stack_000000d8 = uVar4;
    in_stack_000000d0 = uVar3;
    in_stack_000000e0 = uVar5;
    in_stack_000000b8 = uVar8;
    in_stack_000000b0 = uVar7;
    in_stack_000000c0 = uVar2;
    uVar12 = (*(code *)*puVar6)(plVar14,&stack0x000000d0,&stack0x000000b0,puVar6[1]);
    if ((uVar12 & 1) != 0) {
      if ((int)unaff_w26 < 0) {
        uVar10 = *(uint *)(unaff_x25 + 0x18);
        if (uVar10 <= unaff_w24) goto LAB_05232c78;
        lVar9 = *(long *)(unaff_x19 + 0x10);
        if (lVar9 == 0) goto LAB_05232cb8;
        if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000008) goto LAB_05232c78;
        *(int *)(lVar9 + in_stack_00000008 * 4 + 0x20) =
             *(int *)(unaff_x25 + unaff_x27 * 0x20 + 0x24) + 1;
      }
      else {
        uVar10 = *(uint *)(unaff_x25 + 0x18);
        if ((uVar10 <= unaff_w24) || (uVar10 <= unaff_w26)) goto LAB_05232c78;
        *(undefined4 *)(unaff_x25 + 0x20 + (ulong)unaff_w26 * 0x20 + 4) =
             *(undefined4 *)(unaff_x25 + 0x20 + unaff_x27 * 0x20 + 4);
      }
      if (unaff_w24 < uVar10) {
        *unaff_x28 = -1;
        *(undefined4 *)(unaff_x25 + unaff_x27 * 0x20 + 0x24) = *(undefined4 *)(unaff_x19 + 0x28);
        iVar1 = *(int *)(unaff_x19 + 0x20) + -1;
        *(int *)(unaff_x19 + 0x20) = iVar1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        if (iVar1 == 0) {
          unaff_w24 = 0xffffffff;
          *(undefined4 *)(unaff_x19 + 0x24) = 0;
        }
        *(uint *)(unaff_x19 + 0x28) = unaff_w24;
        return 1;
      }
LAB_05232c78:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    do {
      unaff_w26 = unaff_w24;
      uVar10 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
      if ((int)uVar10 <= unaff_w29) {
        thunk_FUN_02f239f0(PTR_DAT_06d021a0);
        uVar7 = thunk_FUN_02ef1808();
        uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
        FUN_05601bec(uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar7);
      }
      if (uVar10 <= unaff_w26) goto LAB_05232c78;
      unaff_w24 = *(uint *)(unaff_x25 + unaff_x27 * 0x20 + 0x24);
      unaff_x27 = (ulong)unaff_w24;
      unaff_w29 = unaff_w29 + 1;
      if ((int)unaff_w24 < 0) {
        return 0;
      }
      if (uVar10 <= unaff_w24) goto LAB_05232c78;
      lVar9 = unaff_x25 + unaff_x27 * 0x20;
      unaff_x28 = (int *)(lVar9 + 0x20);
    } while (*unaff_x28 != unaff_w22);
    param_1 = *(undefined8 *)(lVar9 + 0x38);
    uStack0000000000000078 = *(undefined8 *)(lVar9 + 0x30);
    uStack0000000000000070 = *(undefined8 *)(lVar9 + 0x28);
  } while( true );
}



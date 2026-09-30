/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData$$DataValidate
ENTRY_POINT: 05232a48
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 MagicaCloth2_ColliderCollisionConstraint_SerializeData__DataValidate(void)

{
  long lVar1;
  bool in_NG;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  long *plVar10;
  uint unaff_w24;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack0000000000000008;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  if (!in_NG) {
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) {
LAB_05232cb8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = *(undefined8 *)(lVar11 + 0x18);
    iVar14 = 0;
    uVar12 = 0xffffffff;
    lStack0000000000000008 = in_x9;
    do {
      if ((uint)uVar5 <= unaff_w24) goto LAB_05232c78;
      uVar13 = (ulong)unaff_w24;
      lVar1 = lVar11 + uVar13 * 0x20;
      if (*(int *)(lVar1 + 0x20) == unaff_w22) {
        uVar5 = *(undefined8 *)(lVar1 + 0x38);
        uVar17 = *(undefined8 *)(lVar1 + 0x30);
        uVar15 = *(undefined8 *)(lVar1 + 0x28);
        plVar10 = *(long **)(unaff_x19 + 0x30);
        uVar6 = unaff_x21[2];
        uVar18 = unaff_x21[1];
        uVar16 = *unaff_x21;
        if (plVar10 == (long *)0x0) goto LAB_05232cb8;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768(lVar3);
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05232b34;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c(plVar10,lVar3,0);
LAB_05232b34:
        in_stack_000000b0 = uVar16;
        in_stack_000000b8 = uVar18;
        in_stack_000000c0 = uVar6;
        in_stack_000000d0 = uVar15;
        in_stack_000000d8 = uVar17;
        in_stack_000000e0 = uVar5;
        uVar8 = (*(code *)*puVar2)(plVar10,&stack0x000000d0,&stack0x000000b0,puVar2[1]);
        if ((uVar8 & 1) != 0) {
          if ((int)(uint)uVar12 < 0) {
            uVar4 = *(uint *)(lVar11 + 0x18);
            if (uVar4 <= unaff_w24) goto LAB_05232c78;
            lVar3 = *(long *)(unaff_x19 + 0x10);
            if (lVar3 == 0) goto LAB_05232cb8;
            if (*(uint *)(lVar3 + 0x18) <= (uint)lStack0000000000000008) goto LAB_05232c78;
            *(int *)(lVar3 + lStack0000000000000008 * 4 + 0x20) =
                 *(int *)(lVar11 + uVar13 * 0x20 + 0x24) + 1;
          }
          else {
            uVar4 = *(uint *)(lVar11 + 0x18);
            if ((uVar4 <= unaff_w24) || (uVar4 <= (uint)uVar12)) goto LAB_05232c78;
            *(undefined4 *)(lVar11 + 0x20 + uVar12 * 0x20 + 4) =
                 *(undefined4 *)(lVar11 + 0x20 + uVar13 * 0x20 + 4);
          }
          if (unaff_w24 < uVar4) {
            *(int *)(lVar1 + 0x20) = -1;
            *(undefined4 *)(lVar11 + uVar13 * 0x20 + 0x24) = *(undefined4 *)(unaff_x19 + 0x28);
            iVar14 = *(int *)(unaff_x19 + 0x20) + -1;
            *(int *)(unaff_x19 + 0x20) = iVar14;
            *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
            if (iVar14 == 0) {
              unaff_w24 = 0xffffffff;
              *(undefined4 *)(unaff_x19 + 0x24) = 0;
            }
            *(uint *)(unaff_x19 + 0x28) = unaff_w24;
            return 1;
          }
          goto LAB_05232c78;
        }
        uVar5 = *(undefined8 *)(lVar11 + 0x18);
      }
      if ((int)(uint)uVar5 <= iVar14) {
        thunk_FUN_02f239f0(PTR_DAT_06d021a0);
        uVar5 = thunk_FUN_02ef1808();
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
        FUN_05601bec(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5);
      }
      if ((uint)uVar5 <= unaff_w24) {
LAB_05232c78:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      uVar4 = *(uint *)(lVar11 + uVar13 * 0x20 + 0x24);
      iVar14 = iVar14 + 1;
      uVar12 = (ulong)unaff_w24;
      unaff_w24 = uVar4;
    } while (-1 < (int)uVar4);
  }
  return 0;
}



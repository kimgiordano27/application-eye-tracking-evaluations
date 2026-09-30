/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$.cctor
ENTRY_POINT: 0729d97c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos___cctor(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long in_x9;
  int *piVar10;
  long in_x10;
  uint in_w11;
  uint uVar11;
  long in_x12;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x25;
  uint unaff_w26;
  uint uVar12;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    in_x9 = in_x9 + 1;
    uVar11 = (int)in_x12 + 0x20;
    *(undefined4 *)(in_x10 + in_x12 * 4 + 0x20) = *(undefined4 *)(param_1 + in_x12 * 4 + 0x20);
    if (*(int *)(unaff_x20 + 0xa8) <= in_x9) {
      do {
        while( true ) {
          uVar11 = unaff_w26;
          unaff_x22 = unaff_x22 + 1;
          uVar12 = uVar11;
          if ((long)*(int *)(unaff_x20 + 0xa0) <= (long)unaff_x22) {
            do {
              unaff_x25 = unaff_x25 + 1;
              uVar11 = uVar12 + 1;
              if (unaff_x25 == 0x20) {
                in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
                uVar11 = (uVar12 + *(int *)(unaff_x20 + 0xa8) * 0x20) - 0x1f;
                if (in_stack_00000000._4_4_ == 0xc) {
                  return;
                }
                unaff_x25 = 0;
              }
              uVar12 = uVar11;
            } while (*(int *)(unaff_x20 + 0xa0) < 1);
            in_stack_00000008 = (long)(int)uVar11;
            unaff_x28 = (long)(int)(uVar11 + 0x20);
            unaff_x29 = (long)(int)(uVar11 + 0x40);
            unaff_x22 = 0;
          }
          unaff_w26 = uVar11;
          if ((unaff_x22 != 0) && ((long)*(int *)(unaff_x20 + 0xa4) <= (long)unaff_x25)) break;
          lVar6 = *(long *)(unaff_x20 + 0xd8);
          if (lVar6 == 0) goto LAB_0729db58;
          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0729db54;
          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_0729db58;
          if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_0729db54;
          iVar2 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
          if (iVar2 == 0) {
            if (0 < *(int *)(unaff_x20 + 0xa8)) {
              lVar6 = *(long *)(unaff_x20 + 0xc0);
              if (lVar6 == 0) goto LAB_0729db58;
              if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0729db54;
              lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_0729db58;
              uVar12 = *(uint *)(lVar6 + 0x18);
              lVar8 = 0;
              do {
                if (uVar12 <= uVar11) goto LAB_0729db54;
                lVar7 = (long)(int)uVar11;
                lVar8 = lVar8 + 1;
                uVar11 = uVar11 + 0x20;
                *(undefined4 *)(lVar6 + lVar7 * 4 + 0x20) = 0;
              } while (lVar8 < *(int *)(unaff_x20 + 0xa8));
            }
          }
          else if (iVar2 < 0) {
            if (unaff_x19 == (long *)0x0) goto LAB_0729db58;
            lVar6 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x23) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729da58;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729da58:
            iVar2 = -iVar2;
            iVar4 = (*(code *)*puVar5)();
            lVar6 = *(long *)(unaff_x20 + 0xc0);
            iVar1 = iVar2;
            if (iVar2 < 0) {
              iVar1 = iVar2 + 1;
            }
            if (lVar6 == 0) goto LAB_0729db58;
            if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0729db54;
            lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_0729db58;
            uVar12 = *(uint *)(lVar6 + 0x18);
            if (uVar12 <= uVar11) goto LAB_0729db54;
            iVar2 = (1 << (ulong)((iVar2 % 2 + (iVar1 >> 1)) - 1U & 0x1f)) + 1;
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = iVar4 / iVar2;
            }
            *(int *)(lVar6 + in_stack_00000008 * 4 + 0x20) = iVar4 - iVar1 * iVar2;
            if (uVar12 <= (uint)unaff_x28) goto LAB_0729db54;
            iVar4 = 0;
            if (iVar2 != 0) {
              iVar4 = iVar1 / iVar2;
            }
            *(int *)(lVar6 + unaff_x28 * 4 + 0x20) = iVar1 - iVar4 * iVar2;
            if (uVar12 <= (uint)unaff_x29) goto LAB_0729db54;
            *(int *)(lVar6 + unaff_x29 * 4 + 0x20) = iVar4;
          }
          else if (0 < *(int *)(unaff_x20 + 0xa8)) {
            lVar6 = 0;
            do {
              lVar8 = *(long *)(unaff_x20 + 0xc0);
              if (lVar8 == 0) goto LAB_0729db58;
              if (*(uint *)(lVar8 + 0x18) <= unaff_x22) goto LAB_0729db54;
              if (unaff_x19 == (long *)0x0) goto LAB_0729db58;
              lVar7 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar8 = *(long *)(lVar8 + unaff_x22 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x23) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729d8e8;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729d8e8:
              uVar3 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_0729db58;
              uVar12 = uVar11 + (int)lVar6 * 0x20;
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_0729db54;
              lVar6 = lVar6 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar12 * 4 + 0x20) = uVar3;
            } while (lVar6 < *(int *)(unaff_x20 + 0xa8));
          }
        }
      } while (*(int *)(unaff_x20 + 0xa8) < 1);
      lVar6 = *(long *)(unaff_x20 + 0xc0);
      if (lVar6 == 0) goto LAB_0729db58;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) break;
      param_1 = *(long *)(lVar6 + 0x20);
      if (param_1 == 0) goto LAB_0729db58;
      in_x10 = *(long *)(lVar6 + 0x28);
      in_w11 = *(uint *)(param_1 + 0x18);
      in_x9 = 0;
    }
    if (in_w11 <= uVar11) break;
    if (in_x10 == 0) {
LAB_0729db58:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_x12 = (long)(int)uVar11;
  } while (uVar11 < *(uint *)(in_x10 + 0x18));
LAB_0729db54:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



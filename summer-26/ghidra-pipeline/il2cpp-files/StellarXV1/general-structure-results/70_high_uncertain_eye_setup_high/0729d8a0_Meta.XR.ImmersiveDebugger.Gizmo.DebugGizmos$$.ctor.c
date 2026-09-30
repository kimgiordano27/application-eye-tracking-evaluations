/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$.ctor
ENTRY_POINT: 0729d8a0
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


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong in_x9;
  long lVar7;
  ulong uVar8;
  long in_x10;
  long lVar9;
  int *piVar10;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  uint uVar12;
  long lVar13;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    lVar13 = *(long *)(in_x10 + 0x20);
    if (in_x9 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == param_3) {
          puVar6 = (undefined8 *)(param_1 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_0729d8e8;
        }
        in_x9 = in_x9 - 1;
        piVar10 = piVar10 + 4;
      } while (in_x9 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0729d8e8:
    uVar4 = (*(code *)*puVar6)();
    if (lVar13 == 0) {
LAB_0729db58:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar12 = unaff_w26 + (int)unaff_x24 * 0x20;
    if (*(uint *)(lVar13 + 0x18) <= uVar12) {
LAB_0729db54:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x24 = unaff_x24 + 1;
    *(undefined4 *)(lVar13 + (long)(int)uVar12 * 4 + 0x20) = uVar4;
    if (*(int *)(unaff_x20 + 0xa8) <= unaff_x24) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              unaff_x22 = unaff_x22 + 1;
              uVar12 = unaff_w26;
              if ((long)*(int *)(unaff_x20 + 0xa0) <= (long)unaff_x22) {
                do {
                  unaff_x25 = unaff_x25 + 1;
                  unaff_w26 = uVar12 + 1;
                  if (unaff_x25 == 0x20) {
                    in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
                    unaff_w26 = (uVar12 + *(int *)(unaff_x20 + 0xa8) * 0x20) - 0x1f;
                    if (in_stack_00000000._4_4_ == 0xc) {
                      return;
                    }
                    unaff_x25 = 0;
                  }
                  uVar12 = unaff_w26;
                } while (*(int *)(unaff_x20 + 0xa0) < 1);
                in_stack_00000008 = (long)(int)unaff_w26;
                unaff_x28 = (long)(int)(unaff_w26 + 0x20);
                unaff_x29 = (long)(int)(unaff_w26 + 0x40);
                unaff_x22 = 0;
              }
              if ((unaff_x22 == 0) || ((long)unaff_x25 < (long)*(int *)(unaff_x20 + 0xa4))) break;
              if (0 < *(int *)(unaff_x20 + 0xa8)) {
                lVar13 = *(long *)(unaff_x20 + 0xc0);
                if (lVar13 == 0) goto LAB_0729db58;
                if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_0729db54;
                lVar7 = *(long *)(lVar13 + 0x20);
                if (lVar7 == 0) goto LAB_0729db58;
                lVar9 = *(long *)(lVar13 + 0x28);
                uVar3 = *(uint *)(lVar7 + 0x18);
                lVar13 = 0;
                uVar12 = unaff_w26;
                do {
                  if (uVar3 <= uVar12) goto LAB_0729db54;
                  if (lVar9 == 0) goto LAB_0729db58;
                  lVar11 = (long)(int)uVar12;
                  if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_0729db54;
                  lVar13 = lVar13 + 1;
                  uVar12 = uVar12 + 0x20;
                  *(undefined4 *)(lVar9 + lVar11 * 4 + 0x20) =
                       *(undefined4 *)(lVar7 + lVar11 * 4 + 0x20);
                } while (lVar13 < *(int *)(unaff_x20 + 0xa8));
              }
            }
            lVar13 = *(long *)(unaff_x20 + 0xd8);
            if (lVar13 == 0) goto LAB_0729db58;
            if (*(uint *)(lVar13 + 0x18) <= unaff_x22) goto LAB_0729db54;
            lVar13 = *(long *)(lVar13 + unaff_x22 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_0729db58;
            if (*(uint *)(lVar13 + 0x18) <= unaff_x25) goto LAB_0729db54;
            iVar2 = *(int *)(lVar13 + unaff_x25 * 4 + 0x20);
            if (iVar2 != 0) break;
            if (0 < *(int *)(unaff_x20 + 0xa8)) {
              lVar13 = *(long *)(unaff_x20 + 0xc0);
              if (lVar13 == 0) goto LAB_0729db58;
              if (*(uint *)(lVar13 + 0x18) <= unaff_x22) goto LAB_0729db54;
              lVar13 = *(long *)(lVar13 + unaff_x22 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_0729db58;
              uVar3 = *(uint *)(lVar13 + 0x18);
              lVar7 = 0;
              uVar12 = unaff_w26;
              do {
                if (uVar3 <= uVar12) goto LAB_0729db54;
                lVar9 = (long)(int)uVar12;
                lVar7 = lVar7 + 1;
                uVar12 = uVar12 + 0x20;
                *(undefined4 *)(lVar13 + lVar9 * 4 + 0x20) = 0;
              } while (lVar7 < *(int *)(unaff_x20 + 0xa8));
            }
          }
          if (-1 < iVar2) break;
          if (unaff_x19 == (long *)0x0) goto LAB_0729db58;
          lVar13 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x23) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                goto LAB_0729da58;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0729da58:
          iVar2 = -iVar2;
          iVar5 = (*(code *)*puVar6)();
          lVar13 = *(long *)(unaff_x20 + 0xc0);
          iVar1 = iVar2;
          if (iVar2 < 0) {
            iVar1 = iVar2 + 1;
          }
          if (lVar13 == 0) goto LAB_0729db58;
          if (*(uint *)(lVar13 + 0x18) <= unaff_x22) goto LAB_0729db54;
          lVar13 = *(long *)(lVar13 + unaff_x22 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_0729db58;
          uVar12 = *(uint *)(lVar13 + 0x18);
          if (uVar12 <= unaff_w26) goto LAB_0729db54;
          iVar2 = (1 << (ulong)((iVar2 % 2 + (iVar1 >> 1)) - 1U & 0x1f)) + 1;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar5 / iVar2;
          }
          *(int *)(lVar13 + in_stack_00000008 * 4 + 0x20) = iVar5 - iVar1 * iVar2;
          if (uVar12 <= (uint)unaff_x28) goto LAB_0729db54;
          iVar5 = 0;
          if (iVar2 != 0) {
            iVar5 = iVar1 / iVar2;
          }
          *(int *)(lVar13 + unaff_x28 * 4 + 0x20) = iVar1 - iVar5 * iVar2;
          if (uVar12 <= (uint)unaff_x29) goto LAB_0729db54;
          *(int *)(lVar13 + unaff_x29 * 4 + 0x20) = iVar5;
        }
      } while (*(int *)(unaff_x20 + 0xa8) < 1);
      unaff_x24 = 0;
    }
    lVar13 = *(long *)(unaff_x20 + 0xc0);
    if (lVar13 == 0) goto LAB_0729db58;
    if (*(uint *)(lVar13 + 0x18) <= unaff_x22) goto LAB_0729db54;
    if (unaff_x19 == (long *)0x0) goto LAB_0729db58;
    param_1 = *unaff_x19;
    in_x10 = lVar13 + unaff_x22 * 8;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
}



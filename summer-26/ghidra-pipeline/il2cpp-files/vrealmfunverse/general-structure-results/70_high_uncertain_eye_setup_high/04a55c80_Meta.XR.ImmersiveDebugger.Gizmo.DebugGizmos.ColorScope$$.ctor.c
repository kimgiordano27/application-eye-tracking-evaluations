/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$.ctor
ENTRY_POINT: 04a55c80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope___ctor(void)

{
  undefined4 uVar1;
  bool in_NG;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long in_x11;
  int *piVar12;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  long *plVar13;
  long unaff_x24;
  int iVar14;
  uint unaff_w28;
  undefined8 in_stack_00000000;
  
  if (!in_NG) {
    if (in_x11 == 0) goto LAB_04a55ef4;
    uVar6 = *(undefined8 *)(in_x11 + 0x18);
    iVar14 = 0;
    lVar11 = in_x11 + 0x20;
    do {
      if ((uint)uVar6 <= unaff_w28) goto LAB_04a55eb4;
      if (*(int *)(lVar11 + (ulong)unaff_w28 * 0xc) == unaff_w21) {
        plVar13 = *(long **)(unaff_x19 + 0x30);
        if (plVar13 == (long *)0x0) goto LAB_04a55ef4;
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
        uVar1 = *(undefined4 *)(lVar11 + (ulong)unaff_w28 * 0xc + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218(lVar4);
        }
        lVar7 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04a55d3c;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)FUN_02b7654c(plVar13,lVar4,0);
LAB_04a55d3c:
        uVar10 = (*(code *)*puVar2)(plVar13,uVar1,unaff_w22,puVar2[1]);
        if ((uVar10 & 1) != 0) {
          return 0;
        }
        uVar6 = *(undefined8 *)(in_x11 + 0x18);
      }
      if ((int)(uint)uVar6 <= iVar14) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar6 = thunk_FUN_02b79644();
        uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar6,uVar3,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar6,unaff_x24);
      }
      if ((uint)uVar6 <= unaff_w28) goto LAB_04a55eb4;
      iVar14 = iVar14 + 1;
      unaff_w28 = *(uint *)(lVar11 + (ulong)unaff_w28 * 0xc + 4);
    } while (-1 < (int)unaff_w28);
  }
  uVar5 = *(uint *)(unaff_x19 + 0x28);
  if ((int)uVar5 < 0) {
    if (in_x11 == 0) goto LAB_04a55ef4;
    uVar5 = *(uint *)(unaff_x19 + 0x24);
    uVar9 = *(uint *)(in_x11 + 0x18);
    if (uVar5 == uVar9) {
      FUN_04a559ec();
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a55ef4;
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      in_x11 = *(long *)(unaff_x19 + 0x18);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
      if (in_x11 == 0) goto LAB_04a55ef4;
      iVar14 = 0;
      iVar8 = (int)uVar6;
      if (iVar8 != 0) {
        iVar14 = unaff_w21 / iVar8;
      }
      in_stack_00000000._4_4_ = unaff_w21 - iVar14 * iVar8;
      uVar9 = *(uint *)(in_x11 + 0x18);
    }
    else {
      *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
    }
  }
  else {
    if (in_x11 == 0) goto LAB_04a55ef4;
    uVar9 = *(uint *)(in_x11 + 0x18);
    if (uVar9 <= uVar5) goto LAB_04a55eb4;
    *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(in_x11 + (ulong)uVar5 * 0xc + 0x24);
  }
  if (uVar5 < uVar9) {
    piVar12 = (int *)(in_x11 + 0x20 + (long)(int)uVar5 * 0xc);
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *piVar12 = unaff_w21;
    piVar12[2] = unaff_w22;
    if (lVar11 == 0) {
LAB_04a55ef4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (in_stack_00000000._4_4_ < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (ulong)in_stack_00000000._4_4_ * 4;
      *(int *)(in_x11 + 0x20 + (long)(int)uVar5 * 0xc + 4) = *(int *)(lVar11 + 0x20) + -1;
      *(uint *)(lVar11 + 0x20) = uVar5 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a55eb4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}



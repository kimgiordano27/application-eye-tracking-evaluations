/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawPlane
ENTRY_POINT: 06da5068
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPlane(void)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar4 + 0x20);
      thunk_FUN_03d233cc(unaff_x19 + 0x150);
      lVar4 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_06da5624;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(lVar4 + 0x20);
        thunk_FUN_03d233cc(unaff_x19 + 0x158);
        lVar4 = *(long *)(unaff_x19 + 0x150);
        if (lVar4 == 0) goto LAB_06da5624;
        if (1 < *(uint *)(lVar4 + 0x18)) {
          lVar10 = *(long *)(unaff_x19 + 0x158);
          if (lVar10 == 0) goto LAB_06da5624;
          if (1 < *(uint *)(lVar10 + 0x18)) {
            uVar9 = *(uint *)(lVar4 + 0x24);
            iVar7 = 0;
            iVar6 = 0;
            uVar11 = *(int *)(lVar10 + 0x24) * 3;
            lVar4 = 0x20;
            do {
              uVar12 = lVar4 - 0x20;
              if (uVar12 == uVar9) {
                lVar10 = *(long *)(unaff_x19 + 0x150);
                if (lVar10 == 0) goto LAB_06da5624;
                if (*(uint *)(lVar10 + 0x18) <= iVar7 + 2U) goto LAB_06da5628;
                uVar9 = *(uint *)(lVar10 + (long)(int)(iVar7 + 2U) * 4 + 0x20);
                iVar7 = iVar7 + 1;
              }
              if (uVar12 == uVar11) {
                lVar10 = *(long *)(unaff_x19 + 0x158);
                if (lVar10 == 0) goto LAB_06da5624;
                uVar11 = iVar6 + 2;
                if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_06da5628;
                iVar6 = iVar6 + 1;
                uVar11 = *(int *)(lVar10 + (long)(int)uVar11 * 4 + 0x20) * 3;
              }
              lVar10 = *(long *)(unaff_x19 + 0x160);
              if (lVar10 == 0) goto LAB_06da5624;
              if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_06da5628;
              *(char *)(lVar10 + lVar4) = (char)iVar7;
              lVar10 = *(long *)(unaff_x19 + 0x168);
              if (lVar10 == 0) goto LAB_06da5624;
              if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_06da5628;
              *(char *)(lVar10 + lVar4) = (char)iVar6;
              lVar4 = lVar4 + 1;
            } while (lVar4 != 0x260);
            uVar9 = 0;
            uVar12 = 0;
            do {
              lVar4 = *(long *)(unaff_x19 + 0x158);
              if (lVar4 == 0) goto LAB_06da5624;
              uVar1 = uVar12 + 1;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_06da5628;
              iVar7 = 0;
              iVar6 = *(int *)(lVar4 + 0x20 + uVar1 * 4) - *(int *)(lVar4 + 0x20 + uVar12 * 4);
              do {
                iVar2 = iVar6;
                if (0 < iVar6) {
                  do {
                    lVar4 = *(long *)(unaff_x19 + 0x170);
                    if (lVar4 == 0) goto LAB_06da5624;
                    if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_06da5628;
                    lVar10 = (long)(int)uVar9;
                    iVar2 = iVar2 + -1;
                    uVar9 = uVar9 + 1;
                    *(char *)(lVar4 + lVar10 + 0x20) = (char)iVar7;
                  } while (iVar2 != 0);
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 != 3);
              uVar12 = uVar1;
            } while (uVar1 != 0xc);
            lVar4 = *unaff_x20;
            uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar12 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06da5604;
                }
                uVar12 = uVar12 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da5604:
            uVar3 = (*(code *)*puVar5)();
            *(undefined4 *)(unaff_x19 + 0x178) = uVar3;
            return;
          }
        }
      }
    }
LAB_06da5628:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_06da5624:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



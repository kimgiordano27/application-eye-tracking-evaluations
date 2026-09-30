/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 065173a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  long *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    if (unaff_x24 == (long *)0x0) goto LAB_065175dc;
    uVar2 = (**(code **)(*unaff_x24 + 0x2a8))();
    if ((uVar2 & 1) == 0) {
      FUN_07a5f8a8(0);
    }
  }
  plVar3 = (long *)thunk_FUN_04485110();
  if (plVar3 == (long *)0x0) {
    FUN_07a5f8a8();
  }
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8(lVar6);
    }
    lVar7 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0651749c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar9,lVar6,0);
LAB_0651749c:
    iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (0 < iVar1) {
      iVar10 = 0;
      do {
        plVar9 = *(long **)(unaff_x21 + 0x10);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04481fb8(lVar6);
        }
        lVar7 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06517528;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar9,lVar6,0);
LAB_06517528:
        (*(code *)*puVar4)(plVar9,iVar10,puVar4[1]);
        lVar6 = thunk_FUN_04484e3c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0)) {
          uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar5,0);
        }
        if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar3[(long)(int)unaff_w19 + 4] = lVar6;
        thunk_FUN_044bb4b4(plVar3 + (long)(int)unaff_w19 + 4,lVar6);
        iVar10 = iVar10 + 1;
        unaff_w19 = unaff_w19 + 1;
      } while (iVar10 != iVar1);
    }
    return;
  }
LAB_065175dc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 0651743c
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


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar8;
  long *plVar9;
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_044822ac();
      goto LAB_0651749c;
    }
    plVar9 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar9 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
LAB_0651749c:
  iVar1 = (*(code *)*puVar2)();
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8(lVar4);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06517528;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(plVar9,lVar4,0);
LAB_06517528:
      (*(code *)*puVar2)(plVar9,iVar8,puVar2[1]);
      lVar4 = thunk_FUN_04484e3c(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar4;
      thunk_FUN_044bb4b4(unaff_x22 + (long)(int)unaff_w19 + 4,lVar4);
      iVar8 = iVar8 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar8 != iVar1);
  }
  return;
}



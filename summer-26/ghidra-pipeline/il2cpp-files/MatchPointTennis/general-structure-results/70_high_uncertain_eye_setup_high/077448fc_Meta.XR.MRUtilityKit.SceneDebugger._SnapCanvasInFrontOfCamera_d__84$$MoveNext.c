/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__84$$MoveNext
ENTRY_POINT: 077448fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__84__MoveNext
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uStack0000000000000060;
  int iStack0000000000000064;
  int iStack0000000000000068;
  uint uStack000000000000006c;
  
  while( true ) {
    uStack0000000000000060 = (undefined4)param_1;
    uVar2 = FUN_07a3b850(param_2,param_3);
    if (*(uint *)(unaff_x25 + 0x18) < 10) break;
    *(undefined8 *)(unaff_x25 + 0x68) = uVar2;
    thunk_FUN_044bb4b4();
    uVar2 = FUN_078b57fc(unaff_x25,0);
    plVar3 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
    lVar4 = thunk_FUN_04484e3c(*unaff_x29,&stack0x0000005c);
    if (plVar3 == (long *)0x0) {
LAB_07744a4c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
    if ((int)plVar3[3] == 0) break;
    plVar3[4] = lVar4;
    thunk_FUN_044bb4b4(plVar3 + 4,lVar4);
    FUN_0771ec00(uVar2,plVar3,0);
    do {
      if (iStack0000000000000068 < iStack0000000000000064 + iStack0000000000000068) {
        if (unaff_x24 == 0) goto LAB_07744a4c;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        lVar4 = (long)iStack0000000000000068;
        do {
          if (uVar1 <= (uint)lVar4) goto LAB_07744c24;
          *(int *)(unaff_x24 + 0x20 + lVar4 * 4) =
               *(int *)(unaff_x24 + 0x20 + lVar4 * 4) - unaff_w21;
          lVar4 = lVar4 + 1;
        } while (lVar4 < iStack0000000000000064 + iStack0000000000000068);
      }
      lVar4 = *(long *)(unaff_x23 + 0x78);
      if (lVar4 == 0) goto LAB_07744a4c;
      if (*(uint *)(lVar4 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
      lVar4 = *(long *)(lVar4 + (long)(int)uStack000000000000006c * 8 + 0x20);
      if ((lVar4 == 0) || (unaff_x20 == 0)) goto LAB_07744a4c;
      if (*(uint *)(unaff_x20 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
      FUN_07a612b4(unaff_x24,iStack0000000000000068,*(undefined8 *)(lVar4 + 0x10),
                   *(undefined4 *)(unaff_x20 + (long)(int)uStack000000000000006c * 4 + 0x20),
                   iStack0000000000000064,0);
      uStack000000000000006c = uStack000000000000006c + 1;
      if (*(long *)(unaff_x23 + 0x78) == 0) goto LAB_07744a4c;
      if (*(int *)(*(long *)(unaff_x23 + 0x78) + 0x18) <= (int)uStack000000000000006c) {
        return;
      }
      if (unaff_x28 == 0) goto LAB_07744a4c;
      if (*(uint *)(unaff_x28 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
      lVar4 = (long)(int)uStack000000000000006c;
      lVar5 = *(long *)(unaff_x28 + lVar4 * 8 + 0x20);
      if ((lVar5 == 0) || (lVar6 = *(long *)(unaff_x22 + 0x70), lVar6 == 0)) goto LAB_07744a4c;
      if (*(uint *)(lVar6 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
      iStack0000000000000068 = *(int *)(lVar6 + lVar4 * 4 + 0x20);
      unaff_x24 = *(long *)(lVar5 + 0x10);
      lVar5 = *(long *)(unaff_x22 + 0x78);
      if (lVar5 == 0) goto LAB_07744a4c;
      if (*(uint *)(lVar5 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
      iStack0000000000000064 = *(int *)(lVar5 + lVar4 * 4 + 0x20);
    } while (unaff_w19 < 4);
    unaff_x25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (unaff_x25 == 0) goto LAB_07744a4c;
    if (*(int *)(unaff_x25 + 0x18) == 0) break;
    *(undefined8 *)(unaff_x25 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x20));
    uVar2 = FUN_07a3b850((long)&stack0x00000068 + 4,0);
    if (*(uint *)(unaff_x25 + 0x18) < 2) break;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x28),uVar2);
    if (*(uint *)(unaff_x25 + 0x18) < 3) break;
    *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x30));
    uVar2 = FUN_07a3b850(&stack0x00000068,0);
    if (*(uint *)(unaff_x25 + 0x18) < 4) break;
    *(undefined8 *)(unaff_x25 + 0x38) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x38),uVar2);
    if (*(uint *)(unaff_x25 + 0x18) < 5) break;
    *(undefined8 *)(unaff_x25 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x40));
    uVar2 = FUN_07a3b850((long)&stack0x00000060 + 4,0);
    if (*(uint *)(unaff_x25 + 0x18) < 6) break;
    *(undefined8 *)(unaff_x25 + 0x48) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x48),uVar2);
    if (*(uint *)(unaff_x25 + 0x18) < 7) break;
    *(undefined8 *)(unaff_x25 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x23 + 0x78) == 0) goto LAB_07744a4c;
    uStack0000000000000060 = (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x78) + 0x18);
    uVar2 = FUN_07a3b850(&stack0x00000060,0);
    if (*(uint *)(unaff_x25 + 0x18) < 8) break;
    *(undefined8 *)(unaff_x25 + 0x58) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x25 + 0x58),uVar2);
    if (*(uint *)(unaff_x25 + 0x18) < 9) break;
    *(undefined8 *)(unaff_x25 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
    thunk_FUN_044bb4b4();
    if (unaff_x20 == 0) goto LAB_07744a4c;
    param_1 = *(undefined8 *)(unaff_x20 + 0x18);
    param_2 = (undefined8 *)&stack0x00000060;
    param_3 = 0;
  }
LAB_07744c24:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}



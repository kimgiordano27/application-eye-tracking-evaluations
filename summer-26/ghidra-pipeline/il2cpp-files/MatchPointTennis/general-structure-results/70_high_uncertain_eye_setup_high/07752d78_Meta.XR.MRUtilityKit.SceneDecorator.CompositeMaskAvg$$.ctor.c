/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskAvg$$.ctor
ENTRY_POINT: 07752d78
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


void Meta_XR_MRUtilityKit_SceneDecorator_CompositeMaskAvg___ctor(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w26;
  long unaff_x28;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000e0;
  int iStack00000000000000e4;
  int in_stack_000000e8;
  uint uStack00000000000000ec;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_050e13a8(in_stack_000000d0,in_stack_000000c8,unaff_w26);
  puVar2 = PTR_DAT_09f31348;
  uStack00000000000000ec = 0;
  lVar5 = *(long *)(unaff_x23 + 0x130);
  while (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) <= (int)uStack00000000000000ec) {
      return;
    }
    if (unaff_x28 == 0) break;
    if (*(uint *)(unaff_x28 + 0x18) <= uStack00000000000000ec) {
LAB_0775315c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar5 = (long)(int)uStack00000000000000ec;
    lVar6 = *(long *)(unaff_x28 + lVar5 * 8 + 0x20);
    if ((lVar6 == 0) || (lVar7 = *(long *)(unaff_x22 + 0x70), lVar7 == 0)) break;
    if (*(uint *)(lVar7 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    in_stack_000000e8 = *(int *)(lVar7 + lVar5 * 4 + 0x20);
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(unaff_x22 + 0x78);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    iStack00000000000000e4 = *(int *)(lVar6 + lVar5 * 4 + 0x20);
    if (3 < unaff_w19) {
      lVar5 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x20));
      uVar3 = FUN_07a3b850(&stack0x000000ec,0);
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x28),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x30));
      uVar3 = FUN_07a3b850(&stack0x000000e8,0);
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x38) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x38),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x40));
      uVar3 = FUN_07a3b850((long)&stack0x000000e0 + 4,0);
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x48) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x48),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x23 + 0x130) == 0) break;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x130) + 0x18);
      uVar3 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x58) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x58),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
      thunk_FUN_044bb4b4();
      if (unaff_x20 == 0) break;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
      uVar3 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_0775315c;
      *(undefined8 *)(lVar5 + 0x68) = uVar3;
      thunk_FUN_044bb4b4();
      uVar3 = FUN_078b57fc(lVar5,0);
      plVar4 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      lVar5 = thunk_FUN_04484e3c(*(undefined8 *)puVar2,&stack0x000000dc);
      if (plVar4 == (long *)0x0) break;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar3,0);
      }
      if ((int)plVar4[3] == 0) goto LAB_0775315c;
      plVar4[4] = lVar5;
      thunk_FUN_044bb4b4(plVar4 + 4,lVar5);
      FUN_0771ec00(uVar3,plVar4,0);
    }
    if (in_stack_000000e8 < iStack00000000000000e4 + in_stack_000000e8) {
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      lVar5 = (long)in_stack_000000e8;
      do {
        if (uVar1 <= (uint)lVar5) goto LAB_0775315c;
        *(int *)(lVar7 + 0x20 + lVar5 * 4) = *(int *)(lVar7 + 0x20 + lVar5 * 4) - unaff_w21;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack00000000000000e4 + in_stack_000000e8);
    }
    lVar5 = *(long *)(unaff_x23 + 0x130);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    lVar5 = *(long *)(lVar5 + (long)(int)uStack00000000000000ec * 8 + 0x20);
    if ((lVar5 == 0) || (unaff_x20 == 0)) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    FUN_07a612b4(lVar7,in_stack_000000e8,*(undefined8 *)(lVar5 + 0x10),
                 *(undefined4 *)(unaff_x20 + (long)(int)uStack00000000000000ec * 4 + 0x20),
                 iStack00000000000000e4,0);
    uStack00000000000000ec = uStack00000000000000ec + 1;
    lVar5 = *(long *)(unaff_x23 + 0x130);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



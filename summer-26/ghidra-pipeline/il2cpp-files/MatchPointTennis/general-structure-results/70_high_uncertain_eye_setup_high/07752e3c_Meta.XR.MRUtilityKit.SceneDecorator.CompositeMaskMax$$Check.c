/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskMax$$Check
ENTRY_POINT: 07752e3c
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


void Meta_XR_MRUtilityKit_SceneDecorator_CompositeMaskMax__Check
               (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5
               )

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uStack00000000000000e0;
  uint uStack00000000000000e4;
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  
  do {
    if (in_NG == in_OV) {
      lVar2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
      if (lVar2 == 0) goto LAB_07753138;
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0775315c:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x20));
      uVar3 = FUN_07a3b850((long)&stack0x000000e8 + 4,0);
      if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x28),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x30));
      uVar3 = FUN_07a3b850(&stack0x000000e8,0);
      if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x38) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x38),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 5) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x40));
      uVar3 = FUN_07a3b850((long)&stack0x000000e0 + 4,0);
      if (*(uint *)(lVar2 + 0x18) < 6) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x48) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x48),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 7) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x23 + 0x130) == 0) goto LAB_07753138;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x130) + 0x18);
      uVar3 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar2 + 0x18) < 8) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x58) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x58),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 9) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
      thunk_FUN_044bb4b4();
      if (unaff_x20 == 0) goto LAB_07753138;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
      uVar3 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar2 + 0x18) < 10) goto LAB_0775315c;
      *(undefined8 *)(lVar2 + 0x68) = uVar3;
      thunk_FUN_044bb4b4();
      uVar3 = FUN_078b57fc(lVar2,0);
      plVar4 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      lVar2 = thunk_FUN_04484e3c(*unaff_x29,&stack0x000000dc);
      if (plVar4 == (long *)0x0) goto LAB_07753138;
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar3,0);
      }
      if ((int)plVar4[3] == 0) goto LAB_0775315c;
      plVar4[4] = lVar2;
      thunk_FUN_044bb4b4(plVar4 + 4,lVar2);
      FUN_0771ec00(uVar3,plVar4,0);
      param_5 = (ulong)uStack00000000000000e4;
      param_2 = (ulong)uStack00000000000000e8;
    }
    iVar6 = (int)param_2;
    if (iVar6 < (int)param_5 + iVar6) {
      if (unaff_x24 == 0) goto LAB_07753138;
      uVar1 = *(uint *)(unaff_x24 + 0x18);
      lVar2 = (long)iVar6;
      do {
        if (uVar1 <= (uint)lVar2) goto LAB_0775315c;
        *(int *)(unaff_x24 + 0x20 + lVar2 * 4) = *(int *)(unaff_x24 + 0x20 + lVar2 * 4) - unaff_w21;
        param_5 = (ulong)uStack00000000000000e4;
        param_2 = (ulong)uStack00000000000000e8;
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)(uStack00000000000000e4 + uStack00000000000000e8));
    }
    lVar2 = *(long *)(unaff_x23 + 0x130);
    if (lVar2 == 0) {
LAB_07753138:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar2 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    lVar2 = *(long *)(lVar2 + (long)(int)uStack00000000000000ec * 8 + 0x20);
    if ((lVar2 == 0) || (unaff_x20 == 0)) goto LAB_07753138;
    if (*(uint *)(unaff_x20 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    FUN_07a612b4(unaff_x24,param_2,*(undefined8 *)(lVar2 + 0x10),
                 *(undefined4 *)(unaff_x20 + (long)(int)uStack00000000000000ec * 4 + 0x20),param_5,0
                );
    uStack00000000000000ec = uStack00000000000000ec + 1;
    if (*(long *)(unaff_x23 + 0x130) == 0) goto LAB_07753138;
    if (*(int *)(*(long *)(unaff_x23 + 0x130) + 0x18) <= (int)uStack00000000000000ec) {
      return;
    }
    if (unaff_x28 == 0) goto LAB_07753138;
    if (*(uint *)(unaff_x28 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    lVar2 = (long)(int)uStack00000000000000ec;
    lVar5 = *(long *)(unaff_x28 + lVar2 * 8 + 0x20);
    if ((lVar5 == 0) || (lVar7 = *(long *)(unaff_x22 + 0x70), lVar7 == 0)) goto LAB_07753138;
    if (*(uint *)(lVar7 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    uStack00000000000000e8 = *(uint *)(lVar7 + lVar2 * 4 + 0x20);
    param_2 = (ulong)uStack00000000000000e8;
    unaff_x24 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(unaff_x22 + 0x78);
    if (lVar5 == 0) goto LAB_07753138;
    if (*(uint *)(lVar5 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    uStack00000000000000e4 = *(uint *)(lVar5 + lVar2 * 4 + 0x20);
    param_5 = (ulong)uStack00000000000000e4;
    in_OV = SBORROW4(unaff_w19,4);
    in_NG = unaff_w19 + -4 < 0;
  } while( true );
}



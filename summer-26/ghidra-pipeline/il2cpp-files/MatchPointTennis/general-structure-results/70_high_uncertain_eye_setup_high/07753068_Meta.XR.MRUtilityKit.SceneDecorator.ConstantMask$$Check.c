/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ConstantMask$$Check
ENTRY_POINT: 07753068
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


void Meta_XR_MRUtilityKit_SceneDecorator_ConstantMask__Check(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uStack00000000000000e0;
  int iStack00000000000000e4;
  int iStack00000000000000e8;
  uint uStack00000000000000ec;
  
  while( true ) {
    if ((int)unaff_x26[3] == 0) break;
    unaff_x26[4] = unaff_x27;
    thunk_FUN_044bb4b4(unaff_x26 + 4,unaff_x27);
    FUN_0771ec00(unaff_x25,unaff_x26,0);
    do {
      if (iStack00000000000000e8 < iStack00000000000000e4 + iStack00000000000000e8) {
        if (unaff_x24 == 0) goto LAB_07753138;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        lVar3 = (long)iStack00000000000000e8;
        do {
          if (uVar1 <= (uint)lVar3) goto LAB_0775315c;
          *(int *)(unaff_x24 + 0x20 + lVar3 * 4) =
               *(int *)(unaff_x24 + 0x20 + lVar3 * 4) - unaff_w21;
          lVar3 = lVar3 + 1;
        } while (lVar3 < iStack00000000000000e4 + iStack00000000000000e8);
      }
      lVar3 = *(long *)(unaff_x23 + 0x130);
      if (lVar3 == 0) goto LAB_07753138;
      if (*(uint *)(lVar3 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
      lVar3 = *(long *)(lVar3 + (long)(int)uStack00000000000000ec * 8 + 0x20);
      if ((lVar3 == 0) || (unaff_x20 == 0)) goto LAB_07753138;
      if (*(uint *)(unaff_x20 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
      FUN_07a612b4(unaff_x24,iStack00000000000000e8,*(undefined8 *)(lVar3 + 0x10),
                   *(undefined4 *)(unaff_x20 + (long)(int)uStack00000000000000ec * 4 + 0x20),
                   iStack00000000000000e4,0);
      uStack00000000000000ec = uStack00000000000000ec + 1;
      if (*(long *)(unaff_x23 + 0x130) == 0) goto LAB_07753138;
      if (*(int *)(*(long *)(unaff_x23 + 0x130) + 0x18) <= (int)uStack00000000000000ec) {
        return;
      }
      if (unaff_x28 == 0) goto LAB_07753138;
      if (*(uint *)(unaff_x28 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
      lVar3 = (long)(int)uStack00000000000000ec;
      lVar4 = *(long *)(unaff_x28 + lVar3 * 8 + 0x20);
      if ((lVar4 == 0) || (lVar5 = *(long *)(unaff_x22 + 0x70), lVar5 == 0)) goto LAB_07753138;
      if (*(uint *)(lVar5 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
      iStack00000000000000e8 = *(int *)(lVar5 + lVar3 * 4 + 0x20);
      unaff_x24 = *(long *)(lVar4 + 0x10);
      lVar4 = *(long *)(unaff_x22 + 0x78);
      if (lVar4 == 0) goto LAB_07753138;
      if (*(uint *)(lVar4 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
      iStack00000000000000e4 = *(int *)(lVar4 + lVar3 * 4 + 0x20);
    } while (unaff_w19 < 4);
    lVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (lVar3 == 0) goto LAB_07753138;
    if (*(int *)(lVar3 + 0x18) == 0) break;
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
    uVar2 = FUN_07a3b850((long)&stack0x000000e8 + 4,0);
    if (*(uint *)(lVar3 + 0x18) < 2) break;
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x28),uVar2);
    if (*(uint *)(lVar3 + 0x18) < 3) break;
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30));
    uVar2 = FUN_07a3b850(&stack0x000000e8,0);
    if (*(uint *)(lVar3 + 0x18) < 4) break;
    *(undefined8 *)(lVar3 + 0x38) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x38),uVar2);
    if (*(uint *)(lVar3 + 0x18) < 5) break;
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x40));
    uVar2 = FUN_07a3b850((long)&stack0x000000e0 + 4,0);
    if (*(uint *)(lVar3 + 0x18) < 6) break;
    *(undefined8 *)(lVar3 + 0x48) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x48),uVar2);
    if (*(uint *)(lVar3 + 0x18) < 7) break;
    *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x23 + 0x130) == 0) goto LAB_07753138;
    uStack00000000000000e0 = (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x130) + 0x18);
    uVar2 = FUN_07a3b850(&stack0x000000e0,0);
    if (*(uint *)(lVar3 + 0x18) < 8) break;
    *(undefined8 *)(lVar3 + 0x58) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x58),uVar2);
    if (*(uint *)(lVar3 + 0x18) < 9) break;
    *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
    thunk_FUN_044bb4b4();
    if (unaff_x20 == 0) {
LAB_07753138:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uStack00000000000000e0 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = FUN_07a3b850(&stack0x000000e0,0);
    if (*(uint *)(lVar3 + 0x18) < 10) break;
    *(undefined8 *)(lVar3 + 0x68) = uVar2;
    thunk_FUN_044bb4b4();
    unaff_x25 = FUN_078b57fc(lVar3,0);
    unaff_x26 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
    unaff_x27 = thunk_FUN_04484e3c(*unaff_x29,&stack0x000000dc);
    if (unaff_x26 == (long *)0x0) goto LAB_07753138;
    if ((unaff_x27 != 0) &&
       (lVar3 = thunk_FUN_04485110(unaff_x27,*(undefined8 *)(*unaff_x26 + 0x40)), lVar3 == 0)) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
  }
LAB_0775315c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}



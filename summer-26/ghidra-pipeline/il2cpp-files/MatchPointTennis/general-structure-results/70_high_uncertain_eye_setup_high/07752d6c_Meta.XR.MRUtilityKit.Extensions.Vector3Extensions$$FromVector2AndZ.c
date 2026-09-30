/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Extensions.Vector3Extensions$$FromVector2AndZ
ENTRY_POINT: 07752d6c
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


void Meta_XR_MRUtilityKit_Extensions_Vector3Extensions__FromVector2AndZ(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined4 unaff_w29;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000e0;
  int iStack00000000000000e4;
  int in_stack_000000e8;
  uint uStack00000000000000ec;
  
  uVar4 = *(undefined8 *)(unaff_x23 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x23 + 0x88);
  if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_050e13a8(in_stack_000000d0,in_stack_000000c8,unaff_w26,uVar4,uVar1,unaff_w29,unaff_w27,
               *(undefined8 *)PTR_DAT_09f32800);
  puVar3 = PTR_DAT_09f31348;
  uStack00000000000000ec = 0;
  lVar6 = *(long *)(unaff_x23 + 0x130);
  while (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) <= (int)uStack00000000000000ec) {
      return;
    }
    if (unaff_x28 == 0) break;
    if (*(uint *)(unaff_x28 + 0x18) <= uStack00000000000000ec) {
LAB_0775315c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar6 = (long)(int)uStack00000000000000ec;
    lVar7 = *(long *)(unaff_x28 + lVar6 * 8 + 0x20);
    if ((lVar7 == 0) || (lVar8 = *(long *)(unaff_x22 + 0x70), lVar8 == 0)) break;
    if (*(uint *)(lVar8 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    in_stack_000000e8 = *(int *)(lVar8 + lVar6 * 4 + 0x20);
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(unaff_x22 + 0x78);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    iStack00000000000000e4 = *(int *)(lVar7 + lVar6 * 4 + 0x20);
    if (3 < unaff_w19) {
      lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x20));
      uVar4 = FUN_07a3b850(&stack0x000000ec,0);
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x28),uVar4);
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x30));
      uVar4 = FUN_07a3b850(&stack0x000000e8,0);
      if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x38) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x38),uVar4);
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x40));
      uVar4 = FUN_07a3b850((long)&stack0x000000e0 + 4,0);
      if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x48) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x48),uVar4);
      if (*(uint *)(lVar6 + 0x18) < 7) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x23 + 0x130) == 0) break;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x130) + 0x18);
      uVar4 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar6 + 0x18) < 8) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x58) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x58),uVar4);
      if (*(uint *)(lVar6 + 0x18) < 9) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
      thunk_FUN_044bb4b4();
      if (unaff_x20 == 0) break;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
      uVar4 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar6 + 0x18) < 10) goto LAB_0775315c;
      *(undefined8 *)(lVar6 + 0x68) = uVar4;
      thunk_FUN_044bb4b4();
      uVar4 = FUN_078b57fc(lVar6,0);
      plVar5 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      lVar6 = thunk_FUN_04484e3c(*(undefined8 *)puVar3,&stack0x000000dc);
      if (plVar5 == (long *)0x0) break;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
        uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar4,0);
      }
      if ((int)plVar5[3] == 0) goto LAB_0775315c;
      plVar5[4] = lVar6;
      thunk_FUN_044bb4b4(plVar5 + 4,lVar6);
      FUN_0771ec00(uVar4,plVar5,0);
    }
    if (in_stack_000000e8 < iStack00000000000000e4 + in_stack_000000e8) {
      if (lVar8 == 0) break;
      uVar2 = *(uint *)(lVar8 + 0x18);
      lVar6 = (long)in_stack_000000e8;
      do {
        if (uVar2 <= (uint)lVar6) goto LAB_0775315c;
        *(int *)(lVar8 + 0x20 + lVar6 * 4) = *(int *)(lVar8 + 0x20 + lVar6 * 4) - unaff_w21;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iStack00000000000000e4 + in_stack_000000e8);
    }
    lVar6 = *(long *)(unaff_x23 + 0x130);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    lVar6 = *(long *)(lVar6 + (long)(int)uStack00000000000000ec * 8 + 0x20);
    if ((lVar6 == 0) || (unaff_x20 == 0)) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    FUN_07a612b4(lVar8,in_stack_000000e8,*(undefined8 *)(lVar6 + 0x10),
                 *(undefined4 *)(unaff_x20 + (long)(int)uStack00000000000000ec * 4 + 0x20),
                 iStack00000000000000e4,0);
    uStack00000000000000ec = uStack00000000000000ec + 1;
    lVar6 = *(long *)(unaff_x23 + 0x130);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



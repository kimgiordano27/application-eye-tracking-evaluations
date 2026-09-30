/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__84$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 07744ac4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__84__System_Collections_IEnumerator_get_Current
               (void)

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
  undefined4 unaff_w24;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000060;
  int iStack0000000000000064;
  int in_stack_00000068;
  uint uStack000000000000006c;
  
  FUN_07a612b4();
  uVar1 = *(uint *)(unaff_x23 + 8);
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_07a612b4(in_stack_00000008,unaff_w26,*(undefined8 *)(unaff_x23 + 0x30),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    FUN_07a612b4(in_stack_00000010,unaff_w26,*(undefined8 *)(unaff_x23 + 0x38),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    FUN_07a612b4(in_stack_00000018,unaff_w26,*(undefined8 *)(unaff_x23 + 0x40),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    FUN_07a612b4(in_stack_00000020,unaff_w26,*(undefined8 *)(unaff_x23 + 0x48),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_07a612b4(in_stack_00000028,unaff_w26,*(undefined8 *)(unaff_x23 + 0x50),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    FUN_07a612b4(in_stack_00000030,unaff_w26,*(undefined8 *)(unaff_x23 + 0x58),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    FUN_07a612b4(in_stack_00000038,unaff_w26,*(undefined8 *)(unaff_x23 + 0x60),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    FUN_07a612b4(in_stack_00000040,unaff_w26,*(undefined8 *)(unaff_x23 + 0x68),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    FUN_07a612b4(in_stack_00000048,unaff_w26,*(undefined8 *)(unaff_x23 + 0x70),unaff_w24,unaff_w27,0
                );
    uVar1 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_07a612b4(in_stack_00000050,unaff_w26,*(undefined8 *)(unaff_x23 + 0x28),unaff_w24,unaff_w27,0
                );
  }
  puVar2 = PTR_DAT_09f31348;
  uStack000000000000006c = 0;
  lVar5 = *(long *)(unaff_x23 + 0x78);
  while (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) <= (int)uStack000000000000006c) {
      return;
    }
    if (unaff_x28 == 0) break;
    if (*(uint *)(unaff_x28 + 0x18) <= uStack000000000000006c) {
LAB_07744c24:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar5 = (long)(int)uStack000000000000006c;
    lVar6 = *(long *)(unaff_x28 + lVar5 * 8 + 0x20);
    if ((lVar6 == 0) || (lVar7 = *(long *)(unaff_x22 + 0x70), lVar7 == 0)) break;
    if (*(uint *)(lVar7 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
    in_stack_00000068 = *(int *)(lVar7 + lVar5 * 4 + 0x20);
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(unaff_x22 + 0x78);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
    iStack0000000000000064 = *(int *)(lVar6 + lVar5 * 4 + 0x20);
    if (3 < unaff_w19) {
      lVar5 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x20));
      uVar3 = FUN_07a3b850(&stack0x0000006c,0);
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x28),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x30));
      uVar3 = FUN_07a3b850(&stack0x00000068,0);
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x38) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x38),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x40));
      uVar3 = FUN_07a3b850((long)&stack0x00000060 + 4,0);
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x48) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x48),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x23 + 0x78) == 0) break;
      uStack0000000000000060 = (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x78) + 0x18);
      uVar3 = FUN_07a3b850(&stack0x00000060,0);
      if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x58) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x58),uVar3);
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
      thunk_FUN_044bb4b4();
      if (unaff_x20 == 0) break;
      uStack0000000000000060 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
      uVar3 = FUN_07a3b850(&stack0x00000060,0);
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_07744c24;
      *(undefined8 *)(lVar5 + 0x68) = uVar3;
      thunk_FUN_044bb4b4();
      uVar3 = FUN_078b57fc(lVar5,0);
      plVar4 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      lVar5 = thunk_FUN_04484e3c(*(undefined8 *)puVar2,&stack0x0000005c);
      if (plVar4 == (long *)0x0) break;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar3,0);
      }
      if ((int)plVar4[3] == 0) goto LAB_07744c24;
      plVar4[4] = lVar5;
      thunk_FUN_044bb4b4(plVar4 + 4,lVar5);
      FUN_0771ec00(uVar3,plVar4,0);
    }
    if (in_stack_00000068 < iStack0000000000000064 + in_stack_00000068) {
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      lVar5 = (long)in_stack_00000068;
      do {
        if (uVar1 <= (uint)lVar5) goto LAB_07744c24;
        *(int *)(lVar7 + 0x20 + lVar5 * 4) = *(int *)(lVar7 + 0x20 + lVar5 * 4) - unaff_w21;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack0000000000000064 + in_stack_00000068);
    }
    lVar5 = *(long *)(unaff_x23 + 0x78);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
    lVar5 = *(long *)(lVar5 + (long)(int)uStack000000000000006c * 8 + 0x20);
    if ((lVar5 == 0) || (unaff_x20 == 0)) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uStack000000000000006c) goto LAB_07744c24;
    FUN_07a612b4(lVar7,in_stack_00000068,*(undefined8 *)(lVar5 + 0x10),
                 *(undefined4 *)(unaff_x20 + (long)(int)uStack000000000000006c * 4 + 0x20),
                 iStack0000000000000064,0);
    uStack000000000000006c = uStack000000000000006c + 1;
    lVar5 = *(long *)(unaff_x23 + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



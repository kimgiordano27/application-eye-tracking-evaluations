/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$ClearGroupPresence
ENTRY_POINT: 077629e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__ClearGroupPresence(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong unaff_x19;
  long unaff_x20;
  long lVar7;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long *plVar8;
  int iStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (unaff_x28 != (long *)0x0) {
    lVar4 = thunk_FUN_04485110(unaff_x26,*(undefined8 *)(*unaff_x28 + 0x40));
    if (lVar4 == 0) {
LAB_07762b7c:
      uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar5,0);
    }
    if ((int)unaff_x28[3] == 0) {
LAB_07762b78:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    unaff_x28[4] = unaff_x26;
    thunk_FUN_044bb4b4(unaff_x28 + 4,unaff_x26);
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x19) goto LAB_07762b78;
    FUN_077622bc(unaff_x27,*(undefined8 *)(unaff_x20 + unaff_x19 * 8),0);
    unaff_w22 = unaff_w22 + 1;
    in_stack_00000018._4_4_ = unaff_w22;
    do {
      unaff_x19 = unaff_x19 + 1;
      if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x19) {
        if (in_stack_00000010 != 0) {
          *(int *)(in_stack_00000010 + 0x38) = unaff_w22;
          *(long *)(in_stack_00000010 + 0x20) = unaff_x27;
          thunk_FUN_044bb4b4((long *)(in_stack_00000010 + 0x20),unaff_x27);
          *(float *)(in_stack_00000010 + 0x34) =
               (float)(iStack0000000000000004 * iStack0000000000000000 * unaff_w22);
          if (3 < *(int *)(in_stack_00000008 + 0x10)) {
            uVar5 = FUN_07a3b850((long)&stack0x00000018 + 4,0);
            uVar6 = FUN_07a5081c((float *)(in_stack_00000010 + 0x34),0);
            uVar5 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32c38,uVar5,
                                 *(undefined8 *)PTR_DAT_09f32c40,uVar6,0);
            lVar7 = *(long *)PTR_DAT_09f22e40;
            lVar4 = *(long *)(lVar7 + 0x38);
            if (lVar4 == 0) {
              FUN_04482014(lVar7);
              lVar4 = *(long *)(lVar7 + 0x38);
            }
            lVar4 = *(long *)(lVar4 + 0x10);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_04481fb8();
            }
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar5,**(undefined8 **)(lVar4 + 0xb8),0);
          }
          return 1;
        }
        goto LAB_07762b74;
      }
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x19) goto LAB_07762b78;
      lVar4 = FUN_077622bc(unaff_x27,*(undefined8 *)(unaff_x20 + unaff_x19 * 8),0);
    } while (lVar4 != 0);
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x19) goto LAB_07762b78;
    lVar4 = *(long *)(unaff_x20 + unaff_x19 * 8);
    if (lVar4 == 0) break;
    if ((unaff_w24 < *(int *)(lVar4 + 0x1c)) && (unaff_w23 < *(int *)(lVar4 + 0x20))) {
      return 0;
    }
    lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32bf8);
    FUN_07762244(lVar4,0);
    if (*(long *)(unaff_x27 + 0x20) == 0) break;
    iVar1 = *(int *)(*(long *)(unaff_x27 + 0x20) + 0x18);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c00);
    FUN_07a80df4(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(int *)(lVar7 + 0x18) = iVar1 + unaff_w24;
    *(int *)(lVar7 + 0x1c) = unaff_w23;
    if (lVar4 == 0) break;
    *(long *)(lVar4 + 0x20) = lVar7;
    thunk_FUN_044bb4b4((long *)(lVar4 + 0x20),lVar7);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32bf8);
    FUN_07762244(lVar7,1);
    if (*(long *)(unaff_x27 + 0x20) == 0) break;
    uVar2 = *(undefined4 *)(*(long *)(unaff_x27 + 0x20) + 0x18);
    lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c00);
    FUN_07a80df4(lVar3,0);
    *(undefined4 *)(lVar3 + 0x10) = uVar2;
    *(undefined4 *)(lVar3 + 0x14) = 0;
    *(int *)(lVar3 + 0x18) = unaff_w24;
    *(int *)(lVar3 + 0x1c) = unaff_w23;
    if (lVar7 == 0) break;
    *(long *)(lVar7 + 0x20) = lVar3;
    thunk_FUN_044bb4b4((long *)(lVar7 + 0x20),lVar3);
    plVar8 = *(long **)(lVar4 + 0x18);
    if (plVar8 == (long *)0x0) break;
    lVar3 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar8 + 0x40));
    if (lVar3 == 0) goto LAB_07762b7c;
    if (*(uint *)(plVar8 + 3) < 2) goto LAB_07762b78;
    plVar8[5] = lVar7;
    thunk_FUN_044bb4b4(plVar8 + 5,lVar7);
    unaff_x26 = unaff_x27;
    unaff_x27 = lVar4;
    unaff_x28 = *(long **)(lVar4 + 0x18);
  }
LAB_07762b74:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



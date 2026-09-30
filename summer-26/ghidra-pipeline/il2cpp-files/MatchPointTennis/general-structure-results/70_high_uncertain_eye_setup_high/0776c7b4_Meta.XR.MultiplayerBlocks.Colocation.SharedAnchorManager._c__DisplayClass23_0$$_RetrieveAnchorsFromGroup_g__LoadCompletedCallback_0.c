/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<>c__DisplayClass23_0$$<RetrieveAnchorsFromGroup>g__LoadCompletedCallback|0
ENTRY_POINT: 0776c7b4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass23_0__<RetrieveAnchorsFromGroup>g__LoadCompletedCallback_0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  long lVar7;
  long unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  do {
    uVar2 = FUN_0952c404(param_1,param_2,param_3);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(in_stack_00000028 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar5 = (long *)FUN_05badb74(*(long *)(in_stack_00000028 + 0x40),unaff_w20,*unaff_x23);
      uVar4 = *(undefined8 *)PTR_DAT_09f30ea0;
      if (plVar5 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      uVar4 = FUN_078b4f58(uVar4,uVar6,*(undefined8 *)PTR_DAT_09f330a0,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(uVar4,0);
      lVar3 = *(long *)(in_stack_00000028 + 0x38);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<AnchorCreationTask>d__21__MoveNext:
      *(undefined1 *)(lVar3 + 0x10) = 0;
      FUN_0776ccfc();
      return 0;
    }
    uVar2 = (ulong)*(uint *)(unaff_x21 + 0x18);
    unaff_x25 = unaff_x25 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x25) {
      do {
        lVar3 = *(long *)(in_stack_00000028 + 0x40);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        unaff_w20 = unaff_w20 + 1;
        if (*(int *)(lVar3 + 0x18) <= unaff_w20) {
          lVar7 = *(long *)(in_stack_00000028 + 0x48);
          if (lVar7 != 0) {
            in_stack_00000018._4_4_ = *(int *)(lVar3 + 0x18);
            uVar4 = FUN_07a3b850((long)&stack0x00000018 + 4,0);
            uVar4 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f33090,uVar4,
                                 *(undefined8 *)PTR_DAT_09f33098,0);
            (**(code **)(lVar7 + 0x18))
                      (DAT_01c7660c,*(undefined8 *)(lVar7 + 0x40),uVar4,
                       *(undefined8 *)(lVar7 + 0x28));
          }
          uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30e70);
          FUN_05bad610(uVar4,*(undefined8 *)PTR_DAT_09f30e78);
          uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32fc0);
          FUN_05bad610(uVar4,*(undefined8 *)PTR_DAT_09f32fb8);
          lVar3 = FUN_07769854();
          uVar1 = *(undefined4 *)(unaff_x19 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_09f30dd0 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar2 = FUN_0777ff38(lVar3,uVar1,0);
          if ((uVar2 & 1) != 0) {
            if (((*(char *)(unaff_x19 + 0x33) != '\0') && (*(int *)(unaff_x19 + 0x44) - 3U < 2)) &&
               (2 < *(int *)(unaff_x19 + 0x10))) {
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_094c33b0(*(undefined8 *)PTR_DAT_09f33088,0);
            }
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(long *)(lVar3 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_0776ccc0(*(long *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x90));
            if (*(char *)(in_stack_00000028 + 0x31) != '\0') {
              uVar4 = FUN_07769b6c();
              *(undefined8 *)(in_stack_00000028 + 0x18) = uVar4;
              thunk_FUN_044bb4b4();
              *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
              return 1;
            }
            uVar4 = FUN_07769a7c();
            *(undefined8 *)(in_stack_00000028 + 0x18) = uVar4;
            thunk_FUN_044bb4b4();
            *(undefined4 *)(in_stack_00000028 + 0x10) = 2;
            return 1;
          }
          lVar3 = *(long *)(in_stack_00000028 + 0x38);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          goto 
          Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<AnchorCreationTask>d__21__MoveNext
          ;
        }
        uVar4 = FUN_05badb74(lVar3,unaff_w20,*unaff_x23);
        unaff_x21 = FUN_0775e914(uVar4,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
      } while ((int)*(ulong *)(unaff_x21 + 0x18) < 1);
      unaff_x25 = 0;
      uVar2 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
      unaff_x26 = unaff_x21 + 0x20;
    }
    if (uVar2 <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    param_1 = *(undefined8 *)(unaff_x26 + unaff_x25 * 8);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    param_2 = 0;
    param_3 = 0;
  } while( true );
}



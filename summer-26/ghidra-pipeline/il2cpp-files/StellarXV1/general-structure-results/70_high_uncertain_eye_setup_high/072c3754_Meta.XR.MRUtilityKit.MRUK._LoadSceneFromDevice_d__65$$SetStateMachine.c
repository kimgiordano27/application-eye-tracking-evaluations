/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromDevice>d__65$$SetStateMachine
ENTRY_POINT: 072c3754
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromDevice>d__65__SetStateMachine(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  do {
    if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_072fd3e0(param_1,0,0);
LAB_072c3654:
    do {
      uVar4 = FUN_05385f24(&stack0x00000030,*unaff_x26);
      plVar3 = in_stack_00000048;
      uVar2 = in_stack_00000040;
      if ((uVar4 & 1) == 0) {
        FUN_05386044(&stack0x00000030,*(undefined8 *)PTR_DAT_09287440);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          FUN_06efc7c4();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar5 = thunk_FUN_0408781c(in_stack_00000048,0);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_07691f40(uVar5);
      if ((uVar4 & 1) != 0) {
        if (unaff_x21 != 0) {
          lVar8 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar2;
              thunk_FUN_040ec700(puVar6,uVar2);
            }
            else {
              FUN_05c26d88();
            }
            goto LAB_072c3654;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_072bae30();
    } while ((uVar4 & 1) == 0);
    plVar7 = (long *)FUN_0767be1c();
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_07691f40(plVar7,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_07691f40(uVar5,plVar7,0);
      if ((uVar4 & 1) != 0) {
        if (unaff_x21 != 0) {
          lVar8 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar2;
              thunk_FUN_040ec700(puVar6,uVar2);
            }
            else {
              FUN_05c26d88();
            }
            goto LAB_072c3654;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar4 = (**(code **)(*plVar7 + 0x5c8))(plVar7,*(undefined8 *)(*plVar7 + 0x5d0));
      if (((uVar4 & 1) == 0) || (*plVar3 != *(long *)(unaff_x27 + 0x90))) goto LAB_072c3654;
      if (*(int *)(*(long *)(unaff_x27 + 0x98) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_076b1518(plVar7,plVar3,&stack0x00000028,0);
      if ((uVar4 & 1) != 0) {
        if (unaff_x21 != 0) {
          lVar8 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar2;
              thunk_FUN_040ec700(puVar6,uVar2);
            }
            else {
              FUN_05c26d88();
            }
            goto LAB_072c3654;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_072c3654;
    }
    param_1 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092c3518);
  } while( true );
}



/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromDevice>d__66$$MoveNext
ENTRY_POINT: 072c37d0
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


void Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromDevice>d__66__MoveNext(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  while( true ) {
    *(int *)(unaff_x21 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = unaff_x22;
      thunk_FUN_040ec700(puVar6,unaff_x22);
    }
    else {
      FUN_05c26d88();
    }
LAB_072c3654:
    do {
      uVar3 = FUN_05385f24(&stack0x00000030,*unaff_x26);
      plVar2 = in_stack_00000048;
      unaff_x22 = in_stack_00000040;
      if ((uVar3 & 1) == 0) {
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
      uVar4 = thunk_FUN_0408781c(in_stack_00000048,0);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_07691f40(uVar4);
      if ((uVar3 & 1) != 0) {
        if (unaff_x21 != 0) {
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = unaff_x22;
              thunk_FUN_040ec700(puVar6,unaff_x22);
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
      uVar3 = FUN_072bae30();
    } while ((uVar3 & 1) == 0);
    plVar5 = (long *)FUN_0767be1c();
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_07691f40(plVar5,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092c3518);
      if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_072fd3e0(uVar4,0,0);
      goto LAB_072c3654;
    }
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_07691f40(uVar4,plVar5,0);
    if ((uVar3 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar3 = (**(code **)(*plVar5 + 0x5c8))(plVar5,*(undefined8 *)(*plVar5 + 0x5d0));
      if (((uVar3 & 1) != 0) && (*plVar2 == *(long *)(unaff_x27 + 0x90))) {
        if (*(int *)(*(long *)(unaff_x27 + 0x98) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar3 = FUN_076b1518(plVar5,plVar2,&stack0x00000028,0);
        if ((uVar3 & 1) != 0) {
          if (unaff_x21 != 0) {
            lVar7 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(unaff_x21 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *puVar6 = unaff_x22;
                thunk_FUN_040ec700(puVar6,unaff_x22);
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
      }
      goto LAB_072c3654;
    }
    if (unaff_x21 == 0) break;
    in_w10 = *(int *)(unaff_x21 + 0x1c);
    param_1 = *(long *)(unaff_x21 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



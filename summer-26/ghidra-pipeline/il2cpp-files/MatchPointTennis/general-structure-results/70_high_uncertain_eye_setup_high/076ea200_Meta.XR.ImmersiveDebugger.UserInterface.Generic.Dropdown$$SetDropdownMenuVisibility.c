/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown$$SetDropdownMenuVisibility
ENTRY_POINT: 076ea200
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__SetDropdownMenuVisibility
               (long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  long unaff_x19;
  int unaff_w20;
  int iVar13;
  ulong unaff_x21;
  ulong uVar14;
  undefined8 uVar15;
  uint unaff_w25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar16;
  int in_stack_00000008;
  
  while( true ) {
    lVar4 = FUN_05badb74(param_1,param_2,param_3);
    if (*(long *)(unaff_x19 + 0x2d8) == 0) break;
    FUN_078c264c(*(long *)(unaff_x19 + 0x2d8),0,0);
    lVar5 = *(long *)(unaff_x19 + 0x2d8);
    if (unaff_w20 == 0) {
      if (lVar5 == 0) break;
      lVar5 = FUN_078bb7b4(lVar5,*(undefined8 *)(unaff_x19 + 0xe8),0);
      if ((((*(long *)(unaff_x19 + 0x270) == 0) ||
           (lVar16 = FUN_05badb74(*(long *)(unaff_x19 + 0x270),unaff_x21 & 0xffffffff,*unaff_x28),
           lVar16 == 0)) || (lVar5 == 0)) ||
         ((lVar5 = FUN_078bb7b4(lVar5,*(undefined8 *)(lVar16 + 0x28),0), lVar5 == 0 ||
          (FUN_078bb7b4(lVar5,*unaff_x27,0), lVar4 == 0)))) break;
    }
    else {
      if ((lVar4 == 0) || (lVar5 == 0)) break;
      FUN_078bb7b4(lVar5,*(undefined8 *)(lVar4 + 0x28),0);
    }
    if (*(long *)(lVar4 + 0x38) == 0) break;
    if (*(long *)(*(long *)(lVar4 + 0x38) + 0x18) != 0) {
      if (*(long *)(unaff_x19 + 0x2d8) == 0) break;
      FUN_078bb7b4(*(long *)(unaff_x19 + 0x2d8),*(undefined8 *)PTR_DAT_09f1e7d0,0);
      lVar5 = *(long *)(lVar4 + 0x38);
      if (lVar5 == 0) break;
      iVar12 = (int)*(ulong *)(lVar5 + 0x18);
      iVar13 = iVar12;
      if (unaff_w20 <= iVar12) {
        iVar13 = unaff_w20;
      }
      if (0 < iVar12) {
        uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        iVar2 = unaff_w20;
        if (iVar12 <= unaff_w20) {
          iVar2 = iVar12;
        }
        uVar14 = 0;
        lVar16 = 0x20;
        do {
          lVar6 = *(long *)(unaff_x19 + 0x2d8);
          if (iVar2 - 1 == uVar14) {
            if (lVar6 == 0) goto LAB_076ea468;
            lVar5 = FUN_078bb7b4(lVar6,*(undefined8 *)(unaff_x19 + 0xe8),0);
            lVar6 = *(long *)(lVar4 + 0x38);
            if (lVar6 == 0) goto LAB_076ea468;
            if ((ulong)*(uint *)(lVar6 + 0x18) <= (ulong)(iVar13 - 1)) {
LAB_076ea46c:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if ((lVar5 == 0) ||
               (lVar6 = FUN_078bb7b4(lVar5,*(undefined8 *)(lVar6 + (ulong)(iVar13 - 1) * 8 + 0x20),0
                                    ), puVar9 = unaff_x27, lVar6 == 0)) goto LAB_076ea468;
          }
          else {
            if (uVar11 <= uVar14) goto LAB_076ea46c;
            if (lVar6 == 0) goto LAB_076ea468;
            puVar9 = (undefined8 *)(lVar5 + lVar16);
          }
          FUN_078bb7b4(lVar6,*puVar9,0);
          lVar5 = *(long *)(lVar4 + 0x38);
          if (lVar5 == 0) goto LAB_076ea468;
          uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 8;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
    if (*(long *)(unaff_x19 + 0x260) == 0) break;
    plVar7 = (long *)FUN_05badb74(*(long *)(unaff_x19 + 0x260),unaff_x21 & 0xffffffff,
                                  *(undefined8 *)PTR_DAT_09f2f408);
    plVar10 = *(long **)(unaff_x19 + 0x2d8);
    if ((plVar10 == (long *)0x0) ||
       (uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170)),
       plVar7 == (long *)0x0)) break;
    (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x5f0));
    puVar3 = PTR_DAT_09f2f408;
    uVar1 = (int)unaff_x21 + 1;
    param_2 = (ulong)uVar1;
    if (uVar1 == unaff_w25) {
      iVar13 = *(int *)(unaff_x19 + 0x268) + -1;
      if ((int)unaff_w25 <= iVar13) goto LAB_076ea3fc;
      goto LAB_076ea438;
    }
    if (*(int *)(unaff_x19 + 0x268) <= (int)uVar1) {
      lVar4 = *(long *)(unaff_x19 + 0x260);
      if ((int)uVar1 < in_stack_00000008) {
        if (((lVar4 == 0) ||
            (lVar4 = FUN_05badb74(lVar4,param_2,*(undefined8 *)PTR_DAT_09f2f408), lVar4 == 0)) ||
           (lVar4 = FUN_095259a0(lVar4,0), lVar4 == 0)) break;
        FUN_0952a454(lVar4,1,0);
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x19 + 0x70);
        uVar15 = *(undefined8 *)(unaff_x19 + 0x110);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar8 = FUN_04eb2bcc(uVar8,uVar15,0,*(undefined8 *)PTR_DAT_09f2f410);
        if (lVar4 == 0) break;
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar16 = *(long *)PTR_DAT_09f2f3f8;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar4,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      *(int *)(unaff_x19 + 0x268) = *(int *)(unaff_x19 + 0x268) + 1;
    }
    param_1 = *(long *)(unaff_x19 + 0x270);
    if (param_1 == 0) break;
    param_3 = *unaff_x28;
    unaff_x21 = param_2;
  }
LAB_076ea468:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076ea3fc:
  if (((*(long *)(unaff_x19 + 0x260) == 0) ||
      (lVar4 = FUN_05badb74(*(long *)(unaff_x19 + 0x260),iVar13,*(undefined8 *)puVar3), lVar4 == 0))
     || (lVar4 = FUN_095259a0(lVar4,0), lVar4 == 0)) goto LAB_076ea468;
  FUN_0952a454(lVar4,0,0);
  iVar13 = iVar13 + -1;
  if (iVar13 < (int)unaff_w25) {
LAB_076ea438:
    *(uint *)(unaff_x19 + 0x268) = unaff_w25;
    return;
  }
  goto LAB_076ea3fc;
}



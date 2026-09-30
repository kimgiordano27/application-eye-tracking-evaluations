/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown$$Update
ENTRY_POINT: 076ea280
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__Update
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long unaff_x19;
  int unaff_w20;
  int iVar12;
  int unaff_w21;
  long unaff_x22;
  ulong uVar13;
  undefined8 uVar14;
  int unaff_w25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar15;
  int in_stack_00000008;
  
code_r0x076ea280:
  lVar4 = FUN_078bb7b4(param_1,param_2,param_3);
  if ((lVar4 != 0) && (FUN_078bb7b4(lVar4,*unaff_x27,0), unaff_x22 != 0)) {
    do {
      if (*(long *)(unaff_x22 + 0x38) == 0) break;
      if (*(long *)(*(long *)(unaff_x22 + 0x38) + 0x18) != 0) {
        if (*(long *)(unaff_x19 + 0x2d8) == 0) break;
        FUN_078bb7b4(*(long *)(unaff_x19 + 0x2d8),*(undefined8 *)PTR_DAT_09f1e7d0,0);
        lVar4 = *(long *)(unaff_x22 + 0x38);
        if (lVar4 == 0) break;
        iVar11 = (int)*(ulong *)(lVar4 + 0x18);
        iVar12 = iVar11;
        if (unaff_w20 <= iVar11) {
          iVar12 = unaff_w20;
        }
        if (0 < iVar11) {
          uVar10 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          iVar1 = unaff_w20;
          if (iVar11 <= unaff_w20) {
            iVar1 = iVar11;
          }
          uVar13 = 0;
          lVar15 = 0x20;
          do {
            lVar5 = *(long *)(unaff_x19 + 0x2d8);
            if (iVar1 - 1 == uVar13) {
              if (lVar5 == 0) goto LAB_076ea468;
              lVar4 = FUN_078bb7b4(lVar5,*(undefined8 *)(unaff_x19 + 0xe8),0);
              lVar5 = *(long *)(unaff_x22 + 0x38);
              if (lVar5 == 0) goto LAB_076ea468;
              if ((ulong)*(uint *)(lVar5 + 0x18) <= (ulong)(iVar12 - 1)) {
LAB_076ea46c:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              if ((lVar4 == 0) ||
                 (lVar5 = FUN_078bb7b4(lVar4,*(undefined8 *)(lVar5 + (ulong)(iVar12 - 1) * 8 + 0x20)
                                       ,0), puVar8 = unaff_x27, lVar5 == 0)) goto LAB_076ea468;
            }
            else {
              if (uVar10 <= uVar13) goto LAB_076ea46c;
              if (lVar5 == 0) goto LAB_076ea468;
              puVar8 = (undefined8 *)(lVar4 + lVar15);
            }
            FUN_078bb7b4(lVar5,*puVar8,0);
            lVar4 = *(long *)(unaff_x22 + 0x38);
            if (lVar4 == 0) goto LAB_076ea468;
            uVar10 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 8;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
      }
      if (*(long *)(unaff_x19 + 0x260) == 0) break;
      plVar6 = (long *)FUN_05badb74(*(long *)(unaff_x19 + 0x260),unaff_w21,
                                    *(undefined8 *)PTR_DAT_09f2f408);
      plVar9 = *(long **)(unaff_x19 + 0x2d8);
      if ((plVar9 == (long *)0x0) ||
         (uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170)),
         plVar6 == (long *)0x0)) break;
      (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x5f0));
      puVar3 = PTR_DAT_09f2f408;
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w21 == unaff_w25) {
        iVar12 = *(int *)(unaff_x19 + 0x268) + -1;
        if (unaff_w25 <= iVar12) goto LAB_076ea3fc;
        goto LAB_076ea438;
      }
      if (*(int *)(unaff_x19 + 0x268) <= unaff_w21) {
        lVar4 = *(long *)(unaff_x19 + 0x260);
        if (unaff_w21 < in_stack_00000008) {
          if (((lVar4 == 0) ||
              (lVar4 = FUN_05badb74(lVar4,unaff_w21,*(undefined8 *)PTR_DAT_09f2f408), lVar4 == 0))
             || (lVar4 = FUN_095259a0(lVar4,0), lVar4 == 0)) break;
          FUN_0952a454(lVar4,1,0);
        }
        else {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
          uVar14 = *(undefined8 *)(unaff_x19 + 0x110);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar7 = FUN_04eb2bcc(uVar7,uVar14,0,*(undefined8 *)PTR_DAT_09f2f410);
          if (lVar4 == 0) break;
          lVar15 = *(long *)(lVar4 + 0x10);
          lVar5 = *(long *)PTR_DAT_09f2f3f8;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar15 == 0) break;
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
            thunk_FUN_044bb4b4();
          }
          else {
            FUN_05bade44(lVar4,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        *(int *)(unaff_x19 + 0x268) = *(int *)(unaff_x19 + 0x268) + 1;
      }
      if (*(long *)(unaff_x19 + 0x270) == 0) break;
      unaff_x22 = FUN_05badb74(*(long *)(unaff_x19 + 0x270),unaff_w21,*unaff_x28);
      if (*(long *)(unaff_x19 + 0x2d8) == 0) break;
      FUN_078c264c(*(long *)(unaff_x19 + 0x2d8),0,0);
      lVar4 = *(long *)(unaff_x19 + 0x2d8);
      if (unaff_w20 == 0) goto LAB_076ea240;
      if ((unaff_x22 == 0) || (lVar4 == 0)) break;
      FUN_078bb7b4(lVar4,*(undefined8 *)(unaff_x22 + 0x28),0);
    } while( true );
  }
  goto LAB_076ea468;
LAB_076ea240:
  if (lVar4 == 0) goto LAB_076ea468;
  param_1 = FUN_078bb7b4(lVar4,*(undefined8 *)(unaff_x19 + 0xe8),0);
  if (((*(long *)(unaff_x19 + 0x270) == 0) ||
      (lVar4 = FUN_05badb74(*(long *)(unaff_x19 + 0x270),unaff_w21,*unaff_x28), lVar4 == 0)) ||
     (param_1 == 0)) goto LAB_076ea468;
  param_2 = *(undefined8 *)(lVar4 + 0x28);
  param_3 = 0;
  goto code_r0x076ea280;
LAB_076ea3fc:
  if (((*(long *)(unaff_x19 + 0x260) == 0) ||
      (lVar4 = FUN_05badb74(*(long *)(unaff_x19 + 0x260),iVar12,*(undefined8 *)puVar3), lVar4 == 0))
     || (lVar4 = FUN_095259a0(lVar4,0), lVar4 == 0)) {
LAB_076ea468:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0952a454(lVar4,0,0);
  iVar12 = iVar12 + -1;
  if (iVar12 < unaff_w25) {
LAB_076ea438:
    *(int *)(unaff_x19 + 0x268) = unaff_w25;
    return;
  }
  goto LAB_076ea3fc;
}



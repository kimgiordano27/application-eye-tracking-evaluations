/*
FUNCTION_NAME: System.ReadOnlySpan<UnityTransport.SendTarget>$$ToArray
ENTRY_POINT: 045cc360
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<UnityTransport_SendTarget>__ToArray(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int unaff_w23;
  int iVar10;
  undefined8 uVar11;
  
  iVar1 = FUN_045cbc4c(param_2,*(undefined8 *)(param_1 + 0x68));
  if ((int)(unaff_w23 - unaff_w19) < iVar1) {
    FUN_05508fa4(5,0);
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    FUN_02dcfd18(lVar4);
  }
  lVar4 = thunk_FUN_02dd3048();
  if (lVar4 == 0) {
    plVar9 = (long *)thunk_FUN_02da6564();
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x4a8))(plVar9,*(undefined8 *)(*plVar9 + 0x4b0));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
      }
      plVar3 = (long *)FUN_054f73b4(uVar11,0);
      if (plVar9 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x328))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x330));
        if ((uVar7 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_045cc6dc;
          uVar7 = (**(code **)(*plVar3 + 0x328))(plVar3,plVar9,*(undefined8 *)(*plVar3 + 0x330));
          if ((uVar7 & 1) == 0) {
            FUN_05509844(0);
          }
        }
        plVar9 = (long *)thunk_FUN_02dd3048();
        if (plVar9 == (long *)0x0) {
          FUN_05509844();
        }
        plVar3 = *(long **)(unaff_x21 + 0x10);
        if (plVar3 != (long *)0x0) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02dcfd18(lVar4);
          }
          lVar5 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_045cc590;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_02dd004c(plVar3,lVar4,0);
LAB_045cc590:
          iVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
          if (0 < iVar1) {
            iVar10 = 0;
            do {
              plVar3 = *(long **)(unaff_x21 + 0x10);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02dcfd18(lVar4);
              }
              lVar5 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar4) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_045cc624;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar2 = (undefined8 *)FUN_02dd004c(plVar3,lVar4,0);
LAB_045cc624:
              (*(code *)*puVar2)(plVar3,iVar10,puVar2[1]);
              lVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
                uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar11,0);
              }
              if (*(uint *)(plVar9 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              plVar9[(long)(int)unaff_w19 + 4] = lVar4;
              LeanTween__value(plVar9 + (long)(int)unaff_w19 + 4,lVar4);
              iVar10 = iVar10 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar10 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar9 = *(long **)(unaff_x21 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02dcfd18(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto System_ReadOnlySpan<OVRPlugin_Qpl_Annotation>___ctor;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 045cc414 to 046cc4a3 has its CatchHandler @ 045cc414
                       catch() { ... } // from try @ 045cc414 with catch @ 045cc414
                       catch() { ... } // from try @ 045cc4ec with catch @ 045cc414
                       catch() { ... } // from try @ 045cc64c with catch @ 045cc414
                       catch() { ... } // from try @ 045cc688 with catch @ 045cc414
                       catch() { ... } // from try @ 045cc6d8 with catch @ 045cc414 */
      puVar2 = (undefined8 *)FUN_02dd004c(plVar9,lVar5,5);
System_ReadOnlySpan<OVRPlugin_Qpl_Annotation>___ctor:
                    /* WARNING: Could not recover jumptable at 0x045cc580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar9,lVar4,unaff_w19,puVar2[1]);
      return;
    }
  }
LAB_045cc6dc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



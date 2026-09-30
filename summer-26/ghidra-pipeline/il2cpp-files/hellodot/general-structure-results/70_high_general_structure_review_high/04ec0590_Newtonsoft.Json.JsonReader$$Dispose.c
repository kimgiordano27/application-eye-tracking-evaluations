/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 04ec0590
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__Dispose(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar12;
  uint uVar13;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7ca8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8b30);
    *(undefined1 *)(unaff_x21 + 0x237) = 1;
  }
  if (unaff_x20 == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar9 = thunk_FUN_02cea894();
    uVar10 = thunk_FUN_02c7737c(PTR_DAT_065d00e0);
    FUN_04e97f6c(uVar9,uVar10,0);
LAB_04ec07b8:
    uVar10 = thunk_FUN_02c7737c(PTR_DAT_065f7ca8);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar9,uVar10);
  }
  if (*(long **)(unaff_x19 + 0x20) == (long *)0x0) goto LAB_04ec0784;
  iVar4 = (**(code **)(**(long **)(unaff_x19 + 0x20) + 0x1e8))();
  FUN_04ec0818();
  lVar11 = *(long *)(unaff_x19 + 0x38);
  if (lVar11 == 0) {
    lVar7 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8b30,0x100);
    *(long *)(unaff_x19 + 0x38) = lVar7;
    if ((lVar7 == 0) || (plVar8 = *(long **)(unaff_x19 + 0x20), plVar8 == (long *)0x0))
    goto LAB_04ec0784;
    iVar5 = (**(code **)(*plVar8 + 0x348))(plVar8,1,*(undefined8 *)(*plVar8 + 0x350));
    lVar11 = *(long *)(unaff_x19 + 0x38);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = *(int *)(lVar7 + 0x18) / iVar5;
    }
    *(int *)(unaff_x19 + 0x40) = iVar3;
    if (lVar11 == 0) goto LAB_04ec0784;
  }
  if (*(int *)(lVar11 + 0x18) < iVar4) {
    uVar12 = *(uint *)(unaff_x20 + 0x10);
    if (0 < (int)uVar12) {
      uVar13 = 0;
      do {
        uVar2 = *(uint *)(unaff_x19 + 0x40);
        uVar1 = uVar2;
        if ((int)uVar12 <= (int)uVar2) {
          uVar1 = uVar12;
        }
        if ((int)(uVar1 | uVar13) < 0) {
LAB_04ec0788:
          thunk_FUN_02c7737c(PTR_DAT_065cb038);
          uVar9 = thunk_FUN_02cea894();
          uVar10 = thunk_FUN_02c7737c(PTR_DAT_065f19d8);
          FUN_04e9ff98(uVar9,uVar10,0);
          goto LAB_04ec07b8;
        }
        if ((ulong)uVar1 + (ulong)uVar13 >> 0x1f != 0) {
          uVar9 = FUN_02ce7c8c();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar9,*(undefined8 *)PTR_DAT_065f7ca8);
        }
        if (*(int *)(unaff_x20 + 0x10) < (int)(uVar1 + uVar13)) goto LAB_04ec0788;
        iVar4 = thunk_FUN_02c8538c(0);
        lVar11 = *(long *)(unaff_x19 + 0x38);
        if (lVar11 == 0) goto LAB_04ec0784;
        plVar8 = *(long **)(unaff_x19 + 0x28);
        if (plVar8 == (long *)0x0) goto LAB_04ec0784;
        lVar7 = 0;
        if (*(int *)(lVar11 + 0x18) != 0) {
          lVar7 = lVar11 + 0x20;
        }
        uVar6 = (**(code **)(*plVar8 + 0x1b8))
                          (plVar8,unaff_x20 + (ulong)uVar13 * 2 + (long)iVar4,uVar1,lVar7,
                           *(int *)(lVar11 + 0x18),(int)uVar12 <= (int)uVar2,
                           *(undefined8 *)(*plVar8 + 0x1c0));
        plVar8 = *(long **)(unaff_x19 + 0x10);
        if (plVar8 == (long *)0x0) goto LAB_04ec0784;
        (**(code **)(*plVar8 + 0x398))
                  (plVar8,*(undefined8 *)(unaff_x19 + 0x38),0,uVar6,*(undefined8 *)(*plVar8 + 0x3a0)
                  );
        uVar12 = uVar12 - uVar1;
        uVar13 = uVar1 + uVar13;
      } while (0 < (int)uVar12);
    }
    return;
  }
  if (*(long **)(unaff_x19 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x19 + 0x20) + 600))();
    plVar8 = *(long **)(unaff_x19 + 0x10);
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04ec0780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x398))
                (plVar8,*(undefined8 *)(unaff_x19 + 0x38),0,iVar4,*(undefined8 *)(*plVar8 + 0x3a0));
      return;
    }
  }
LAB_04ec0784:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}



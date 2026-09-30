/*
FUNCTION_NAME: Unity.Properties.TypeTraits<StyleCursor>$$get_IsArray
ENTRY_POINT: 042c5368
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeTraits<StyleCursor>__get_IsArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  
  if ((in_x9 & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (unaff_x22 != 0) {
    FUN_061cb6b0();
    plVar3 = (long *)*unaff_x21;
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0(lVar6);
      }
      if (lVar4 != 0) {
        FUN_061cb6b0(lVar4,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40),0);
        plVar3 = (long *)*unaff_x21;
        if (plVar3 != (long *)0x0) {
          lVar4 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
          uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676a380);
          FUN_04cb597c();
          if (lVar4 != 0) {
            FUN_033511f0(lVar4,uVar5,0,*(undefined8 *)PTR_DAT_0676a378);
            puVar1 = PTR_DAT_0676ad30;
            if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x508), lVar4 != 0)) {
              uVar7 = *(undefined8 *)(lVar4 + 0x4b0);
              uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ad30);
              FUN_04cb597c();
              puVar2 = PTR_DAT_0676ad38;
              FUN_03448198(uVar7,uVar5,*(undefined8 *)PTR_DAT_0676ad38);
              if ((*(long *)(unaff_x20 + 0x4b0) != 0) &&
                 ((lVar4 = *(long *)(*(long *)(unaff_x20 + 0x4b0) + 0x508), lVar4 != 0 &&
                  (plVar3 = *(long **)(lVar4 + 0x4b0), plVar3 != (long *)0x0)))) {
                (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
                if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x500), lVar4 != 0)) {
                  uVar7 = *(undefined8 *)(lVar4 + 0x4b0);
                  uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                  FUN_04cb597c();
                  FUN_03448198(uVar7,uVar5,*(undefined8 *)puVar2);
                  if (((*(long *)(unaff_x20 + 0x4b0) != 0) &&
                      (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x4b0) + 0x500), lVar4 != 0)) &&
                     (plVar3 = *(long **)(lVar4 + 0x4b0), plVar3 != (long *)0x0)) {
                    (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
                    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
                    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                      lVar4 = FUN_02d9a2e0();
                    }
                    if (*(int *)(lVar4 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60) +
                                  0x135) & 1) == 0) {
                      FUN_02d9a2e0();
                    }
                    FUN_061cb6b0();
                    lVar6 = *(long *)(unaff_x20 + 0x4a8);
                    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0);
                    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                      lVar4 = FUN_02d9a2e0();
                    }
                    if (lVar6 != 0) {
                      FUN_061cb6b0(lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



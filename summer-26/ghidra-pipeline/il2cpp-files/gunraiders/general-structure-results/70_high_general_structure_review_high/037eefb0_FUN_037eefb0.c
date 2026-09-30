/*
FUNCTION_NAME: FUN_037eefb0
ENTRY_POINT: 037eefb0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_037eefb0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if ((DAT_04538fc2 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<Vector2>__);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Axis>__);
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<ListCollection>__);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Constraint>__);
    FUN_01c5d288(Method_UnityEngine_UIElements_IMGUIContainer_OnGenerateVisualContent__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                );
    DAT_04538fc2 = 1;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_0385e628(*(long *)(param_1 + 0x50),0,0);
  lVar6 = param_3;
  if (param_3 == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  plVar8 = *(long **)(lVar6 + 0x30);
  if (plVar8 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if (iVar2 != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      param_2 = FUN_03156e1c(param_2,0);
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      plVar5 = (long *)(**(code **)(*plVar8 + 0x198))
                                 (plVar8,param_2,*(undefined8 *)(param_1 + 0x20),
                                  *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(*plVar8 + 0x1a0));
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_0385e628(*(long *)(param_1 + 0x50),plVar5,0);
      uVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      if ((uVar3 < 5) && ((1 << (ulong)(uVar3 & 0x1f) & 0x16U) != 0)) {
        iVar2 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        if (iVar2 == 1) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = *(undefined8 *)PTR_DAT_0422fd68;
          lVar6 = thunk_FUN_01c495e4(plVar5,uVar9);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar5,uVar9);
          }
          if (0 < *(int *)(lVar6 + 0x18)) {
            uVar10 = 0;
            do {
              uVar7 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
              if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac(uVar7,uVar7 & 0xffffffff);
              }
              FUN_037eff18(param_1,uVar7 & 0xffffffff,*(undefined8 *)(lVar6 + 0x20 + uVar10 * 8));
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)*(int *)(lVar6 + 0x18));
          }
        }
        else {
          uVar4 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
          if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar5);
          }
          FUN_037eff18(param_1,uVar4,plVar5);
        }
      }
      lVar6 = param_3;
      if (param_3 == 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if ((*(long *)(lVar6 + 0x48) != 0xffffffff) &&
         (*(long *)(lVar6 + 0x48) < (long)*(int *)(param_2 + 0x10))) {
        FUN_038d100c(param_1,*(undefined8 *)
                              Method_UnityEngine_UIElements_IMGUIContainer_OnGenerateVisualContent__
                     ,param_2,0);
      }
      if ((*(long *)(lVar6 + 0x50) != 0xffffffff) &&
         ((long)*(int *)(param_2 + 0x10) < *(long *)(lVar6 + 0x50))) {
        FUN_038d100c(param_1,*(undefined8 *)
                              Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                     ,param_2,0);
      }
      if ((*(long *)(lVar6 + 0x58) != 0) &&
         (uVar10 = FUN_037cbd50(lVar6,plVar5,0), (uVar10 & 1) == 0)) {
        iVar2 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (iVar2 == 8) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          FUN_038d100c(param_1,*(undefined8 *)
                                Method_UnityEngine_UI_LayoutGroup_SetProperty<Vector2>__,uVar9,0);
        }
        else {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          FUN_038d100c(param_1,*(undefined8 *)
                                Method_UnityEngine_JsonUtility_FromJson<ListCollection>__,uVar9,0);
        }
      }
      uVar10 = FUN_037cbe08(lVar6,plVar5,0);
      if ((uVar10 & 1) == 0) {
        if (param_3 == 0) {
          lVar6 = *(long *)(param_1 + 0x60);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = *(undefined8 *)(lVar6 + 0x30);
          uVar1 = *(undefined8 *)(lVar6 + 0x38);
          if (*(int *)(*(long *)Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__ + 0xe0)
              == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_03808eec(uVar9,uVar1,0);
          FUN_038d100c(param_1,*(undefined8 *)
                                Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Axis>__
                       ,uVar9,0);
        }
        else {
          plVar8 = *(long **)(param_3 + 0x10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          FUN_038d100c(param_1,*(undefined8 *)
                                Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Constraint>__
                       ,uVar9,0);
        }
      }
    }
  }
  return;
}



/*
FUNCTION_NAME: FUN_038ecc3c
ENTRY_POINT: 038ecc3c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_038ecc3c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if ((DAT_0453981e & 1) == 0) {
    FUN_01c5d288(Method_System_Net_Sockets_NetworkStream_Read__);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<Vector2>__);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Axis>__);
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<ListCollection>__);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Constraint>__);
    DAT_0453981e = 1;
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
  plVar9 = *(long **)(lVar6 + 0x30);
  if (plVar9 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    if (iVar3 != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      param_2 = FUN_03156e1c(param_2,0);
    }
    puVar2 = Method_System_Net_Sockets_NetworkStream_Read__;
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)Method_System_Net_Sockets_NetworkStream_Read__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar6 = *(long *)puVar2;
    }
    plVar7 = (long *)(**(code **)(*plVar9 + 0x198))
                               (plVar9,param_2,uVar10,**(undefined8 **)(lVar6 + 0xb8),
                                *(undefined8 *)(*plVar9 + 0x1a0));
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_0385e628(*(long *)(param_1 + 0x50),plVar7,0);
    uVar4 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    if ((uVar4 < 5) && ((1 << (ulong)(uVar4 & 0x1f) & 0x16U) != 0)) {
      iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      if (iVar3 == 1) {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = *(undefined8 *)PTR_DAT_0422fd68;
        lVar6 = thunk_FUN_01c495e4(plVar7,uVar10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar7,uVar10);
        }
        if (0 < *(int *)(lVar6 + 0x18)) {
          uVar11 = 0;
          do {
            uVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
            if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac(uVar8,uVar8 & 0xffffffff);
            }
            FUN_038ed5a8(param_1,uVar8 & 0xffffffff,*(undefined8 *)(lVar6 + 0x20 + uVar11 * 8));
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)*(int *)(lVar6 + 0x18));
        }
      }
      else {
        uVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
        if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar7);
        }
        FUN_038ed5a8(param_1,uVar5,plVar7);
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
    if ((*(long *)(lVar6 + 0x58) != 0) && (uVar11 = FUN_037cbd50(lVar6,plVar7,0), (uVar11 & 1) == 0)
       ) {
      iVar3 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      if (iVar3 == 8) {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        FUN_038d100c(param_1,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<Vector2>__
                     ,uVar10,0);
      }
      else {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        FUN_038d100c(param_1,*(undefined8 *)
                              Method_UnityEngine_JsonUtility_FromJson<ListCollection>__,uVar10,0);
      }
    }
    uVar11 = FUN_037cbe08(lVar6,plVar7,0);
    if ((uVar11 & 1) == 0) {
      if (param_3 == 0) {
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = *(undefined8 *)(lVar6 + 0x30);
        uVar1 = *(undefined8 *)(lVar6 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__ + 0xe0) ==
            0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_03808eec(uVar10,uVar1,0);
        FUN_038d100c(param_1,*(undefined8 *)
                              Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Axis>__,
                     uVar10,0);
      }
      else {
        plVar9 = *(long **)(param_3 + 0x10);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        FUN_038d100c(param_1,*(undefined8 *)
                              Method_UnityEngine_UI_LayoutGroup_SetProperty<GridLayoutGroup_Constraint>__
                     ,uVar10,0);
      }
    }
  }
  return;
}



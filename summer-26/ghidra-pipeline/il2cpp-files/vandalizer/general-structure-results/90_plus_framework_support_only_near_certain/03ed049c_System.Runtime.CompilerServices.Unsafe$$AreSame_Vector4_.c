/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<Vector4>
ENTRY_POINT: 03ed049c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 135
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void System_Runtime_CompilerServices_Unsafe__AreSame<Vector4>
               (long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x22;
  
  if (param_1 == 0) {
    FUN_031f20f4(PTR_DAT_075d7c40);
    FUN_031f20f4(PTR_DAT_075d7c48);
    FUN_031f20f4(PTR_DAT_075d7c50);
    FUN_031f20f4(PTR_DAT_075d7c58);
    if (*(long *)(unaff_x22 + 0x38) == 0) {
      FUN_0322bf50();
    }
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar3 = thunk_FUN_0322f148();
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075d7c60);
    FUN_05d6f364(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3);
  }
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  plVar1 = (long *)thunk_FUN_0322f04c(param_2,lVar5);
  if ((plVar1 == (long *)0x0) ||
     (lVar5 = thunk_FUN_0322f04c(param_3,*(undefined8 *)PTR_DAT_075d7c48), lVar5 == 0)) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
    }
    plVar1 = (long *)thunk_FUN_0322f04c(param_2,lVar5);
    if ((plVar1 == (long *)0x0) ||
       (lVar5 = thunk_FUN_0322f04c(param_3,*(undefined8 *)PTR_DAT_075d7c50), lVar5 == 0)) {
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4(lVar5);
      }
      plVar1 = (long *)thunk_FUN_0322f04c(param_2,lVar5);
      if ((plVar1 == (long *)0x0) ||
         (lVar5 = thunk_FUN_0322f04c(param_3,*(undefined8 *)PTR_DAT_075d7c58), lVar5 == 0)) {
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0322bef4(lVar5);
        }
        plVar1 = (long *)thunk_FUN_0322f04c(param_2,lVar5);
        if ((plVar1 == (long *)0x0) ||
           (lVar5 = thunk_FUN_0322f04c(param_3,*(undefined8 *)PTR_DAT_075d7c40), lVar5 == 0)) {
          lVar5 = **(long **)(unaff_x22 + 0x38);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0322bef4(lVar5);
          }
          lVar6 = *param_2;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_0322c1e8(param_2,lVar5,2);
System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>:
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          goto System_Runtime_CompilerServices_Unsafe__As<object>;
        }
        lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0322bef4(lVar6);
        }
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6)
            goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
      }
      else {
        lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0322bef4(lVar6);
        }
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6)
            goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4(lVar6);
      }
      lVar7 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6)
          goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0322bef4(lVar6);
    }
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6)
        goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,lVar6,0);
  param_2 = plVar1;
  param_3 = lVar5;
System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
System_Runtime_CompilerServices_Unsafe__As<object>:
                    /* WARNING: Could not recover jumptable at 0x03ed0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>:
  puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  param_2 = plVar1;
  param_3 = lVar5;
  goto System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>;
}



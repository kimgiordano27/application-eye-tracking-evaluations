/*
FUNCTION_NAME: Unity.Hierarchy.HierarchyNodeTypeHandlerBase$$InvokeDispose
ENTRY_POINT: 05fb3408
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Unity_Hierarchy_HierarchyNodeTypeHandlerBase__InvokeDispose(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar8;
  uint uVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06760700);
    FUN_02d6084c(Method_System_Linq_Enumerable_Count<DebugUIHandlerWidget>__);
    FUN_02d6084c(PTR_DAT_06764da0);
    FUN_02d6084c(Method_Firebase_Firestore_Future_AggregateQuerySnapshot_SWIG_FreeCompletionData__);
    *(undefined1 *)(unaff_x20 + 0xa9f) = 1;
  }
  lVar5 = FUN_02d60934(*unaff_x21,2);
  if (lVar5 != 0) {
    if ((*(int *)(lVar5 + 0x18) == 0) ||
       (*(undefined2 *)(lVar5 + 0x20) = 0x2f, *(int *)(lVar5 + 0x18) == 1)) {
LAB_05fb35b4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined2 *)(lVar5 + 0x22) = 0x5f;
    puVar3 = Method_Firebase_Firestore_Future_AggregateQuerySnapshot_SWIG_FreeCompletionData__;
    puVar2 = PTR_DAT_06764da0;
    if (unaff_x19 != 0) {
      lVar5 = FUN_04e90430();
      plVar6 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_04e96490(plVar6,*(undefined8 *)puVar3,0);
      puVar3 = Method_System_Linq_Enumerable_Count<DebugUIHandlerWidget>__;
      puVar2 = PTR_DAT_0675e258;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 <= uVar9) goto LAB_05fb35b4;
            lVar8 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_05fb35b0;
            if (*(int *)(lVar8 + 0x10) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              lVar8 = FUN_05fb36e0(lVar8);
              if (lVar8 == 0) goto LAB_05fb35b0;
              uVar4 = FUN_04e87a5c(lVar8,0,0);
              if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0x88));
              }
              uVar4 = FUN_04f83a70(uVar4,0);
              if (plVar6 == (long *)0x0) goto LAB_05fb35b0;
              FUN_04e98a58(plVar6,uVar4,0);
              uVar7 = FUN_04e9195c(lVar8,1,0);
              FUN_04e97bc4(plVar6,uVar7,0);
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar1);
        }
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05fb35ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          return;
        }
      }
    }
  }
LAB_05fb35b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



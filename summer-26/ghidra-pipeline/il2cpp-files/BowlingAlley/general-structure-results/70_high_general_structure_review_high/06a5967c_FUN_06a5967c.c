/*
FUNCTION_NAME: FUN_06a5967c
ENTRY_POINT: 06a5967c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


undefined4 FUN_06a5967c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  puVar3 = Method_System_Data_RBTree<int>_get_Item__;
  if ((DAT_076e2d1e & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Stack<BindingRestrictions_TestBuilder_AndNode>_get_Count__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a8090);
    thunk_FUN_032e1da0(PTR_DAT_072a8098);
    thunk_FUN_032e1da0(PTR_DAT_072a80a0);
    thunk_FUN_032e1da0(PTR_DAT_072a80b0);
    thunk_FUN_032e1da0(PTR_DAT_0727c028);
    thunk_FUN_032e1da0(PTR_DAT_0727c040);
    thunk_FUN_032e1da0(PTR_DAT_0727c048);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_StaticFunctionInvoker<Color,_Vector4>__ctor__);
    thunk_FUN_032e1da0(Method_System_Data_RBTree<int>_get_Item__);
    DAT_076e2d1e = 1;
  }
  puVar2 = PTR_DAT_0727c048;
  lVar5 = *(long *)puVar3;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar3;
  }
  puVar1 = PTR_DAT_0727c040;
  uVar8 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  FUN_03b4dce4(uVar8,*(undefined8 *)puVar1);
  lVar7 = *(long *)puVar3;
  lVar5 = **(long **)(lVar7 + 0xb8);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) < 1) {
      uVar9 = 1;
    }
    else {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar7);
        lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar5 == 0) goto LAB_06a598c8;
      }
      puVar4 = Method_Unity_VisualScripting_StaticFunctionInvoker<Color,_Vector4>__ctor__;
      puVar1 = 
      Method_System_Collections_Generic_Stack<BindingRestrictions_TestBuilder_AndNode>_get_Count__;
      puVar2 = PTR_DAT_072a8098;
      puVar3 = PTR_DAT_072a8090;
      FUN_041e3694(&local_88,lVar5,*(undefined8 *)PTR_DAT_072a80b0);
      uVar9 = 1;
      uStack_68 = uStack_80;
      local_70 = local_88;
      local_60 = local_78;
      while (uVar6 = FUN_052d44b4(&local_70,*(undefined8 *)puVar2), lVar5 = local_60,
            (uVar6 & 1) != 0) {
        uVar6 = UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34__System_Collections_IEnumerator_get_Current
                          (param_1,local_60);
        if ((uVar6 & 1) == 0) {
          uVar9 = 0;
        }
        else {
          uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_0501f060(uVar8,param_1,*(undefined8 *)puVar4,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_06e2ab38(lVar5,uVar8,0);
          uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_0501f060(uVar8,param_1,*(undefined8 *)puVar4,0);
          FUN_06e2aa88(lVar5,uVar8,0);
        }
      }
      FUN_052d44b0(&local_70,*(undefined8 *)puVar3);
    }
    return uVar9;
  }
LAB_06a598c8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



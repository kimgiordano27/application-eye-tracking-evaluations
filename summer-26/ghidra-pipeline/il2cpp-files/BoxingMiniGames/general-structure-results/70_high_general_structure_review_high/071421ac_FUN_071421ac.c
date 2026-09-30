/*
FUNCTION_NAME: FUN_071421ac
ENTRY_POINT: 071421ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_071421ac(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,long param_6,byte param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_07eeca4a & 1) == 0) {
    FUN_03642964(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
    FUN_03642964(PTR_DAT_07a08c50);
    FUN_03642964(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__);
    DAT_07eeca4a = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__;
  if (param_6 == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar1 = thunk_FUN_0367fe20();
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__;
  }
  else {
    if (param_8 != 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uVar1 = FUN_04593578(param_6,*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__
                          );
      uVar1 = FUN_07141f7c(param_2,&local_68,param_1,0,param_3,param_4,param_5 & 1,uVar1,param_7 & 1
                          );
      uVar3 = *(undefined8 *)puVar2;
      *(undefined4 *)(param_8 + 0x18) = 0;
      *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
      FUN_045946bc(param_8,uVar1,uVar3);
      return;
    }
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar1 = thunk_FUN_0367fe20();
    puVar2 = PTR_DAT_079fde10;
  }
  uVar3 = thunk_FUN_036aa1c8(puVar2);
  FUN_05d7e1a0(uVar1,uVar3,0);
  uVar3 = thunk_FUN_036aa1c8(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar1,uVar3);
}



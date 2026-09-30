/*
FUNCTION_NAME: FUN_0654d01c
ENTRY_POINT: 0654d01c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_0654d01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_var;
  int extraout_var_00;
  long extraout_x1;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_2;
  uStack_38 = param_3;
  if ((DAT_076dfb35 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_lowValue__);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_get_Task__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_BaseAffordanceTheme<Color>__ctor__
                      );
    DAT_076dfb35 = 1;
  }
  FUN_0654cfbc(param_1);
  if ((int)((ulong)param_3 >> 0x20) == extraout_var) {
    FUN_0654cfbc(param_1);
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_BaseAffordanceTheme<Color>__ctor__
    ;
    if (0 < extraout_var_00) {
      uVar5 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar6 = *(undefined8 *)(lVar4 + uVar5 * 8 + 0x20);
        uVar2 = FUN_04810434(&local_40,uVar5 & 0xffffffff,*(undefined8 *)puVar1);
        uVar3 = FUN_057aa92c(uVar6,uVar2,0);
        if ((uVar3 & 1) != 0) goto LAB_0654d104;
        uVar5 = uVar5 + 1;
        FUN_0654cfbc(param_1);
      } while ((long)uVar5 < extraout_x1 >> 0x20);
    }
  }
  else {
LAB_0654d104:
    uVar2 = FUN_04810110(&local_40,
                         *(undefined8 *)
                          Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_lowValue__);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_0333a630();
    FUN_0654cd04(param_1);
  }
  return;
}



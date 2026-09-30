/*
FUNCTION_NAME: FUN_055cf8e4
ENTRY_POINT: 055cf8e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_055cf8e4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if ((DAT_06bbfb9d & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                );
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_set_Value__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__
                );
    FUN_02f08768(PTR_DAT_067cde90);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_set_Value__
                );
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_BroadcastValue__
                );
    DAT_06bbfb9d = 1;
  }
  uVar5 = FUN_04f6ebb4(param_4,0);
  if ((uVar5 & 1) == 0) {
    if (param_3 != (long *)0x0) {
      (**(code **)(*param_3 + 0x518))
                (param_3,*(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                 ,param_4,*(undefined8 *)(*param_3 + 0x520));
      (**(code **)(*param_3 + 0x518))
                (param_3,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_BroadcastValue__
                 ,param_4,*(undefined8 *)(*param_3 + 0x520));
      goto LAB_055cfa08;
    }
  }
  else if (param_3 != (long *)0x0) {
LAB_055cfa08:
    puVar4 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__;
    puVar3 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__;
    puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    puVar1 = PTR_DAT_067cd6c0;
    (**(code **)(*param_3 + 0x518))
              (param_3,*(undefined8 *)PTR_DAT_067cde90,param_4,*(undefined8 *)(*param_3 + 0x520));
    (**(code **)(*param_3 + 0x518))
              (param_3,*(undefined8 *)puVar4,*(undefined8 *)puVar1,*(undefined8 *)(*param_3 + 0x520)
              );
    (**(code **)(*param_3 + 0x518))
              (param_3,*(undefined8 *)puVar3,*(undefined8 *)puVar2,*(undefined8 *)(*param_3 + 0x520)
              );
    if ((*(long *)(param_1 + 0x30) != 0) && (uVar5 = FUN_055cf760(), (uVar5 & 1) != 0)) {
      (**(code **)(*param_3 + 0x518))
                (param_3,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_set_Value__
                 ,*(undefined8 *)Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__,
                 *(undefined8 *)(*param_3 + 0x520));
    }
    uVar5 = FUN_04f6ebb4(param_4,0);
    puVar1 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__;
    if ((uVar5 & 1) == 0) {
      (**(code **)(*param_3 + 0x518))
                (param_3,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_set_Value__
                 ,*(undefined8 *)
                   Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                 ,*(undefined8 *)(*param_3 + 0x520));
                    /* WARNING: Could not recover jumptable at 0x055cfb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x518))
                (param_3,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                 ,*(undefined8 *)puVar1,*(undefined8 *)(*param_3 + 0x520));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



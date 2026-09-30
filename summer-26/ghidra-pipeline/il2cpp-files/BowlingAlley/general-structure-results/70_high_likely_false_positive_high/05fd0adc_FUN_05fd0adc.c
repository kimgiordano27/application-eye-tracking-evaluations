/*
FUNCTION_NAME: FUN_05fd0adc
ENTRY_POINT: 05fd0adc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_12;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05fd0adc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_07283280;
  if ((DAT_076dce7a & 1) == 0) {
    thunk_FUN_032e1da0(System_ParamArrayAttribute_var);
    thunk_FUN_032e1da0(System_Reflection_ParameterInfo_var);
    thunk_FUN_032e1da0(UnityEngine_Rendering_PostProcessing_ParameterOverride_var);
    thunk_FUN_032e1da0(UnityEngine_ParticleSystem_var);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_Pen_var);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_PenButton_var);
    thunk_FUN_032e1da0(UnityEngine_Physics_var);
    thunk_FUN_032e1da0(UnityEngine_Physics2D_var);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_PixelValidationChannels_var);
    thunk_FUN_032e1da0(UnityEngine_Timeline_PlayableTrack_var);
    thunk_FUN_032e1da0(PTR_DAT_07283278);
    thunk_FUN_032e1da0(PTR_DAT_07283280);
    DAT_076dce7a = 1;
  }
  puVar1 = PTR_DAT_07283278;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_05fe3e74(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar3 = FUN_05fe3d80(uVar4,0);
  puVar2 = UnityEngine_Rendering_PostProcessing_ParameterOverride_var;
  switch(uVar3) {
  case 3:
    if (**(long **)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var + 0xb8) != 0
       ) {
      return **(long **)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var + 0xb8)
      ;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_ParamArrayAttribute_var);
    FUN_05fa8738(lVar7,0);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
    plVar5 = *(long **)(*(long *)puVar2 + 0xb8);
    break;
  default:
    uVar4 = FUN_05fe24fc(0);
    uVar6 = thunk_FUN_032e1da0(UnityEngine_InputSystem_PlayerInput_var);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar6);
  case 5:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 0x40);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_Physics_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
    *plVar5 = lVar7;
    break;
  case 6:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 0x38);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_Reflection_ParameterInfo_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar5 = lVar7;
    break;
  case 7:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 0x18);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_ParticleSystem_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar7;
    break;
  case 8:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 0x30);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_Physics2D_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar5 = lVar7;
    break;
  case 9:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 0x10);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_InputSystem_Pen_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    break;
  case 10:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 0x28);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                UnityEngine_Rendering_Universal_PixelValidationChannels_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar5 = lVar7;
    break;
  case 0xb:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 8);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_InputSystem_PenButton_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    break;
  case 0xc:
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_PostProcessing_ParameterOverride_var
                               + 0xb8) + 0x20);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_05fa8738(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar5 = lVar7;
  }
  thunk_FUN_0333a630(plVar5,lVar7);
  return lVar7;
}



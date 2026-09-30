/*
FUNCTION_NAME: FUN_07ec96f0
ENTRY_POINT: 07ec96f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_07ec96f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Func<InputDevice,_InputEventPtr,_bool>>_RemoveCallback__
  ;
  if ((DAT_0899acfb & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08495ee0);
    FUN_03a8a718(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Func<InputDevice,_InputEventPtr,_bool>>_RemoveCallback__
                );
    FUN_03a8a718(Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_AddCallback__);
    DAT_0899acfb = 1;
  }
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  UnityEngine_UIElements_IMGUIContainer__get_focusOnlyIfHasFocusableControls(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) =
         *(undefined8 *)Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_AddCallback__
    ;
    thunk_FUN_03afed3c();
    *(long *)(param_1 + 0xd0) = lVar2;
    thunk_FUN_03afed3c((long *)(param_1 + 0xd0),lVar2);
    FUN_07e418c0(param_1,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x40) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



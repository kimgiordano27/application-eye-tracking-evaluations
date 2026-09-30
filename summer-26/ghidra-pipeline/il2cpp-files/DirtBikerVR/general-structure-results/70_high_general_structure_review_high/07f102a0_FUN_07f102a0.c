/*
FUNCTION_NAME: FUN_07f102a0
ENTRY_POINT: 07f102a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_07f102a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_084958f8;
  if ((DAT_0899afb3 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08495ee0);
    FUN_03a8a718(PTR_DAT_08495900);
    FUN_03a8a718(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Func<InputDevice,_InputEventPtr,_bool>>_RemoveCallback__
                );
    FUN_03a8a718(PTR_DAT_084958f8);
    FUN_03a8a718(PTR_DAT_08494de0);
    FUN_03a8a718(Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_AddCallback__);
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<Hash128,_int>_Clear__);
    DAT_0899afb3 = 1;
  }
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_07e41b80(lVar2,0);
  puVar1 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Func<InputDevice,_InputEventPtr,_bool>>_RemoveCallback__
  ;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)PTR_DAT_08494de0;
    thunk_FUN_03afed3c();
    *(long *)(param_1 + 0x88) = lVar2;
    thunk_FUN_03afed3c((long *)(param_1 + 0x88),lVar2);
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    UnityEngine_UIElements_IMGUIContainer__get_focusOnlyIfHasFocusableControls(lVar2,0);
    puVar1 = PTR_DAT_08495900;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) =
           *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action>_AddCallback__;
      thunk_FUN_03afed3c();
      *(long *)(param_1 + 0x90) = lVar2;
      thunk_FUN_03afed3c((long *)(param_1 + 0x90),lVar2);
      lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07e41c50(lVar2,0);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x10) =
             *(undefined8 *)Method_System_Collections_Generic_Dictionary<Hash128,_int>_Clear__;
        thunk_FUN_03afed3c();
        *(undefined1 *)(lVar2 + 0x40) = 0;
        *(long *)(param_1 + 0x98) = lVar2;
        thunk_FUN_03afed3c((long *)(param_1 + 0x98),lVar2);
        FUN_07e137c0(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



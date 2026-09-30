/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 01e89800
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IndexOf<OVRPlugin_VirtualKeyboardModelAnimationState>(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    if (unaff_x20 == 0) {
LAB_01e89910:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = FUN_020d7fa0();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x23);
    }
    uVar2 = FUN_03d749a8(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01e89910;
      uVar2 = FUN_02b258e8(*(long *)(unaff_x19 + 0x30),uVar1,&stack0x00000008,
                           *(undefined8 *)
                            Field_UnityEngine_InputSystem_InputInteractionContext_m_State);
      if ((uVar2 & 1) != 0) {
        return in_stack_00000008;
      }
    }
    unaff_x22 = FUN_020d8580();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x23);
    }
    uVar2 = FUN_03d749a8(unaff_x22,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar2 = FUN_03d749a8(uVar1,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01e89910;
        FUN_02b23da0(*(long *)(unaff_x19 + 0x30),uVar1,unaff_x22,
                     *(undefined8 *)
                      Field_Meta_XR_ImmersiveDebugger_Utils_InstanceHandle_<Type>k__BackingField);
      }
    }
  }
  return unaff_x22;
}



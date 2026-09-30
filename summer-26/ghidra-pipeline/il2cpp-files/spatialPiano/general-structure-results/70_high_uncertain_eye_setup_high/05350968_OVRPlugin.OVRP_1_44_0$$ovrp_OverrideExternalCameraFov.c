/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraFov
ENTRY_POINT: 05350968
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053509e8) */

void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraFov(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  uVar1 = FUN_049cb15c(param_2,*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000018,
                       **(undefined8 **)(param_1 + 0xc70));
  if ((uVar1 & 1) == 0) {
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *unaff_x20;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 != 0) {
      uVar1 = FUN_049c4d8c(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000010,
                           *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo
                          );
      if ((uVar1 & 1) == 0) {
        lVar2 = *unaff_x20;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar2 = *unaff_x20;
        }
        lVar3 = *(long *)(lVar2 + 0xb8);
        if ((*(char *)(lVar3 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar3 = *(long *)(*unaff_x20 + 0xb8);
          }
          *(long *)(lVar3 + 0x18) = unaff_x19;
        }
      }
      else {
        if (in_stack_00000010 == (long *)0x0) goto LAB_05350aa4;
        (**(code **)(*in_stack_00000010 + 0x178))();
      }
      return;
    }
  }
  else {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*in_stack_00000018 + 0x178))();
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *unaff_x20;
    }
    if ((in_stack_00000028 != 0) && (**(long **)(lVar2 + 0xb8) != 0)) {
      FUN_049cab3c(**(long **)(lVar2 + 0xb8),*(undefined8 *)(in_stack_00000028 + 0x18),
                   *(undefined8 *)UnityEngine_UIElements_FocusEvent_TypeInfo);
      return;
    }
  }
LAB_05350aa4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



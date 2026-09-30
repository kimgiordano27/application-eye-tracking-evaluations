/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetMesh
ENTRY_POINT: 053508e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053509e8) */

void OVRPlugin_OVRP_1_44_0__ovrp_GetMesh(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  if ((*(byte *)(unaff_x20 + 0x565) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9ca0);
    FUN_02f08768(UnityEngine_UIElements_FocusEvent_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_FocusExitEventArgs_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x565) = 1;
  }
  puVar1 = PTR_DAT_067c9ca0;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = (long *)0x0;
  if (param_1 == 0) goto LAB_05350aa4;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_067c9ca0;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_05350aa4;
    uVar3 = FUN_049cb15c(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x18),&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_FocusExitEventArgs_TypeInfo);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*in_stack_00000018 + 0x178))
                (in_stack_00000018,param_1,*(undefined8 *)(*in_stack_00000018 + 0x180));
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar2 = *(long *)puVar1;
      }
      if ((in_stack_00000028 != 0) && (**(long **)(lVar2 + 0xb8) != 0)) {
        FUN_049cab3c(**(long **)(lVar2 + 0xb8),*(undefined8 *)(in_stack_00000028 + 0x18),
                     *(undefined8 *)UnityEngine_UIElements_FocusEvent_TypeInfo);
        return;
      }
      goto LAB_05350aa4;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_05350aa4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = FUN_049c4d8c(lVar2,*(undefined4 *)(param_1 + 0x10),&stack0x00000010,
                       *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(param_1 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = param_1;
    }
  }
  else {
    if (in_stack_00000010 == (long *)0x0) goto LAB_05350aa4;
    (**(code **)(*in_stack_00000010 + 0x178))
              (in_stack_00000010,param_1,*(undefined8 *)(*in_stack_00000010 + 0x180));
  }
  return;
}



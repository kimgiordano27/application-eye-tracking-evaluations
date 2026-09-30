/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_GetDesiredEyeTextureFormat
ENTRY_POINT: 04f8d144
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


float OVRPlugin_OVRP_1_11_0__ovrp_GetDesiredEyeTextureFormat(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  float fVar6;
  
  if ((*(byte *)(unaff_x20 + 0xd88) & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_EventCallback<PointerLeaveEvent>_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_UI_PointerModel_var);
    *(undefined1 *)(unaff_x20 + 0xd88) = 1;
  }
  lVar1 = FUN_04f89c80();
  if (lVar1 == 0) {
    fVar6 = 1.0;
  }
  else {
    plVar2 = (long *)FUN_04f89c80();
    if (plVar2 == (long *)0x0) goto OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate;
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)UnityEngine_InputSystem_UI_PointerModel_var) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04f8d1e4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02b7654c(plVar2,*(long *)UnityEngine_InputSystem_UI_PointerModel_var,0);
LAB_04f8d1e4:
    lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar1 == 0) goto OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate;
    fVar6 = (float)FUN_05c9e358(lVar1,0);
  }
  lVar1 = FUN_04332268();
  if (lVar1 != 0) {
    return fVar6 * *(float *)(lVar1 + 0x70);
  }
OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



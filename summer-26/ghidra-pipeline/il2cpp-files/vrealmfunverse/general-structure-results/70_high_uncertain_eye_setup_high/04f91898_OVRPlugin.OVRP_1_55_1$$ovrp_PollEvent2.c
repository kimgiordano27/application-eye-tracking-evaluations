/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$ovrp_PollEvent2
ENTRY_POINT: 04f91898
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xf20));
  *(undefined1 *)(unaff_x20 + 0xdd3) = 1;
  plVar5 = *(long **)(unaff_x19 + 0x18);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)System_Func<RenderingLayerMask>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04f91904;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)System_Func<RenderingLayerMask>_TypeInfo,0);
LAB_04f91904:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if (lVar2 != 0) {
      FUN_04f8d060(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



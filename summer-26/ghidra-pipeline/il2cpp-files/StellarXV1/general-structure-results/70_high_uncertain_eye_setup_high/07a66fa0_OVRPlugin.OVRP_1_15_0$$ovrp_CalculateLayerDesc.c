/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_CalculateLayerDesc
ENTRY_POINT: 07a66fa0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_CalculateLayerDesc(void)

{
  byte bVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x21;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0xd80);
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  lVar2 = FUN_050efae8(*puVar3);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) != 0) {
      if ((int)*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x21);
      }
      bVar1 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(uVar4,0);
      *(byte *)(unaff_x19 + 0x58) = bVar1 & 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



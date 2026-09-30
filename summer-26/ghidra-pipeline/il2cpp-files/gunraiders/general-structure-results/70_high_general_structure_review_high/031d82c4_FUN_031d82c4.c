/*
FUNCTION_NAME: FUN_031d82c4
ENTRY_POINT: 031d82c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_031d82c4(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_0422fd68;
  if ((DAT_045325c1 & 1) == 0) {
    FUN_01c5d288(MobileController_<_ResetIKSolver>d__441_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo);
    FUN_01c5d288(Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo);
    FUN_01c5d288(MinimapSystem_<Start>d__3_TypeInfo);
    FUN_01c5d288(Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo);
    FUN_01c5d288(MobileController_<>c__DisplayClass346_0_TypeInfo);
    DAT_045325c1 = 1;
  }
  lVar3 = FUN_01c5d2fc(*(undefined8 *)puVar2,6);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((((uVar1 != 0) &&
         (*(undefined8 *)(lVar3 + 0x20) =
               *(undefined8 *)Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo,
         uVar1 != 1)) &&
        (*(undefined8 *)(lVar3 + 0x28) =
              *(undefined8 *)
               Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo, 2 < uVar1
        )) && (((*(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)MinimapSystem_<Start>d__3_TypeInfo,
                uVar1 != 3 &&
                (*(undefined8 *)(lVar3 + 0x38) =
                      *(undefined8 *)UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo,
                4 < uVar1)) &&
               (*(undefined8 *)(lVar3 + 0x40) =
                     *(undefined8 *)MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo,
               puVar2 = MobileController_<_ResetIKSolver>d__441_TypeInfo, uVar1 != 5)))) {
      *(undefined8 *)(lVar3 + 0x48) =
           *(undefined8 *)MobileController_<>c__DisplayClass346_0_TypeInfo;
      **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



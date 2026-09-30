/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraFov
ENTRY_POINT: 090cfd0c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraFov(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac796b0);
  *(undefined1 *)(unaff_x26 + 0x541) = 1;
  uVar1 = thunk_FUN_04983b98(*unaff_x25,&stack0x0000000c);
  uVar1 = FUN_08bc9f74(*unaff_x24,uVar1,0);
  lVar2 = thunk_FUN_04983f60(*unaff_x23);
  FUN_0a17c2c0(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_05bde8d8(lVar2,*(undefined8 *)PTR_DAT_0ac765f8), lVar2 != 0)) {
    FUN_0a1f931c(0x3f800000,lVar2,0);
    FUN_0a1f961c(lVar2,1,0);
    FUN_0a1f94a4(lVar2,0,0);
    FUN_0a1f96e0(lVar2,3,0);
    lVar3 = FUN_0a17834c(lVar2,0);
    if (lVar3 != 0) {
      FUN_0a18ac70();
      FUN_0a17834c(lVar2,0);
      FUN_0903b848();
      FUN_0a1f9f88(lVar2,0);
      lVar3 = FUN_0a178414(lVar2,0);
      if (lVar3 != 0) {
        FUN_0a17ba14(lVar3,0,0);
        lVar3 = FUN_0a178414(lVar2,0);
        if (lVar3 != 0) {
          FUN_0a17b958(lVar3,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



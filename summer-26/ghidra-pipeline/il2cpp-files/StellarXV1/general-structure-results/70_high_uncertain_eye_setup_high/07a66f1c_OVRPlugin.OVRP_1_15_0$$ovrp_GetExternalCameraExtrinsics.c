/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 07a66f1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xd80));
  FUN_04077588(PTR_DAT_09285bb0);
  *(undefined1 *)(unaff_x20 + 0x5c8) = 1;
  puVar2 = PTR_DAT_092f0d18;
  puVar1 = PTR_DAT_09285bb0;
  if (*(char *)(unaff_x19 + 0x41) != '\0') {
    uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092f0d20);
    FUN_060a5e18();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07a65598(uVar4);
  }
  puVar2 = PTR_DAT_092f0d80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar5 = FUN_050efae8(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x18) != 0) {
      if ((int)*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar6 = *(long *)puVar1;
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar6);
      }
      bVar3 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(uVar4,0);
      *(byte *)(unaff_x19 + 0x58) = bVar3 & 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



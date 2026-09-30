/*
FUNCTION_NAME: OVRPlugin.Ktx$$DestroyKtxTexture
ENTRY_POINT: 0603477c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__DestroyKtxTexture(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 uVar5;
  
  *(long *)(unaff_x19 + 0x34) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x2c) = param_1._0_8_;
  *(long *)(unaff_x19 + 0x28) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x20) = param_2._0_8_;
  FUN_06034294();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
                    /* try { // try from 060347d8 to 061347df has its CatchHandler @ 06034988 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_060347e0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_060347e0:
  uVar5 = (*(code *)*puVar1)();
  *(undefined4 *)(unaff_x19 + 0x3c) = uVar5;
  FUN_06034294();
  return;
}



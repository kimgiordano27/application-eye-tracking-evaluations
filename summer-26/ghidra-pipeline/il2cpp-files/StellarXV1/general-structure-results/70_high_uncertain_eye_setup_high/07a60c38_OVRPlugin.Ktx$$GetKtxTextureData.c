/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 07a60c38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureData(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x21;
  float fVar5;
  float unaff_s8;
  
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_07a60cb8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a60cb8:
    fVar5 = (float)(*(code *)*puVar1)();
    if (DAT_098854f0 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f0 = '\x01';
    }
    if (param_1 != 0) {
      fVar5 = fVar5 / unaff_s8;
      lVar2 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
      FUN_089dc428(fVar5 * *(float *)(lVar2 + 0xc),fVar5 * *(float *)(lVar2 + 0x10),
                   fVar5 * *(float *)(lVar2 + 0x14),param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



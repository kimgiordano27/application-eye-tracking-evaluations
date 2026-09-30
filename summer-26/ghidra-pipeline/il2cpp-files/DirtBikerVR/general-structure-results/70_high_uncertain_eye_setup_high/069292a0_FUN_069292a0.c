/*
FUNCTION_NAME: FUN_069292a0
ENTRY_POINT: 069292a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


float FUN_069292a0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (param_1 != 0) {
    lVar6 = FUN_07c721e4(param_1,0);
    lVar7 = FUN_07c73a5c(param_1,0);
    FUN_07c72290(param_1,0);
    if (lVar7 != 0) {
      fVar12 = 0.0;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar2) {
        uVar10 = 2;
        do {
          if (uVar2 <= uVar10 - 2) {
OVRManager__get_isSupportedPlatform:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          if (lVar6 == 0) goto LAB_069293e4;
          uVar3 = *(uint *)(lVar6 + 0x18);
          uVar4 = *(uint *)(lVar7 + (long)(int)(uVar10 - 2) * 4 + 0x20);
          if ((((uVar3 <= uVar4) || (uVar2 <= uVar10 - 1)) ||
              (uVar5 = *(uint *)(lVar7 + (long)(int)(uVar10 - 1) * 4 + 0x20), uVar3 <= uVar5)) ||
             (uVar2 <= uVar10)) goto OVRManager__get_isSupportedPlatform;
          if (uVar3 <= *(uint *)(lVar7 + (long)(int)uVar10 * 4 + 0x20))
          goto OVRManager__get_isSupportedPlatform;
          lVar8 = lVar6 + (long)(int)uVar4 * 0xc;
          lVar9 = lVar6 + (long)(int)uVar5 * 0xc;
          fVar11 = (float)OVRManager__set_isSupportedPlatform
                                    (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                                     *(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar9 + 0x20),
                                     *(undefined4 *)(lVar9 + 0x24),*(undefined4 *)(lVar9 + 0x28));
          fVar12 = fVar12 + fVar11;
          uVar2 = *(uint *)(lVar7 + 0x18);
          iVar1 = uVar10 + 1;
          uVar10 = uVar10 + 3;
        } while (iVar1 < (int)uVar2);
      }
      return fVar12;
    }
  }
LAB_069293e4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



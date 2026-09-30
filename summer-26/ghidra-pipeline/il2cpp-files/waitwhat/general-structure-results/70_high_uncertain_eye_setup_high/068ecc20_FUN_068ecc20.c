/*
FUNCTION_NAME: FUN_068ecc20
ENTRY_POINT: 068ecc20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


bool FUN_068ecc20(float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
                 ulong param_6)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  float local_68;
  
  fVar14 = param_2;
  fVar12 = param_3;
  if ((DAT_07559332 & 1) == 0) {
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo);
    DAT_07559332 = 1;
  }
  puVar1 = Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo;
  bVar2 = false;
  local_68 = 0.0;
  local_70 = 0;
  if ((param_6 & 1) != 0) {
    plVar3 = (long *)thunk_FUN_031c3cac(param_5,*(undefined8 *)
                                                 Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo
                                       );
    if (plVar3 == (long *)0x0) {
      bVar2 = true;
    }
    else {
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_068eccf4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0);
LAB_068eccf4:
      fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
      fVar11 = fVar14;
      fVar13 = fVar12;
      uVar10 = FUN_065b2eec(0);
      local_70 = CONCAT44(fVar11,uVar10);
      local_68 = fVar13;
      uVar7 = FUN_068ecfd8(DAT_012e3bf0,&local_70);
      if ((uVar7 & 1) == 0) {
        bVar2 = false;
      }
      else {
        if (DAT_07546bbf == '\0') {
          FUN_03188a78(PTR_DAT_070c22f8);
          DAT_07546bbf = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        fVar11 = SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar14 * fVar14);
        if (fVar11 <= DAT_012e3cb4) {
          if (DAT_075457d6 == '\0') {
            FUN_03188a78(PTR_DAT_070c1a80);
            DAT_075457d6 = '\x01';
          }
          pfVar6 = *(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
          fVar9 = *pfVar6;
          fVar14 = pfVar6[1];
          fVar12 = pfVar6[2];
        }
        else {
          fVar9 = fVar9 / fVar11;
          fVar14 = fVar14 / fVar11;
          fVar12 = fVar12 / fVar11;
        }
        bVar2 = *(float *)(param_4 + 0x30) <
                (-(fVar14 * param_2) - param_1 * fVar9) - param_3 * fVar12;
      }
    }
  }
  return bVar2;
}



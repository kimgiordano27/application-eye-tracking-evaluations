/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Shutdown
ENTRY_POINT: 076da91c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_Shutdown
          (float param_1,float param_2,float param_3,long param_4,float *param_5,undefined8 *param_6
          )

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  *(undefined4 *)(param_6 + 3) = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar6 = (float)FUN_076da5a4();
    if ((*(long *)(param_4 + 0x20) != 0) &&
       (fVar13 = param_3, fVar12 = param_2, lVar4 = FUN_085849e0(*(long *)(param_4 + 0x20),0),
       lVar4 != 0)) {
      fVar7 = (float)FUN_08598884(lVar4,0);
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar8 = SQRT(param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2);
      if (fVar8 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar5 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar6 = *pfVar5;
        param_2 = pfVar5[1];
        param_3 = pfVar5[2];
      }
      else {
        fVar6 = fVar6 / fVar8;
        param_2 = param_2 / fVar8;
        param_3 = param_3 / fVar8;
      }
      fVar16 = param_5[1];
      fVar8 = param_5[2];
      fVar15 = *param_5;
      fVar17 = param_3 * param_5[5] + fVar6 * param_5[3] + param_2 * param_5[4];
      if (DAT_09539e11 == '\0') {
        FUN_0403162c(PTR_DAT_08f67c68);
        DAT_09539e11 = '\x01';
      }
      fVar9 = ABS(fVar17);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar14 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
      fVar10 = fVar9 * DAT_01a2ee44;
      if (fVar9 * DAT_01a2ee44 <= fVar14) {
        fVar10 = fVar14;
      }
      if (fVar10 <= ABS(0.0 - fVar17)) {
        fVar15 = fVar6 * fVar15 + param_2 * fVar16;
        fVar8 = param_3 * fVar8 + fVar15;
        fVar17 = ((fVar13 * param_3 + fVar7 * fVar6 + fVar12 * param_2) - fVar8) / fVar17;
        if ((0.0 < fVar17) && ((param_1 <= 0.0 || (fVar17 <= param_1)))) {
          uStack_88 = *(undefined8 *)(param_5 + 2);
          uStack_90 = *(undefined8 *)param_5;
          uStack_80 = *(undefined8 *)(param_5 + 4);
          uVar11 = FUN_0853dbe0(fVar17,&uStack_90,0);
          if ((*(long *)(param_4 + 0x20) == 0) ||
             (lVar4 = FUN_085849e0(*(long *)(param_4 + 0x20),0), lVar4 == 0)) goto LAB_076da5a0;
          fVar13 = fVar8;
          fVar12 = (float)FUN_0859a4b4(uVar11,fVar8,fVar15,lVar4,0);
          fVar7 = *(float *)(param_4 + 0x28);
          fVar13 = ABS(fVar13);
          bVar1 = false;
          bVar2 = false;
          bVar3 = false;
          if (ABS(fVar12) <= fVar7) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar13) && !NAN(fVar7)) {
              bVar1 = fVar13 < fVar7;
              bVar2 = fVar13 == fVar7;
              bVar3 = false;
            }
          }
          if (bVar2 || bVar1 != bVar3) {
            *(undefined4 *)param_6 = uVar11;
            *(float *)((long)param_6 + 4) = fVar8;
            *(float *)(param_6 + 1) = fVar15;
            *(float *)((long)param_6 + 0xc) = fVar6;
            *(float *)(param_6 + 2) = param_2;
            *(float *)((long)param_6 + 0x14) = param_3;
            *(float *)(param_6 + 3) = fVar17;
            return 1;
          }
        }
      }
      return 0;
    }
  }
LAB_076da5a0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



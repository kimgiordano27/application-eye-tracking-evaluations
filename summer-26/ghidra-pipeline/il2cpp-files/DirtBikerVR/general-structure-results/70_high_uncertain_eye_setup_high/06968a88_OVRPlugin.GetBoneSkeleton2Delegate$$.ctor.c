/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$.ctor
ENTRY_POINT: 06968a88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton2Delegate___ctor(ulong param_1,undefined1 param_2 [16],float param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s6;
  undefined8 in_d7;
  ulong uVar11;
  float unaff_s8;
  ulong uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  fVar7 = param_2._0_4_;
  if ((*(char *)(unaff_x19 + 0x112) != '\0') || (*(char *)(unaff_x19 + 0x111) != '\0')) {
    param_3 = in_s6 + *(float *)(unaff_x19 + 0x68) * DAT_015c56e8;
    *(ulong *)(unaff_x19 + 0x9c) =
         CONCAT44((float)((ulong)in_d7 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(unaff_x19 + 0x60) >> 0x20) * -0.001,
                  (float)in_d7 + (float)*(undefined8 *)(unaff_x19 + 0x60) * -0.001);
    *(float *)(unaff_x19 + 0xa4) = param_3;
  }
  if ((*(int *)(unaff_x19 + 0x8c) < 0) || (*(char *)(unaff_x19 + 0xd8) == '\0')) {
    return;
  }
  uStack0000000000000010 = param_2._0_8_;
  uStack0000000000000000 = param_1;
  if (*(char *)(unaff_x19 + 0x110) != '\0') {
    FUN_0696829c();
  }
  if ((*(long *)(unaff_x19 + 0x108) != 0) &&
     (plVar2 = *(long **)(*(long *)(unaff_x19 + 0x108) + 0x80), plVar2 != (long *)0x0)) {
    fVar5 = (float)(**(code **)(*plVar2 + 0x588))(plVar2,*(undefined8 *)(*plVar2 + 0x590));
    fVar6 = (float)uStack0000000000000010;
    *(float *)(unaff_x19 + 0x48) = fVar5;
    *(float *)(unaff_x19 + 0x4c) = fVar7;
    *(float *)(unaff_x19 + 0x58) = fVar6;
    *(float *)(unaff_x19 + 0x5c) = unaff_s8;
    *(float *)(unaff_x19 + 0x50) = param_3;
    *(int *)(unaff_x19 + 0x54) = (int)uStack0000000000000000;
    if ((*(char *)(unaff_x19 + 0x112) == '\0') && (*(char *)(unaff_x19 + 0x111) == '\0')) {
      fVar8 = *(float *)(unaff_x19 + 0x9c);
      fVar9 = *(float *)(unaff_x19 + 0xa0);
      fVar10 = *(float *)(unaff_x19 + 0xa4);
      uVar11 = uStack0000000000000000;
    }
    else {
      if (((*(long *)(unaff_x19 + 0x108) == 0) ||
          (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x80), lVar3 == 0)) ||
         (lVar3 = FUN_07c98f88(lVar3,0), lVar3 == 0)) goto LAB_06968ce4;
      fVar6 = (float)FUN_07cac924(lVar3,0);
      *(undefined8 *)(unaff_x19 + 0xc0) = 0;
      *(undefined8 *)(unaff_x19 + 200) = 0;
      fVar5 = DAT_015c5c68;
      *(undefined4 *)(unaff_x19 + 0xd0) = 0;
      fVar8 = (float)uStack0000000000000000 - fVar6 * fVar5;
      fVar10 = unaff_s8 - param_3 * fVar5;
      fVar6 = *(float *)(unaff_x19 + 0x58);
      unaff_s8 = *(float *)(unaff_x19 + 0x5c);
      fVar9 = (float)uStack0000000000000010 - fVar7 * fVar5;
      fVar5 = *(float *)(unaff_x19 + 0x48);
      fVar7 = *(float *)(unaff_x19 + 0x4c);
      param_3 = *(float *)(unaff_x19 + 0x50);
      *(float *)(unaff_x19 + 0xa4) = fVar10;
      *(float *)(unaff_x19 + 0x9c) = fVar8;
      *(float *)(unaff_x19 + 0xa0) = fVar9;
      uVar11 = (ulong)*(uint *)(unaff_x19 + 0x54);
    }
    cVar1 = DAT_08974d8c;
    fVar6 = fVar6 - fVar9;
    fVar10 = unaff_s8 - fVar10;
    fVar8 = (float)uVar11 - fVar8;
    *(float *)(unaff_x19 + 0x68) = fVar10;
    *(float *)(unaff_x19 + 0x60) = fVar8;
    *(float *)(unaff_x19 + 100) = fVar6;
    if (cVar1 == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      DAT_08974d8c = '\x01';
    }
    fVar9 = fVar6 * param_3 - fVar10 * fVar7;
    fVar10 = fVar10 * fVar5 - fVar8 * param_3;
    fVar7 = fVar8 * fVar7 - fVar6 * fVar5;
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar5 = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar10 * fVar10);
    if (fVar5 <= DAT_015c5ce0) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar4 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar9 = *pfVar4;
      fVar10 = pfVar4[1];
      fVar7 = pfVar4[2];
    }
    else {
      fVar9 = fVar9 / fVar5;
      fVar10 = fVar10 / fVar5;
      fVar7 = fVar7 / fVar5;
    }
    *(float *)(unaff_x19 + 0x6c) = fVar9;
    *(float *)(unaff_x19 + 0x70) = fVar10;
    *(float *)(unaff_x19 + 0x74) = fVar7;
    *(undefined4 *)(unaff_x19 + 0x88) = *(undefined4 *)(unaff_x19 + 0x78);
    FUN_06968e24();
    if (*(long *)(unaff_x19 + 0x160) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) <= *(int *)(unaff_x19 + 0x148) + 2) {
        FUN_0696829c();
      }
      *(undefined2 *)(unaff_x19 + 0x110) = 0;
      *(undefined1 *)(unaff_x19 + 0x112) = 0;
      return;
    }
  }
LAB_06968ce4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



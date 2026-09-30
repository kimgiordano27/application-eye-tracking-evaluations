/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 05266790
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_06bbaabb & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9790);
    DAT_06bbaabb = 1;
  }
  if (*(long *)(param_5 + 0x30) != 0) {
    fVar4 = (float)FUN_0610020c(*(long *)(param_5 + 0x30),0);
    if (DAT_06bb42c4 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c4 = '\x01';
    }
    puVar1 = PTR_DAT_067c8f78;
    lVar2 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar14 = *(float *)(lVar2 + 0x18);
    fVar13 = *(float *)(lVar2 + 0x1c);
    fVar12 = *(float *)(lVar2 + 0x20);
    if (DAT_06bb8c34 == '\0') {
      FUN_02f08768(PTR_DAT_067c8fa8);
      DAT_06bb8c34 = '\x01';
    }
    fVar5 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
    if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar5) {
      fVar9 = param_3 * fVar12 + fVar4 * fVar14 + param_2 * fVar13;
      param_4 = (fVar13 * fVar9) / fVar5;
      fVar4 = fVar4 - (fVar14 * fVar9) / fVar5;
      param_2 = param_2 - param_4;
      param_3 = param_3 - (fVar12 * fVar9) / fVar5;
    }
    if (DAT_06bb42bf == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb42bf = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar12 = SQRT(param_3 * param_3 + fVar4 * fVar4 + param_2 * param_2);
    if (fVar12 <= DAT_011b06e4) {
      if (DAT_06bb42c1 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c1 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar4 = *pfVar3;
      param_2 = pfVar3[1];
      param_3 = pfVar3[2];
    }
    else {
      fVar4 = fVar4 / fVar12;
      param_2 = param_2 / fVar12;
      param_3 = param_3 / fVar12;
    }
    fVar4 = (float)FUN_060df954(fVar4,param_2,param_3,0);
    puVar1 = PTR_DAT_067c9790;
    if (*(long *)(param_5 + 0x30) != 0) {
      fVar13 = param_2;
      fVar14 = param_3;
      fVar6 = (float)FUN_060ffbe4(*(long *)(param_5 + 0x30),0);
      fVar12 = param_4;
      fVar5 = param_2;
      fVar9 = param_3;
      fVar7 = (float)FUN_060dfb18(fVar4,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x38),
                                  *(undefined4 *)(param_5 + 0x3c),*(undefined4 *)(param_5 + 0x40),0)
      ;
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar8 = (float)FUN_060df604(DAT_011afbdc,0,0,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060fda18(fVar6 + fVar7,fVar13 + fVar5,fVar14 + fVar9,
                   (param_2 * fVar11 + param_4 * fVar8 + fVar4 * fVar12) - param_3 * fVar10,
                   (param_3 * fVar8 + param_4 * fVar10 + param_2 * fVar12) - fVar4 * fVar11,
                   (fVar4 * fVar10 + param_4 * fVar11 + param_3 * fVar12) - param_2 * fVar8,
                   ((param_4 * fVar12 - fVar4 * fVar8) - param_2 * fVar10) - param_3 * fVar11);
      if (*(long *)(param_5 + 0x20) != 0) {
        FUN_060f0a10(*(long *)(param_5 + 0x20),0);
        FUN_052c22b0();
        if (*(long *)(param_5 + 0x20) != 0) {
          FUN_060f0c58(*(long *)(param_5 + 0x20),1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 05fdb694
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionEnd(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar5 = (float)FUN_05fddeec();
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar11 = param_2, fVar13 = param_3, lVar3 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0),
     lVar3 != 0)) {
    fVar6 = (float)FUN_06e6a5c4(lVar3,0);
    if (DAT_07a3caf2 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3caf2 = '\x01';
    }
    puVar1 = PTR_DAT_0759b378;
    lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar12 = *(float *)(lVar3 + 0x18);
    fVar15 = *(float *)(lVar3 + 0x1c);
    fVar14 = *(float *)(lVar3 + 0x20);
    if (DAT_07a44545 == '\0') {
      FUN_031f20f4(PTR_DAT_075b9420);
      DAT_07a44545 = '\x01';
    }
    puVar2 = PTR_DAT_075b9420;
    fVar10 = fVar14 * fVar14 + fVar12 * fVar12 + fVar15 * fVar15;
    fVar5 = fVar5 - fVar6;
    param_2 = param_2 - fVar11;
    param_3 = param_3 - fVar13;
    if (**(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) <= fVar10) {
      fVar11 = param_3 * fVar14 + fVar5 * fVar12 + param_2 * fVar15;
      fVar5 = fVar5 - (fVar12 * fVar11) / fVar10;
      param_2 = param_2 - (fVar15 * fVar11) / fVar10;
      param_3 = param_3 - (fVar14 * fVar11) / fVar10;
    }
    uVar9 = (ulong)(uint)param_3;
    uVar8 = (ulong)(uint)param_2;
    FUN_05fdba68(fVar5,uVar8,uVar9);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar7 = FUN_06e6af04(*(long *)(unaff_x19 + 0x38),0);
      if (DAT_07a3caf2 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3caf2 = '\x01';
      }
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar13 = *(float *)(lVar3 + 0x18);
      fVar11 = *(float *)(lVar3 + 0x1c);
      fVar5 = *(float *)(lVar3 + 0x20);
      if (DAT_07a44545 == '\0') {
        FUN_031f20f4(PTR_DAT_075b9420);
        DAT_07a44545 = '\x01';
      }
      fVar6 = fVar5 * fVar5 + fVar13 * fVar13 + fVar11 * fVar11;
      if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar6) {
        fVar12 = (float)uVar9 * fVar5 + (float)uVar7 * fVar13 + (float)uVar8 * fVar11;
        uVar7 = (ulong)(uint)((float)uVar7 - (fVar13 * fVar12) / fVar6);
        uVar8 = (ulong)(uint)((float)uVar8 - (fVar11 * fVar12) / fVar6);
        uVar9 = (ulong)(uint)((float)uVar9 - (fVar5 * fVar12) / fVar6);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        lVar3 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0);
        if (DAT_07a3caf2 == '\0') {
          FUN_031f20f4(PTR_DAT_0759b378);
          DAT_07a3caf2 = '\x01';
        }
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
        FUN_06e461b0(uVar7,uVar8,uVar9,*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                     *(undefined4 *)(lVar4 + 0x20),0);
        if (lVar3 != 0) {
          FUN_06e6aafc(lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



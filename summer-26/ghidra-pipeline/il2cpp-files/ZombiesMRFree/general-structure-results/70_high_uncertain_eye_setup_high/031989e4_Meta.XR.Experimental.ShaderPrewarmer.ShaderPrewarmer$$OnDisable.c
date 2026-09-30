/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer$$OnDisable
ENTRY_POINT: 031989e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer__OnDisable
               (undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined *puVar1;
  bool in_NG;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  uVar6 = param_2;
  if (in_NG) {
    uVar6 = param_1;
  }
                    /* try { // try from 031989e8 to 032989fb has its CatchHandler @ 03198a8c */
  *(undefined4 *)(unaff_x19 + 0x50) = uVar6;
  uVar2 = FUN_06950ac4();
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03198de8;
    if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x3c) != '\0') {
      if ((*(long *)(unaff_x19 + 0x68) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 == 0)) goto LAB_03198de8;
      *(undefined4 *)(lVar3 + 0x20) = 0x3f800000;
      lVar3 = FUN_03153f8c(lVar3,0);
      if ((*(long *)(unaff_x19 + 0x68) == 0) ||
         ((((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar4 == 0 ||
            (lVar4 = FUN_03153f8c(lVar4,0), lVar4 == 0)) || (*(long *)(lVar4 + 0x10) == 0)) ||
          (uVar6 = FUN_069042b4(*(long *)(lVar4 + 0x10),0), lVar3 == 0)))) goto LAB_03198de8;
      *(undefined4 *)(lVar3 + 0x28) = uVar6;
      *(undefined4 *)(lVar3 + 0x2c) = param_2;
      *(float *)(lVar3 + 0x30) = param_3;
      if ((*(long *)(unaff_x19 + 0x68) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 == 0)) goto LAB_03198de8;
      lVar3 = FUN_03153f94(lVar3,0);
      if ((*(long *)(unaff_x19 + 0x68) == 0) ||
         (((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar4 == 0 ||
           (lVar4 = FUN_03153f94(lVar4,0), lVar4 == 0)) ||
          ((*(long *)(lVar4 + 0x10) == 0 ||
           (uVar6 = FUN_069042b4(*(long *)(lVar4 + 0x10),0), lVar3 == 0)))))) goto LAB_03198de8;
      *(undefined4 *)(lVar3 + 0x28) = uVar6;
      *(undefined4 *)(lVar3 + 0x2c) = param_2;
      *(float *)(lVar3 + 0x30) = param_3;
      if ((*(long *)(unaff_x19 + 0x68) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 == 0)) goto LAB_03198de8;
      lVar3 = FUN_03153f9c(lVar3,0);
      if ((*(long *)(unaff_x19 + 0x68) == 0) ||
         ((((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar4 == 0 ||
            (lVar4 = FUN_03153f9c(lVar4,0), lVar4 == 0)) || (*(long *)(lVar4 + 0x10) == 0)) ||
          (uVar6 = FUN_069042b4(*(long *)(lVar4 + 0x10),0), lVar3 == 0)))) goto LAB_03198de8;
      *(undefined4 *)(lVar3 + 0x28) = uVar6;
      *(undefined4 *)(lVar3 + 0x2c) = param_2;
      *(float *)(lVar3 + 0x30) = param_3;
      if ((*(long *)(unaff_x19 + 0x68) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 == 0)) goto LAB_03198de8;
      lVar3 = FUN_03153fa4(lVar3,0);
      if (((*(long *)(unaff_x19 + 0x68) == 0) ||
          ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar4 == 0 ||
           (lVar4 = FUN_03153fa4(lVar4,0), lVar4 == 0)))) ||
         ((*(long *)(lVar4 + 0x10) == 0 ||
          (uVar6 = FUN_069042b4(*(long *)(lVar4 + 0x10),0), lVar3 == 0)))) goto LAB_03198de8;
      *(undefined4 *)(lVar3 + 0x28) = uVar6;
      *(undefined4 *)(lVar3 + 0x2c) = param_2;
      *(float *)(lVar3 + 0x30) = param_3;
      *(undefined4 *)(unaff_x19 + 0x50) = 0x3f800000;
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_03198de8;
      fVar7 = (float)FUN_06974fac(*(long *)(unaff_x19 + 0x60),0);
      fVar9 = param_3;
      lVar3 = FUN_068f5d7c();
      if (lVar3 == 0) goto LAB_03198de8;
      fVar8 = (float)FUN_069042b4(lVar3,0);
      lVar3 = *(long *)(unaff_x19 + 0x40);
      if (DAT_0738e6c8 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e6c8 = '\x01';
      }
      puVar1 = PTR_DAT_06f6d508;
      if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if (lVar3 == 0) goto LAB_03198de8;
      fVar7 = fVar7 - fVar8;
      param_3 = param_3 - fVar9;
      fVar9 = SQRT(param_3 * param_3 + fVar7 * fVar7 + 0.0);
      fVar8 = (float)FUN_068b63c8(lVar3,0);
      lVar3 = *(long *)(unaff_x19 + 0x60);
      if (DAT_0738e668 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e668 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      puVar1 = PTR_DAT_06f6d5d8;
      if (fVar9 <= DAT_01369fe0) {
        if (DAT_0738e669 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6d5d8);
          DAT_0738e669 = '\x01';
        }
        puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        uVar12 = *puVar5;
        param_3 = *(float *)(puVar5 + 1);
      }
      else {
        param_3 = param_3 / fVar9;
        uVar12 = CONCAT44(0.0 / fVar9,fVar7 / fVar9);
      }
      if (DAT_0738e662 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e662 = '\x01';
      }
      if (lVar3 == 0) goto LAB_03198de8;
      fVar11 = *(float *)(unaff_x19 + 0x28);
      fVar7 = *(float *)(unaff_x19 + 0x2c);
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
      fVar9 = ((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar10 >> 0x20) * fVar7) * fVar8 *
              fVar11;
      FUN_0697442c(CONCAT44(fVar9,((float)uVar12 + (float)uVar10 * fVar7) * fVar8 * fVar11),fVar9,
                   fVar11 * fVar8 * (param_3 + fVar7 * *(float *)(lVar4 + 0x20)),lVar3,0);
    }
  }
  fVar9 = *(float *)(unaff_x19 + 0x50);
  if (fVar9 < 0.5) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03198de8;
    if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x3c) != '\0') {
      fVar7 = (float)FUN_068eec18(0);
      fVar7 = fVar9 + fVar7 * -3.0;
      fVar9 = fVar7;
      if (1.0 < fVar7) {
        fVar9 = 1.0;
      }
      if (fVar7 < 0.0) {
        fVar9 = 0.0;
      }
      *(float *)(unaff_x19 + 0x50) = fVar9;
    }
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_068b63c8(fVar9,*(long *)(unaff_x19 + 0x38),0);
    FUN_03198dec();
    lVar3 = FUN_068f5d7c();
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (fVar9 = (float)FUN_068b63c8(*(undefined4 *)(unaff_x19 + 0x50),*(long *)(unaff_x19 + 0x48),0)
       , lVar3 != 0)) {
      FUN_06904aa4(fVar9 * *(float *)(unaff_x19 + 0x54),fVar9 * *(float *)(unaff_x19 + 0x58),
                   fVar9 * *(float *)(unaff_x19 + 0x5c),lVar3,0);
      return;
    }
  }
LAB_03198de8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



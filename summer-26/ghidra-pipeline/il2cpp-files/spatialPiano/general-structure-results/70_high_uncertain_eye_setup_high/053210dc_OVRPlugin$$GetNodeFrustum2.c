/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 053210dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetNodeFrustum2
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,float *param_5,
          undefined8 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  if ((DAT_06bbb256 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9790);
    FUN_02f08768(PTR_DAT_067cc450);
    DAT_06bbb256 = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  fVar10 = (float)FUN_05320be4(param_4,param_7);
  fVar18 = *param_5;
  uVar19 = *(undefined8 *)(param_5 + 1);
  fVar17 = param_5[3];
  uVar15 = *(undefined8 *)(param_5 + 4);
  if (DAT_06bb8a49 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8a49 = '\x01';
  }
  puVar1 = PTR_DAT_067cc450;
  fVar14 = (float)uVar15;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar11 = fVar16 * fVar16 + fVar17 * fVar17 + fVar14 * fVar14;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar11) {
    fVar18 = (param_3 - (float)((ulong)uVar19 >> 0x20)) * fVar16 +
             (fVar10 - fVar18) * fVar17 + (param_2 - (float)uVar19) * fVar14;
    fVar17 = (fVar17 * fVar18) / fVar11;
    uVar15 = CONCAT44((fVar16 * fVar18) / fVar11,(fVar14 * fVar18) / fVar11);
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    fVar17 = **(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    uVar15 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
  }
  fVar11 = *param_5;
  uVar19 = *(undefined8 *)(param_5 + 1);
  fVar18 = (float)FUN_05320c40(param_4,param_7);
  lVar6 = FUN_02f0880c(*(undefined8 *)puVar1,1);
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (lVar6 != 0) {
    iVar7 = (int)*(ulong *)(lVar6 + 0x18);
    if (iVar7 != 0) {
      fVar17 = fVar17 + fVar11;
      fVar14 = (float)uVar15 + (float)uVar19;
      fVar11 = (float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar19 >> 0x20);
      fVar10 = SQRT((param_3 - fVar11) * (param_3 - fVar11) +
                    (fVar10 - fVar17) * (fVar10 - fVar17) + (param_2 - fVar14) * (param_2 - fVar14))
               - fVar18;
      *(float *)(lVar6 + 0x20) = fVar10;
      puVar1 = PTR_DAT_067c9790;
      if (1 < iVar7) {
        lVar8 = (*(ulong *)(lVar6 + 0x18) & 0xffffffff) - 1;
        pfVar9 = (float *)(lVar6 + 0x24);
        do {
          fVar16 = *pfVar9;
          if (*pfVar9 <= fVar10) {
            fVar16 = fVar10;
          }
          fVar10 = fVar16;
          lVar8 = lVar8 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar8 != 0);
      }
      if (fVar10 < fVar18) {
        fVar10 = SQRT(fVar18 * fVar18 - fVar10 * fVar10);
        fVar17 = fVar17 - fVar10 * param_5[3];
        fVar14 = fVar14 - (float)*(undefined8 *)(param_5 + 4) * fVar10;
        fVar11 = fVar11 - (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) * fVar10;
      }
      uVar13 = CONCAT44(fVar11,fVar14);
      FUN_05320b6c(&stack0x00000020 + 4,param_4,param_7);
      uVar5 = uStack000000000000003c;
      uVar4 = uStack0000000000000038;
      uVar3 = uStack0000000000000034;
      uVar2 = uStack0000000000000030;
      uVar12 = FUN_05321400(fVar17,uVar13,fVar11,param_4,param_7);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060fda18(uVar12,uVar13 & 0xffffffff,fVar11,uVar2,uVar3,uVar4,uVar5,&stack0x00000040,0);
      FUN_05321528(&stack0x00000020 + 4,param_4,&stack0x00000040,param_7);
      param_6[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
      *param_6 = in_stack_00000020._4_8_;
      *(ulong *)((long)param_6 + 0x14) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(ulong *)((long)param_6 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



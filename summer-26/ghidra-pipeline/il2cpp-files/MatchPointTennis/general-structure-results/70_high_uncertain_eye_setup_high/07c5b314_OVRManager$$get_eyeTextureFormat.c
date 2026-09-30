/*
FUNCTION_NAME: OVRManager$$get_eyeTextureFormat
ENTRY_POINT: 07c5b314
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_eyeTextureFormat
               (undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar16;
  
  puVar1 = PTR_DAT_09f1e538;
  uVar2 = param_3;
  uVar11 = param_4;
  if ((DAT_0a526631 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e538);
    DAT_0a526631 = 1;
  }
  fVar8 = (float)uVar2;
  fVar15 = (float)uVar11;
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_0952c404(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (DAT_0a51bf45 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1eb60);
      DAT_0a51bf45 = '\x01';
    }
    puVar3 = *(uint **)(*(long *)PTR_DAT_09f1eb60 + 0xb8);
    uVar2 = (ulong)*puVar3;
    uVar11 = (ulong)puVar3[1];
    uVar14 = (ulong)puVar3[2];
    uVar16 = (ulong)puVar3[3];
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
LAB_07c5b48c:
    FUN_09537b20(param_2,param_3,param_4,uVar2,uVar11,uVar14,uVar16,param_1,0);
    return;
  }
  if (*(long *)(param_5 + 0x30) != 0) {
    fVar5 = (float)FUN_0953a4a4(*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x30) != 0) {
      fVar12 = fVar15;
      fVar9 = fVar8;
      fVar6 = (float)FUN_0953a5a4(*(long *)(param_5 + 0x30),0);
      if (*(long *)(param_5 + 0x30) != 0) {
        fVar13 = fVar12;
        fVar10 = fVar9;
        fVar7 = (float)FUN_0953a6a4(*(long *)(param_5 + 0x30),0);
        if (*(long *)(param_5 + 0x30) != 0) {
          fVar17 = (float)param_2;
          fVar19 = (float)param_3;
          fVar18 = (float)param_4;
          uVar14 = (ulong)(uint)(fVar18 * fVar13);
          uVar11 = (ulong)(uint)(fVar18 * fVar10);
          fVar15 = fVar17 * fVar15 + fVar19 * fVar12;
          uVar16 = (ulong)(uint)fVar15;
          param_4 = (ulong)(uint)(fVar15 + fVar18 * fVar13);
          param_3 = (ulong)(uint)(fVar17 * fVar8 + fVar19 * fVar9 + fVar18 * fVar10);
          param_2 = (ulong)(uint)(fVar17 * fVar5 + fVar19 * fVar6 + fVar18 * fVar7);
          uVar2 = FUN_09537fe0(*(long *)(param_5 + 0x30),0);
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          *(undefined4 *)(param_1 + 3) = 0;
          goto LAB_07c5b48c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



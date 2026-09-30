/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$RegisterTexture
ENTRY_POINT: 0145a060
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_1 != 0) {
    iVar6 = FUN_02666048(param_1,0);
    fVar19 = 0.0;
    if ((-1 < param_2) && (param_2 < iVar6)) {
      lVar7 = FUN_0266b978(param_1,0);
      lVar8 = FUN_0266dee8(param_1,param_2,0);
      puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
      if (lVar8 == 0) goto LAB_0145a244;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        fVar19 = 0.0;
        uVar12 = 2;
        do {
          if (uVar1 <= uVar12 - 2) {
LAB_0145a240:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (lVar7 == 0) goto LAB_0145a244;
          uVar3 = *(uint *)(lVar8 + (long)(int)(uVar12 - 2) * 4 + 0x20);
          uVar2 = *(uint *)(lVar7 + 0x18);
          if ((((uVar2 <= uVar3) || (uVar1 <= uVar12 - 1)) ||
              (uVar4 = *(uint *)(lVar8 + (long)(int)(uVar12 - 1) * 4 + 0x20), uVar2 <= uVar4)) ||
             ((uVar1 <= uVar12 ||
              (uVar1 = *(uint *)(lVar8 + (long)(int)uVar12 * 4 + 0x20), uVar2 <= uVar1))))
          goto LAB_0145a240;
          lVar10 = lVar7 + (long)(int)uVar3 * 0xc;
          lVar11 = lVar7 + (long)(int)uVar4 * 0xc;
          lVar9 = lVar7 + (long)(int)uVar1 * 0xc;
          fVar16 = *(float *)(lVar11 + 0x20) - *(float *)(lVar10 + 0x20);
          fVar17 = *(float *)(lVar11 + 0x24) - *(float *)(lVar10 + 0x24);
          fVar18 = *(float *)(lVar11 + 0x28) - *(float *)(lVar10 + 0x28);
          fVar13 = *(float *)(lVar9 + 0x20) - *(float *)(lVar10 + 0x20);
          fVar14 = *(float *)(lVar9 + 0x24) - *(float *)(lVar10 + 0x24);
          fVar15 = *(float *)(lVar9 + 0x28) - *(float *)(lVar10 + 0x28);
          if (DAT_03774e1b == '\0') {
            thunk_FUN_00d48444(puVar5);
            DAT_03774e1b = '\x01';
          }
          fVar20 = fVar17 * fVar15 - fVar18 * fVar14;
          fVar15 = fVar18 * fVar13 - fVar16 * fVar15;
          fVar13 = fVar16 * fVar14 - fVar17 * fVar13;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          iVar6 = uVar12 + 1;
          fVar19 = fVar19 + SQRT(fVar13 * fVar13 + fVar20 * fVar20 + fVar15 * fVar15) * 0.5;
          uVar12 = uVar12 + 3;
        } while (iVar6 < (int)uVar1);
      }
    }
    return fVar19;
  }
LAB_0145a244:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 060c50a4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__IsInsightPassthroughSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  long *plVar9;
  float fVar10;
  
  thunk_FUN_036a1978();
  uVar4 = FUN_071c24dc();
  puVar2 = PTR_DAT_07a240d8;
  puVar1 = PTR_DAT_07a20890;
  if ((uVar4 & 1) == 0) {
    if (unaff_x19 == 0) {
LAB_060c51a8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar8 = 0;
    do {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      iVar3 = FUN_060e2b30();
      if (iVar3 != 0) {
        plVar9 = *(long **)(unaff_x20 + 0x130);
        if (plVar9 == (long *)0x0) goto LAB_060c51a8;
        lVar6 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_060c515c;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)puVar2,0);
LAB_060c515c:
        fVar10 = (float)(*(code *)*puVar5)(plVar9,iVar8,puVar5[1]);
        if (*(float *)(unaff_x19 + 0xd8) < fVar10) {
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 5);
  }
  return 0;
}



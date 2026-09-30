/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemGpuLevel
ENTRY_POINT: 05bec1c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetSystemGpuLevel(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar13;
  long *plVar14;
  
  *(undefined1 *)(unaff_x19 + 0xd70) = 1;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar5 = FUN_05bebfdc();
  lVar6 = FUN_05bebe68();
  if (lVar5 != 0) {
    lVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070cbcc8,*(undefined4 *)(lVar5 + 0x18));
    puVar4 = PTR_DAT_070c2428;
    uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
    if (0 < (int)*(uint *)(lVar5 + 0x18)) {
      uVar13 = 0;
      do {
        if (uVar8 <= uVar13) {
LAB_05bec2f0:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        plVar14 = (long *)(lVar5 + uVar13 * 8 + 0x20);
        lVar9 = *plVar14;
        if (lVar9 == 0) goto LAB_05bec2f4;
        lVar9 = FUN_03188b1c(*(undefined8 *)puVar4,*(undefined4 *)(lVar9 + 0x18));
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar8 = (ulong)uVar1;
        if (uVar8 <= uVar13) goto LAB_05bec2f0;
        lVar10 = *plVar14;
        if (lVar10 == 0) goto LAB_05bec2f4;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar2) {
          uVar11 = 0;
          do {
            if (uVar2 == uVar11) goto LAB_05bec2f0;
            if (lVar6 == 0) goto LAB_05bec2f4;
            lVar12 = (long)(int)uVar11;
            uVar3 = *(uint *)(lVar10 + lVar12 * 4 + 0x20);
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_05bec2f0;
            if (lVar9 == 0) goto LAB_05bec2f4;
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_05bec2f0;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(lVar9 + lVar12 * 4 + 0x20) =
                 *(undefined4 *)(lVar6 + (long)(int)uVar3 * 4 + 0x20);
          } while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar11);
        }
        if (lVar7 == 0) goto LAB_05bec2f4;
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_05bec2f0;
        lVar10 = uVar13 * 8;
        uVar13 = uVar13 + 1;
        *(long *)(lVar7 + lVar10 + 0x20) = lVar9;
      } while ((int)uVar13 < (int)uVar1);
    }
    return lVar7;
  }
LAB_05bec2f4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}



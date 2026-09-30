/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetTrackingIPDEnabled
ENTRY_POINT: 04f8c018
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0__ovrp_GetTrackingIPDEnabled(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  lVar4 = FUN_04f8be00();
  lVar5 = FUN_04f8bc8c();
  if (lVar4 != 0) {
    lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06318668,*(undefined4 *)(lVar4 + 0x18));
    puVar3 = PTR_DAT_06313588;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
LAB_04f8c144:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar12 = (long *)(lVar4 + uVar11 * 8 + 0x20);
        lVar7 = *plVar12;
        if (lVar7 == 0) goto LAB_04f8c148;
        lVar7 = FUN_02b3c908(*(undefined8 *)puVar3,*(undefined4 *)(lVar7 + 0x18));
        if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_04f8c144;
        lVar8 = *plVar12;
        if (lVar8 == 0) goto LAB_04f8c148;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 == uVar9) goto LAB_04f8c144;
            if (lVar5 == 0) goto LAB_04f8c148;
            lVar10 = (long)(int)uVar9;
            uVar2 = *(uint *)(lVar8 + lVar10 * 4 + 0x20);
            if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_04f8c144;
            if (lVar7 == 0) goto LAB_04f8c148;
            if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_04f8c144;
            uVar9 = uVar9 + 1;
            *(undefined4 *)(lVar7 + lVar10 * 4 + 0x20) =
                 *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
          } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar9);
        }
        if (lVar6 == 0) goto LAB_04f8c148;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_04f8c144;
        *(long *)(lVar6 + uVar11 * 8 + 0x20) = lVar7;
        thunk_FUN_02bb0e9c(lVar6 + 0x20 + uVar11 * 8);
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
    return lVar6;
  }
LAB_04f8c148:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



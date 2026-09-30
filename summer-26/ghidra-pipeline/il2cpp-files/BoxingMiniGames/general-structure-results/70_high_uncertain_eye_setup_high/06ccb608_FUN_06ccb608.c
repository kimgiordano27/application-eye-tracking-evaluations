/*
FUNCTION_NAME: FUN_06ccb608
ENTRY_POINT: 06ccb608
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06ccb608(void)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = MS_Internal_Xml_XPath_Operator_Op___TypeInfo;
  if ((DAT_07eea547 & 1) == 0) {
    FUN_03642964(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
    FUN_03642964(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    DAT_07eea547 = 1;
  }
  uVar7 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar7 = FUN_05e26f18(uVar7,0);
  lVar4 = FUN_071b8a40(uVar7,0);
  puVar3 = OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo;
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar2) {
      lVar8 = 0;
      do {
        if (uVar2 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar5 = *(long **)(lVar4 + 0x20 + lVar8 * 8);
        if (plVar5 == (long *)0x0) goto LAB_06ccb71c;
        lVar6 = *(long *)puVar3;
        if (*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) {
LAB_06ccb718:
                    /* WARNING: Subroutine does not return */
          FUN_03643084();
        }
        lVar1 = *(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8;
        if (*(long *)(lVar1 + -8) != lVar6) goto LAB_06ccb718;
        plVar5[5] = 0;
        if (*(long *)(lVar1 + -8) != lVar6) goto LAB_06ccb718;
        thunk_FUN_036b7ad0(plVar5 + 5,0);
        uVar2 = *(uint *)(lVar4 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar2);
    }
    return;
  }
LAB_06ccb71c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}



/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 03684c74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetInsightPassthroughInitializationState(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x21;
  undefined8 uVar9;
  
  thunk_FUN_01f51358();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    lVar6 = FUN_0404ce70(*(long *)(unaff_x21 + 0x10),0);
    plVar8 = (long *)(unaff_x19 + 0xa0);
    *plVar8 = lVar6;
    thunk_FUN_01f51358(plVar8,lVar6);
    puVar5 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    if (*(char *)(unaff_x19 + 0xa8) == '\0') {
      puVar1 = (undefined4 *)(unaff_x19 + 0x40);
      puVar2 = (undefined4 *)(unaff_x19 + 0x44);
      puVar3 = (undefined4 *)(unaff_x19 + 0x48);
      puVar4 = (undefined4 *)(unaff_x19 + 0x4c);
    }
    else {
      puVar1 = (undefined4 *)(unaff_x19 + 0x50);
      puVar2 = (undefined4 *)(unaff_x19 + 0x54);
      puVar3 = (undefined4 *)(unaff_x19 + 0x58);
      puVar4 = (undefined4 *)(unaff_x19 + 0x5c);
    }
    if (*plVar8 != 0) {
      FUN_0404e03c(*puVar1,*puVar2,*puVar3,*puVar4,*plVar8,0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar9,0,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar9 = FUN_04070398();
      *(undefined8 *)(unaff_x19 + 0x68) = uVar9;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x68),uVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



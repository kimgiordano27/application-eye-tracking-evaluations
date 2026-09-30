/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 03153640
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetAppPerfStats(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  do {
    uVar3 = FUN_0391c2b8(param_1,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x22);
    }
    FUN_03923a90(uVar3,0);
    do {
      do {
        unaff_w20 = unaff_w20 + 1;
        if (*(long *)(unaff_x19 + 0x30) == 0) {
LAB_03153678:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar1 = FUN_0392a654(*(long *)(unaff_x19 + 0x30),0);
        if (iVar1 <= unaff_w20) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_03153678;
        param_1 = FUN_0392a9fc(*(long *)(unaff_x19 + 0x30),unaff_w20,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*unaff_x22);
        }
        uVar2 = FUN_0391f968(param_1,0,0);
      } while ((uVar2 & 1) == 0);
      if (param_1 == 0) goto LAB_03153678;
      uVar2 = FUN_01e8b8bc(param_1,&stack0x00000008,*unaff_x23);
    } while ((uVar2 & 1) == 0);
  } while( true );
}



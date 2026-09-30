/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerAnnotationVariant
ENTRY_POINT: 07ca1cb0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerAnnotationVariant(long param_1)

{
  int iVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  
  do {
    if (in_w8 <= unaff_w26) {
      return;
    }
    unaff_w26 = unaff_w20 + 1;
    iVar1 = unaff_w26;
    if (unaff_w26 < in_w8) {
      do {
        lVar2 = FUN_05badb74(param_1,unaff_w20,*unaff_x24);
        if ((lVar2 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) {
LAB_07ca1cd0:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar3 = *(undefined8 *)(lVar2 + 0x20);
        lVar2 = FUN_05badb74(*(long *)(unaff_x19 + 0x68),iVar1,*unaff_x24);
        if (lVar2 == 0) goto LAB_07ca1cd0;
        uVar4 = *(undefined8 *)(lVar2 + 0x20);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*unaff_x25);
        }
        FUN_095b3614(uVar3,uVar4,0);
        param_1 = *(long *)(unaff_x19 + 0x68);
        if (param_1 == 0) goto LAB_07ca1cd0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x18));
    }
    in_w8 = *(int *)(param_1 + 0x18);
    unaff_w20 = unaff_w26;
  } while( true );
}



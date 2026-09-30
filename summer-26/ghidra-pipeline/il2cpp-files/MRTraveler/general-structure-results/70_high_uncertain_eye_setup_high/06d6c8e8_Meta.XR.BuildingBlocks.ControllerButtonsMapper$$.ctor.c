/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$.ctor
ENTRY_POINT: 06d6c8e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper___ctor(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x23;
  
  while (unaff_x20 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = unaff_x22;
      thunk_FUN_03d233cc(puVar3,unaff_x22);
    }
    else {
      FUN_05212cf4();
    }
    do {
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w21 == 0x37) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_06d6c96c;
      unaff_x22 = FUN_085875ac(*(long *)(unaff_x19 + 0x18),unaff_w21,0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x23);
      }
      uVar2 = FUN_085decd4(unaff_x22,0,0);
    } while ((uVar2 & 1) == 0);
  }
LAB_06d6c96c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



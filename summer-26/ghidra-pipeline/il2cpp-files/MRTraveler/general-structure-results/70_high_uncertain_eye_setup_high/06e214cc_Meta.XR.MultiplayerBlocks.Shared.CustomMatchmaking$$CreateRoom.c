/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking$$CreateRoom
ENTRY_POINT: 06e214cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking__CreateRoom
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_05d615e0(param_2,param_3,*(undefined8 *)(param_1 + 0x210));
  if (unaff_x20 != 0) {
    FUN_05d6c7a8();
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar2 != 0)) {
      lVar2 = *(long *)(lVar2 + 0x80);
      uVar1 = thunk_FUN_03cf5234(*unaff_x22);
      FUN_05d615e0();
      if (lVar2 != 0) {
        FUN_05d6c7a8(lVar2,uVar1,*unaff_x23);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0x88);
          uVar1 = thunk_FUN_03cf5234(*unaff_x24);
          FUN_05d61f5c();
          if (lVar2 != 0) {
            FUN_05d6f764(lVar2,uVar1,*unaff_x25);
            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar2 != 0)) {
              lVar2 = *(long *)(lVar2 + 0x98);
              uVar1 = thunk_FUN_03cf5234(*unaff_x22);
              FUN_05d615e0();
              if (lVar2 != 0) {
                FUN_05d6c7a8(lVar2,uVar1,*unaff_x23);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



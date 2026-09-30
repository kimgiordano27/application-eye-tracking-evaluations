/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$LateUpdate
ENTRY_POINT: 014b59f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__LateUpdate(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  
  if (param_1 != 0) {
    *(long *)(unaff_x23 + 0x10) = param_1;
    lVar1 = thunk_FUN_00d6225c();
    if (lVar1 != 0) {
      lVar3 = *(long *)(unaff_x23 + 0x28);
      lVar1 = thunk_FUN_00d62348(*unaff_x29);
      if ((lVar1 != 0) && (FUN_013df2bc(), lVar3 != 0)) {
        FUN_013df7e0(lVar3,lVar1,*(undefined8 *)PTR_DAT_033ed298);
        lVar3 = *(long *)(unaff_x23 + 0x30);
        lVar1 = thunk_FUN_00d62348(*unaff_x27);
        if ((lVar1 != 0) && (FUN_013df4e8(), lVar3 != 0)) {
          FUN_013e061c(lVar3,lVar1,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_1__);
          uVar4 = *(undefined8 *)(unaff_x23 + 0x18);
          lVar1 = thunk_FUN_00d62348(*unaff_x24);
          if (lVar1 != 0) {
            FUN_014febf4();
            plVar2 = (long *)FUN_017b78c8(uVar4,lVar1,0);
            if (plVar2 == (long *)0x0) {
              *(undefined8 *)(unaff_x23 + 0x18) = 0;
              return;
            }
            lVar1 = *unaff_x24;
            if ((*plVar2 == lVar1) && (*(long **)(unaff_x23 + 0x18) = plVar2, *plVar2 == lVar1)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}



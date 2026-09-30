/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking$$OnEnable
ENTRY_POINT: 06e213f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking__OnEnable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_05d6c7a8();
  puVar1 = PTR_DAT_08e93500;
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x68);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93500);
    FUN_05d61f5c();
    puVar2 = PTR_DAT_08e93510;
    if (lVar4 != 0) {
      FUN_05d6f764(lVar4,uVar3,*(undefined8 *)PTR_DAT_08e93510);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar4 != 0)) {
        lVar4 = *(long *)(lVar4 + 0x70);
        uVar3 = thunk_FUN_03cf5234(*unaff_x22);
        FUN_05d615e0();
        if (lVar4 != 0) {
          FUN_05d6c7a8(lVar4,uVar3,*unaff_x23);
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar4 != 0)) {
            lVar4 = *(long *)(lVar4 + 0x78);
            uVar3 = thunk_FUN_03cf5234(*unaff_x22);
            FUN_05d615e0();
            if (lVar4 != 0) {
              FUN_05d6c7a8(lVar4,uVar3,*unaff_x23);
              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                 (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar4 != 0)) {
                lVar4 = *(long *)(lVar4 + 0x80);
                uVar3 = thunk_FUN_03cf5234(*unaff_x22);
                FUN_05d615e0();
                if (lVar4 != 0) {
                  FUN_05d6c7a8(lVar4,uVar3,*unaff_x23);
                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar4 != 0)) {
                    lVar4 = *(long *)(lVar4 + 0x88);
                    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                    FUN_05d61f5c();
                    if (lVar4 != 0) {
                      FUN_05d6f764(lVar4,uVar3,*(undefined8 *)puVar2);
                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar4 != 0)) {
                        lVar4 = *(long *)(lVar4 + 0x98);
                        uVar3 = thunk_FUN_03cf5234(*unaff_x22);
                        FUN_05d615e0();
                        if (lVar4 != 0) {
                          FUN_05d6c7a8(lVar4,uVar3,*unaff_x23);
                          return;
                        }
                      }
                    }
                  }
                }
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



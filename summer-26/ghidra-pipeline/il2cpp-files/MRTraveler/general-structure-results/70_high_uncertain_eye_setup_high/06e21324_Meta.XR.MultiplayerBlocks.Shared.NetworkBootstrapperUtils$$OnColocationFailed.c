/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.NetworkBootstrapperUtils$$OnColocationFailed
ENTRY_POINT: 06e21324
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperUtils__OnColocationFailed(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  undefined8 *unaff_x22;
  
  if (param_1 != 0) {
    lVar6 = *(long *)(param_1 + 0xa8);
    uVar5 = thunk_FUN_03cf5234(*unaff_x22);
    FUN_085f2ea0();
    if (lVar6 != 0) {
      FUN_085f2f70(lVar6,uVar5,0);
      puVar1 = PTR_DAT_08e934f8;
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
        lVar6 = *(long *)(lVar6 + 0x58);
        uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e934f8);
        FUN_05d615e0();
        puVar3 = PTR_DAT_08e93508;
        if (lVar6 != 0) {
          FUN_05d6c7a8(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e93508);
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
            lVar6 = *(long *)(lVar6 + 0x60);
            uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
            FUN_05d615e0();
            if (lVar6 != 0) {
              FUN_05d6c7a8(lVar6,uVar5,*(undefined8 *)puVar3);
              puVar2 = PTR_DAT_08e93500;
              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                lVar6 = *(long *)(lVar6 + 0x68);
                uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93500);
                FUN_05d61f5c();
                puVar4 = PTR_DAT_08e93510;
                if (lVar6 != 0) {
                  FUN_05d6f764(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e93510);
                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                    lVar6 = *(long *)(lVar6 + 0x70);
                    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                    FUN_05d615e0();
                    if (lVar6 != 0) {
                      FUN_05d6c7a8(lVar6,uVar5,*(undefined8 *)puVar3);
                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                        lVar6 = *(long *)(lVar6 + 0x78);
                        uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                        FUN_05d615e0();
                        if (lVar6 != 0) {
                          FUN_05d6c7a8(lVar6,uVar5,*(undefined8 *)puVar3);
                          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                            lVar6 = *(long *)(lVar6 + 0x80);
                            uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                            FUN_05d615e0();
                            if (lVar6 != 0) {
                              FUN_05d6c7a8(lVar6,uVar5,*(undefined8 *)puVar3);
                              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)
                                 ) {
                                lVar6 = *(long *)(lVar6 + 0x88);
                                uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
                                FUN_05d61f5c();
                                if (lVar6 != 0) {
                                  FUN_05d6f764(lVar6,uVar5,*(undefined8 *)puVar4);
                                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28),
                                     lVar6 != 0)) {
                                    lVar6 = *(long *)(lVar6 + 0x98);
                                    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                                    FUN_05d615e0();
                                    if (lVar6 != 0) {
                                      FUN_05d6c7a8(lVar6,uVar5,*(undefined8 *)puVar3);
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



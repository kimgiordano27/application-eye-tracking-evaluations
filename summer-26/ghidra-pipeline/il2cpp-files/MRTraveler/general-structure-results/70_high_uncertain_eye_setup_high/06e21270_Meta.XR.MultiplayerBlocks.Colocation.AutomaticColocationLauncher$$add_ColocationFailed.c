/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$add_ColocationFailed
ENTRY_POINT: 06e21270
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__add_ColocationFailed
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x508));
  FUN_03c8f898(PTR_DAT_08e93510);
  *(undefined1 *)(unaff_x21 + 0x48) = 1;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar5 = FUN_085dfaac(uVar7,0,0);
  puVar1 = PTR_DAT_08e6b288;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
    lVar6 = *(long *)(lVar6 + 0xa0);
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6b288);
    FUN_085f2ea0();
    if (lVar6 != 0) {
      FUN_085f2f70(lVar6,uVar7,0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
        lVar6 = *(long *)(lVar6 + 0xa8);
        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        FUN_085f2ea0();
        if (lVar6 != 0) {
          FUN_085f2f70(lVar6,uVar7,0);
          puVar1 = PTR_DAT_08e934f8;
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
            lVar6 = *(long *)(lVar6 + 0x58);
            uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e934f8);
            FUN_05d615e0();
            puVar3 = PTR_DAT_08e93508;
            if (lVar6 != 0) {
              FUN_05d6c7a8(lVar6,uVar7,*(undefined8 *)PTR_DAT_08e93508);
              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                lVar6 = *(long *)(lVar6 + 0x60);
                uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                FUN_05d615e0();
                if (lVar6 != 0) {
                  FUN_05d6c7a8(lVar6,uVar7,*(undefined8 *)puVar3);
                  puVar2 = PTR_DAT_08e93500;
                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                    lVar6 = *(long *)(lVar6 + 0x68);
                    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93500);
                    FUN_05d61f5c();
                    puVar4 = PTR_DAT_08e93510;
                    if (lVar6 != 0) {
                      FUN_05d6f764(lVar6,uVar7,*(undefined8 *)PTR_DAT_08e93510);
                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                        lVar6 = *(long *)(lVar6 + 0x70);
                        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                        FUN_05d615e0();
                        if (lVar6 != 0) {
                          FUN_05d6c7a8(lVar6,uVar7,*(undefined8 *)puVar3);
                          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)) {
                            lVar6 = *(long *)(lVar6 + 0x78);
                            uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                            FUN_05d615e0();
                            if (lVar6 != 0) {
                              FUN_05d6c7a8(lVar6,uVar7,*(undefined8 *)puVar3);
                              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 != 0)
                                 ) {
                                lVar6 = *(long *)(lVar6 + 0x80);
                                uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                                FUN_05d615e0();
                                if (lVar6 != 0) {
                                  FUN_05d6c7a8(lVar6,uVar7,*(undefined8 *)puVar3);
                                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28),
                                     lVar6 != 0)) {
                                    lVar6 = *(long *)(lVar6 + 0x88);
                                    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
                                    FUN_05d61f5c();
                                    if (lVar6 != 0) {
                                      FUN_05d6f764(lVar6,uVar7,*(undefined8 *)puVar4);
                                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28),
                                         lVar6 != 0)) {
                                        lVar6 = *(long *)(lVar6 + 0x98);
                                        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                                        FUN_05d615e0();
                                        if (lVar6 != 0) {
                                          FUN_05d6c7a8(lVar6,uVar7,*(undefined8 *)puVar3);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



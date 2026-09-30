/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToString
ENTRY_POINT: 03dfe540
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>__ToString(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  FUN_02b3c81c();
  FUN_02b3c81c(PTR_DAT_06321250);
  FUN_02b3c81c(PTR_DAT_06321258);
  FUN_02b3c81c(PTR_DAT_06321260);
  FUN_02b3c81c(PTR_DAT_06321268);
  FUN_02b3c81c(PTR_DAT_06321270);
  FUN_02b3c81c(PTR_DAT_06321278);
  FUN_02b3c81c(PTR_DAT_06321280);
  FUN_02b3c81c(PTR_DAT_06321288);
  FUN_02b3c81c(PTR_DAT_0631ef18);
  *(undefined1 *)(unaff_x22 + 0x974) = 1;
  lVar6 = *(long *)(unaff_x20 + 0x20);
  *(undefined1 *)(unaff_x19 + 0x74) = 1;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03c870fc();
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) ==
      0) {
    FUN_02b76218();
  }
  FUN_05df2dbc();
  lVar7 = unaff_x19[100];
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (lVar7 != 0) {
    FUN_05df2dbc(lVar7,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x148),0);
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x135) & 1)
        == 0) {
      FUN_02b76218();
    }
    lVar6 = thunk_FUN_02b79644();
    FUN_03bf7d58(lVar6,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60));
    if (lVar6 != 0) {
      FUN_05df0810(lVar6,1,0);
      unaff_x19[0x6d] = lVar6;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x6d,lVar6);
      lVar7 = unaff_x19[0x6d];
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218();
      }
      if (lVar7 != 0) {
        FUN_05df2dbc(lVar7,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x138),0);
        lVar6 = FUN_03c86458();
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218(lVar7);
        }
        if (lVar6 != 0) {
          FUN_05df2dbc(lVar6,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x150),0);
          lVar6 = FUN_03c86458();
          puVar2 = PTR_DAT_0631ef18;
          if (lVar6 != 0) {
            FUN_05df8630(lVar6,unaff_x19[0x6d],0);
            lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_05df0c30(lVar6,0);
            plVar1 = unaff_x19 + 0x6e;
            unaff_x19[0x6e] = lVar6;
            thunk_FUN_02bb0e9c(plVar1,lVar6);
            lVar7 = unaff_x19[0x6e];
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02b76218();
            }
            if (lVar7 != 0) {
              FUN_05df2dbc(lVar7,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x140),0);
              if (*plVar1 != 0) {
                FUN_05df0810(*plVar1,1,0);
                lVar6 = FUN_03c86458();
                puVar4 = PTR_DAT_06321280;
                puVar3 = PTR_DAT_06321270;
                puVar2 = PTR_DAT_06321268;
                if (lVar6 != 0) {
                  FUN_05df8630(lVar6,*plVar1,0);
                  if ((*(ushort *)
                        (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1)
                      == 0) {
                    FUN_02b76218();
                  }
                  uVar5 = thunk_FUN_02b79644();
                  FUN_037a5cd0(uVar5,*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70));
                  (**(code **)(*unaff_x19 + 0xb08))();
                  thunk_FUN_02b79644(*(undefined8 *)puVar3);
                  FUN_04981ae4();
                  FUN_0316d62c();
                  thunk_FUN_02b79644(*(undefined8 *)puVar4);
                  FUN_04981ae4();
                  FUN_0316d62c();
                  thunk_FUN_02b79644(*(undefined8 *)puVar2);
                  FUN_04981ae4();
                  FUN_0316d62c();
                  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
                  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_02b76218();
                  }
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
                  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_02b76218();
                  }
                  puVar2 = PTR_DAT_06321278;
                  if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) == 0) {
                    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
                    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_02b76218();
                    }
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
                    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_02b76218();
                    }
                    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
                    uVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06321288);
                    FUN_04981ae4(uVar5,uVar8,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8),0);
                    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
                    lVar6 = *(long *)(lVar7 + 0xa0);
                    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_02b76218();
                      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
                    }
                    *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8) = uVar5;
                    lVar6 = *(long *)(lVar7 + 0xa0);
                    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_02b76218();
                    }
                    thunk_FUN_02bb0e9c(*(long *)(lVar6 + 0xb8) + 8,uVar5);
                  }
                  FUN_0316d62c();
                  thunk_FUN_02b79644(*(undefined8 *)puVar2);
                  FUN_04981ae4();
                  FUN_0316d62c();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



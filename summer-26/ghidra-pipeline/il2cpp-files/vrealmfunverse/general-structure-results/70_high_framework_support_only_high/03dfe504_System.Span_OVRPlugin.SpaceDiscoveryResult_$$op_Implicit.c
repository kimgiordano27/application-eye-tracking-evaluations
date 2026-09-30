/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 03dfe504
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_066c4974 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06321240);
    FUN_02b3c81c(PTR_DAT_06321248);
    FUN_02b3c81c(PTR_DAT_06321250);
    FUN_02b3c81c(PTR_DAT_06321258);
    FUN_02b3c81c(PTR_DAT_06321260);
    FUN_02b3c81c(PTR_DAT_06321268);
    FUN_02b3c81c(PTR_DAT_06321270);
    FUN_02b3c81c(PTR_DAT_06321278);
    FUN_02b3c81c(PTR_DAT_06321280);
    FUN_02b3c81c(PTR_DAT_06321288);
    FUN_02b3c81c(PTR_DAT_0631ef18);
    DAT_066c4974 = 1;
  }
  lVar9 = *(long *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + 0x74) = 1;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03c870fc(param_1,param_2,0,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48)
              );
  lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  FUN_05df2dbc(param_1,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x130),0);
  lVar11 = param_1[100];
  lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  if (lVar11 != 0) {
    FUN_05df2dbc(lVar11,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x148),0);
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) ==
        0) {
      FUN_02b76218();
    }
    lVar9 = thunk_FUN_02b79644();
    FUN_03bf7d58(lVar9,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60));
    if (lVar9 != 0) {
      FUN_05df0810(lVar9,1,0);
      param_1[0x6d] = lVar9;
      thunk_FUN_02bb0e9c(param_1 + 0x6d,lVar9);
      lVar11 = param_1[0x6d];
      lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218();
      }
      if (lVar11 != 0) {
        FUN_05df2dbc(lVar11,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x138),0);
        lVar9 = FUN_03c86458(param_1,*(undefined8 *)
                                      (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68));
        lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        if (lVar9 != 0) {
          FUN_05df2dbc(lVar9,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x150),0);
          lVar9 = FUN_03c86458(param_1,*(undefined8 *)
                                        (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68));
          puVar2 = PTR_DAT_0631ef18;
          if (lVar9 != 0) {
            FUN_05df8630(lVar9,param_1[0x6d],0);
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_05df0c30(lVar9,0);
            plVar1 = param_1 + 0x6e;
            param_1[0x6e] = lVar9;
            thunk_FUN_02bb0e9c(plVar1,lVar9);
            lVar11 = param_1[0x6e];
            lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02b76218();
            }
            if (lVar11 != 0) {
              FUN_05df2dbc(lVar11,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x140),0);
              if (*plVar1 != 0) {
                FUN_05df0810(*plVar1,1,0);
                lVar9 = FUN_03c86458(param_1,*(undefined8 *)
                                              (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68));
                puVar7 = PTR_DAT_06321280;
                puVar6 = PTR_DAT_06321270;
                puVar5 = PTR_DAT_06321268;
                puVar4 = PTR_DAT_06321260;
                puVar3 = PTR_DAT_06321258;
                puVar2 = PTR_DAT_06321250;
                if (lVar9 != 0) {
                  FUN_05df8630(lVar9,*plVar1,0);
                  if ((*(ushort *)
                        (*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8) + 0x135) & 1) ==
                      0) {
                    FUN_02b76218();
                  }
                  uVar8 = thunk_FUN_02b79644();
                  FUN_037a5cd0(uVar8,*(undefined8 *)
                                      (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70));
                  (**(code **)(*param_1 + 0xb08))(param_1,uVar8,*(undefined8 *)(*param_1 + 0xb10));
                  uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                  FUN_04981ae4(uVar8,param_1,
                               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80),0
                              );
                  FUN_0316d62c(param_1,uVar8,0,*(undefined8 *)puVar2);
                  uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                  FUN_04981ae4(uVar8,param_1,
                               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88),0
                              );
                  FUN_0316d62c(param_1,uVar8,0,*(undefined8 *)puVar4);
                  uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
                  FUN_04981ae4(uVar8,param_1,
                               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90),0
                              );
                  FUN_0316d62c(param_1,uVar8,0,*(undefined8 *)puVar3);
                  lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0);
                  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_02b76218();
                  }
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0);
                  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_02b76218();
                  }
                  puVar4 = PTR_DAT_06321278;
                  puVar3 = PTR_DAT_06321248;
                  puVar2 = PTR_DAT_06321240;
                  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
                  if (lVar9 == 0) {
                    lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0);
                    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_02b76218();
                    }
                    if (*(int *)(lVar9 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0);
                    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_02b76218();
                    }
                    uVar8 = **(undefined8 **)(lVar9 + 0xb8);
                    lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06321288);
                    FUN_04981ae4(lVar9,uVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa8)
                                 ,0);
                    lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
                    lVar11 = *(long *)(lVar10 + 0xa0);
                    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_02b76218();
                      lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
                    }
                    *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar9;
                    lVar11 = *(long *)(lVar10 + 0xa0);
                    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_02b76218();
                    }
                    thunk_FUN_02bb0e9c(*(long *)(lVar11 + 0xb8) + 8,lVar9);
                  }
                  FUN_0316d62c(param_1,lVar9,0,*(undefined8 *)puVar2);
                  uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                  FUN_04981ae4(uVar8,param_1,
                               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0),0
                              );
                  FUN_0316d62c(param_1,uVar8,0,*(undefined8 *)puVar3);
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



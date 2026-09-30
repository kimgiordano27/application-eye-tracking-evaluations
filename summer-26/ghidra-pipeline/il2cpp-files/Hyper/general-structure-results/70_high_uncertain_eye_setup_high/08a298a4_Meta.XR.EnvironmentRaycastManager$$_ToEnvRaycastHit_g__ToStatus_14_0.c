/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$<ToEnvRaycastHit>g__ToStatus|14_0
ENTRY_POINT: 08a298a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__<ToEnvRaycastHit>g__ToStatus_14_0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000018;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x618));
  FUN_04947ee4(PTR_DAT_0ac52620);
  FUN_04947ee4(PTR_DAT_0ac52628);
  FUN_04947ee4(PTR_DAT_0ac52630);
  FUN_04947ee4(PTR_DAT_0ac52638);
  FUN_04947ee4(PTR_DAT_0ac52640);
  FUN_04947ee4(PTR_DAT_0ac52648);
  FUN_04947ee4(PTR_DAT_0ac52650);
  FUN_04947ee4(PTR_DAT_0ac4c058);
  FUN_04947ee4(PTR_DAT_0ac51fe0);
  *(undefined1 *)(unaff_x21 + 0x32d) = 1;
  puVar3 = PTR_DAT_0ac52650;
  puVar2 = PTR_DAT_0ac525c0;
  puVar1 = PTR_DAT_0ac51fe0;
  in_stack_00000018 = 0;
  if (unaff_x20 != 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar9 = *(undefined4 *)(unaff_x20 + 0x1c);
    uVar7 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*(undefined8 *)PTR_DAT_0ac51fe0);
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
    FUN_08dbf2f0(lVar4,0);
    *(undefined4 *)(lVar4 + 0x20) = uVar9;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    plVar6 = (long *)(unaff_x19 + 0x68);
    *plVar6 = lVar4;
    *(undefined4 *)(lVar4 + 0x24) = uVar7;
    thunk_FUN_049ee3d8(plVar6,lVar4);
    lVar4 = *plVar6;
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_05f901fc();
    if (lVar4 != 0) {
      FUN_08a28508(lVar4,uVar5);
      uVar7 = DAT_01df5028;
      in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar9 = *(undefined4 *)(unaff_x20 + 0x2c);
      uVar8 = FUN_06fc9c98(DAT_01df5028,&stack0x00000018,*(undefined8 *)puVar1);
      lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_08dbf2f0(lVar4,0);
      *(undefined4 *)(lVar4 + 0x20) = uVar9;
      uVar5 = DAT_01da5d68;
      plVar6 = (long *)(unaff_x19 + 0x70);
      *plVar6 = lVar4;
      *(undefined4 *)(lVar4 + 0x24) = uVar8;
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      thunk_FUN_049ee3d8(plVar6,lVar4);
      lVar4 = *plVar6;
      uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
      FUN_05f901fc();
      if (lVar4 != 0) {
        FUN_08a28508(lVar4,uVar5);
        in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x58);
        uVar9 = *(undefined4 *)(unaff_x20 + 0x54);
        uVar8 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*(undefined8 *)puVar1);
        lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_08dbf2f0(lVar4,0);
        *(undefined4 *)(lVar4 + 0x20) = uVar9;
        uVar5 = DAT_01da5c58;
        plVar6 = (long *)(unaff_x19 + 0x78);
        *plVar6 = lVar4;
        *(undefined4 *)(lVar4 + 0x24) = uVar8;
        *(undefined8 *)(lVar4 + 0x18) = uVar5;
        thunk_FUN_049ee3d8(plVar6,lVar4);
        lVar4 = *plVar6;
        uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_05f901fc();
        if (lVar4 != 0) {
          FUN_08a28508(lVar4,uVar5);
          lVar4 = FUN_089bc5e4();
          if (lVar4 != 0) {
            uVar5 = *(undefined8 *)(lVar4 + 0x18);
            in_stack_00000018 = uVar5;
            lVar4 = FUN_089bc5e4();
            if (lVar4 != 0) {
              in_stack_00000018 = *(undefined8 *)(lVar4 + 0x20);
              uVar9 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*(undefined8 *)puVar1);
              lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
              FUN_08dbf2f0(lVar4,0);
              *(int *)(lVar4 + 0x20) = (int)((ulong)uVar5 >> 0x20);
              uVar5 = DAT_01da5308;
              plVar6 = (long *)(unaff_x19 + 0x80);
              *plVar6 = lVar4;
              *(undefined4 *)(lVar4 + 0x24) = uVar9;
              *(undefined8 *)(lVar4 + 0x18) = uVar5;
              thunk_FUN_049ee3d8(plVar6,lVar4);
              lVar4 = *plVar6;
              uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
              FUN_05f901fc();
              if (lVar4 != 0) {
                FUN_08a28508(lVar4,uVar5);
                lVar4 = FUN_089bc5e4();
                if (lVar4 != 0) {
                  uVar5 = *(undefined8 *)(lVar4 + 0x28);
                  in_stack_00000018 = uVar5;
                  lVar4 = FUN_089bc5e4();
                  if (lVar4 != 0) {
                    in_stack_00000018 = *(undefined8 *)(lVar4 + 0x30);
                    uVar9 = FUN_06fc9c98(uVar7,&stack0x00000018,*(undefined8 *)puVar1);
                    lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
                    FUN_08dbf2f0(lVar4,0);
                    *(int *)(lVar4 + 0x20) = (int)((ulong)uVar5 >> 0x20);
                    uVar5 = DAT_01da62f8;
                    plVar6 = (long *)(unaff_x19 + 0x88);
                    *plVar6 = lVar4;
                    *(undefined4 *)(lVar4 + 0x24) = uVar9;
                    *(undefined8 *)(lVar4 + 0x18) = uVar5;
                    thunk_FUN_049ee3d8(plVar6,lVar4);
                    lVar4 = *plVar6;
                    uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                    FUN_05f901fc();
                    if (lVar4 != 0) {
                      FUN_08a28508(lVar4,uVar5);
                      lVar4 = FUN_089bc758();
                      if (lVar4 != 0) {
                        uVar5 = *(undefined8 *)(lVar4 + 0x18);
                        in_stack_00000018 = uVar5;
                        lVar4 = FUN_089bc758();
                        if (lVar4 != 0) {
                          in_stack_00000018 = *(undefined8 *)(lVar4 + 0x20);
                          uVar9 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*(undefined8 *)puVar1);
                          lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
                          FUN_08dbf2f0(lVar4,0);
                          *(int *)(lVar4 + 0x20) = (int)((ulong)uVar5 >> 0x20);
                          uVar5 = DAT_01da5420;
                          plVar6 = (long *)(unaff_x19 + 0x90);
                          *plVar6 = lVar4;
                          *(undefined4 *)(lVar4 + 0x24) = uVar9;
                          *(undefined8 *)(lVar4 + 0x18) = uVar5;
                          thunk_FUN_049ee3d8(plVar6,lVar4);
                          lVar4 = *plVar6;
                          uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                          FUN_05f901fc();
                          if (lVar4 != 0) {
                            FUN_08a28508(lVar4,uVar5);
                            lVar4 = FUN_089bc758();
                            if (lVar4 != 0) {
                              uVar5 = *(undefined8 *)(lVar4 + 0x28);
                              in_stack_00000018 = uVar5;
                              lVar4 = FUN_089bc758();
                              if (lVar4 != 0) {
                                in_stack_00000018 = *(undefined8 *)(lVar4 + 0x30);
                                uVar9 = FUN_06fc9c98(uVar7,&stack0x00000018,*(undefined8 *)puVar1);
                                lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
                                FUN_08dbf2f0(lVar4,0);
                                *(int *)(lVar4 + 0x20) = (int)((ulong)uVar5 >> 0x20);
                                uVar5 = DAT_01da5580;
                                plVar6 = (long *)(unaff_x19 + 0x98);
                                *plVar6 = lVar4;
                                *(undefined4 *)(lVar4 + 0x24) = uVar9;
                                *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                thunk_FUN_049ee3d8(plVar6,lVar4);
                                lVar4 = *plVar6;
                                uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                                FUN_05f901fc();
                                if (lVar4 != 0) {
                                  FUN_08a28508(lVar4,uVar5);
                                  lVar4 = FUN_089bc7d4();
                                  if (lVar4 != 0) {
                                    uVar5 = *(undefined8 *)(lVar4 + 0x18);
                                    in_stack_00000018 = uVar5;
                                    lVar4 = FUN_089bc7d4();
                                    if (lVar4 != 0) {
                                      in_stack_00000018 = *(undefined8 *)(lVar4 + 0x20);
                                      uVar9 = FUN_06fc9c98(0x3f800000,&stack0x00000018,
                                                           *(undefined8 *)puVar1);
                                      lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
                                      FUN_08dbf2f0(lVar4,0);
                                      *(int *)(lVar4 + 0x20) = (int)((ulong)uVar5 >> 0x20);
                                      uVar5 = DAT_01da6300;
                                      plVar6 = (long *)(unaff_x19 + 0xa0);
                                      *plVar6 = lVar4;
                                      *(undefined4 *)(lVar4 + 0x24) = uVar9;
                                      *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                      thunk_FUN_049ee3d8(plVar6,lVar4);
                                      lVar4 = *plVar6;
                                      uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                                      FUN_05f901fc();
                                      if (lVar4 != 0) {
                                        FUN_08a28508(lVar4,uVar5);
                                        lVar4 = FUN_089bc7d4();
                                        if (lVar4 != 0) {
                                          uVar5 = *(undefined8 *)(lVar4 + 0x28);
                                          in_stack_00000018 = uVar5;
                                          lVar4 = FUN_089bc7d4();
                                          if (lVar4 != 0) {
                                            in_stack_00000018 = *(undefined8 *)(lVar4 + 0x30);
                                            uVar9 = FUN_06fc9c98(uVar7,&stack0x00000018,
                                                                 *(undefined8 *)puVar1);
                                            lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
                                            FUN_08dbf2f0(lVar4,0);
                                            *(int *)(lVar4 + 0x20) = (int)((ulong)uVar5 >> 0x20);
                                            uVar5 = DAT_01da64d8;
                                            plVar6 = (long *)(unaff_x19 + 0xa8);
                                            *plVar6 = lVar4;
                                            *(undefined4 *)(lVar4 + 0x24) = uVar9;
                                            *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                            thunk_FUN_049ee3d8(plVar6,lVar4);
                                            lVar4 = *plVar6;
                                            uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                                            FUN_05f901fc();
                                            if (lVar4 != 0) {
                                              FUN_08a28508(lVar4,uVar5);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



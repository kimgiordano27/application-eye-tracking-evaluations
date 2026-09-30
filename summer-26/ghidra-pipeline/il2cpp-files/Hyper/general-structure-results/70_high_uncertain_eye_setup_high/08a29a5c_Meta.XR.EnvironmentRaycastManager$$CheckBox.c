/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 08a29a5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__CheckBox(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_s8;
  undefined8 in_stack_00000018;
  
  FUN_08a28508();
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined4 *)(unaff_x20 + 0x54);
  uVar4 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*unaff_x25);
  lVar1 = thunk_FUN_04983f60(*unaff_x24);
  FUN_08dbf2f0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x20) = uVar5;
  uVar2 = DAT_01da5c58;
  plVar3 = (long *)(unaff_x19 + 0x78);
  *plVar3 = lVar1;
  *(undefined4 *)(lVar1 + 0x24) = uVar4;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  thunk_FUN_049ee3d8(plVar3,lVar1);
  lVar1 = *plVar3;
  uVar2 = thunk_FUN_04983f60(*unaff_x23);
  FUN_05f901fc();
  if (lVar1 != 0) {
    FUN_08a28508(lVar1,uVar2);
    lVar1 = FUN_089bc5e4();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      in_stack_00000018 = uVar2;
      lVar1 = FUN_089bc5e4();
      if (lVar1 != 0) {
        in_stack_00000018 = *(undefined8 *)(lVar1 + 0x20);
        uVar5 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*unaff_x25);
        lVar1 = thunk_FUN_04983f60(*unaff_x24);
        FUN_08dbf2f0(lVar1,0);
        *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
        uVar2 = DAT_01da5308;
        plVar3 = (long *)(unaff_x19 + 0x80);
        *plVar3 = lVar1;
        *(undefined4 *)(lVar1 + 0x24) = uVar5;
        *(undefined8 *)(lVar1 + 0x18) = uVar2;
        thunk_FUN_049ee3d8(plVar3,lVar1);
        lVar1 = *plVar3;
        uVar2 = thunk_FUN_04983f60(*unaff_x23);
        FUN_05f901fc();
        if (lVar1 != 0) {
          FUN_08a28508(lVar1,uVar2);
          lVar1 = FUN_089bc5e4();
          if (lVar1 != 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x28);
            in_stack_00000018 = uVar2;
            lVar1 = FUN_089bc5e4();
            if (lVar1 != 0) {
              in_stack_00000018 = *(undefined8 *)(lVar1 + 0x30);
              uVar5 = FUN_06fc9c98(unaff_s8,&stack0x00000018,*unaff_x25);
              lVar1 = thunk_FUN_04983f60(*unaff_x24);
              FUN_08dbf2f0(lVar1,0);
              *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
              uVar2 = DAT_01da62f8;
              plVar3 = (long *)(unaff_x19 + 0x88);
              *plVar3 = lVar1;
              *(undefined4 *)(lVar1 + 0x24) = uVar5;
              *(undefined8 *)(lVar1 + 0x18) = uVar2;
              thunk_FUN_049ee3d8(plVar3,lVar1);
              lVar1 = *plVar3;
              uVar2 = thunk_FUN_04983f60(*unaff_x23);
              FUN_05f901fc();
              if (lVar1 != 0) {
                FUN_08a28508(lVar1,uVar2);
                lVar1 = FUN_089bc758();
                if (lVar1 != 0) {
                  uVar2 = *(undefined8 *)(lVar1 + 0x18);
                  in_stack_00000018 = uVar2;
                  lVar1 = FUN_089bc758();
                  if (lVar1 != 0) {
                    in_stack_00000018 = *(undefined8 *)(lVar1 + 0x20);
                    uVar5 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*unaff_x25);
                    lVar1 = thunk_FUN_04983f60(*unaff_x24);
                    FUN_08dbf2f0(lVar1,0);
                    *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
                    uVar2 = DAT_01da5420;
                    plVar3 = (long *)(unaff_x19 + 0x90);
                    *plVar3 = lVar1;
                    *(undefined4 *)(lVar1 + 0x24) = uVar5;
                    *(undefined8 *)(lVar1 + 0x18) = uVar2;
                    thunk_FUN_049ee3d8(plVar3,lVar1);
                    lVar1 = *plVar3;
                    uVar2 = thunk_FUN_04983f60(*unaff_x23);
                    FUN_05f901fc();
                    if (lVar1 != 0) {
                      FUN_08a28508(lVar1,uVar2);
                      lVar1 = FUN_089bc758();
                      if (lVar1 != 0) {
                        uVar2 = *(undefined8 *)(lVar1 + 0x28);
                        in_stack_00000018 = uVar2;
                        lVar1 = FUN_089bc758();
                        if (lVar1 != 0) {
                          in_stack_00000018 = *(undefined8 *)(lVar1 + 0x30);
                          uVar5 = FUN_06fc9c98(unaff_s8,&stack0x00000018,*unaff_x25);
                          lVar1 = thunk_FUN_04983f60(*unaff_x24);
                          FUN_08dbf2f0(lVar1,0);
                          *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
                          uVar2 = DAT_01da5580;
                          plVar3 = (long *)(unaff_x19 + 0x98);
                          *plVar3 = lVar1;
                          *(undefined4 *)(lVar1 + 0x24) = uVar5;
                          *(undefined8 *)(lVar1 + 0x18) = uVar2;
                          thunk_FUN_049ee3d8(plVar3,lVar1);
                          lVar1 = *plVar3;
                          uVar2 = thunk_FUN_04983f60(*unaff_x23);
                          FUN_05f901fc();
                          if (lVar1 != 0) {
                            FUN_08a28508(lVar1,uVar2);
                            lVar1 = FUN_089bc7d4();
                            if (lVar1 != 0) {
                              uVar2 = *(undefined8 *)(lVar1 + 0x18);
                              in_stack_00000018 = uVar2;
                              lVar1 = FUN_089bc7d4();
                              if (lVar1 != 0) {
                                in_stack_00000018 = *(undefined8 *)(lVar1 + 0x20);
                                uVar5 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*unaff_x25);
                                lVar1 = thunk_FUN_04983f60(*unaff_x24);
                                FUN_08dbf2f0(lVar1,0);
                                *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
                                uVar2 = DAT_01da6300;
                                plVar3 = (long *)(unaff_x19 + 0xa0);
                                *plVar3 = lVar1;
                                *(undefined4 *)(lVar1 + 0x24) = uVar5;
                                *(undefined8 *)(lVar1 + 0x18) = uVar2;
                                thunk_FUN_049ee3d8(plVar3,lVar1);
                                lVar1 = *plVar3;
                                uVar2 = thunk_FUN_04983f60(*unaff_x23);
                                FUN_05f901fc();
                                if (lVar1 != 0) {
                                  FUN_08a28508(lVar1,uVar2);
                                  lVar1 = FUN_089bc7d4();
                                  if (lVar1 != 0) {
                                    uVar2 = *(undefined8 *)(lVar1 + 0x28);
                                    in_stack_00000018 = uVar2;
                                    lVar1 = FUN_089bc7d4();
                                    if (lVar1 != 0) {
                                      in_stack_00000018 = *(undefined8 *)(lVar1 + 0x30);
                                      uVar5 = FUN_06fc9c98(unaff_s8,&stack0x00000018,*unaff_x25);
                                      lVar1 = thunk_FUN_04983f60(*unaff_x24);
                                      FUN_08dbf2f0(lVar1,0);
                                      *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
                                      uVar2 = DAT_01da64d8;
                                      plVar3 = (long *)(unaff_x19 + 0xa8);
                                      *plVar3 = lVar1;
                                      *(undefined4 *)(lVar1 + 0x24) = uVar5;
                                      *(undefined8 *)(lVar1 + 0x18) = uVar2;
                                      thunk_FUN_049ee3d8(plVar3,lVar1);
                                      lVar1 = *plVar3;
                                      uVar2 = thunk_FUN_04983f60(*unaff_x23);
                                      FUN_05f901fc();
                                      if (lVar1 != 0) {
                                        FUN_08a28508(lVar1,uVar2);
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
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



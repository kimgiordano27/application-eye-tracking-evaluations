/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$.cctor
ENTRY_POINT: 08a29b60
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager___cctor(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  undefined4 unaff_w22;
  long *plVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 in_stack_00000018;
  
  *(undefined4 *)(unaff_x21 + 0x20) = unaff_w22;
  uVar1 = DAT_01da5308;
  plVar3 = (long *)(unaff_x19 + 0x80);
  *plVar3 = unaff_x21;
  *(undefined4 *)(unaff_x21 + 0x24) = unaff_s9;
  *(undefined8 *)(unaff_x21 + 0x18) = uVar1;
  thunk_FUN_049ee3d8(plVar3);
  lVar2 = *plVar3;
  uVar1 = thunk_FUN_04983f60(*unaff_x23);
  FUN_05f901fc();
  if (lVar2 != 0) {
    FUN_08a28508(lVar2,uVar1);
    lVar2 = FUN_089bc5e4();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      in_stack_00000018 = uVar1;
      lVar2 = FUN_089bc5e4();
      if (lVar2 != 0) {
        in_stack_00000018 = *(undefined8 *)(lVar2 + 0x30);
        uVar4 = FUN_06fc9c98(unaff_s8,&stack0x00000018,*unaff_x25);
        lVar2 = thunk_FUN_04983f60(*unaff_x24);
        FUN_08dbf2f0(lVar2,0);
        *(int *)(lVar2 + 0x20) = (int)((ulong)uVar1 >> 0x20);
        uVar1 = DAT_01da62f8;
        plVar3 = (long *)(unaff_x19 + 0x88);
        *plVar3 = lVar2;
        *(undefined4 *)(lVar2 + 0x24) = uVar4;
        *(undefined8 *)(lVar2 + 0x18) = uVar1;
        thunk_FUN_049ee3d8(plVar3,lVar2);
        lVar2 = *plVar3;
        uVar1 = thunk_FUN_04983f60(*unaff_x23);
        FUN_05f901fc();
        if (lVar2 != 0) {
          FUN_08a28508(lVar2,uVar1);
          lVar2 = FUN_089bc758();
          if (lVar2 != 0) {
            uVar1 = *(undefined8 *)(lVar2 + 0x18);
            in_stack_00000018 = uVar1;
            lVar2 = FUN_089bc758();
            if (lVar2 != 0) {
              in_stack_00000018 = *(undefined8 *)(lVar2 + 0x20);
              uVar4 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*unaff_x25);
              lVar2 = thunk_FUN_04983f60(*unaff_x24);
              FUN_08dbf2f0(lVar2,0);
              *(int *)(lVar2 + 0x20) = (int)((ulong)uVar1 >> 0x20);
              uVar1 = DAT_01da5420;
              plVar3 = (long *)(unaff_x19 + 0x90);
              *plVar3 = lVar2;
              *(undefined4 *)(lVar2 + 0x24) = uVar4;
              *(undefined8 *)(lVar2 + 0x18) = uVar1;
              thunk_FUN_049ee3d8(plVar3,lVar2);
              lVar2 = *plVar3;
              uVar1 = thunk_FUN_04983f60(*unaff_x23);
              FUN_05f901fc();
              if (lVar2 != 0) {
                FUN_08a28508(lVar2,uVar1);
                lVar2 = FUN_089bc758();
                if (lVar2 != 0) {
                  uVar1 = *(undefined8 *)(lVar2 + 0x28);
                  in_stack_00000018 = uVar1;
                  lVar2 = FUN_089bc758();
                  if (lVar2 != 0) {
                    in_stack_00000018 = *(undefined8 *)(lVar2 + 0x30);
                    uVar4 = FUN_06fc9c98(unaff_s8,&stack0x00000018,*unaff_x25);
                    lVar2 = thunk_FUN_04983f60(*unaff_x24);
                    FUN_08dbf2f0(lVar2,0);
                    *(int *)(lVar2 + 0x20) = (int)((ulong)uVar1 >> 0x20);
                    uVar1 = DAT_01da5580;
                    plVar3 = (long *)(unaff_x19 + 0x98);
                    *plVar3 = lVar2;
                    *(undefined4 *)(lVar2 + 0x24) = uVar4;
                    *(undefined8 *)(lVar2 + 0x18) = uVar1;
                    thunk_FUN_049ee3d8(plVar3,lVar2);
                    lVar2 = *plVar3;
                    uVar1 = thunk_FUN_04983f60(*unaff_x23);
                    FUN_05f901fc();
                    if (lVar2 != 0) {
                      FUN_08a28508(lVar2,uVar1);
                      lVar2 = FUN_089bc7d4();
                      if (lVar2 != 0) {
                        uVar1 = *(undefined8 *)(lVar2 + 0x18);
                        in_stack_00000018 = uVar1;
                        lVar2 = FUN_089bc7d4();
                        if (lVar2 != 0) {
                          in_stack_00000018 = *(undefined8 *)(lVar2 + 0x20);
                          uVar4 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*unaff_x25);
                          lVar2 = thunk_FUN_04983f60(*unaff_x24);
                          FUN_08dbf2f0(lVar2,0);
                          *(int *)(lVar2 + 0x20) = (int)((ulong)uVar1 >> 0x20);
                          uVar1 = DAT_01da6300;
                          plVar3 = (long *)(unaff_x19 + 0xa0);
                          *plVar3 = lVar2;
                          *(undefined4 *)(lVar2 + 0x24) = uVar4;
                          *(undefined8 *)(lVar2 + 0x18) = uVar1;
                          thunk_FUN_049ee3d8(plVar3,lVar2);
                          lVar2 = *plVar3;
                          uVar1 = thunk_FUN_04983f60(*unaff_x23);
                          FUN_05f901fc();
                          if (lVar2 != 0) {
                            FUN_08a28508(lVar2,uVar1);
                            lVar2 = FUN_089bc7d4();
                            if (lVar2 != 0) {
                              uVar1 = *(undefined8 *)(lVar2 + 0x28);
                              in_stack_00000018 = uVar1;
                              lVar2 = FUN_089bc7d4();
                              if (lVar2 != 0) {
                                in_stack_00000018 = *(undefined8 *)(lVar2 + 0x30);
                                uVar4 = FUN_06fc9c98(unaff_s8,&stack0x00000018,*unaff_x25);
                                lVar2 = thunk_FUN_04983f60(*unaff_x24);
                                FUN_08dbf2f0(lVar2,0);
                                *(int *)(lVar2 + 0x20) = (int)((ulong)uVar1 >> 0x20);
                                uVar1 = DAT_01da64d8;
                                plVar3 = (long *)(unaff_x19 + 0xa8);
                                *plVar3 = lVar2;
                                *(undefined4 *)(lVar2 + 0x24) = uVar4;
                                *(undefined8 *)(lVar2 + 0x18) = uVar1;
                                thunk_FUN_049ee3d8(plVar3,lVar2);
                                lVar2 = *plVar3;
                                uVar1 = thunk_FUN_04983f60(*unaff_x23);
                                FUN_05f901fc();
                                if (lVar2 != 0) {
                                  FUN_08a28508(lVar2,uVar1);
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
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



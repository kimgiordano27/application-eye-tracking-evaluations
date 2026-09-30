/*
FUNCTION_NAME: OVRPlugin.Sizei$$.cctor
ENTRY_POINT: 01a3e360
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizei___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  unaff_x19[10] = unaff_x20;
  lVar3 = FUN_00da4fb8(*unaff_x22,1);
  if (lVar3 == 0) {
LAB_01a3e990:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined4 *)(lVar3 + 0x20) = 8;
    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar4 == 0) goto LAB_01a3e984;
    if (7 < *unaff_x23) {
      unaff_x19[0xb] = lVar3;
      lVar3 = FUN_00da4fb8(*unaff_x22,1);
      if (lVar3 == 0) goto LAB_01a3e990;
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined4 *)(lVar3 + 0x20) = 0x14;
        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar4 == 0) goto LAB_01a3e984;
        if (8 < *unaff_x23) {
          unaff_x19[0xc] = lVar3;
          lVar3 = FUN_00da4fb8(*unaff_x22,1);
          if (lVar3 == 0) goto LAB_01a3e990;
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined4 *)(lVar3 + 0x20) = 10;
            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar4 == 0) goto LAB_01a3e984;
            if (9 < *unaff_x23) {
              unaff_x19[0xd] = lVar3;
              lVar3 = FUN_00da4fb8(*unaff_x22,1);
              if (lVar3 == 0) goto LAB_01a3e990;
              if (*(int *)(lVar3 + 0x18) != 0) {
                *(undefined4 *)(lVar3 + 0x20) = 0xb;
                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar4 == 0) goto LAB_01a3e984;
                if (10 < *unaff_x23) {
                  unaff_x19[0xe] = lVar3;
                  lVar3 = FUN_00da4fb8(*unaff_x22,1);
                  if (lVar3 == 0) goto LAB_01a3e990;
                  if (*(int *)(lVar3 + 0x18) != 0) {
                    *(undefined4 *)(lVar3 + 0x20) = 0x15;
                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar4 == 0) goto LAB_01a3e984;
                    if (0xb < *unaff_x23) {
                      unaff_x19[0xf] = lVar3;
                      lVar3 = FUN_00da4fb8(*unaff_x22,1);
                      if (lVar3 == 0) goto LAB_01a3e990;
                      if (*(int *)(lVar3 + 0x18) != 0) {
                        *(undefined4 *)(lVar3 + 0x20) = 0xd;
                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar4 == 0) goto LAB_01a3e984;
                        if (0xc < *unaff_x23) {
                          unaff_x19[0x10] = lVar3;
                          lVar3 = FUN_00da4fb8(*unaff_x22,1);
                          if (lVar3 == 0) goto LAB_01a3e990;
                          if (*(int *)(lVar3 + 0x18) != 0) {
                            *(undefined4 *)(lVar3 + 0x20) = 0xe;
                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar4 == 0) goto LAB_01a3e984;
                            if (0xd < *unaff_x23) {
                              unaff_x19[0x11] = lVar3;
                              lVar3 = FUN_00da4fb8(*unaff_x22,1);
                              if (lVar3 == 0) goto LAB_01a3e990;
                              if (*(int *)(lVar3 + 0x18) != 0) {
                                *(undefined4 *)(lVar3 + 0x20) = 0x16;
                                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                if (lVar4 == 0) goto LAB_01a3e984;
                                if (0xe < *unaff_x23) {
                                  unaff_x19[0x12] = lVar3;
                                  lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                  if (lVar3 == 0) goto LAB_01a3e990;
                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                    *(undefined4 *)(lVar3 + 0x20) = 0x10;
                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    if (lVar4 == 0) goto LAB_01a3e984;
                                    if (0xf < *unaff_x23) {
                                      unaff_x19[0x13] = lVar3;
                                      lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                      if (lVar3 == 0) goto LAB_01a3e990;
                                      if (*(int *)(lVar3 + 0x18) != 0) {
                                        *(undefined4 *)(lVar3 + 0x20) = 0x11;
                                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        if (lVar4 == 0) goto LAB_01a3e984;
                                        if (0x10 < *unaff_x23) {
                                          unaff_x19[0x14] = lVar3;
                                          lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                          if (lVar3 == 0) goto LAB_01a3e990;
                                          if (*(int *)(lVar3 + 0x18) != 0) {
                                            *(undefined4 *)(lVar3 + 0x20) = 0x12;
                                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            if (lVar4 == 0) goto LAB_01a3e984;
                                            if (0x11 < *unaff_x23) {
                                              unaff_x19[0x15] = lVar3;
                                              lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                              if (lVar3 == 0) goto LAB_01a3e990;
                                              if (*(int *)(lVar3 + 0x18) != 0) {
                                                *(undefined4 *)(lVar3 + 0x20) = 0x17;
                                                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar4 == 0) {
LAB_01a3e984:
                                                  uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                  FUN_00da5038(uVar5,0);
                                                }
                                                if (0x12 < *unaff_x23) {
                                                  unaff_x19[0x16] = lVar3;
                                                  lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x13 < *unaff_x23) {
                                                    unaff_x19[0x17] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x14 < *unaff_x23) {
                                                    unaff_x19[0x18] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x15 < *unaff_x23) {
                                                    unaff_x19[0x19] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x16 < *unaff_x23) {
                                                    unaff_x19[0x1a] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x17 < *unaff_x23) {
                                                    unaff_x19[0x1b] = lVar3;
                                                    puVar1 = 
                                                  System_Xml_XmlRawWriterBase64Encoder_TypeInfo;
                                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) =
                                                       unaff_x19;
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  puVar2 = 
                                                  System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                                  ;
                                                  puVar1 = PTR_DAT_033f2c60;
                                                  if (lVar3 != 0) {
                                                    FUN_01320e50(lVar3,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_SetStateMachine__
                                                  );
                                                  FUN_00bff618(lVar3,6,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,7,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,8,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,9,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0xb,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0xc,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0xd,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0xe,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0xf,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0x10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0x11,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,0x12,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,2,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,3,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,4,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar3,5,*(undefined8 *)puVar1);
                                                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                                       lVar3;
                                                  uVar5 = FUN_00da4fb8(*unaff_x22,5);
                                                  FUN_016a34e8(uVar5,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x21 + 0xb8) + 0x28) = uVar5;
                                                  return;
                                                  }
                                                  goto LAB_01a3e990;
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
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}



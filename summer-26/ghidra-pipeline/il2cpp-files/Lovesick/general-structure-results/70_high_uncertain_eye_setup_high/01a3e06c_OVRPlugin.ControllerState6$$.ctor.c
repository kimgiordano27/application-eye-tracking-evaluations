/*
FUNCTION_NAME: OVRPlugin.ControllerState6$$.ctor
ENTRY_POINT: 01a3e06c
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


void OVRPlugin_ControllerState6___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint *puVar7;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  
  FUN_00bff428();
  uVar3 = FUN_00da4fb8(*unaff_x22,4);
  FUN_016a34e8(uVar3,*unaff_x23,0);
  FUN_00bff428();
  uVar3 = FUN_00da4fb8(*unaff_x22,4);
  FUN_016a34e8(uVar3,*unaff_x25,0);
  FUN_00bff428();
  uVar3 = FUN_00da4fb8(*unaff_x22,5);
  FUN_016a34e8(uVar3,*unaff_x29,0);
  FUN_00bff428();
  **(undefined8 **)(*unaff_x21 + 0xb8) = unaff_x19;
  uVar3 = FUN_00da4fb8(*unaff_x27,0x18);
  FUN_016a34e8(uVar3,*unaff_x26,0);
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 8) = uVar3;
  uVar3 = FUN_00da4fb8(*unaff_x22,0x18);
  FUN_016a34e8(uVar3,*(undefined8 *)Method_Obi_ObiResourceHandle<Mesh>_Dereference__,0);
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = uVar3;
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<string,_fsData>_TypeInfo,0x18
                               );
  lVar5 = FUN_00da4fb8(*unaff_x22,6);
  FUN_016a34e8(lVar5,*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_STMGradientData>_get_Item__
               ,0);
  if (plVar4 == (long *)0x0) goto LAB_01a3e990;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_01a3e984:
    uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,0);
  }
  puVar7 = (uint *)(plVar4 + 3);
  if (*puVar7 != 0) {
    plVar4[4] = lVar5;
    lVar5 = FUN_00da4fb8(*unaff_x22,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_01a3e984;
    if (1 < *puVar7) {
      plVar4[5] = lVar5;
      lVar5 = FUN_00da4fb8(*unaff_x22,1);
      if (lVar5 == 0) {
LAB_01a3e990:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined4 *)(lVar5 + 0x20) = 3;
        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar6 == 0) goto LAB_01a3e984;
        if (2 < *puVar7) {
          plVar4[6] = lVar5;
          lVar5 = FUN_00da4fb8(*unaff_x22,1);
          if (lVar5 == 0) goto LAB_01a3e990;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined4 *)(lVar5 + 0x20) = 4;
            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar6 == 0) goto LAB_01a3e984;
            if (3 < *puVar7) {
              plVar4[7] = lVar5;
              lVar5 = FUN_00da4fb8(*unaff_x22,1);
              if (lVar5 == 0) goto LAB_01a3e990;
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined4 *)(lVar5 + 0x20) = 5;
                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                if (lVar6 == 0) goto LAB_01a3e984;
                if (4 < *puVar7) {
                  plVar4[8] = lVar5;
                  lVar5 = FUN_00da4fb8(*unaff_x22,1);
                  if (lVar5 == 0) goto LAB_01a3e990;
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined4 *)(lVar5 + 0x20) = 0x13;
                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                    if (lVar6 == 0) goto LAB_01a3e984;
                    if (5 < *puVar7) {
                      plVar4[9] = lVar5;
                      lVar5 = FUN_00da4fb8(*unaff_x22,1);
                      if (lVar5 == 0) goto LAB_01a3e990;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined4 *)(lVar5 + 0x20) = 7;
                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                        if (lVar6 == 0) goto LAB_01a3e984;
                        if (6 < *puVar7) {
                          plVar4[10] = lVar5;
                          lVar5 = FUN_00da4fb8(*unaff_x22,1);
                          if (lVar5 == 0) goto LAB_01a3e990;
                          if (*(int *)(lVar5 + 0x18) != 0) {
                            *(undefined4 *)(lVar5 + 0x20) = 8;
                            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                            if (lVar6 == 0) goto LAB_01a3e984;
                            if (7 < *puVar7) {
                              plVar4[0xb] = lVar5;
                              lVar5 = FUN_00da4fb8(*unaff_x22,1);
                              if (lVar5 == 0) goto LAB_01a3e990;
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                *(undefined4 *)(lVar5 + 0x20) = 0x14;
                                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                                if (lVar6 == 0) goto LAB_01a3e984;
                                if (8 < *puVar7) {
                                  plVar4[0xc] = lVar5;
                                  lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                  if (lVar5 == 0) goto LAB_01a3e990;
                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                    *(undefined4 *)(lVar5 + 0x20) = 10;
                                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              );
                                    if (lVar6 == 0) goto LAB_01a3e984;
                                    if (9 < *puVar7) {
                                      plVar4[0xd] = lVar5;
                                      lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                      if (lVar5 == 0) goto LAB_01a3e990;
                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                        *(undefined4 *)(lVar5 + 0x20) = 0xb;
                                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40));
                                        if (lVar6 == 0) goto LAB_01a3e984;
                                        if (10 < *puVar7) {
                                          plVar4[0xe] = lVar5;
                                          lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                          if (lVar5 == 0) goto LAB_01a3e990;
                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                            *(undefined4 *)(lVar5 + 0x20) = 0x15;
                                            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40));
                                            if (lVar6 == 0) goto LAB_01a3e984;
                                            if (0xb < *puVar7) {
                                              plVar4[0xf] = lVar5;
                                              lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                              if (lVar5 == 0) goto LAB_01a3e990;
                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                *(undefined4 *)(lVar5 + 0x20) = 0xd;
                                                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                  (*plVar4 + 0x40));
                                                if (lVar6 == 0) goto LAB_01a3e984;
                                                if (0xc < *puVar7) {
                                                  plVar4[0x10] = lVar5;
                                                  lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                                  if (lVar5 == 0) goto LAB_01a3e990;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar5 + 0x20) = 0xe;
                                                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40));
                                                    if (lVar6 == 0) goto LAB_01a3e984;
                                                    if (0xd < *puVar7) {
                                                      plVar4[0x11] = lVar5;
                                                      lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                                      if (lVar5 == 0) goto LAB_01a3e990;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar5 + 0x20) = 0x16;
                                                        lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40));
                                                  if (lVar6 == 0) goto LAB_01a3e984;
                                                  if (0xe < *puVar7) {
                                                    plVar4[0x12] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar5 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar5 + 0x20) = 0x10;
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01a3e984;
                                                  if (0xf < *puVar7) {
                                                    plVar4[0x13] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar5 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar5 + 0x20) = 0x11;
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01a3e984;
                                                  if (0x10 < *puVar7) {
                                                    plVar4[0x14] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar5 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar5 + 0x20) = 0x12;
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01a3e984;
                                                  if (0x11 < *puVar7) {
                                                    plVar4[0x15] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar5 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar5 + 0x20) = 0x17;
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar6 == 0) goto LAB_01a3e984;
                                                  if (0x12 < *puVar7) {
                                                    plVar4[0x16] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x13 < *puVar7) {
                                                    plVar4[0x17] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x14 < *puVar7) {
                                                    plVar4[0x18] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x15 < *puVar7) {
                                                    plVar4[0x19] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x16 < *puVar7) {
                                                    plVar4[0x1a] = lVar5;
                                                    lVar5 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x17 < *puVar7) {
                                                    plVar4[0x1b] = lVar5;
                                                    puVar1 = 
                                                  System_Xml_XmlRawWriterBase64Encoder_TypeInfo;
                                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) =
                                                       plVar4;
                                                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  puVar2 = 
                                                  System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                                  ;
                                                  puVar1 = PTR_DAT_033f2c60;
                                                  if (lVar5 != 0) {
                                                    FUN_01320e50(lVar5,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_SetStateMachine__
                                                  );
                                                  FUN_00bff618(lVar5,6,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,7,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,8,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,9,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0xb,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0xc,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0xd,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0xe,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0xf,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0x10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0x11,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,0x12,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,2,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,3,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,4,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar5,5,*(undefined8 *)puVar1);
                                                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                                       lVar5;
                                                  uVar3 = FUN_00da4fb8(*unaff_x22,5);
                                                  FUN_016a34e8(uVar3,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x21 + 0xb8) + 0x28) = uVar3;
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



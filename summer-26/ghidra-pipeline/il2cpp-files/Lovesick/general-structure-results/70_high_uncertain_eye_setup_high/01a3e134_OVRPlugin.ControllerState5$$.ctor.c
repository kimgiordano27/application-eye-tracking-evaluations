/*
FUNCTION_NAME: OVRPlugin.ControllerState5$$.ctor
ENTRY_POINT: 01a3e134
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


void OVRPlugin_ControllerState5___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x21;
  undefined8 *unaff_x22;
  uint *puVar7;
  
  FUN_016a34e8(param_1,*(undefined8 *)Method_Obi_ObiResourceHandle<Mesh>_Dereference__,0);
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = param_1;
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<string,_fsData>_TypeInfo,0x18
                               );
  lVar4 = FUN_00da4fb8(*unaff_x22,6);
  FUN_016a34e8(lVar4,*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_STMGradientData>_get_Item__
               ,0);
  if (plVar3 == (long *)0x0) goto LAB_01a3e990;
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_01a3e984:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  puVar7 = (uint *)(plVar3 + 3);
  if (*puVar7 != 0) {
    plVar3[4] = lVar4;
    lVar4 = FUN_00da4fb8(*unaff_x22,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_01a3e984;
    if (1 < *puVar7) {
      plVar3[5] = lVar4;
      lVar4 = FUN_00da4fb8(*unaff_x22,1);
      if (lVar4 == 0) {
LAB_01a3e990:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined4 *)(lVar4 + 0x20) = 3;
        lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar5 == 0) goto LAB_01a3e984;
        if (2 < *puVar7) {
          plVar3[6] = lVar4;
          lVar4 = FUN_00da4fb8(*unaff_x22,1);
          if (lVar4 == 0) goto LAB_01a3e990;
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined4 *)(lVar4 + 0x20) = 4;
            lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar5 == 0) goto LAB_01a3e984;
            if (3 < *puVar7) {
              plVar3[7] = lVar4;
              lVar4 = FUN_00da4fb8(*unaff_x22,1);
              if (lVar4 == 0) goto LAB_01a3e990;
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined4 *)(lVar4 + 0x20) = 5;
                lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar5 == 0) goto LAB_01a3e984;
                if (4 < *puVar7) {
                  plVar3[8] = lVar4;
                  lVar4 = FUN_00da4fb8(*unaff_x22,1);
                  if (lVar4 == 0) goto LAB_01a3e990;
                  if (*(int *)(lVar4 + 0x18) != 0) {
                    *(undefined4 *)(lVar4 + 0x20) = 0x13;
                    lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                    if (lVar5 == 0) goto LAB_01a3e984;
                    if (5 < *puVar7) {
                      plVar3[9] = lVar4;
                      lVar4 = FUN_00da4fb8(*unaff_x22,1);
                      if (lVar4 == 0) goto LAB_01a3e990;
                      if (*(int *)(lVar4 + 0x18) != 0) {
                        *(undefined4 *)(lVar4 + 0x20) = 7;
                        lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                        if (lVar5 == 0) goto LAB_01a3e984;
                        if (6 < *puVar7) {
                          plVar3[10] = lVar4;
                          lVar4 = FUN_00da4fb8(*unaff_x22,1);
                          if (lVar4 == 0) goto LAB_01a3e990;
                          if (*(int *)(lVar4 + 0x18) != 0) {
                            *(undefined4 *)(lVar4 + 0x20) = 8;
                            lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                            if (lVar5 == 0) goto LAB_01a3e984;
                            if (7 < *puVar7) {
                              plVar3[0xb] = lVar4;
                              lVar4 = FUN_00da4fb8(*unaff_x22,1);
                              if (lVar4 == 0) goto LAB_01a3e990;
                              if (*(int *)(lVar4 + 0x18) != 0) {
                                *(undefined4 *)(lVar4 + 0x20) = 0x14;
                                lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                                if (lVar5 == 0) goto LAB_01a3e984;
                                if (8 < *puVar7) {
                                  plVar3[0xc] = lVar4;
                                  lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                  if (lVar4 == 0) goto LAB_01a3e990;
                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                    *(undefined4 *)(lVar4 + 0x20) = 10;
                                    lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)
                                                              );
                                    if (lVar5 == 0) goto LAB_01a3e984;
                                    if (9 < *puVar7) {
                                      plVar3[0xd] = lVar4;
                                      lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                      if (lVar4 == 0) goto LAB_01a3e990;
                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                        *(undefined4 *)(lVar4 + 0x20) = 0xb;
                                        lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                          (*plVar3 + 0x40));
                                        if (lVar5 == 0) goto LAB_01a3e984;
                                        if (10 < *puVar7) {
                                          plVar3[0xe] = lVar4;
                                          lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                          if (lVar4 == 0) goto LAB_01a3e990;
                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                            *(undefined4 *)(lVar4 + 0x20) = 0x15;
                                            lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                              (*plVar3 + 0x40));
                                            if (lVar5 == 0) goto LAB_01a3e984;
                                            if (0xb < *puVar7) {
                                              plVar3[0xf] = lVar4;
                                              lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                              if (lVar4 == 0) goto LAB_01a3e990;
                                              if (*(int *)(lVar4 + 0x18) != 0) {
                                                *(undefined4 *)(lVar4 + 0x20) = 0xd;
                                                lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                  (*plVar3 + 0x40));
                                                if (lVar5 == 0) goto LAB_01a3e984;
                                                if (0xc < *puVar7) {
                                                  plVar3[0x10] = lVar4;
                                                  lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                                  if (lVar4 == 0) goto LAB_01a3e990;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar4 + 0x20) = 0xe;
                                                    lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                      (*plVar3 +
                                                                                      0x40));
                                                    if (lVar5 == 0) goto LAB_01a3e984;
                                                    if (0xd < *puVar7) {
                                                      plVar3[0x11] = lVar4;
                                                      lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                                      if (lVar4 == 0) goto LAB_01a3e990;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar4 + 0x20) = 0x16;
                                                        lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40));
                                                  if (lVar5 == 0) goto LAB_01a3e984;
                                                  if (0xe < *puVar7) {
                                                    plVar3[0x12] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar4 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar4 + 0x20) = 0x10;
                                                      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40));
                                                  if (lVar5 == 0) goto LAB_01a3e984;
                                                  if (0xf < *puVar7) {
                                                    plVar3[0x13] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar4 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar4 + 0x20) = 0x11;
                                                      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40));
                                                  if (lVar5 == 0) goto LAB_01a3e984;
                                                  if (0x10 < *puVar7) {
                                                    plVar3[0x14] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar4 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar4 + 0x20) = 0x12;
                                                      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40));
                                                  if (lVar5 == 0) goto LAB_01a3e984;
                                                  if (0x11 < *puVar7) {
                                                    plVar3[0x15] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar4 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar4 + 0x20) = 0x17;
                                                      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40));
                                                  if (lVar5 == 0) goto LAB_01a3e984;
                                                  if (0x12 < *puVar7) {
                                                    plVar3[0x16] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x13 < *puVar7) {
                                                    plVar3[0x17] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x14 < *puVar7) {
                                                    plVar3[0x18] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x15 < *puVar7) {
                                                    plVar3[0x19] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x16 < *puVar7) {
                                                    plVar3[0x1a] = lVar4;
                                                    lVar4 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x17 < *puVar7) {
                                                    plVar3[0x1b] = lVar4;
                                                    puVar1 = 
                                                  System_Xml_XmlRawWriterBase64Encoder_TypeInfo;
                                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) =
                                                       plVar3;
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  puVar2 = 
                                                  System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                                  ;
                                                  puVar1 = PTR_DAT_033f2c60;
                                                  if (lVar4 != 0) {
                                                    FUN_01320e50(lVar4,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_SetStateMachine__
                                                  );
                                                  FUN_00bff618(lVar4,6,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,7,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,8,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,9,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0xb,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0xc,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0xd,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0xe,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0xf,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0x10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0x11,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,0x12,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,2,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,3,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,4,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar4,5,*(undefined8 *)puVar1);
                                                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                                       lVar4;
                                                  uVar6 = FUN_00da4fb8(*unaff_x22,5);
                                                  FUN_016a34e8(uVar6,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x21 + 0xb8) + 0x28) = uVar6;
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



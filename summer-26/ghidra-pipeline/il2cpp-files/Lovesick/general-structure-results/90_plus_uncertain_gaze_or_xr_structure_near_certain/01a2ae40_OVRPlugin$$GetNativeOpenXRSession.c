/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 01a2ae40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  lVar3 = FUN_00da4fb8(param_1,1);
  if (lVar3 == 0) {
LAB_01a2b528:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined4 *)(lVar3 + 0x20) = 8;
    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar4 == 0) goto LAB_01a2b51c;
    if (7 < *unaff_x23) {
      unaff_x19[0xb] = lVar3;
      lVar3 = FUN_00da4fb8(*unaff_x22,1);
      if (lVar3 == 0) goto LAB_01a2b528;
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined4 *)(lVar3 + 0x20) = 9;
        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar4 == 0) goto LAB_01a2b51c;
        if (8 < *unaff_x23) {
          unaff_x19[0xc] = lVar3;
          lVar3 = FUN_00da4fb8(*unaff_x22,1);
          if (lVar3 == 0) goto LAB_01a2b528;
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined4 *)(lVar3 + 0x20) = 10;
            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar4 == 0) {
LAB_01a2b51c:
              uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar5,0);
            }
            if (9 < *unaff_x23) {
              unaff_x19[0xd] = lVar3;
              lVar3 = FUN_00da4fb8(*unaff_x22,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
              goto LAB_01a2b51c;
              if (10 < *unaff_x23) {
                unaff_x19[0xe] = lVar3;
                lVar3 = FUN_00da4fb8(*unaff_x22,1);
                if (lVar3 == 0) goto LAB_01a2b528;
                if (*(int *)(lVar3 + 0x18) != 0) {
                  *(undefined4 *)(lVar3 + 0x20) = 0xc;
                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar4 == 0) goto LAB_01a2b51c;
                  if (0xb < *unaff_x23) {
                    unaff_x19[0xf] = lVar3;
                    lVar3 = FUN_00da4fb8(*unaff_x22,1);
                    if (lVar3 == 0) goto LAB_01a2b528;
                    if (*(int *)(lVar3 + 0x18) != 0) {
                      *(undefined4 *)(lVar3 + 0x20) = 0xd;
                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar4 == 0) goto LAB_01a2b51c;
                      if (0xc < *unaff_x23) {
                        unaff_x19[0x10] = lVar3;
                        lVar3 = FUN_00da4fb8(*unaff_x22,1);
                        if (lVar3 == 0) goto LAB_01a2b528;
                        if (*(int *)(lVar3 + 0x18) != 0) {
                          *(undefined4 *)(lVar3 + 0x20) = 0xe;
                          lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar4 == 0) goto LAB_01a2b51c;
                          if (0xd < *unaff_x23) {
                            unaff_x19[0x11] = lVar3;
                            lVar3 = FUN_00da4fb8(*unaff_x22,1);
                            if (lVar3 == 0) goto LAB_01a2b528;
                            if (*(int *)(lVar3 + 0x18) != 0) {
                              *(undefined4 *)(lVar3 + 0x20) = 0xf;
                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                              if (lVar4 == 0) goto LAB_01a2b51c;
                              if (0xe < *unaff_x23) {
                                unaff_x19[0x12] = lVar3;
                                lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                if ((lVar3 != 0) &&
                                   (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar4 == 0)) goto LAB_01a2b51c;
                                if (0xf < *unaff_x23) {
                                  unaff_x19[0x13] = lVar3;
                                  lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                  if (lVar3 == 0) goto LAB_01a2b528;
                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                    *(undefined4 *)(lVar3 + 0x20) = 0x11;
                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    if (lVar4 == 0) goto LAB_01a2b51c;
                                    if (0x10 < *unaff_x23) {
                                      unaff_x19[0x14] = lVar3;
                                      lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                      if (lVar3 == 0) goto LAB_01a2b528;
                                      if (*(int *)(lVar3 + 0x18) != 0) {
                                        *(undefined4 *)(lVar3 + 0x20) = 0x12;
                                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        if (lVar4 == 0) goto LAB_01a2b51c;
                                        if (0x11 < *unaff_x23) {
                                          unaff_x19[0x15] = lVar3;
                                          lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                          if (lVar3 == 0) goto LAB_01a2b528;
                                          if (*(int *)(lVar3 + 0x18) != 0) {
                                            *(undefined4 *)(lVar3 + 0x20) = 0x13;
                                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            if (lVar4 == 0) goto LAB_01a2b51c;
                                            if (0x12 < *unaff_x23) {
                                              unaff_x19[0x16] = lVar3;
                                              lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                              if (lVar3 == 0) goto LAB_01a2b528;
                                              if (*(int *)(lVar3 + 0x18) != 0) {
                                                *(undefined4 *)(lVar3 + 0x20) = 0x14;
                                                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar4 == 0) goto LAB_01a2b51c;
                                                if (0x13 < *unaff_x23) {
                                                  unaff_x19[0x17] = lVar3;
                                                  lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_01a2b51c;
                                                  if (0x14 < *unaff_x23) {
                                                    unaff_x19[0x18] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar3 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar3 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar3 + 0x20) = 0x16;
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_01a2b51c;
                                                  if (0x15 < *unaff_x23) {
                                                    unaff_x19[0x19] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar3 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar3 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar3 + 0x20) = 0x17;
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_01a2b51c;
                                                  if (0x16 < *unaff_x23) {
                                                    unaff_x19[0x1a] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar3 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar3 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar3 + 0x20) = 0x18;
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_01a2b51c;
                                                  if (0x17 < *unaff_x23) {
                                                    unaff_x19[0x1b] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,1);
                                                    if (lVar3 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar3 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar3 + 0x20) = 0x19;
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_01a2b51c;
                                                  if (0x18 < *unaff_x23) {
                                                    unaff_x19[0x1c] = lVar3;
                                                    lVar3 = FUN_00da4fb8(*unaff_x22,0);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_01a2b51c;
                                                  if (0x19 < *unaff_x23) {
                                                    unaff_x19[0x1d] = lVar3;
                                                    puVar1 = 
                                                  Method_System_Reflection_Emit_DynamicMethod_Invoke__
                                                  ;
                                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) =
                                                       unaff_x19;
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  puVar2 = StringLiteral_10553;
                                                  puVar1 = FullSerializer_fsDataType_TypeInfo;
                                                  if (lVar3 != 0) {
                                                    FUN_01320e50(lVar3,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Threading_Tasks_Task_Run<WebResponse>__
                                                  );
                                                  FUN_00bfecf8(lVar3,6,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,7,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,8,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,9,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0xb,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0xc,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0xd,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0xe,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x10,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x11,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x12,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x13,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x15,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x16,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x17,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,0x18,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,2,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,3,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar3,4,*(undefined8 *)puVar1);
                                                  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                                       lVar3;
                                                  uVar5 = FUN_00da4fb8(*unaff_x22,5);
                                                  FUN_016a34e8(uVar5,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x21 + 0xb8) + 0x28) = uVar5;
                                                  return;
                                                  }
                                                  goto LAB_01a2b528;
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



/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.Smoothen$$.cctor
ENTRY_POINT: 066d09d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_UTess_Smoothen___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  int iVar13;
  int iVar14;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  lVar10 = *(long *)(unaff_x20 + 400);
  if (lVar10 == 0) goto LAB_066d10d4;
  if ((*(char *)(lVar10 + 0x10) == '\0') && (*(char *)(lVar10 + 0x38) == '\0')) {
    return;
  }
  FUN_06bb6d8c();
  if (*(long *)(unaff_x20 + 0x1b0) == 0) goto LAB_066d10d4;
  FUN_06bc4800(*(long *)(unaff_x20 + 0x1b0),0,0);
  if (*(int *)(unaff_x20 + 0x178) == 2) {
    lVar10 = *(long *)(unaff_x20 + 0x1b0);
    puVar3 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_set_Item__
    ;
joined_r0x066d0a38:
    if (lVar10 == 0) goto LAB_066d10d4;
    FUN_06bc4000(lVar10,*puVar3,0);
  }
  else if (*(int *)(unaff_x20 + 0x178) == 1) {
    lVar10 = *(long *)(unaff_x20 + 0x1b0);
    puVar3 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
    ;
    goto joined_r0x066d0a38;
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_06bc3f80(*(long *)(unaff_x20 + 0x1b0),3000,0);
    if (*(long *)(unaff_x20 + 0x1c0) != 0) {
      FUN_06bc3f80(*(long *)(unaff_x20 + 0x1c0),3000,0);
      puVar4 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076e0377 == '\0') {
        thunk_FUN_032e1da0(
                          Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                          );
        DAT_076e0377 = '\x01';
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar10 = *(long *)puVar4;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x80), lVar10 != 0)) {
        iVar8 = FUN_0503c128(lVar10,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TryGetValue__
                            );
        lVar10 = *(long *)puVar4;
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        else {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar10);
          }
          if (DAT_076e0377 == '\0') {
            thunk_FUN_032e1da0(
                              Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                              );
            DAT_076e0377 = '\x01';
          }
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar10);
            lVar10 = *(long *)puVar4;
          }
          lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_066d10d4;
          iVar8 = *(int *)(lVar12 + 0x34) + -1;
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar10);
        }
        if (DAT_076e0377 == '\0') {
          thunk_FUN_032e1da0(
                            Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                            );
          DAT_076e0377 = '\x01';
        }
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar10 = *(long *)puVar4;
        }
        puVar5 = 
        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>__ctor__;
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x80), lVar10 != 0)) &&
           (lVar10 = FUN_0503c288(lVar10,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>__ctor__
                                 ),
           puVar7 = 
           Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_string>__ctor__,
           lVar10 != 0)) {
          FUN_04c7bf70(&stack0x00000028,lVar10,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_string>__ctor__
                      );
          puVar6 = 
          Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_get_Item__
          ;
          in_stack_00000048 = in_stack_00000030;
          in_stack_00000040 = in_stack_00000028;
          in_stack_00000050 = in_stack_00000038;
          while (uVar9 = FUN_0536e024(&stack0x00000040,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
            if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(long *)(in_stack_00000050 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            iVar13 = *(int *)(*(long *)(in_stack_00000050 + 0x10) + 0x24);
            if (iVar13 <= iVar8) {
              iVar8 = iVar13;
            }
          }
          FUN_0536e020(&stack0x00000040,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
                      );
          lVar10 = *(long *)(unaff_x20 + 400);
          if (lVar10 != 0) {
            iVar13 = *(int *)(lVar10 + 0x2c);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (DAT_076e0377 == '\0') {
              thunk_FUN_032e1da0(
                                Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                                );
              DAT_076e0377 = '\x01';
            }
            lVar12 = *(long *)puVar4;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar12 = *(long *)puVar4;
            }
            lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            if (lVar11 != 0) {
              iVar14 = *(int *)(lVar11 + 0x34) + -1;
              if (iVar14 <= iVar13) {
                iVar13 = iVar14;
              }
              *(int *)(lVar10 + 0x2c) = iVar13;
              if (*(long *)(unaff_x20 + 400) != 0) {
                iVar13 = *(int *)(*(long *)(unaff_x20 + 400) + 0x2c);
                if (DAT_076e0377 == '\0') {
                  thunk_FUN_032e1da0(puVar4);
                  lVar12 = *(long *)puVar4;
                  DAT_076e0377 = '\x01';
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar12 = *(long *)puVar4;
                }
                lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
                if (lVar10 != 0) {
                  lVar11 = *(long *)(unaff_x20 + 400);
                  *(bool *)(unaff_x20 + 0x230) = iVar13 == *(int *)(lVar10 + 0x34) + -1;
                  if (lVar11 != 0) {
                    iVar14 = *(int *)(lVar11 + 0x30);
                    iVar13 = *(int *)(lVar11 + 0x2c);
                    if (iVar14 <= *(int *)(lVar11 + 0x2c)) {
                      iVar13 = iVar14;
                    }
                    if (iVar8 <= iVar14) {
                      iVar8 = iVar13;
                    }
                    *(int *)(lVar11 + 0x30) = iVar8;
                    if (DAT_076e0377 == '\0') {
                      thunk_FUN_032e1da0(puVar4);
                      lVar12 = *(long *)puVar4;
                      DAT_076e0377 = '\x01';
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar12 = *(long *)puVar4;
                    }
                    lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
                    if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x80), lVar10 != 0)) &&
                       (lVar10 = FUN_0503c288(lVar10,*(undefined8 *)puVar5), lVar10 != 0)) {
                      FUN_04c7bf70(&stack0x00000028,lVar10,*(undefined8 *)puVar7);
                      puVar7 = 
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                      ;
                      puVar5 = 
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_Add__
                      ;
                      puVar4 = PTR_DAT_0727aac8;
                      in_stack_00000048 = in_stack_00000030;
                      in_stack_00000040 = in_stack_00000028;
                      in_stack_00000050 = in_stack_00000038;
                      while( true ) {
                        do {
                          uVar9 = FUN_0536e024(&stack0x00000040,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_get_Item__
                                              );
                          if ((uVar9 & 1) == 0) {
                            FUN_0536e020(&stack0x00000040,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
                                        );
                            return;
                          }
                          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          lVar10 = *(long *)(in_stack_00000050 + 0x10);
                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          iVar8 = *(int *)(lVar10 + 0x10);
                          iVar13 = *(int *)(lVar10 + 0x14);
                          iVar14 = *(int *)(lVar10 + 0x18);
                          FUN_06be6b04();
                          uVar9 = FUN_066d39d0((float)iVar8,(float)iVar13,(float)iVar14);
                        } while (((uVar9 & 1) != 0) || (lVar10 = FUN_066d3c1c(), lVar10 == 0));
                        lVar12 = *(long *)(lVar10 + 0x10);
                        if (lVar12 == 0) break;
                        iVar8 = 0;
                        while (iVar8 < *(int *)(lVar12 + 0x18)) {
                          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          lVar12 = FUN_041e29a8(*(long *)(lVar10 + 0x20),iVar8,
                                                *(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
                                               );
                          if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc0f50(lVar12,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
                                       ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x1c),0);
                          if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x34),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                                       ,0);
                          if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x20),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_set_Item__
                                       ,0);
                          if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x28),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>__ctor__
                                       ,0);
                          if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc0f50(lVar12,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                                       ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x2c),0);
                          if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc0f50(lVar12,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                                       ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x30),0);
                          FUN_06bc1060(*(undefined4 *)(unaff_x20 + 0x204),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                                       ,0);
                          if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x3c),lVar12,
                                       *(undefined8 *)puVar7,0);
                          lVar11 = *(long *)(unaff_x20 + 400);
                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          if (*(char *)(lVar11 + 0x10) != '\0') {
                            if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            lVar11 = FUN_041e29a8(*(long *)(lVar10 + 0x10),iVar8,
                                                  *(undefined8 *)puVar5);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            uVar1 = *(undefined8 *)(unaff_x20 + 0x1a8);
                            uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
                            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            FUN_06bbca8c(uVar1,0,uVar2,lVar11,*(undefined4 *)(lVar11 + 0x18),lVar12,
                                         0,0);
                            lVar11 = *(long *)(unaff_x20 + 400);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                          }
                          if (*(char *)(lVar11 + 0x38) != '\0') {
                            if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            lVar11 = FUN_041e29a8(*(long *)(lVar10 + 0x18),iVar8,
                                                  *(undefined8 *)puVar5);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            uVar1 = *(undefined8 *)(unaff_x20 + 0x1b8);
                            uVar2 = *(undefined8 *)(unaff_x20 + 0x1c0);
                            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            FUN_06bbca8c(uVar1,0,uVar2,lVar11,*(undefined4 *)(lVar11 + 0x18),lVar12,
                                         0,0);
                          }
                          lVar12 = *(long *)(lVar10 + 0x10);
                          iVar8 = iVar8 + 1;
                          if (lVar12 == 0) goto LAB_066d1044;
                        }
                      }
LAB_066d1044:
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
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
LAB_066d10d4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



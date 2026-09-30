/*
FUNCTION_NAME: FUN_066d087c
ENTRY_POINT: 066d087c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_066d087c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  
  if ((DAT_076e0369 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TryGetValue__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_set_Item__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727aac8);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_string>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_set_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_set_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                      );
    DAT_076e0369 = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(char *)(param_1 + 0x142) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x141) == '\0') {
    return;
  }
  lVar10 = *(long *)(param_1 + 400);
  if (lVar10 == 0) goto LAB_066d10d4;
  if ((*(char *)(lVar10 + 0x10) == '\0') && (*(char *)(lVar10 + 0x38) == '\0')) {
    return;
  }
  FUN_06bb6d8c(param_2,*(undefined8 *)(param_1 + 0x1c8),0);
  if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_066d10d4;
  FUN_06bc4800(*(long *)(param_1 + 0x1b0),0,0);
  if (*(int *)(param_1 + 0x178) == 2) {
    lVar10 = *(long *)(param_1 + 0x1b0);
    puVar2 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_set_Item__
    ;
joined_r0x066d0a38:
    if (lVar10 == 0) goto LAB_066d10d4;
    FUN_06bc4000(lVar10,*puVar2,0);
  }
  else if (*(int *)(param_1 + 0x178) == 1) {
    lVar10 = *(long *)(param_1 + 0x1b0);
    puVar2 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
    ;
    goto joined_r0x066d0a38;
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_06bc3f80(*(long *)(param_1 + 0x1b0),3000,0);
    if (*(long *)(param_1 + 0x1c0) != 0) {
      FUN_06bc3f80(*(long *)(param_1 + 0x1c0),3000,0);
      puVar3 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__;
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
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x80), lVar10 != 0)) {
        iVar7 = FUN_0503c128(lVar10,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TryGetValue__
                            );
        lVar10 = *(long *)puVar3;
        if (iVar7 < 1) {
          iVar7 = 0;
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
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar10);
            lVar10 = *(long *)puVar3;
          }
          lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_066d10d4;
          iVar7 = *(int *)(lVar12 + 0x34) + -1;
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
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar10 = *(long *)puVar3;
        }
        puVar4 = 
        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>__ctor__;
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x80), lVar10 != 0)) &&
           (lVar10 = FUN_0503c288(lVar10,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>__ctor__
                                 ),
           puVar6 = 
           Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_string>__ctor__,
           lVar10 != 0)) {
          FUN_04c7bf70(&local_b8,lVar10,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_string>__ctor__
                      );
          puVar5 = 
          Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_get_Item__
          ;
          uStack_98 = uStack_b0;
          local_a0 = local_b8;
          local_90 = local_a8;
          while (uVar8 = FUN_0536e024(&local_a0,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
            if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(long *)(local_90 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            iVar13 = *(int *)(*(long *)(local_90 + 0x10) + 0x24);
            if (iVar13 <= iVar7) {
              iVar7 = iVar13;
            }
          }
          FUN_0536e020(&local_a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
                      );
          lVar10 = *(long *)(param_1 + 400);
          if (lVar10 != 0) {
            iVar13 = *(int *)(lVar10 + 0x2c);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (DAT_076e0377 == '\0') {
              thunk_FUN_032e1da0(
                                Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                                );
              DAT_076e0377 = '\x01';
            }
            lVar12 = *(long *)puVar3;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar12 = *(long *)puVar3;
            }
            lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            if (lVar11 != 0) {
              iVar14 = *(int *)(lVar11 + 0x34) + -1;
              if (iVar14 <= iVar13) {
                iVar13 = iVar14;
              }
              *(int *)(lVar10 + 0x2c) = iVar13;
              if (*(long *)(param_1 + 400) != 0) {
                iVar13 = *(int *)(*(long *)(param_1 + 400) + 0x2c);
                if (DAT_076e0377 == '\0') {
                  thunk_FUN_032e1da0(puVar3);
                  lVar12 = *(long *)puVar3;
                  DAT_076e0377 = '\x01';
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar12 = *(long *)puVar3;
                }
                lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
                if (lVar10 != 0) {
                  lVar11 = *(long *)(param_1 + 400);
                  *(bool *)(param_1 + 0x230) = iVar13 == *(int *)(lVar10 + 0x34) + -1;
                  if (lVar11 != 0) {
                    iVar14 = *(int *)(lVar11 + 0x30);
                    iVar13 = *(int *)(lVar11 + 0x2c);
                    if (iVar14 <= *(int *)(lVar11 + 0x2c)) {
                      iVar13 = iVar14;
                    }
                    if (iVar7 <= iVar14) {
                      iVar7 = iVar13;
                    }
                    *(int *)(lVar11 + 0x30) = iVar7;
                    if (DAT_076e0377 == '\0') {
                      thunk_FUN_032e1da0(puVar3);
                      lVar12 = *(long *)puVar3;
                      DAT_076e0377 = '\x01';
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar12 = *(long *)puVar3;
                    }
                    lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
                    if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x80), lVar10 != 0)) &&
                       (lVar10 = FUN_0503c288(lVar10,*(undefined8 *)puVar4), lVar10 != 0)) {
                      FUN_04c7bf70(&local_b8,lVar10,*(undefined8 *)puVar6);
                      puVar6 = 
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                      ;
                      puVar4 = 
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_Add__
                      ;
                      puVar3 = PTR_DAT_0727aac8;
                      uStack_98 = uStack_b0;
                      local_a0 = local_b8;
                      local_90 = local_a8;
                      while( true ) {
                        do {
                          uVar8 = FUN_0536e024(&local_a0,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_get_Item__
                                              );
                          lVar10 = local_90;
                          if ((uVar8 & 1) == 0) {
                            FUN_0536e020(&local_a0,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
                                        );
                            return;
                          }
                          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          lVar12 = *(long *)(local_90 + 0x10);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          iVar7 = *(int *)(lVar12 + 0x10);
                          iVar13 = *(int *)(lVar12 + 0x14);
                          iVar14 = *(int *)(lVar12 + 0x18);
                          uVar9 = FUN_06be6b04(param_2,0);
                          uVar8 = FUN_066d39d0((float)iVar7,(float)iVar13,(float)iVar14,param_1,
                                               uVar9,*(undefined8 *)(param_1 + 0x1c8));
                        } while (((uVar8 & 1) != 0) ||
                                (lVar10 = FUN_066d3c1c(param_1,lVar10), lVar10 == 0));
                        lVar12 = *(long *)(lVar10 + 0x10);
                        if (lVar12 == 0) break;
                        iVar7 = 0;
                        while (iVar7 < *(int *)(lVar12 + 0x18)) {
                          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          lVar12 = FUN_041e29a8(*(long *)(lVar10 + 0x20),iVar7,
                                                *(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
                                               );
                          if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc0f50(lVar12,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
                                       ,*(undefined4 *)(*(long *)(param_1 + 400) + 0x1c),0);
                          if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(param_1 + 400) + 0x34),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                                       ,0);
                          if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(param_1 + 400) + 0x20),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_set_Item__
                                       ,0);
                          if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(param_1 + 400) + 0x28),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>__ctor__
                                       ,0);
                          if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc0f50(lVar12,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                                       ,*(undefined4 *)(*(long *)(param_1 + 400) + 0x2c),0);
                          if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc0f50(lVar12,*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                                       ,*(undefined4 *)(*(long *)(param_1 + 400) + 0x30),0);
                          FUN_06bc1060(*(undefined4 *)(param_1 + 0x204),lVar12,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                                       ,0);
                          if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          FUN_06bc1060(*(undefined4 *)(*(long *)(param_1 + 400) + 0x3c),lVar12,
                                       *(undefined8 *)puVar6,0);
                          lVar11 = *(long *)(param_1 + 400);
                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_032d5ee8();
                          }
                          if (*(char *)(lVar11 + 0x10) != '\0') {
                            if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            lVar11 = FUN_041e29a8(*(long *)(lVar10 + 0x10),iVar7,
                                                  *(undefined8 *)puVar4);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            uVar9 = *(undefined8 *)(param_1 + 0x1a8);
                            uVar1 = *(undefined8 *)(param_1 + 0x1b0);
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            FUN_06bbca8c(uVar9,0,uVar1,lVar11,*(undefined4 *)(lVar11 + 0x18),lVar12,
                                         0,0,0,param_2,0,0,0);
                            lVar11 = *(long *)(param_1 + 400);
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
                            lVar11 = FUN_041e29a8(*(long *)(lVar10 + 0x18),iVar7,
                                                  *(undefined8 *)puVar4);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            uVar9 = *(undefined8 *)(param_1 + 0x1b8);
                            uVar1 = *(undefined8 *)(param_1 + 0x1c0);
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            FUN_06bbca8c(uVar9,0,uVar1,lVar11,*(undefined4 *)(lVar11 + 0x18),lVar12,
                                         0,0,0,param_2,0,0,0);
                          }
                          lVar12 = *(long *)(lVar10 + 0x10);
                          iVar7 = iVar7 + 1;
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



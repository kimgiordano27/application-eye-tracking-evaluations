/*
FUNCTION_NAME: UnityEngine.UIElements.ListViewDraggerAnimated$$TryGetDragPosition
ENTRY_POINT: 05f75d54
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_UIElements_ListViewDraggerAnimated__TryGetDragPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint in_w8;
  uint uVar8;
  long unaff_x19;
  long *unaff_x20;
  uint *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar9;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined1 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined1 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  undefined1 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined1 uStack0000000000000068;
  undefined1 uStack000000000000006c;
  undefined1 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined1 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined1 uStack0000000000000084;
  undefined1 uStack0000000000000088;
  undefined1 uStack000000000000008c;
  undefined4 uStack00000000000000a8;
  undefined1 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  
  if (*unaff_x24 != 0) {
    lVar5 = thunk_FUN_02cea798(*unaff_x24,*(undefined8 *)(*unaff_x20 + 0x40));
    if (lVar5 == 0) goto LAB_05f7717c;
    in_w8 = *unaff_x22;
  }
  if (0xe < in_w8) {
    unaff_x20[0x12] = *unaff_x24;
    lVar5 = *(long *)(unaff_x19 + 0x58);
    if (lVar5 != 0) {
      lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar6 == 0) goto LAB_05f7717c;
      in_w8 = *unaff_x22;
    }
    puVar3 = Niantic_Peridot_Api_GiftBoxRewards_var;
    if (in_w8 < 0x10) goto LAB_05f77178;
    unaff_x20[0x13] = lVar5;
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) {
      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar5 == 0) goto LAB_05f7717c;
      in_w8 = *unaff_x22;
    }
    puVar2 = Google_Api_Gax_Expiration_TypeInfo;
    if (0x10 < in_w8) {
      unaff_x20[0x14] = *(long *)puVar3;
      in_stack_000000b8 = *(undefined4 *)(unaff_x19 + 0x60);
      lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,&stack0x000000b8);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
      goto LAB_05f7717c;
      puVar3 = System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo;
      uVar8 = *unaff_x22;
      if (0x11 < uVar8) {
        unaff_x20[0x15] = lVar5;
        lVar5 = *(long *)puVar3;
        if (lVar5 != 0) {
          lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar5 == 0) goto LAB_05f7717c;
          uVar8 = *unaff_x22;
        }
        if (0x12 < uVar8) {
          unaff_x20[0x16] = *(long *)puVar3;
          lVar5 = *(long *)(unaff_x19 + 0x68);
          if (lVar5 != 0) {
            lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar6 == 0) goto LAB_05f7717c;
            uVar8 = *unaff_x22;
          }
          puVar3 = System_IO_FileAccess_TypeInfo;
          if (0x13 < uVar8) {
            unaff_x20[0x17] = lVar5;
            lVar5 = *(long *)puVar3;
            if (lVar5 != 0) {
              lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
              if (lVar5 == 0) goto LAB_05f7717c;
              uVar8 = *unaff_x22;
            }
            puVar2 = System_Linq_Expressions_Interpreter_FieldByRefUpdater_TypeInfo;
            if (0x14 < uVar8) {
              unaff_x20[0x18] = *(long *)puVar3;
              uStack00000000000000b4 = *(undefined4 *)(unaff_x19 + 0x70);
              lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,(long)&stack0x000000b0 + 4);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
              {
LAB_05f7717c:
                uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar7,0);
              }
              puVar3 = System_Resources_FileBasedResourceGroveler_TypeInfo;
              uVar8 = *unaff_x22;
              if (0x15 < uVar8) {
                unaff_x20[0x19] = lVar5;
                lVar5 = *(long *)puVar3;
                if (lVar5 != 0) {
                  lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                  if (lVar5 == 0) goto LAB_05f7717c;
                  uVar8 = *unaff_x22;
                }
                puVar2 = System_Linq_Expressions_FieldExpression_TypeInfo;
                if (0x16 < uVar8) {
                  unaff_x20[0x1a] = *(long *)puVar3;
                  uStack00000000000000b0 = *(undefined4 *)(unaff_x19 + 0x74);
                  lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,&stack0x000000b0);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)),
                     lVar6 == 0)) goto LAB_05f7717c;
                  puVar3 = Niantic_Peridot_Telemetry_GestureEvent_var;
                  uVar8 = *unaff_x22;
                  if (0x17 < uVar8) {
                    unaff_x20[0x1b] = lVar5;
                    lVar5 = *(long *)puVar3;
                    if (lVar5 != 0) {
                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                      if (lVar5 == 0) goto LAB_05f7717c;
                      uVar8 = *unaff_x22;
                    }
                    puVar2 = PTR_DAT_065c97b0;
                    if (0x18 < uVar8) {
                      unaff_x20[0x1c] = *(long *)puVar3;
                      uStack00000000000000ac = *(undefined1 *)(unaff_x19 + 0x78);
                      lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,(long)&stack0x000000a8 + 4);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)),
                         lVar6 == 0)) goto LAB_05f7717c;
                      puVar3 = Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo;
                      uVar8 = *unaff_x22;
                      if (0x19 < uVar8) {
                        unaff_x20[0x1d] = lVar5;
                        lVar5 = *(long *)puVar3;
                        if (lVar5 != 0) {
                          lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                          if (lVar5 == 0) goto LAB_05f7717c;
                          uVar8 = *unaff_x22;
                        }
                        if (0x1a < uVar8) {
                          unaff_x20[0x1e] = *(long *)puVar3;
                          uStack00000000000000a8 = *(undefined4 *)(unaff_x19 + 0x7c);
                          lVar5 = thunk_FUN_02cea4e8(*unaff_x23,&stack0x000000a8);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)),
                             lVar6 == 0)) goto LAB_05f7717c;
                          puVar3 = PTR_DAT_066388a0;
                          uVar8 = *unaff_x22;
                          if (0x1b < uVar8) {
                            unaff_x20[0x1f] = lVar5;
                            lVar5 = *(long *)puVar3;
                            if (lVar5 != 0) {
                              lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                              if (lVar5 == 0) goto LAB_05f7717c;
                              uVar8 = *unaff_x22;
                            }
                            puVar1 = PTR_DAT_065dc548;
                            if (0x1c < uVar8) {
                              unaff_x20[0x20] = *(long *)puVar3;
                              uVar9 = *(undefined8 *)(unaff_x19 + 0x80);
                              uVar7 = *(undefined8 *)puVar1;
                              unaff_x25[1] = *(undefined8 *)(unaff_x19 + 0x88);
                              *unaff_x25 = uVar9;
                              lVar5 = thunk_FUN_02cea4e8(uVar7,&stack0x00000090);
                              if ((lVar5 != 0) &&
                                 (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                    (*unaff_x20 + 0x40)), lVar6 == 0
                                 )) goto LAB_05f7717c;
                              puVar3 = Oculus_Interaction_GrabAPI_FingerPalmGrabAPI_TypeInfo;
                              uVar8 = *unaff_x22;
                              if (0x1d < uVar8) {
                                unaff_x20[0x21] = lVar5;
                                lVar5 = *(long *)puVar3;
                                if (lVar5 != 0) {
                                  lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                    (*unaff_x20 + 0x40));
                                  if (lVar5 == 0) goto LAB_05f7717c;
                                  uVar8 = *unaff_x22;
                                }
                                if (0x1e < uVar8) {
                                  unaff_x20[0x22] = *(long *)puVar3;
                                  lVar5 = *(long *)(unaff_x19 + 0x90);
                                  if (lVar5 != 0) {
                                    lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                      (*unaff_x20 + 0x40));
                                    if (lVar6 == 0) goto LAB_05f7717c;
                                    uVar8 = *unaff_x22;
                                  }
                                  puVar3 = Google_Protobuf_FieldMaskTree_TypeInfo;
                                  if (0x1f < uVar8) {
                                    unaff_x20[0x23] = lVar5;
                                    lVar5 = *(long *)puVar3;
                                    if (lVar5 != 0) {
                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                        (*unaff_x20 + 0x40));
                                      if (lVar5 == 0) goto LAB_05f7717c;
                                      uVar8 = *unaff_x22;
                                    }
                                    if (0x20 < uVar8) {
                                      unaff_x20[0x24] = *(long *)puVar3;
                                      lVar5 = *(long *)(unaff_x19 + 0x98);
                                      if (lVar5 != 0) {
                                        lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                          (*unaff_x20 + 0x40));
                                        if (lVar6 == 0) goto LAB_05f7717c;
                                        uVar8 = *unaff_x22;
                                      }
                                      puVar3 = 
                                      System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
                                      if (0x21 < uVar8) {
                                        unaff_x20[0x25] = lVar5;
                                        lVar5 = *(long *)puVar3;
                                        if (lVar5 != 0) {
                                          lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                            (*unaff_x20 + 0x40));
                                          if (lVar5 == 0) goto LAB_05f7717c;
                                          uVar8 = *unaff_x22;
                                        }
                                        if (0x22 < uVar8) {
                                          unaff_x20[0x26] = *(long *)puVar3;
                                          uStack000000000000008c = *(undefined1 *)(unaff_x19 + 0xa0)
                                          ;
                                          lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                                     (long)&stack0x00000088 + 4);
                                          if ((lVar5 != 0) &&
                                             (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                             , lVar6 == 0)) goto LAB_05f7717c;
                                          puVar3 = 
                                          Oculus_Interaction_PoseDetection_FingerFeatureProperties_TypeInfo
                                          ;
                                          uVar8 = *unaff_x22;
                                          if (0x23 < uVar8) {
                                            unaff_x20[0x27] = lVar5;
                                            lVar5 = *(long *)puVar3;
                                            if (lVar5 != 0) {
                                              lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                              ;
                                              if (lVar5 == 0) goto LAB_05f7717c;
                                              uVar8 = *unaff_x22;
                                            }
                                            if (0x24 < uVar8) {
                                              unaff_x20[0x28] = *(long *)puVar3;
                                              uStack0000000000000088 =
                                                   *(undefined1 *)(unaff_x19 + 0xa1);
                                              lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                                         &stack0x00000088);
                                              if ((lVar5 != 0) &&
                                                 (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40)),
                                                 lVar6 == 0)) goto LAB_05f7717c;
                                              puVar3 = 
                                              Google_Protobuf_Reflection_FileDescriptorSet_TypeInfo;
                                              uVar8 = *unaff_x22;
                                              if (0x25 < uVar8) {
                                                unaff_x20[0x29] = lVar5;
                                                lVar5 = *(long *)puVar3;
                                                if (lVar5 != 0) {
                                                  lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                }
                                                if (0x26 < uVar8) {
                                                  unaff_x20[0x2a] = *(long *)puVar3;
                                                  uStack0000000000000084 =
                                                       *(undefined1 *)(unaff_x19 + 0xa2);
                                                  lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                                             (long)&stack0x00000080
                                                                             + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_Guid_var;
                                                  uVar8 = *unaff_x22;
                                                  if (0x27 < uVar8) {
                                                    unaff_x20[0x2b] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x28 < uVar8) {
                                                    unaff_x20[0x2c] = *(long *)puVar3;
                                                    uStack0000000000000080 =
                                                         *(undefined4 *)(unaff_x19 + 0xa4);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               &stack0x00000080);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x29 < uVar8) {
                                                    unaff_x20[0x2d] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x2a < uVar8) {
                                                    unaff_x20[0x2e] = *(long *)puVar3;
                                                    uStack000000000000007c =
                                                         *(undefined1 *)(unaff_x19 + 0xa8);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000078 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Google_Protobuf_Reflection_FieldOptions_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2b < uVar8) {
                                                    unaff_x20[0x2f] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x2c < uVar8) {
                                                    unaff_x20[0x30] = *(long *)puVar3;
                                                    uStack0000000000000078 =
                                                         *(undefined4 *)(unaff_x19 + 0xac);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               &stack0x00000078);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_Net_FileWebStream_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2d < uVar8) {
                                                    unaff_x20[0x31] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x2e < uVar8) {
                                                    unaff_x20[0x32] = *(long *)puVar3;
                                                    uStack0000000000000074 =
                                                         *(undefined4 *)(unaff_x19 + 0xb0);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000070 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2f < uVar8) {
                                                    unaff_x20[0x33] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x30 < uVar8) {
                                                    unaff_x20[0x34] = *(long *)puVar3;
                                                    uStack0000000000000070 =
                                                         *(undefined1 *)(unaff_x19 + 0xb4);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,&stack0x00000070);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  System_Globalization_GregorianCalendar_var;
                                                  uVar8 = *unaff_x22;
                                                  if (0x31 < uVar8) {
                                                    unaff_x20[0x35] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x32 < uVar8) {
                                                    unaff_x20[0x36] = *(long *)puVar3;
                                                    uStack000000000000006c =
                                                         *(undefined1 *)(unaff_x19 + 0xb5);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000068 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Google_Apis_Util_Store_FileDataStore_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x33 < uVar8) {
                                                    unaff_x20[0x37] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x34 < uVar8) {
                                                    unaff_x20[0x38] = *(long *)puVar3;
                                                    uStack0000000000000068 =
                                                         *(undefined1 *)(unaff_x19 + 0xb6);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,&stack0x00000068);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_Net_FileWebResponse_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x35 < uVar8) {
                                                    unaff_x20[0x39] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x36 < uVar8) {
                                                    unaff_x20[0x3a] = *(long *)puVar3;
                                                    uStack0000000000000064 =
                                                         *(undefined4 *)(unaff_x19 + 0xb8);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000060 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_IO_FileStreamAsyncResult_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x37 < uVar8) {
                                                    unaff_x20[0x3b] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x38 < uVar8) {
                                                    unaff_x20[0x3c] = *(long *)puVar3;
                                                    uStack0000000000000060 =
                                                         *(undefined1 *)(unaff_x19 + 0xbc);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,&stack0x00000060);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Google_Protobuf_Reflection_FileDescriptorProto_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x39 < uVar8) {
                                                    unaff_x20[0x3d] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3a < uVar8) {
                                                    unaff_x20[0x3e] = *(long *)puVar3;
                                                    uStack000000000000005c =
                                                         *(undefined1 *)(unaff_x19 + 0xbd);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000058 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = MS_Internal_Xml_XPath_Filter_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3b < uVar8) {
                                                    unaff_x20[0x3f] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3c < uVar8) {
                                                    unaff_x20[0x40] = *(long *)puVar3;
                                                    uStack0000000000000058 =
                                                         *(undefined1 *)(unaff_x19 + 0xbe);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,&stack0x00000058);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_IO_FileMode_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3d < uVar8) {
                                                    unaff_x20[0x41] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3e < uVar8) {
                                                    unaff_x20[0x42] = *(long *)puVar3;
                                                    uStack0000000000000054 =
                                                         *(undefined4 *)(unaff_x19 + 0xc0);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000050 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Unity_VisualScripting_FieldsCloner_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3f < uVar8) {
                                                    unaff_x20[0x43] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x40 < uVar8) {
                                                    unaff_x20[0x44] = *(long *)puVar3;
                                                    uStack0000000000000050 =
                                                         *(undefined4 *)(unaff_x19 + 0xc4);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               &stack0x00000050);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_IO_FileLoadException_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x41 < uVar8) {
                                                    unaff_x20[0x45] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x42 < uVar8) {
                                                    unaff_x20[0x46] = *(long *)puVar3;
                                                    uStack000000000000004c =
                                                         *(undefined4 *)(unaff_x19 + 200);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000048 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Oculus_Interaction_PoseDetection_FingerFeature_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x43 < uVar8) {
                                                    unaff_x20[0x47] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x44 < uVar8) {
                                                    unaff_x20[0x48] = *(long *)puVar3;
                                                    uStack0000000000000048 =
                                                         *(undefined4 *)(unaff_x19 + 0xcc);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               &stack0x00000048);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x45 < uVar8) {
                                                    unaff_x20[0x49] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x46 < uVar8) {
                                                    unaff_x20[0x4a] = *(long *)puVar3;
                                                    uStack0000000000000044 =
                                                         *(undefined4 *)(unaff_x19 + 0xd0);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000040 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_Net_FileWebRequestCreator_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x47 < uVar8) {
                                                    unaff_x20[0x4b] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar1 = 
                                                  Newtonsoft_Json_Linq_JsonPath_FieldFilter_TypeInfo
                                                  ;
                                                  if (0x48 < uVar8) {
                                                    unaff_x20[0x4c] = *(long *)puVar3;
                                                    uStack0000000000000040 =
                                                         *(undefined4 *)(unaff_x19 + 0xd4);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,&stack0x00000040);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  UnityEngine_Rendering_Universal_FilmGrainLookupParameter_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x49 < uVar8) {
                                                    unaff_x20[0x4d] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar1 = PTR_DAT_065c8a08;
                                                  if (0x4a < uVar8) {
                                                    unaff_x20[0x4e] = *(long *)puVar3;
                                                    uStack000000000000003c =
                                                         *(undefined4 *)(unaff_x19 + 0xd8);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,(long)&
                                                  stack0x00000038 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Google_Protobuf_WellKnownTypes_FieldMaskReflection_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x4b < uVar8) {
                                                    unaff_x20[0x4f] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x4c < uVar8) {
                                                    unaff_x20[0x50] = *(long *)puVar3;
                                                    uStack0000000000000038 =
                                                         *(undefined4 *)(unaff_x19 + 0xdc);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,&stack0x00000038);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_IO_FileNotFoundException_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x4d < uVar8) {
                                                    unaff_x20[0x51] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x4e < uVar8) {
                                                    unaff_x20[0x52] = *(long *)puVar3;
                                                    uStack0000000000000034 =
                                                         *(undefined4 *)(unaff_x19 + 0xe0);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,(long)&
                                                  stack0x00000030 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_IO_FileInfo_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x4f < uVar8) {
                                                    unaff_x20[0x53] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x50 < uVar8) {
                                                    unaff_x20[0x54] = *(long *)puVar3;
                                                    uStack0000000000000030 =
                                                         *(undefined4 *)(unaff_x19 + 0xe4);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,&stack0x00000030);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_IO_FileStream_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x51 < uVar8) {
                                                    unaff_x20[0x55] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x52 < uVar8) {
                                                    unaff_x20[0x56] = *(long *)puVar3;
                                                    uStack000000000000002c =
                                                         *(undefined1 *)(unaff_x19 + 0xe8);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000028 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x53 < uVar8) {
                                                    unaff_x20[0x57] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar4 = 
                                                  Google_Protobuf_Reflection_FieldDescriptor_TypeInfo
                                                  ;
                                                  if (0x54 < uVar8) {
                                                    unaff_x20[0x58] = *(long *)puVar3;
                                                    uStack0000000000000028 =
                                                         *(undefined4 *)(unaff_x19 + 0xec);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar4
                                                                               ,&stack0x00000028);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x55 < uVar8) {
                                                    unaff_x20[0x59] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x56 < uVar8) {
                                                    unaff_x20[0x5a] = *(long *)puVar3;
                                                    uStack0000000000000024 =
                                                         *(undefined4 *)(unaff_x19 + 0xf0);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,(long)&
                                                  stack0x00000020 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Google_Protobuf_Reflection_FileDescriptor_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x57 < uVar8) {
                                                    unaff_x20[0x5b] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar1 = System_Reflection_FieldInfo_TypeInfo;
                                                  if (0x58 < uVar8) {
                                                    unaff_x20[0x5c] = *(long *)puVar3;
                                                    uStack0000000000000020 =
                                                         *(undefined4 *)(unaff_x19 + 0xf4);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,&stack0x00000020);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  UnityEngine_Rendering_FilteringSettings_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x59 < uVar8) {
                                                    unaff_x20[0x5d] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x5a < uVar8) {
                                                    unaff_x20[0x5e] = *(long *)puVar3;
                                                    uStack000000000000001c =
                                                         *(undefined4 *)(unaff_x19 + 0xf8);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,(long)&
                                                  stack0x00000018 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  UnityEngine_InputSystem_EnhancedTouch_Finger_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x5b < uVar8) {
                                                    unaff_x20[0x5f] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x5c < uVar8) {
                                                    unaff_x20[0x60] = *(long *)puVar3;
                                                    uStack0000000000000018 =
                                                         *(undefined4 *)(unaff_x19 + 0xfc);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               &stack0x00000018);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  System_IO_Enumeration_FileSystemName_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x5d < uVar8) {
                                                    unaff_x20[0x61] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar1 = 
                                                  Google_Protobuf_WellKnownTypes_FieldMask_TypeInfo;
                                                  if (0x5e < uVar8) {
                                                    unaff_x20[0x62] = *(long *)puVar3;
                                                    uStack0000000000000014 =
                                                         *(undefined4 *)(unaff_x19 + 0x100);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,(long)&
                                                  stack0x00000010 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = System_Net_FileWebRequest_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x5f < uVar8) {
                                                    unaff_x20[99] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x60 < uVar8) {
                                                    unaff_x20[100] = *(long *)puVar3;
                                                    uStack0000000000000010 =
                                                         *(undefined1 *)(unaff_x19 + 0x104);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,&stack0x00000010);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  Oculus_Interaction_PoseDetection_FingerShapes_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x61 < uVar8) {
                                                    unaff_x20[0x65] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x62 < uVar8) {
                                                    unaff_x20[0x66] = *(long *)puVar3;
                                                    uStack000000000000000c =
                                                         *(undefined4 *)(unaff_x19 + 0x108);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000008 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = 
                                                  UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (99 < uVar8) {
                                                    unaff_x20[0x67] = lVar5;
                                                    lVar5 = *(long *)puVar3;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f7717c;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar2 = 
                                                  Google_Protobuf_Reflection_FieldDescriptorProto_TypeInfo
                                                  ;
                                                  if (100 < uVar8) {
                                                    unaff_x20[0x68] = *(long *)puVar3;
                                                    uStack0000000000000008 =
                                                         *(undefined4 *)(unaff_x19 + 0x10c);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,&stack0x00000008);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f7717c;
                                                  puVar3 = Unity_Properties_FieldMember_TypeInfo;
                                                  if (0x65 < *unaff_x22) {
                                                    unaff_x20[0x69] = lVar5;
                                                    FUN_04db9b3c(*(undefined8 *)puVar3);
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
LAB_05f77178:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}



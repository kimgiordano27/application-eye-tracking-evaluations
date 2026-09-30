/*
FUNCTION_NAME: UnityEngine.UIElements.ListViewDragger$$GetHoverBarTopPosition
ENTRY_POINT: 05f73cec
PROGRAM: hellodot-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_1
*/


void UnityEngine_UIElements_ListViewDragger__GetHoverBarTopPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool in_ZR;
  bool in_CY;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint in_w8;
  uint uVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined1 uStack0000000000000184;
  
  puVar4 = Niantic_HelloDot_Gameplay_Creature_Behavior_ExpressEnergyBehavior_TypeInfo;
  if (in_CY && !in_ZR) {
    unaff_x20[0x19] = unaff_x21;
    lVar5 = *(long *)puVar4;
    if (lVar5 != 0) {
      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar5 == 0) goto LAB_05f74c48;
      in_w8 = *unaff_x22;
    }
    puVar1 = PTR_DAT_065c97b0;
    if (0x16 < in_w8) {
      unaff_x20[0x1a] = *(long *)puVar4;
      uStack0000000000000184 = *(undefined1 *)(unaff_x19 + 0x44);
      lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1,(long)&stack0x00000180 + 4);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0)) {
LAB_05f74c48:
        uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar7,0);
      }
      puVar4 = TMPro_Extents_TypeInfo;
      uVar8 = *unaff_x22;
      if (0x17 < uVar8) {
        unaff_x20[0x1b] = lVar5;
        lVar5 = *(long *)puVar4;
        if (lVar5 != 0) {
          lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar5 == 0) goto LAB_05f74c48;
          uVar8 = *unaff_x22;
        }
        puVar3 = PTR_DAT_065ca3f8;
        if (0x18 < uVar8) {
          unaff_x20[0x1c] = *(long *)puVar4;
          uStack0000000000000180 = *(undefined4 *)(unaff_x19 + 0x48);
          lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000180);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
          goto LAB_05f74c48;
          puVar4 = PTR_DAT_0661cda8;
          uVar8 = *unaff_x22;
          if (0x19 < uVar8) {
            unaff_x20[0x1d] = lVar5;
            lVar5 = *(long *)puVar4;
            if (lVar5 != 0) {
              lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
              if (lVar5 == 0) goto LAB_05f74c48;
              uVar8 = *unaff_x22;
            }
            if (0x1a < uVar8) {
              unaff_x20[0x1e] = *(long *)puVar4;
              uStack000000000000017c = *(undefined4 *)(unaff_x19 + 0x4c);
              lVar5 = thunk_FUN_02cea4e8(*unaff_x23,(long)&stack0x00000178 + 4);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
              goto LAB_05f74c48;
              puVar4 = UnityEngine_XR_Eyes_TypeInfo;
              uVar8 = *unaff_x22;
              if (0x1b < uVar8) {
                unaff_x20[0x1f] = lVar5;
                lVar5 = *(long *)puVar4;
                if (lVar5 != 0) {
                  lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                  if (lVar5 == 0) goto LAB_05f74c48;
                  uVar8 = *unaff_x22;
                }
                if (0x1c < uVar8) {
                  unaff_x20[0x20] = *(long *)puVar4;
                  uStack0000000000000178 = *(undefined4 *)(unaff_x19 + 0x50);
                  lVar5 = thunk_FUN_02cea4e8(*unaff_x23,&stack0x00000178);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)),
                     lVar6 == 0)) goto LAB_05f74c48;
                  puVar4 = Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo;
                  uVar8 = *unaff_x22;
                  if (0x1d < uVar8) {
                    unaff_x20[0x21] = lVar5;
                    lVar5 = *(long *)puVar4;
                    if (lVar5 != 0) {
                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                      if (lVar5 == 0) goto LAB_05f74c48;
                      uVar8 = *unaff_x22;
                    }
                    if (0x1e < uVar8) {
                      unaff_x20[0x22] = *(long *)puVar4;
                      in_stack_00000170._4_4_ = *(undefined4 *)(unaff_x19 + 0x54);
                      lVar5 = thunk_FUN_02cea4e8(*unaff_x23,(long)&stack0x00000170 + 4);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)),
                         lVar6 == 0)) goto LAB_05f74c48;
                      puVar4 = 
                      UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo;
                      uVar8 = *unaff_x22;
                      if (0x1f < uVar8) {
                        unaff_x20[0x23] = lVar5;
                        lVar5 = *(long *)puVar4;
                        if (lVar5 != 0) {
                          lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                          if (lVar5 == 0) goto LAB_05f74c48;
                          uVar8 = *unaff_x22;
                        }
                        puVar2 = Google_Apis_Http_ExponentialBackOffInitializer_TypeInfo;
                        if (0x20 < uVar8) {
                          unaff_x20[0x24] = *(long *)puVar4;
                          in_stack_00000160 = *(undefined8 *)(unaff_x19 + 0x78);
                          in_stack_00000158 = *(undefined8 *)(unaff_x19 + 0x70);
                          in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x68);
                          in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x60);
                          in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0x58);
                          lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,&stack0x00000140);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)),
                             lVar6 == 0)) goto LAB_05f74c48;
                          puVar4 = UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo;
                          uVar8 = *unaff_x22;
                          if (0x21 < uVar8) {
                            unaff_x20[0x25] = lVar5;
                            lVar5 = *(long *)puVar4;
                            if (lVar5 != 0) {
                              lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                              if (lVar5 == 0) goto LAB_05f74c48;
                              uVar8 = *unaff_x22;
                            }
                            if (0x22 < uVar8) {
                              unaff_x20[0x26] = *(long *)puVar4;
                              in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0xa0);
                              in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0x88);
                              in_stack_00000110 = *(undefined8 *)(unaff_x19 + 0x80);
                              in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0x98);
                              in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0x90);
                              lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,&stack0x00000110);
                              if ((lVar5 != 0) &&
                                 (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                    (*unaff_x20 + 0x40)), lVar6 == 0
                                 )) goto LAB_05f74c48;
                              puVar4 = UnityEngine_ExpressionEvaluator_TypeInfo;
                              uVar8 = *unaff_x22;
                              if (0x23 < uVar8) {
                                unaff_x20[0x27] = lVar5;
                                lVar5 = *(long *)puVar4;
                                if (lVar5 != 0) {
                                  lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                    (*unaff_x20 + 0x40));
                                  if (lVar5 == 0) goto LAB_05f74c48;
                                  uVar8 = *unaff_x22;
                                }
                                if (0x24 < uVar8) {
                                  unaff_x20[0x28] = *(long *)puVar4;
                                  in_stack_00000100 = *(undefined8 *)(unaff_x19 + 200);
                                  in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0xc0);
                                  in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0xb8);
                                  in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0xb0);
                                  in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0xa8);
                                  lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,&stack0x000000e0)
                                  ;
                                  if ((lVar5 != 0) &&
                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                        (*unaff_x20 + 0x40)),
                                     lVar6 == 0)) goto LAB_05f74c48;
                                  puVar4 = System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo
                                  ;
                                  uVar8 = *unaff_x22;
                                  if (0x25 < uVar8) {
                                    unaff_x20[0x29] = lVar5;
                                    lVar5 = *(long *)puVar4;
                                    if (lVar5 != 0) {
                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                        (*unaff_x20 + 0x40));
                                      if (lVar5 == 0) goto LAB_05f74c48;
                                      uVar8 = *unaff_x22;
                                    }
                                    if (0x26 < uVar8) {
                                      unaff_x20[0x2a] = *(long *)puVar4;
                                      in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 0xf0);
                                      in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0xd8);
                                      in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0xd0);
                                      in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0xe8);
                                      in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0xe0);
                                      lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                                 &stack0x000000b0);
                                      if ((lVar5 != 0) &&
                                         (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                            (*unaff_x20 + 0x40)),
                                         lVar6 == 0)) goto LAB_05f74c48;
                                      puVar4 = 
                                      Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo;
                                      uVar8 = *unaff_x22;
                                      if (0x27 < uVar8) {
                                        unaff_x20[0x2b] = lVar5;
                                        lVar5 = *(long *)puVar4;
                                        if (lVar5 != 0) {
                                          lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                            (*unaff_x20 + 0x40));
                                          if (lVar5 == 0) goto LAB_05f74c48;
                                          uVar8 = *unaff_x22;
                                        }
                                        puVar2 = PTR_DAT_065c9850;
                                        if (0x28 < uVar8) {
                                          unaff_x20[0x2c] = *(long *)puVar4;
                                          in_stack_000000a8 = *(undefined4 *)(unaff_x19 + 0x100);
                                          in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0xf8);
                                          lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                                     &stack0x000000a0);
                                          if ((lVar5 != 0) &&
                                             (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                             , lVar6 == 0)) goto LAB_05f74c48;
                                          puVar4 = 
                                          Niantic_HelloDot_Gameplay_Creature_Behavior_ExpressLoveLanguageBehavior_TypeInfo
                                          ;
                                          uVar8 = *unaff_x22;
                                          if (0x29 < uVar8) {
                                            unaff_x20[0x2d] = lVar5;
                                            lVar5 = *(long *)puVar4;
                                            if (lVar5 != 0) {
                                              lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                              ;
                                              if (lVar5 == 0) goto LAB_05f74c48;
                                              uVar8 = *unaff_x22;
                                            }
                                            if (0x2a < uVar8) {
                                              unaff_x20[0x2e] = *(long *)puVar4;
                                              in_stack_00000098 = *(undefined4 *)(unaff_x19 + 0x10c)
                                              ;
                                              in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x104)
                                              ;
                                              lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                                         &stack0x00000090);
                                              if ((lVar5 != 0) &&
                                                 (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40)),
                                                 lVar6 == 0)) goto LAB_05f74c48;
                                              puVar4 = Google_Protobuf_ExtensionRegistry_TypeInfo;
                                              uVar8 = *unaff_x22;
                                              if (0x2b < uVar8) {
                                                unaff_x20[0x2f] = lVar5;
                                                lVar5 = *(long *)puVar4;
                                                if (lVar5 != 0) {
                                                  lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                }
                                                if (0x2c < uVar8) {
                                                  unaff_x20[0x30] = *(long *)puVar4;
                                                  in_stack_00000088 =
                                                       *(undefined4 *)(unaff_x19 + 0x118);
                                                  in_stack_00000080 =
                                                       *(undefined8 *)(unaff_x19 + 0x110);
                                                  lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                                             &stack0x00000080);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2d < uVar8) {
                                                    unaff_x20[0x31] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x2e < uVar8) {
                                                    unaff_x20[0x32] = *(long *)puVar4;
                                                    in_stack_00000078 =
                                                         *(undefined4 *)(unaff_x19 + 0x124);
                                                    in_stack_00000070 =
                                                         *(undefined8 *)(unaff_x19 + 0x11c);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2
                                                                               ,&stack0x00000070);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = PTR_DAT_065e61e8;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2f < uVar8) {
                                                    unaff_x20[0x33] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x30 < uVar8) {
                                                    unaff_x20[0x34] = *(long *)puVar4;
                                                    uStack000000000000006c =
                                                         *(undefined4 *)(unaff_x19 + 0x128);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000068 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x31 < uVar8) {
                                                    unaff_x20[0x35] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x32 < uVar8) {
                                                    unaff_x20[0x36] = *(long *)puVar4;
                                                    uStack0000000000000068 =
                                                         *(undefined4 *)(unaff_x19 + 300);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000068);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = Zenject_FactoryFromBinderUntyped_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x33 < uVar8) {
                                                    unaff_x20[0x37] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x34 < uVar8) {
                                                    unaff_x20[0x38] = *(long *)puVar4;
                                                    uStack0000000000000064 =
                                                         *(undefined4 *)(unaff_x19 + 0x130);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000060 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Unity_VisualScripting_Dependencies_NCalc_Expression_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x35 < uVar8) {
                                                    unaff_x20[0x39] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x36 < uVar8) {
                                                    unaff_x20[0x3a] = *(long *)puVar4;
                                                    uStack0000000000000060 =
                                                         *(undefined4 *)(unaff_x19 + 0x134);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000060);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Niantic_Peridot_Rpc_FaceGenePearl_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x37 < uVar8) {
                                                    unaff_x20[0x3b] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x38 < uVar8) {
                                                    unaff_x20[0x3c] = *(long *)puVar4;
                                                    uStack000000000000005c =
                                                         *(undefined4 *)(unaff_x19 + 0x138);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000058 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  System_Security_Authentication_ExtendedProtection_ExtendedProtectionPolicy_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x39 < uVar8) {
                                                    unaff_x20[0x3d] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3a < uVar8) {
                                                    unaff_x20[0x3e] = *(long *)puVar4;
                                                    uStack0000000000000058 =
                                                         *(undefined4 *)(unaff_x19 + 0x13c);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000058);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  System_Linq_Expressions_ExpressionType_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3b < uVar8) {
                                                    unaff_x20[0x3f] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3c < uVar8) {
                                                    unaff_x20[0x40] = *(long *)puVar4;
                                                    uStack0000000000000054 =
                                                         *(undefined4 *)(unaff_x19 + 0x140);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000050 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Newtonsoft_Json_Utilities_ExpressionReflectionDelegateFactory_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3d < uVar8) {
                                                    unaff_x20[0x41] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3e < uVar8) {
                                                    unaff_x20[0x42] = *(long *)puVar4;
                                                    uStack0000000000000050 =
                                                         *(undefined4 *)(unaff_x19 + 0x144);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000050);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Google_Protobuf_Reflection_ExtensionCollection_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3f < uVar8) {
                                                    unaff_x20[0x43] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x40 < uVar8) {
                                                    unaff_x20[0x44] = *(long *)puVar4;
                                                    uStack000000000000004c =
                                                         *(undefined4 *)(unaff_x19 + 0x148);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000048 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = PTR_DAT_065fcfc8;
                                                  uVar8 = *unaff_x22;
                                                  if (0x41 < uVar8) {
                                                    unaff_x20[0x45] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x42 < uVar8) {
                                                    unaff_x20[0x46] = *(long *)puVar4;
                                                    uStack0000000000000048 =
                                                         *(undefined4 *)(unaff_x19 + 0x14c);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000048);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = PTR_DAT_066388a0;
                                                  uVar8 = *unaff_x22;
                                                  if (0x43 < uVar8) {
                                                    unaff_x20[0x47] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar3 = 
                                                  Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo
                                                  ;
                                                  if (0x44 < uVar8) {
                                                    unaff_x20[0x48] = *(long *)puVar4;
                                                    in_stack_00000040 =
                                                         *(undefined4 *)(unaff_x19 + 0x150);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000040);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  System_Linq_Expressions_ExpressionStringBuilder_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x45 < uVar8) {
                                                    unaff_x20[0x49] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x46 < uVar8) {
                                                    unaff_x20[0x4a] = *(long *)puVar4;
                                                    in_stack_00000038 =
                                                         *(undefined4 *)(unaff_x19 + 0x154);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000038);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x47 < uVar8) {
                                                    unaff_x20[0x4b] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x48 < uVar8) {
                                                    unaff_x20[0x4c] = *(long *)puVar4;
                                                    uStack0000000000000034 =
                                                         *(undefined4 *)(unaff_x19 + 0x158);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000030 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Google_Protobuf_Reflection_ExtensionRangeOptions_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x49 < uVar8) {
                                                    unaff_x20[0x4d] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x4a < uVar8) {
                                                    unaff_x20[0x4e] = *(long *)puVar4;
                                                    uStack0000000000000030 =
                                                         *(undefined4 *)(unaff_x19 + 0x15c);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000030);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = System_Data_ExpressionParser_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x4b < uVar8) {
                                                    unaff_x20[0x4f] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x4c < uVar8) {
                                                    unaff_x20[0x50] = *(long *)puVar4;
                                                    uStack000000000000002c =
                                                         *(undefined4 *)(unaff_x19 + 0x160);
                                                    lVar5 = thunk_FUN_02cea4e8(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000028 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Newtonsoft_Json_Serialization_ExpressionValueProvider_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x4d < uVar8) {
                                                    unaff_x20[0x51] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x4e < uVar8) {
                                                    unaff_x20[0x52] = *(long *)puVar4;
                                                    uStack0000000000000028 =
                                                         *(undefined4 *)(unaff_x19 + 0x164);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000028);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  UnityEngine_Timeline_Extrapolation_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x4f < uVar8) {
                                                    unaff_x20[0x53] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar3 = 
                                                  Google_Apis_Json_ExplicitNullConverter_TypeInfo;
                                                  if (0x50 < uVar8) {
                                                    unaff_x20[0x54] = *(long *)puVar4;
                                                    in_stack_00000020 =
                                                         *(undefined4 *)(unaff_x19 + 0x178);
                                                    in_stack_00000018 =
                                                         *(undefined8 *)(unaff_x19 + 0x170);
                                                    in_stack_00000010 =
                                                         *(undefined8 *)(unaff_x19 + 0x168);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,&stack0x00000010);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = PTR_DAT_065f8a40;
                                                  uVar8 = *unaff_x22;
                                                  if (0x51 < uVar8) {
                                                    unaff_x20[0x55] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar3 = Google_Api_Gax_Expiration_TypeInfo;
                                                  if (0x52 < uVar8) {
                                                    unaff_x20[0x56] = *(long *)puVar4;
                                                    uStack000000000000000c =
                                                         *(undefined4 *)(unaff_x19 + 0x17c);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000008 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Google_Apis_Auth_OAuth2_ExternalAccountCredential_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x53 < uVar8) {
                                                    unaff_x20[0x57] = lVar5;
                                                    lVar5 = *(long *)puVar4;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_02cea798(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05f74c48;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x54 < uVar8) {
                                                    unaff_x20[0x58] = *(long *)puVar4;
                                                    uStack0000000000000008 =
                                                         *(undefined1 *)(unaff_x19 + 0x180);
                                                    lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1
                                                                               ,&stack0x00000008);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_02cea798(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_05f74c48;
                                                  puVar4 = 
                                                  Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo
                                                  ;
                                                  if (0x55 < *unaff_x22) {
                                                    unaff_x20[0x59] = lVar5;
                                                    FUN_04db9b3c(*(undefined8 *)puVar4);
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}



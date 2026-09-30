/*
FUNCTION_NAME: UnityEngine.UIElements.Rotate$$get_axis
ENTRY_POINT: 0271d124
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UIElements_Rotate__get_axis(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint *unaff_x22;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined1 uStack0000000000000054;
  undefined1 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  undefined1 uStack0000000000000060;
  undefined1 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined1 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined1 uStack0000000000000078;
  undefined1 uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000098;
  undefined1 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  if ((param_1 != 0) && (lVar5 = thunk_FUN_00d6225c(), lVar5 == 0)) {
LAB_0271e464:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  puVar1 = Method_System_Reflection_Emit_EnumBuilder_GetConstructorImpl__;
  uVar8 = *unaff_x22;
  if (5 < uVar8) {
    unaff_x20[9] = unaff_x21;
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar5 == 0) goto LAB_0271e464;
      uVar8 = *unaff_x22;
    }
    puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
    if (6 < uVar8) {
      unaff_x20[10] = *(long *)puVar1;
      uStack00000000000000ac = *(undefined4 *)(unaff_x19 + 0x38);
      lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x000000a8 + 4);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
      goto LAB_0271e464;
      puVar1 = Obi_InspectorButtonAttribute_TypeInfo;
      uVar8 = *unaff_x22;
      if (7 < uVar8) {
        unaff_x20[0xb] = lVar5;
        lVar5 = *(long *)puVar1;
        if (lVar5 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar5 == 0) goto LAB_0271e464;
          uVar8 = *unaff_x22;
        }
        if (8 < uVar8) {
          unaff_x20[0xc] = *(long *)puVar1;
          lVar5 = *(long *)(unaff_x19 + 0x40);
          if (lVar5 != 0) {
            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar6 == 0) goto LAB_0271e464;
            uVar8 = *unaff_x22;
          }
          puVar1 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass13_0_<DOAnchorPos>b__1__;
          if (9 < uVar8) {
            unaff_x20[0xd] = lVar5;
            lVar5 = *(long *)puVar1;
            if (lVar5 != 0) {
              lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
              if (lVar5 == 0) goto LAB_0271e464;
              uVar8 = *unaff_x22;
            }
            if (10 < uVar8) {
              unaff_x20[0xe] = *(long *)puVar1;
              lVar5 = *(long *)(unaff_x19 + 0x48);
              if (lVar5 != 0) {
                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                if (lVar6 == 0) goto LAB_0271e464;
                uVar8 = *unaff_x22;
              }
              puVar1 = StringLiteral_1435;
              if (0xb < uVar8) {
                unaff_x20[0xf] = lVar5;
                lVar5 = *(long *)puVar1;
                if (lVar5 != 0) {
                  lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                  if (lVar5 == 0) goto LAB_0271e464;
                  uVar8 = *unaff_x22;
                }
                if (0xc < uVar8) {
                  unaff_x20[0x10] = *(long *)puVar1;
                  lVar5 = *(long *)(unaff_x19 + 0x50);
                  if (lVar5 != 0) {
                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                    if (lVar6 == 0) goto LAB_0271e464;
                    uVar8 = *unaff_x22;
                  }
                  puVar1 = StringLiteral_4828;
                  if (0xd < uVar8) {
                    unaff_x20[0x11] = lVar5;
                    lVar5 = *(long *)puVar1;
                    if (lVar5 != 0) {
                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                      if (lVar5 == 0) goto LAB_0271e464;
                      uVar8 = *unaff_x22;
                    }
                    if (0xe < uVar8) {
                      unaff_x20[0x12] = *(long *)puVar1;
                      lVar5 = *(long *)(unaff_x19 + 0x58);
                      if (lVar5 != 0) {
                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                        if (lVar6 == 0) goto LAB_0271e464;
                        uVar8 = *unaff_x22;
                      }
                      puVar1 = System_Collections_Generic_List<IronMaidenRing>_TypeInfo;
                      if (0xf < uVar8) {
                        unaff_x20[0x13] = lVar5;
                        lVar5 = *(long *)puVar1;
                        if (lVar5 != 0) {
                          lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                          if (lVar5 == 0) goto LAB_0271e464;
                          uVar8 = *unaff_x22;
                        }
                        puVar3 = 
                        Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_88>__
                        ;
                        if (0x10 < uVar8) {
                          unaff_x20[0x14] = *(long *)puVar1;
                          uStack00000000000000a8 = *(undefined4 *)(unaff_x19 + 0x60);
                          lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x000000a8);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40)),
                             lVar6 == 0)) goto LAB_0271e464;
                          puVar1 = PTR_DAT_033eb240;
                          uVar8 = *unaff_x22;
                          if (0x11 < uVar8) {
                            unaff_x20[0x15] = lVar5;
                            lVar5 = *(long *)puVar1;
                            if (lVar5 != 0) {
                              lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
                              if (lVar5 == 0) goto LAB_0271e464;
                              uVar8 = *unaff_x22;
                            }
                            if (0x12 < uVar8) {
                              unaff_x20[0x16] = *(long *)puVar1;
                              lVar5 = *(long *)(unaff_x19 + 0x68);
                              if (lVar5 != 0) {
                                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40))
                                ;
                                if (lVar6 == 0) goto LAB_0271e464;
                                uVar8 = *unaff_x22;
                              }
                              puVar1 = PTR_DAT_033f3c88;
                              if (0x13 < uVar8) {
                                unaff_x20[0x17] = lVar5;
                                lVar5 = *(long *)puVar1;
                                if (lVar5 != 0) {
                                  lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                    (*unaff_x20 + 0x40));
                                  if (lVar5 == 0) goto LAB_0271e464;
                                  uVar8 = *unaff_x22;
                                }
                                puVar3 = StringLiteral_2033;
                                if (0x14 < uVar8) {
                                  unaff_x20[0x18] = *(long *)puVar1;
                                  uStack00000000000000a4 = *(undefined4 *)(unaff_x19 + 0x70);
                                  lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,
                                                             (long)&stack0x000000a0 + 4);
                                  if ((lVar5 != 0) &&
                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                        (*unaff_x20 + 0x40)),
                                     lVar6 == 0)) goto LAB_0271e464;
                                  puVar1 = System_Xml_XmlText_TypeInfo;
                                  uVar8 = *unaff_x22;
                                  if (0x15 < uVar8) {
                                    unaff_x20[0x19] = lVar5;
                                    lVar5 = *(long *)puVar1;
                                    if (lVar5 != 0) {
                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                        (*unaff_x20 + 0x40));
                                      if (lVar5 == 0) goto LAB_0271e464;
                                      uVar8 = *unaff_x22;
                                    }
                                    puVar3 = StringLiteral_10416;
                                    if (0x16 < uVar8) {
                                      unaff_x20[0x1a] = *(long *)puVar1;
                                      uStack00000000000000a0 = *(undefined4 *)(unaff_x19 + 0x74);
                                      lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,
                                                                 &stack0x000000a0);
                                      if ((lVar5 != 0) &&
                                         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                            (*unaff_x20 + 0x40)),
                                         lVar6 == 0)) goto LAB_0271e464;
                                      puVar1 = StringLiteral_11156;
                                      uVar8 = *unaff_x22;
                                      if (0x17 < uVar8) {
                                        unaff_x20[0x1b] = lVar5;
                                        lVar5 = *(long *)puVar1;
                                        if (lVar5 != 0) {
                                          lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                            (*unaff_x20 + 0x40));
                                          if (lVar5 == 0) goto LAB_0271e464;
                                          uVar8 = *unaff_x22;
                                        }
                                        puVar3 = StringLiteral_9958;
                                        if (0x18 < uVar8) {
                                          unaff_x20[0x1c] = *(long *)puVar1;
                                          uStack000000000000009c = *(undefined1 *)(unaff_x19 + 0x78)
                                          ;
                                          lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,
                                                                     (long)&stack0x00000098 + 4);
                                          if ((lVar5 != 0) &&
                                             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                             , lVar6 == 0)) goto LAB_0271e464;
                                          puVar1 = StringLiteral_13800;
                                          uVar8 = *unaff_x22;
                                          if (0x19 < uVar8) {
                                            unaff_x20[0x1d] = lVar5;
                                            lVar5 = *(long *)puVar1;
                                            if (lVar5 != 0) {
                                              lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                              ;
                                              if (lVar5 == 0) goto LAB_0271e464;
                                              uVar8 = *unaff_x22;
                                            }
                                            if (0x1a < uVar8) {
                                              unaff_x20[0x1e] = *(long *)puVar1;
                                              uStack0000000000000098 =
                                                   *(undefined4 *)(unaff_x19 + 0x7c);
                                              lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,
                                                                         &stack0x00000098);
                                              if ((lVar5 != 0) &&
                                                 (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40)),
                                                 lVar6 == 0)) goto LAB_0271e464;
                                              puVar1 = StringLiteral_10020;
                                              uVar8 = *unaff_x22;
                                              if (0x1b < uVar8) {
                                                unaff_x20[0x1f] = lVar5;
                                                lVar5 = *(long *)puVar1;
                                                if (lVar5 != 0) {
                                                  lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                }
                                                puVar4 = StringLiteral_7349;
                                                if (0x1c < uVar8) {
                                                  unaff_x20[0x20] = *(long *)puVar1;
                                                  in_stack_00000088 =
                                                       *(undefined8 *)(unaff_x19 + 0x88);
                                                  in_stack_00000080 =
                                                       *(undefined8 *)(unaff_x19 + 0x80);
                                                  lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,
                                                                             &stack0x00000080);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  UnityEngine_Playables_PlayableBinding___TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x1d < uVar8) {
                                                    unaff_x20[0x21] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x1e < uVar8) {
                                                    unaff_x20[0x22] = *(long *)puVar1;
                                                    lVar5 = *(long *)(unaff_x19 + 0x90);
                                                    if (lVar5 != 0) {
                                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar6 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar1 = System_Xml_IDtdParser_TypeInfo;
                                                  if (0x1f < uVar8) {
                                                    unaff_x20[0x23] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x20 < uVar8) {
                                                    unaff_x20[0x24] = *(long *)puVar1;
                                                    uStack000000000000007c =
                                                         *(undefined1 *)(unaff_x19 + 0x98);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000078 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_UnityEngine_Object_Instantiate<MeshFilter>__
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x21 < uVar8) {
                                                    unaff_x20[0x25] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x22 < uVar8) {
                                                    unaff_x20[0x26] = *(long *)puVar1;
                                                    uStack0000000000000078 =
                                                         *(undefined1 *)(unaff_x19 + 0x99);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,&stack0x00000078);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = PTR_DAT_033ed2b0;
                                                  uVar8 = *unaff_x22;
                                                  if (0x23 < uVar8) {
                                                    unaff_x20[0x27] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x24 < uVar8) {
                                                    unaff_x20[0x28] = *(long *)puVar1;
                                                    uStack0000000000000074 =
                                                         *(undefined4 *)(unaff_x19 + 0x9c);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000070 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<IInteractorView>_MoveNext__
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x25 < uVar8) {
                                                    unaff_x20[0x29] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x26 < uVar8) {
                                                    unaff_x20[0x2a] = *(long *)puVar1;
                                                    uStack0000000000000070 =
                                                         *(undefined1 *)(unaff_x19 + 0xa0);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,&stack0x00000070);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRController>__
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x27 < uVar8) {
                                                    unaff_x20[0x2b] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x28 < uVar8) {
                                                    unaff_x20[0x2c] = *(long *)puVar1;
                                                    uStack000000000000006c =
                                                         *(undefined4 *)(unaff_x19 + 0xa4);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000068 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_Universal_XRPass_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x29 < uVar8) {
                                                    unaff_x20[0x2d] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x2a < uVar8) {
                                                    unaff_x20[0x2e] = *(long *)puVar1;
                                                    uStack0000000000000068 =
                                                         *(undefined4 *)(unaff_x19 + 0xa8);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000068);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  System_Collections_Generic_List<GUILayoutEntry>_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2b < uVar8) {
                                                    unaff_x20[0x2f] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x2c < uVar8) {
                                                    unaff_x20[0x30] = *(long *)puVar1;
                                                    uStack0000000000000064 =
                                                         *(undefined1 *)(unaff_x19 + 0xac);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000060 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2d < uVar8) {
                                                    unaff_x20[0x31] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x2e < uVar8) {
                                                    unaff_x20[0x32] = *(long *)puVar1;
                                                    uStack0000000000000060 =
                                                         *(undefined1 *)(unaff_x19 + 0xad);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,&stack0x00000060);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List<TrackAsset>_get_Item__
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x2f < uVar8) {
                                                    unaff_x20[0x33] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x30 < uVar8) {
                                                    unaff_x20[0x34] = *(long *)puVar1;
                                                    uStack000000000000005c =
                                                         *(undefined1 *)(unaff_x19 + 0xae);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000058 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_Sirenix_Serialization_SerializationUtility_GetCachedWriter__
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x31 < uVar8) {
                                                    unaff_x20[0x35] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x32 < uVar8) {
                                                    unaff_x20[0x36] = *(long *)puVar1;
                                                    uStack0000000000000058 =
                                                         *(undefined1 *)(unaff_x19 + 0xaf);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,&stack0x00000058);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_93__;
                                                  uVar8 = *unaff_x22;
                                                  if (0x33 < uVar8) {
                                                    unaff_x20[0x37] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x34 < uVar8) {
                                                    unaff_x20[0x38] = *(long *)puVar1;
                                                    uStack0000000000000054 =
                                                         *(undefined1 *)(unaff_x19 + 0xb0);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3
                                                                               ,(long)&
                                                  stack0x00000050 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = UnityEngine_MeshFilter_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x35 < uVar8) {
                                                    unaff_x20[0x39] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x36 < uVar8) {
                                                    unaff_x20[0x3a] = *(long *)puVar1;
                                                    uStack0000000000000050 =
                                                         *(undefined4 *)(unaff_x19 + 0xb4);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000050);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  System_Xml_Schema_XmlSchemaEnumerationFacet_TypeInfo
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x37 < uVar8) {
                                                    unaff_x20[0x3b] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x38 < uVar8) {
                                                    unaff_x20[0x3c] = *(long *)puVar1;
                                                    uStack000000000000004c =
                                                         *(undefined4 *)(unaff_x19 + 0xb8);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000048 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Material>_Dispose__
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x39 < uVar8) {
                                                    unaff_x20[0x3d] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3a < uVar8) {
                                                    unaff_x20[0x3e] = *(long *)puVar1;
                                                    uStack0000000000000048 =
                                                         *(undefined4 *)(unaff_x19 + 0xbc);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000048);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = OVRPlugin_TypeInfo;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3b < uVar8) {
                                                    unaff_x20[0x3f] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3c < uVar8) {
                                                    unaff_x20[0x40] = *(long *)puVar1;
                                                    uStack0000000000000044 =
                                                         *(undefined4 *)(unaff_x19 + 0xc0);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000040 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_UnityEngine_Component_GetComponent<Dial>__;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3d < uVar8) {
                                                    unaff_x20[0x41] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x3e < uVar8) {
                                                    unaff_x20[0x42] = *(long *)puVar1;
                                                    uStack0000000000000040 =
                                                         *(undefined4 *)(unaff_x19 + 0xc4);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000040);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = StringLiteral_7172;
                                                  uVar8 = *unaff_x22;
                                                  if (0x3f < uVar8) {
                                                    unaff_x20[0x43] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                                  ;
                                                  if (0x40 < uVar8) {
                                                    unaff_x20[0x44] = *(long *)puVar1;
                                                    uStack000000000000003c =
                                                         *(undefined4 *)(unaff_x19 + 200);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000038 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = PTR_DAT_033ed870;
                                                  uVar8 = *unaff_x22;
                                                  if (0x41 < uVar8) {
                                                    unaff_x20[0x45] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x42 < uVar8) {
                                                    unaff_x20[0x46] = *(long *)puVar1;
                                                    uStack0000000000000038 =
                                                         *(undefined4 *)(unaff_x19 + 0xcc);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000038);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_UnityEngine_Object_FindObjectsOfType<HandTeleportGuard>__
                                                  ;
                                                  uVar8 = *unaff_x22;
                                                  if (0x43 < uVar8) {
                                                    unaff_x20[0x47] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x44 < uVar8) {
                                                    unaff_x20[0x48] = *(long *)puVar1;
                                                    uStack0000000000000034 =
                                                         *(undefined4 *)(unaff_x19 + 0xd0);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000030 + 4);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = StringLiteral_14059;
                                                  uVar8 = *unaff_x22;
                                                  if (0x45 < uVar8) {
                                                    unaff_x20[0x49] = lVar5;
                                                    lVar5 = *(long *)puVar1;
                                                    if (lVar5 != 0) {
                                                      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar5 == 0) goto LAB_0271e464;
                                                  uVar8 = *unaff_x22;
                                                  }
                                                  if (0x46 < uVar8) {
                                                    unaff_x20[0x4a] = *(long *)puVar1;
                                                    uStack0000000000000030 =
                                                         *(undefined4 *)(unaff_x19 + 0xd4);
                                                    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000030);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_00d6225c(lVar5,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
                                                  goto LAB_0271e464;
                                                  if (0x47 < *unaff_x22) {
                                                    unaff_x20[0x4b] = lVar5;
                                                                                                        
                                                  UnityEngine_UIElements_UIRAtlasAllocator_AreaNode___cctor
                                                            ();
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}



/*
FUNCTION_NAME: UnityEngine.UIElements.Rotate$$ToQuaternion
ENTRY_POINT: 0271d64c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_UIElements_Rotate__ToQuaternion(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *in_x9;
  long unaff_x19;
  long *unaff_x20;
  uint *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  uStack0000000000000088 = *(undefined8 *)(unaff_x19 + 0x88);
  uStack0000000000000080 = *(undefined8 *)(unaff_x19 + 0x80);
  lVar3 = thunk_FUN_00d61fa0(*in_x9);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
  goto LAB_0271e464;
  puVar1 = UnityEngine_Playables_PlayableBinding___TypeInfo;
  uVar6 = *unaff_x22;
  if (0x1d < uVar6) {
    unaff_x20[0x21] = lVar3;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_0271e464;
      uVar6 = *unaff_x22;
    }
    if (0x1e < uVar6) {
      unaff_x20[0x22] = *(long *)puVar1;
      lVar3 = *(long *)(unaff_x19 + 0x90);
      if (lVar3 != 0) {
        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar4 == 0) goto LAB_0271e464;
        uVar6 = *unaff_x22;
      }
      puVar1 = System_Xml_IDtdParser_TypeInfo;
      if (0x1f < uVar6) {
        unaff_x20[0x23] = lVar3;
        lVar3 = *(long *)puVar1;
        if (lVar3 != 0) {
          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar3 == 0) goto LAB_0271e464;
          uVar6 = *unaff_x22;
        }
        if (0x20 < uVar6) {
          unaff_x20[0x24] = *(long *)puVar1;
          uStack000000000000007c = *(undefined1 *)(unaff_x19 + 0x98);
          lVar3 = thunk_FUN_00d61fa0(*unaff_x24,(long)&stack0x00000078 + 4);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0)) {
LAB_0271e464:
            uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar5,0);
          }
          puVar1 = Method_UnityEngine_Object_Instantiate<MeshFilter>__;
          uVar6 = *unaff_x22;
          if (0x21 < uVar6) {
            unaff_x20[0x25] = lVar3;
            lVar3 = *(long *)puVar1;
            if (lVar3 != 0) {
              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
              if (lVar3 == 0) goto LAB_0271e464;
              uVar6 = *unaff_x22;
            }
            if (0x22 < uVar6) {
              unaff_x20[0x26] = *(long *)puVar1;
              uStack0000000000000078 = *(undefined1 *)(unaff_x19 + 0x99);
              lVar3 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000078);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
              goto LAB_0271e464;
              puVar1 = PTR_DAT_033ed2b0;
              uVar6 = *unaff_x22;
              if (0x23 < uVar6) {
                unaff_x20[0x27] = lVar3;
                lVar3 = *(long *)puVar1;
                if (lVar3 != 0) {
                  lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                  if (lVar3 == 0) goto LAB_0271e464;
                  uVar6 = *unaff_x22;
                }
                if (0x24 < uVar6) {
                  unaff_x20[0x28] = *(long *)puVar1;
                  uStack0000000000000074 = *(undefined4 *)(unaff_x19 + 0x9c);
                  lVar3 = thunk_FUN_00d61fa0(*unaff_x23,(long)&stack0x00000070 + 4);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)),
                     lVar4 == 0)) goto LAB_0271e464;
                  puVar1 = 
                  Method_System_Collections_Generic_List_Enumerator<IInteractorView>_MoveNext__;
                  uVar6 = *unaff_x22;
                  if (0x25 < uVar6) {
                    unaff_x20[0x29] = lVar3;
                    lVar3 = *(long *)puVar1;
                    if (lVar3 != 0) {
                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                      if (lVar3 == 0) goto LAB_0271e464;
                      uVar6 = *unaff_x22;
                    }
                    if (0x26 < uVar6) {
                      unaff_x20[0x2a] = *(long *)puVar1;
                      uStack0000000000000070 = *(undefined1 *)(unaff_x19 + 0xa0);
                      lVar3 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000070);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)),
                         lVar4 == 0)) goto LAB_0271e464;
                      puVar1 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRController>__;
                      uVar6 = *unaff_x22;
                      if (0x27 < uVar6) {
                        unaff_x20[0x2b] = lVar3;
                        lVar3 = *(long *)puVar1;
                        if (lVar3 != 0) {
                          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                          if (lVar3 == 0) goto LAB_0271e464;
                          uVar6 = *unaff_x22;
                        }
                        if (0x28 < uVar6) {
                          unaff_x20[0x2c] = *(long *)puVar1;
                          uStack000000000000006c = *(undefined4 *)(unaff_x19 + 0xa4);
                          lVar3 = thunk_FUN_00d61fa0(*unaff_x23,(long)&stack0x00000068 + 4);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)),
                             lVar4 == 0)) goto LAB_0271e464;
                          puVar1 = UnityEngine_Rendering_Universal_XRPass_TypeInfo;
                          uVar6 = *unaff_x22;
                          if (0x29 < uVar6) {
                            unaff_x20[0x2d] = lVar3;
                            lVar3 = *(long *)puVar1;
                            if (lVar3 != 0) {
                              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                              if (lVar3 == 0) goto LAB_0271e464;
                              uVar6 = *unaff_x22;
                            }
                            if (0x2a < uVar6) {
                              unaff_x20[0x2e] = *(long *)puVar1;
                              uStack0000000000000068 = *(undefined4 *)(unaff_x19 + 0xa8);
                              lVar3 = thunk_FUN_00d61fa0(*unaff_x23,&stack0x00000068);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                    (*unaff_x20 + 0x40)), lVar4 == 0
                                 )) goto LAB_0271e464;
                              puVar1 = System_Collections_Generic_List<GUILayoutEntry>_TypeInfo;
                              uVar6 = *unaff_x22;
                              if (0x2b < uVar6) {
                                unaff_x20[0x2f] = lVar3;
                                lVar3 = *(long *)puVar1;
                                if (lVar3 != 0) {
                                  lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                    (*unaff_x20 + 0x40));
                                  if (lVar3 == 0) goto LAB_0271e464;
                                  uVar6 = *unaff_x22;
                                }
                                if (0x2c < uVar6) {
                                  unaff_x20[0x30] = *(long *)puVar1;
                                  uStack0000000000000064 = *(undefined1 *)(unaff_x19 + 0xac);
                                  lVar3 = thunk_FUN_00d61fa0(*unaff_x24,(long)&stack0x00000060 + 4);
                                  if ((lVar3 != 0) &&
                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                        (*unaff_x20 + 0x40)),
                                     lVar4 == 0)) goto LAB_0271e464;
                                  puVar1 = 
                                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
                                  ;
                                  uVar6 = *unaff_x22;
                                  if (0x2d < uVar6) {
                                    unaff_x20[0x31] = lVar3;
                                    lVar3 = *(long *)puVar1;
                                    if (lVar3 != 0) {
                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                        (*unaff_x20 + 0x40));
                                      if (lVar3 == 0) goto LAB_0271e464;
                                      uVar6 = *unaff_x22;
                                    }
                                    if (0x2e < uVar6) {
                                      unaff_x20[0x32] = *(long *)puVar1;
                                      uStack0000000000000060 = *(undefined1 *)(unaff_x19 + 0xad);
                                      lVar3 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000060);
                                      if ((lVar3 != 0) &&
                                         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                            (*unaff_x20 + 0x40)),
                                         lVar4 == 0)) goto LAB_0271e464;
                                      puVar1 = 
                                      Method_System_Collections_Generic_List<TrackAsset>_get_Item__;
                                      uVar6 = *unaff_x22;
                                      if (0x2f < uVar6) {
                                        unaff_x20[0x33] = lVar3;
                                        lVar3 = *(long *)puVar1;
                                        if (lVar3 != 0) {
                                          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                            (*unaff_x20 + 0x40));
                                          if (lVar3 == 0) goto LAB_0271e464;
                                          uVar6 = *unaff_x22;
                                        }
                                        if (0x30 < uVar6) {
                                          unaff_x20[0x34] = *(long *)puVar1;
                                          uStack000000000000005c = *(undefined1 *)(unaff_x19 + 0xae)
                                          ;
                                          lVar3 = thunk_FUN_00d61fa0(*unaff_x24,
                                                                     (long)&stack0x00000058 + 4);
                                          if ((lVar3 != 0) &&
                                             (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                             , lVar4 == 0)) goto LAB_0271e464;
                                          puVar1 = 
                                          Method_Sirenix_Serialization_SerializationUtility_GetCachedWriter__
                                          ;
                                          uVar6 = *unaff_x22;
                                          if (0x31 < uVar6) {
                                            unaff_x20[0x35] = lVar3;
                                            lVar3 = *(long *)puVar1;
                                            if (lVar3 != 0) {
                                              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                (*unaff_x20 + 0x40))
                                              ;
                                              if (lVar3 == 0) goto LAB_0271e464;
                                              uVar6 = *unaff_x22;
                                            }
                                            if (0x32 < uVar6) {
                                              unaff_x20[0x36] = *(long *)puVar1;
                                              uStack0000000000000058 =
                                                   *(undefined1 *)(unaff_x19 + 0xaf);
                                              lVar3 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000058
                                                                        );
                                              if ((lVar3 != 0) &&
                                                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40)),
                                                 lVar4 == 0)) goto LAB_0271e464;
                                              puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_93__;
                                              uVar6 = *unaff_x22;
                                              if (0x33 < uVar6) {
                                                unaff_x20[0x37] = lVar3;
                                                lVar3 = *(long *)puVar1;
                                                if (lVar3 != 0) {
                                                  lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x20 +
                                                                                    0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                }
                                                if (0x34 < uVar6) {
                                                  unaff_x20[0x38] = *(long *)puVar1;
                                                  uStack0000000000000054 =
                                                       *(undefined1 *)(unaff_x19 + 0xb0);
                                                  lVar3 = thunk_FUN_00d61fa0(*unaff_x24,
                                                                             (long)&stack0x00000050
                                                                             + 4);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = UnityEngine_MeshFilter_TypeInfo;
                                                  uVar6 = *unaff_x22;
                                                  if (0x35 < uVar6) {
                                                    unaff_x20[0x39] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x36 < uVar6) {
                                                    unaff_x20[0x3a] = *(long *)puVar1;
                                                    uStack0000000000000050 =
                                                         *(undefined4 *)(unaff_x19 + 0xb4);
                                                    lVar3 = thunk_FUN_00d61fa0(*unaff_x23,
                                                                               &stack0x00000050);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  System_Xml_Schema_XmlSchemaEnumerationFacet_TypeInfo
                                                  ;
                                                  uVar6 = *unaff_x22;
                                                  if (0x37 < uVar6) {
                                                    unaff_x20[0x3b] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x38 < uVar6) {
                                                    unaff_x20[0x3c] = *(long *)puVar1;
                                                    uStack000000000000004c =
                                                         *(undefined4 *)(unaff_x19 + 0xb8);
                                                    lVar3 = thunk_FUN_00d61fa0(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000048 + 4);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Material>_Dispose__
                                                  ;
                                                  uVar6 = *unaff_x22;
                                                  if (0x39 < uVar6) {
                                                    unaff_x20[0x3d] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x3a < uVar6) {
                                                    unaff_x20[0x3e] = *(long *)puVar1;
                                                    uStack0000000000000048 =
                                                         *(undefined4 *)(unaff_x19 + 0xbc);
                                                    lVar3 = thunk_FUN_00d61fa0(*unaff_x23,
                                                                               &stack0x00000048);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = OVRPlugin_TypeInfo;
                                                  uVar6 = *unaff_x22;
                                                  if (0x3b < uVar6) {
                                                    unaff_x20[0x3f] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x3c < uVar6) {
                                                    unaff_x20[0x40] = *(long *)puVar1;
                                                    uStack0000000000000044 =
                                                         *(undefined4 *)(unaff_x19 + 0xc0);
                                                    lVar3 = thunk_FUN_00d61fa0(*unaff_x23,
                                                                               (long)&
                                                  stack0x00000040 + 4);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_UnityEngine_Component_GetComponent<Dial>__;
                                                  uVar6 = *unaff_x22;
                                                  if (0x3d < uVar6) {
                                                    unaff_x20[0x41] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x3e < uVar6) {
                                                    unaff_x20[0x42] = *(long *)puVar1;
                                                    uStack0000000000000040 =
                                                         *(undefined4 *)(unaff_x19 + 0xc4);
                                                    lVar3 = thunk_FUN_00d61fa0(*unaff_x23,
                                                                               &stack0x00000040);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = StringLiteral_7172;
                                                  uVar6 = *unaff_x22;
                                                  if (0x3f < uVar6) {
                                                    unaff_x20[0x43] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                                  ;
                                                  if (0x40 < uVar6) {
                                                    unaff_x20[0x44] = *(long *)puVar1;
                                                    uStack000000000000003c =
                                                         *(undefined4 *)(unaff_x19 + 200);
                                                    lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000038 + 4);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = PTR_DAT_033ed870;
                                                  uVar6 = *unaff_x22;
                                                  if (0x41 < uVar6) {
                                                    unaff_x20[0x45] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x42 < uVar6) {
                                                    unaff_x20[0x46] = *(long *)puVar1;
                                                    uStack0000000000000038 =
                                                         *(undefined4 *)(unaff_x19 + 0xcc);
                                                    lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000038);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = 
                                                  Method_UnityEngine_Object_FindObjectsOfType<HandTeleportGuard>__
                                                  ;
                                                  uVar6 = *unaff_x22;
                                                  if (0x43 < uVar6) {
                                                    unaff_x20[0x47] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x44 < uVar6) {
                                                    unaff_x20[0x48] = *(long *)puVar1;
                                                    uStack0000000000000034 =
                                                         *(undefined4 *)(unaff_x19 + 0xd0);
                                                    lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,(long)&
                                                  stack0x00000030 + 4);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  puVar1 = StringLiteral_14059;
                                                  uVar6 = *unaff_x22;
                                                  if (0x45 < uVar6) {
                                                    unaff_x20[0x49] = lVar3;
                                                    lVar3 = *(long *)puVar1;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x20 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0271e464;
                                                  uVar6 = *unaff_x22;
                                                  }
                                                  if (0x46 < uVar6) {
                                                    unaff_x20[0x4a] = *(long *)puVar1;
                                                    uStack0000000000000030 =
                                                         *(undefined4 *)(unaff_x19 + 0xd4);
                                                    lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2
                                                                               ,&stack0x00000030);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_00d6225c(lVar3,*(
                                                  undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
                                                  goto LAB_0271e464;
                                                  if (0x47 < *unaff_x22) {
                                                    unaff_x20[0x4b] = lVar3;
                                                                                                        
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}



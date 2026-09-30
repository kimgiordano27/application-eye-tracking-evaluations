/*
FUNCTION_NAME: MetaXRAudioNativeInterface.WwisePluginInterface$$ovrAudio_GetRaycastHits
ENTRY_POINT: 01426164
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void MetaXRAudioNativeInterface_WwisePluginInterface__ovrAudio_GetRaycastHits(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  uint *unaff_x21;
  
  puVar1 = Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRFaceSubsystem>__ctor__;
  unaff_x19[0x44] = unaff_x20;
  lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_01426710:
    uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,0);
  }
  puVar1 = StringLiteral_9088;
  if (0x44 < *unaff_x21) {
    unaff_x19[0x48] = lVar2;
    lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_01426710;
    puVar1 = StringLiteral_8875;
    if (0x48 < *unaff_x21) {
      unaff_x19[0x4c] = lVar2;
      lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_01426710;
      puVar1 = StringLiteral_980;
      if (0x4c < *unaff_x21) {
        unaff_x19[0x50] = lVar2;
        lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_01426710;
        puVar1 = Meta_Voice_Net_WebSockets_Requests_WitWebSocketSubscriptionRequest_TypeInfo;
        if (0x50 < *unaff_x21) {
          unaff_x19[0x54] = lVar2;
          lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_01426710;
          puVar1 = 
          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_string>_get_Current__
          ;
          if (0x54 < *unaff_x21) {
            unaff_x19[0x58] = lVar2;
            lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
            goto LAB_01426710;
            puVar1 = PTR_DAT_033f2110;
            if (0x58 < *unaff_x21) {
              unaff_x19[0x5c] = lVar2;
              lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
              goto LAB_01426710;
              puVar1 = PTR_DAT_033f3f90;
              if (0x5c < *unaff_x21) {
                unaff_x19[0x60] = lVar2;
                lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0
                   )) goto LAB_01426710;
                puVar1 = 
                Method_System_Collections_Generic_Dictionary<string,_MemberInfo>_TryGetValue__;
                if (0x60 < *unaff_x21) {
                  unaff_x19[100] = lVar2;
                  lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar3 == 0)) goto LAB_01426710;
                  puVar1 = System_Security_Cryptography_RSA_TypeInfo;
                  if (100 < *unaff_x21) {
                    unaff_x19[0x68] = lVar2;
                    lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar3 == 0)) goto LAB_01426710;
                    puVar1 = Method_System_RuntimeType_GetMember__;
                    if (0x68 < *unaff_x21) {
                      unaff_x19[0x6c] = lVar2;
                      lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar3 == 0)) goto LAB_01426710;
                      puVar1 = Method_System_Collections_Generic_List<TextureBlender>_Add__;
                      if (0x6c < *unaff_x21) {
                        unaff_x19[0x70] = lVar2;
                        lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                        if ((lVar2 != 0) &&
                           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar3 == 0)) goto LAB_01426710;
                        puVar1 = StringLiteral_11789;
                        if (0x70 < *unaff_x21) {
                          unaff_x19[0x74] = lVar2;
                          lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if ((lVar2 != 0) &&
                             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar3 == 0)) goto LAB_01426710;
                          puVar1 = StringLiteral_2779;
                          if (0x74 < *unaff_x21) {
                            unaff_x19[0x78] = lVar2;
                            lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                            if ((lVar2 != 0) &&
                               (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar3 == 0)) goto LAB_01426710;
                            puVar1 = StringLiteral_2663;
                            if (0x78 < *unaff_x21) {
                              unaff_x19[0x7c] = lVar2;
                              lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                              if ((lVar2 != 0) &&
                                 (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar3 == 0
                                 )) goto LAB_01426710;
                              puVar1 = System_Collections_Generic_List<IXRSelectFilter>_TypeInfo;
                              if (0x7c < *unaff_x21) {
                                unaff_x19[0x80] = lVar2;
                                lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                if ((lVar2 != 0) &&
                                   (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar3 == 0)) goto LAB_01426710;
                                puVar1 = StringLiteral_2768;
                                if (0x80 < *unaff_x21) {
                                  unaff_x19[0x84] = lVar2;
                                  lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                  if ((lVar2 != 0) &&
                                     (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                     lVar3 == 0)) goto LAB_01426710;
                                  puVar1 = PTR_DAT_033f3728;
                                  if (0x84 < *unaff_x21) {
                                    unaff_x19[0x88] = lVar2;
                                    lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                    if ((lVar2 != 0) &&
                                       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                       lVar3 == 0)) goto LAB_01426710;
                                    puVar1 = Method_System_Collections_Generic_List<Vertex>__ctor__;
                                    if (0x88 < *unaff_x21) {
                                      unaff_x19[0x8c] = lVar2;
                                      lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                      if ((lVar2 != 0) &&
                                         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40)),
                                         lVar3 == 0)) goto LAB_01426710;
                                      puVar1 = Meta_Voice_Logging_LoggerRegistry_var;
                                      if (0x8c < *unaff_x21) {
                                        unaff_x19[0x90] = lVar2;
                                        lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                        if ((lVar2 != 0) &&
                                           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40)),
                                           lVar3 == 0)) goto LAB_01426710;
                                        puVar1 = StringLiteral_6972;
                                        if (0x90 < *unaff_x21) {
                                          unaff_x19[0x94] = lVar2;
                                          lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                          if ((lVar2 != 0) &&
                                             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                             , lVar3 == 0)) goto LAB_01426710;
                                          puVar1 = 
                                          Method_System_Collections_Generic_List<SimpleTuple<Face,_Edge>>_Add__
                                          ;
                                          if (0x94 < *unaff_x21) {
                                            unaff_x19[0x98] = lVar2;
                                            lVar2 = FUN_01780344(*(undefined8 *)puVar1,0);
                                            if ((lVar2 != 0) &&
                                               (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  )), lVar3 == 0))
                                            goto LAB_01426710;
                                            puVar1 = 
                                            Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                                            ;
                                            if (0x98 < *unaff_x21) {
                                              unaff_x19[0x9c] = lVar2;
                                              **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}



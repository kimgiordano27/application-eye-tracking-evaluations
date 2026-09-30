/*
FUNCTION_NAME: FUN_00ed2eec
ENTRY_POINT: 00ed2eec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_00ed2eec(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((DAT_03775292 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_Stream_<>c_<BeginEndWriteAsync>b__58_0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_Text_EncodingProvider_TypeInfo);
    thunk_FUN_00d48444(OVRInput_OVRControllerBase_VirtualAxis2DMap_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_ProBuilder_HSVColor_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3548);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6960);
    thunk_FUN_00d48444(System_DBNull_var);
    thunk_FUN_00d48444(StringLiteral_11095);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<Decimal>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(StringLiteral_1166);
    thunk_FUN_00d48444(Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VA_Triangle>_RemoveRange__);
    DAT_03775292 = 1;
  }
  lVar4 = FUN_0268fd4c(param_1,0);
  if ((lVar4 != 0) && (lVar4 = FUN_0268b6ac(lVar4,0), lVar4 != 0)) {
    uVar5 = FUN_015fe854(lVar4,*(undefined8 *)
                                Method_System_Collections_Generic_List<VA_Triangle>_RemoveRange__,0)
    ;
    puVar3 = StringLiteral_11347;
    puVar2 = StringLiteral_1166;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c114(param_1,0);
      return;
    }
    if (DAT_03775376 == '\0') {
      thunk_FUN_00d48444(StringLiteral_2034);
      DAT_03775376 = '\x01';
    }
    **(long **)(*(long *)StringLiteral_2034 + 0xb8) = param_1;
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    uVar6 = FUN_0267c994(*(undefined8 *)puVar2,0);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar2 = Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__;
    if (lVar4 != 0) {
      FUN_0267d648(lVar4,uVar6,0);
      *(long *)(param_1 + 0xe0) = lVar4;
      FUN_0267f088(lVar4,*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0xec),0);
      lVar4 = FUN_0268fd4c(param_1,0);
      if (lVar4 != 0) {
        uVar6 = FUN_010e5800(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
        *(undefined8 *)(param_1 + 0xd8) = uVar6;
        lVar4 = FUN_0268fd4c(param_1,0);
        puVar2 = PTR_DAT_033f3618;
        if (lVar4 != 0) {
          uVar6 = FUN_010e5800(lVar4,*(undefined8 *)UnityEngine_Pose___TypeInfo);
          *(undefined8 *)(param_1 + 0xd0) = uVar6;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            FUN_02669c18(lVar4,0);
            puVar2 = 
            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
            ;
            if (*(long *)(param_1 + 0xd8) != 0) {
              FUN_02677530(*(long *)(param_1 + 0xd8),lVar4,0);
              lVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,4);
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = 0xc0000000c0000000;
                  *(undefined4 *)(lVar7 + 0x28) = 0x3f800000;
                  uVar6 = DAT_028aa440;
                  if (uVar1 != 1) {
                    *(undefined4 *)(lVar7 + 0x34) = 0x3f800000;
                    *(undefined8 *)(lVar7 + 0x2c) = uVar6;
                    uVar6 = DAT_028aa448;
                    if (2 < uVar1) {
                      *(undefined4 *)(lVar7 + 0x40) = 0x3f800000;
                      *(undefined8 *)(lVar7 + 0x38) = uVar6;
                      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                      if (uVar1 != 3) {
                        *(undefined8 *)(lVar7 + 0x44) = 0x4000000040000000;
                        *(undefined4 *)(lVar7 + 0x4c) = 0x3f800000;
                        FUN_0266b9c4(lVar4,lVar7,0);
                        lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,6);
                        if (lVar7 == 0) goto LAB_00ed3650;
                        uVar1 = *(uint *)(lVar7 + 0x18);
                        if (((((uVar1 != 0) && (*(undefined4 *)(lVar7 + 0x20) = 0, uVar1 != 1)) &&
                             (*(undefined4 *)(lVar7 + 0x24) = 2, 2 < uVar1)) &&
                            ((*(undefined4 *)(lVar7 + 0x28) = 1, uVar1 != 3 &&
                             (*(undefined4 *)(lVar7 + 0x2c) = 2, 4 < uVar1)))) &&
                           (*(undefined4 *)(lVar7 + 0x30) = 3, uVar1 != 5)) {
                          *(undefined4 *)(lVar7 + 0x34) = 1;
                          FUN_0266db2c(lVar4,lVar7,0);
                          lVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,4);
                          if (DAT_03775377 == '\0') {
                            thunk_FUN_00d48444(
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                              );
                            DAT_03775377 = '\x01';
                          }
                          puVar2 = 
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          ;
                          if (lVar7 == 0) goto LAB_00ed3650;
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if (uVar1 != 0) {
                            uVar6 = *(undefined8 *)
                                     (*(long *)(*(long *)
                                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                               + 0xb8) + 0x48);
                            fVar9 = *(float *)(*(long *)(*(long *)
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  + 0xb8) + 0x50);
                            *(ulong *)(lVar7 + 0x20) =
                                 CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                            *(float *)(lVar7 + 0x28) = -fVar9;
                            if (uVar1 != 1) {
                              uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                              fVar9 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                              *(ulong *)(lVar7 + 0x2c) =
                                   CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                              *(float *)(lVar7 + 0x34) = -fVar9;
                              if (2 < uVar1) {
                                uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                                fVar9 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                                *(ulong *)(lVar7 + 0x38) =
                                     CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                                *(float *)(lVar7 + 0x40) = -fVar9;
                                puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
                                if (uVar1 != 3) {
                                  uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                                  fVar9 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                                  *(ulong *)(lVar7 + 0x44) =
                                       CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                                  *(float *)(lVar7 + 0x4c) = -fVar9;
                                  FUN_0266ba70(lVar4,lVar7,0);
                                  lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
                                  if (lVar7 == 0) goto LAB_00ed3650;
                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                  if ((uVar1 != 0) &&
                                     (*(undefined8 *)(lVar7 + 0x20) = 0, uVar1 != 1)) {
                                    *(undefined8 *)(lVar7 + 0x28) = DAT_028aa450;
                                    uVar6 = DAT_028aa458;
                                    if (2 < uVar1) {
                                      *(undefined8 *)(lVar7 + 0x30) = DAT_028aa458;
                                      puVar2 = 
                                      Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
                                      if (uVar1 != 3) {
                                        uVar8 = NEON_fmov(0x3f800000,4);
                                        *(undefined8 *)(lVar7 + 0x38) = uVar8;
                                        FUN_0266bbc8(lVar4,lVar7,0);
                                        *(undefined8 *)(param_1 + 0xc4) = uVar6;
                                        *(undefined4 *)(param_1 + 0xcc) = 0;
                                        FUN_00ed3654(param_1);
                                        if (*(char *)(param_1 + 0x45) == '\0') {
                                          if (*(char *)(param_1 + 0x58) == '\0') {
                                            uVar6 = 0;
                                          }
                                          else {
                                            uVar6 = 0x3f800000;
                                          }
                                          uVar6 = FUN_00ed37d8(uVar6,uVar6,0,0,param_1,0);
                                          FUN_0268ee74(param_1,uVar6,0);
                                        }
                                        else {
                                          FUN_00ed375c(*(undefined4 *)(param_1 + 0x18),
                                                       *(undefined4 *)(param_1 + 0x48),param_1,1,1);
                                        }
                                        uVar6 = *(undefined8 *)(param_1 + 0x98);
                                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                        if (lVar4 != 0) {
                                          FUN_016f27fc(lVar4,param_1,
                                                       *(undefined8 *)StringLiteral_3548,0);
                                          FUN_00fe0700(uVar6,lVar4,0);
                                          uVar6 = *(undefined8 *)(param_1 + 0x90);
                                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                          puVar2 = 
                                          System_Collections_Generic_List<VisualElement>_TypeInfo;
                                          if (lVar4 != 0) {
                                            FUN_016f27fc(lVar4,param_1,
                                                         *(undefined8 *)PTR_DAT_033f6960,0);
                                            FUN_00fe0700(uVar6,lVar4,0);
                                            uVar6 = *(undefined8 *)(param_1 + 0xa0);
                                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                            puVar3 = System_Text_EncodingProvider_TypeInfo;
                                            if (lVar4 != 0) {
                                              FUN_011c181c(lVar4,param_1,
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<Decimal>_TypeInfo
                                                  ,0);
                                              FUN_0132e0e8(uVar6,lVar4,*(undefined8 *)puVar3);
                                              uVar6 = *(undefined8 *)(param_1 + 0xa8);
                                              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                              puVar2 = 
                                              Method_System_IO_Stream_<>c_<BeginEndWriteAsync>b__58_0__
                                              ;
                                              if (lVar4 != 0) {
                                                FUN_011c181c(lVar4,param_1,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_get_Current__
                                                  ,0);
                                                FUN_0132e0e8(uVar6,lVar4,*(undefined8 *)puVar3);
                                                uVar6 = *(undefined8 *)(param_1 + 0xb0);
                                                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                puVar3 = 
                                                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
                                                ;
                                                puVar2 = 
                                                OVRInput_OVRControllerBase_VirtualAxis2DMap_TypeInfo
                                                ;
                                                if (lVar4 != 0) {
                                                  FUN_011c181c(lVar4,param_1,
                                                               *(undefined8 *)StringLiteral_11095,0)
                                                  ;
                                                  FUN_0132e0e8(uVar6,lVar4,*(undefined8 *)puVar2);
                                                  uVar6 = *(undefined8 *)(param_1 + 0xb8);
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  puVar2 = UnityEngine_ProBuilder_HSVColor_TypeInfo;
                                                  if (lVar4 != 0) {
                                                    FUN_011c21b8(lVar4,param_1,
                                                                 *(undefined8 *)System_DBNull_var,0)
                                                    ;
                                                    FUN_0132e644(uVar6,lVar4,*(undefined8 *)puVar2);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_00ed3650;
                                      }
                                    }
                                  }
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
            }
          }
        }
      }
    }
  }
LAB_00ed3650:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



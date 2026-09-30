/*
FUNCTION_NAME: FUN_01e6fe58
ENTRY_POINT: 01e6fe58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01e6fe58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_033ecc18;
                    /* try { // try from 01e6fe78 to 01f6fe7f has its CatchHandler @ 01e7428c */
  if ((DAT_0377fdb1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_6159);
                    /* try { // try from 01e6fe98 to 01f6fe9b has its CatchHandler @ 01e74064 */
    thunk_FUN_00d48444(PTR_DAT_033ecc18);
                    /* try { // try from 01e6fe9c to 01f6fea7 has its CatchHandler @ 01e74204 */
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__);
                    /* try { // try from 01e6feb8 to 01f6febb has its CatchHandler @ 01e7438c */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
                    /* try { // try from 01e6fec0 to 01f6fec7 has its CatchHandler @ 01e742e8 */
    thunk_FUN_00d48444(PTR_DAT_033f4638);
    thunk_FUN_00d48444(StringLiteral_12694);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(Method_System_Net_TimerThread_CreateQueue__);
    thunk_FUN_00d48444(Method_System_IO_StreamWriter_Write__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Color>_get_Count__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_BinaryDataReader_ReadInt32__);
    thunk_FUN_00d48444(StringLiteral_6145);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__);
    thunk_FUN_00d48444(StringLiteral_7552);
    thunk_FUN_00d48444(StringLiteral_1962);
    thunk_FUN_00d48444(Method_Mono_Security_X509_PKCS12_AddPrivateKey__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RadioButton>_get_Item__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
    DAT_0377fdb1 = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    return **(long **)(*(long *)puVar1 + 0xb8);
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Net_TimerThread_CreateQueue__);
  puVar1 = Method_System_Collections_Generic_List<Color>_get_Count__;
  if (lVar7 != 0) {
    FUN_01eb7964(lVar7,0);
    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)puVar1;
    lVar8 = FUN_01eb8364(lVar7,0);
    puVar5 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    if (lVar8 != 0) {
      FUN_01f7a47c(lVar8,*(undefined8 *)StringLiteral_1962,*(undefined8 *)puVar1,0);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      puVar6 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
      puVar4 = Method_Unity_Collections_NativeArray<byte>_get_IsCreated__;
      if (lVar8 != 0) {
        FUN_01eba3b4(lVar8,0);
        *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)puVar4;
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        puVar4 = Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo;
        if (lVar9 != 0) {
          FUN_01f75d58(lVar9,*(undefined8 *)
                              Method_System_Collections_Generic_List<RadioButton>_get_Item__,
                       *(undefined8 *)
                        Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo,0);
          FUN_01eba1d4(lVar8,lVar9,0);
          if (*(long *)(lVar7 + 0x60) != 0) {
            FUN_01eb9088(*(long *)(lVar7 + 0x60),lVar8,0);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            puVar2 = Method_Sirenix_Serialization_BinaryDataReader_ReadInt32__;
            if (lVar8 != 0) {
              FUN_01eba3b4(lVar8,0);
              *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)puVar2;
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
              if (lVar9 != 0) {
                FUN_01f75d58(lVar9,*(undefined8 *)Method_Mono_Security_X509_PKCS12_AddPrivateKey__,
                             *(undefined8 *)puVar4,0);
                FUN_01eba1d4(lVar8,lVar9,0);
                if (*(long *)(lVar7 + 0x60) != 0) {
                  FUN_01eb9088(*(long *)(lVar7 + 0x60),lVar8,0);
                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                  puVar3 = System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo;
                  puVar2 = PTR_DAT_033f19d8;
                  if (lVar8 != 0) {
                    FUN_01eba3b4(lVar8,0);
                    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)puVar3;
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    puVar2 = StringLiteral_12694;
                    if (lVar9 != 0) {
                      thunk_FUN_01ecaa78(lVar9,0);
                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if (lVar10 != 0) {
                        FUN_01ecaf38(lVar10,0);
                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                        puVar2 = PTR_DAT_033f4638;
                        if (lVar11 != 0) {
                          FUN_01f75d58(lVar11,*(undefined8 *)StringLiteral_6145,
                                       *(undefined8 *)puVar4,0);
                          FUN_01ecadd8(lVar10,lVar11,0);
                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar4 = Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__;
                          if (lVar11 != 0) {
                            FUN_01ebee64(lVar11,0);
                            *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)puVar4;
                            if (*(long *)(lVar10 + 0x60) != 0) {
                              FUN_01eb9088(*(long *)(lVar10 + 0x60),lVar11,0);
                              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                              puVar4 = StringLiteral_7552;
                              if (lVar11 != 0) {
                                FUN_01ebee64(lVar11,0);
                                *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)puVar4;
                                if (*(long *)(lVar10 + 0x60) != 0) {
                                  FUN_01eb9088(*(long *)(lVar10 + 0x60),lVar11,0);
                                  *(long *)(lVar9 + 0x98) = lVar10;
                                  *(long *)(lVar8 + 0x88) = lVar9;
                                  *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)puVar4;
                                  puVar4 = 
                                  Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__
                                  ;
                                  if (*(long *)(lVar7 + 0x60) != 0) {
                                    FUN_01eb9088(*(long *)(lVar7 + 0x60),lVar8,0);
                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                    puVar4 = Method_System_IO_StreamWriter_Write__;
                                    if (lVar8 != 0) {
                                      FUN_01eba98c(lVar8,0);
                                      *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)puVar4;
                                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                      if (lVar9 != 0) {
                                        FUN_01eba3b4(lVar9,0);
                                        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                        if (lVar10 != 0) {
                                          FUN_01f75d58(lVar10,*(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Collections_NativeArray<byte>_get_IsCreated__
                                                  ,*(undefined8 *)puVar1,0);
                                          FUN_01eba134(lVar9,lVar10,0);
                                          if (*(long *)(lVar8 + 0x58) != 0) {
                                            FUN_01eb9088(*(long *)(lVar8 + 0x58),lVar9,0);
                                            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                            if (lVar9 != 0) {
                                              FUN_01eba3b4(lVar9,0);
                                              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                              if (lVar10 != 0) {
                                                FUN_01f75d58(lVar10,*(undefined8 *)puVar3,
                                                             *(undefined8 *)puVar1,0);
                                                FUN_01eba134(lVar9,lVar10,0);
                                                if (*(long *)(lVar8 + 0x58) != 0) {
                                                  FUN_01eb9088(*(long *)(lVar8 + 0x58),lVar9,0);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                                  if (lVar9 != 0) {
                                                    FUN_01eba3b4(lVar9,0);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar6);
                                                    if (lVar10 != 0) {
                                                      FUN_01f75d58(lVar10,*(undefined8 *)
                                                                                                                                                      
                                                  Method_Sirenix_Serialization_BinaryDataReader_ReadInt32__
                                                  ,*(undefined8 *)puVar1,0);
                                                  FUN_01eba134(lVar9,lVar10,0);
                                                  if (*(long *)(lVar8 + 0x58) != 0) {
                                                    FUN_01eb9088(*(long *)(lVar8 + 0x58),lVar9,0);
                                                    puVar5 = StringLiteral_6159;
                                                    puVar1 = PTR_DAT_033ecc18;
                                                    if (*(long *)(lVar7 + 0x60) != 0) {
                                                      FUN_01eb9088(*(long *)(lVar7 + 0x60),lVar8,0);
                                                      *(undefined1 *)(lVar7 + 0x7a) = 1;
                                                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar5);
                                                      if (lVar8 != 0) {
                                                        FUN_01f5d4d8(lVar8,0);
                                                        FUN_01eb7e7c(lVar7,lVar8,0,0,0);
                                                        FUN_00d744e8(*(undefined8 *)
                                                                      (*(long *)puVar1 + 0xb8),lVar7
                                                                     ,0);
                                                        return **(long **)(*(long *)puVar1 + 0xb8);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_00da518c();
}



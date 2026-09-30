/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_ShutdownInsightPassthrough
ENTRY_POINT: 036a20a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_ShutdownInsightPassthrough(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long unaff_x22;
  long *plVar11;
  long unaff_x24;
  undefined8 *puVar12;
  long unaff_x25;
  
  puVar3 = 
  Method_System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo__
  ;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_s32__;
  puVar1 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  puVar12 = *(undefined8 **)(unaff_x24 + 0xa00);
  puVar10 = *(undefined8 **)(unaff_x19 + 0x368);
  plVar11 = *(long **)(unaff_x22 + 0xf10);
  if ((*(byte *)(unaff_x25 + 0xf77) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01efb3a4(Method_Outline_<>c_<SmoothNormals>b__30_0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseDownEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_38__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_s32__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_9__);
    thunk_FUN_01efb3a4(Method_Outline_<>c_<SmoothNormals>b__30_1__);
    thunk_FUN_01efb3a4(Method_Mono_Security_PKCS7_ContentInfo__ctor__);
    thunk_FUN_01efb3a4(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    thunk_FUN_01efb3a4(Method_Mono_Security_PKCS7_SignedData__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfInt16_Run__
                      );
    thunk_FUN_01efb3a4(Method_Mono_Security_PKCS7_SignerInfo__ctor__);
    thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_Decode__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo__
                      );
    thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_Decode__);
    thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeDSA__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<>c__DisplayClass71_0_<UpdateSortColumnDescriptionsOnClick>b__0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_0__);
    thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeRSA__);
    *(undefined1 *)(unaff_x25 + 0xf77) = 1;
  }
  uVar7 = FUN_01f08890(*puVar12,0x11);
  FUN_034a9d80(uVar7,*puVar10,0);
  **(undefined8 **)(*plVar11 + 0xb8) = uVar7;
  thunk_FUN_01f51358(*(undefined8 *)(*plVar11 + 0xb8),uVar7);
  lVar8 = FUN_01f08890(*(undefined8 *)puVar2,5);
  uVar7 = FUN_01f08890(*(undefined8 *)puVar1,4);
  FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
  puVar2 = Method_Mono_Security_PKCS7_SignedData__ctor__;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) = uVar7;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20),uVar7);
      uVar7 = FUN_01f08890(*(undefined8 *)puVar1,3);
      FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
      puVar2 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_Decode__;
      if (1 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x28) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar7);
        uVar7 = FUN_01f08890(*(undefined8 *)puVar1,3);
        FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
        puVar2 = Method_Mono_Security_PKCS7_SignerInfo__ctor__;
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x30) = uVar7;
          thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30),uVar7);
          uVar7 = FUN_01f08890(*(undefined8 *)puVar1,3);
          FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
          puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if (3 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x38) = uVar7;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar7);
            uVar7 = FUN_01f08890(*(undefined8 *)puVar1,4);
            FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
            puVar3 = Method_Mono_Security_PKCS7_ContentInfo__ctor__;
            puVar2 = Method_UnityEngine_UIElements_MouseDownEvent_<>c_<_cctor>b__0_0__;
            if (4 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x40) = uVar7;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x40),uVar7);
              plVar9 = (long *)(*(long *)(*plVar11 + 0xb8) + 8);
              *plVar9 = lVar8;
              thunk_FUN_01f51358(plVar9,lVar8);
              lVar8 = FUN_01f08890(*(undefined8 *)puVar2,5);
              uVar7 = FUN_01f08890(*puVar12,4);
              FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
              puVar2 = 
              Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<>c__DisplayClass71_0_<UpdateSortColumnDescriptionsOnClick>b__0__
              ;
              if (lVar8 == 0) goto LAB_036a25d0;
              if (*(int *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(lVar8 + 0x20) = uVar7;
                thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20),uVar7);
                uVar7 = FUN_01f08890(*puVar12,3);
                FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
                puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_0__;
                if (1 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x28) = uVar7;
                  thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar7);
                  uVar7 = FUN_01f08890(*puVar12,3);
                  FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
                  puVar2 = 
                  Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfInt16_Run__;
                  if (2 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined8 *)(lVar8 + 0x30) = uVar7;
                    thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30),uVar7);
                    uVar7 = FUN_01f08890(*puVar12,3);
                    FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
                    puVar2 = 
                    Method_Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_Decode__;
                    if (3 < *(uint *)(lVar8 + 0x18)) {
                      *(undefined8 *)(lVar8 + 0x38) = uVar7;
                      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar7);
                      uVar7 = FUN_01f08890(*puVar12,4);
                      FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
                      puVar6 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeRSA__;
                      puVar5 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeDSA__;
                      puVar4 = Method_Outline_<>c_<SmoothNormals>b__30_1__;
                      puVar3 = Method_Outline_<>c_<SmoothNormals>b__30_0__;
                      puVar2 = 
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
                      if (4 < *(uint *)(lVar8 + 0x18)) {
                        *(undefined8 *)(lVar8 + 0x40) = uVar7;
                        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x40),uVar7);
                        plVar9 = (long *)(*(long *)(*plVar11 + 0xb8) + 0x10);
                        *plVar9 = lVar8;
                        thunk_FUN_01f51358(plVar9,lVar8);
                        uVar7 = FUN_01f08890(*(undefined8 *)puVar2,0x11);
                        FUN_034a9d80(uVar7,*(undefined8 *)puVar5,0);
                        puVar10 = (undefined8 *)(*(long *)(*plVar11 + 0xb8) + 0x18);
                        *puVar10 = uVar7;
                        thunk_FUN_01f51358(puVar10,uVar7);
                        uVar7 = FUN_01f08890(*(undefined8 *)puVar3,0x18);
                        FUN_034a9d80(uVar7,*(undefined8 *)puVar6,0);
                        puVar10 = (undefined8 *)(*(long *)(*plVar11 + 0xb8) + 0x20);
                        *puVar10 = uVar7;
                        thunk_FUN_01f51358(puVar10,uVar7);
                        uVar7 = FUN_01f08890(*(undefined8 *)puVar1,0x18);
                        FUN_034a9d80(uVar7,*(undefined8 *)puVar4,0);
                        puVar10 = (undefined8 *)(*(long *)(*plVar11 + 0xb8) + 0x28);
                        *puVar10 = uVar7;
                        thunk_FUN_01f51358(puVar10,uVar7);
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
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_036a25d0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



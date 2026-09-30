/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_CreateInsightTriangleMesh
ENTRY_POINT: 036a220c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_CreateInsightTriangleMesh(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  thunk_FUN_01f51358();
  lVar6 = FUN_01f08890(*unaff_x21,5);
  uVar7 = FUN_01f08890(*unaff_x23,4);
  FUN_034a9d80(uVar7,*unaff_x20,0);
  puVar1 = Method_Mono_Security_PKCS7_SignedData__ctor__;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x20),uVar7);
      uVar7 = FUN_01f08890(*unaff_x23,3);
      FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
      puVar1 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_Decode__;
      if (1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28),uVar7);
        uVar7 = FUN_01f08890(*unaff_x23,3);
        FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
        puVar1 = Method_Mono_Security_PKCS7_SignerInfo__ctor__;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = uVar7;
          thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x30),uVar7);
          uVar7 = FUN_01f08890(*unaff_x23,3);
          FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
          puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if (3 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x38) = uVar7;
            thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x38),uVar7);
            uVar7 = FUN_01f08890(*unaff_x23,4);
            FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
            puVar2 = Method_Mono_Security_PKCS7_ContentInfo__ctor__;
            puVar1 = Method_UnityEngine_UIElements_MouseDownEvent_<>c_<_cctor>b__0_0__;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = uVar7;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x40),uVar7);
              plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
              *plVar8 = lVar6;
              thunk_FUN_01f51358(plVar8,lVar6);
              lVar6 = FUN_01f08890(*(undefined8 *)puVar1,5);
              uVar7 = FUN_01f08890(*unaff_x24,4);
              FUN_034a9d80(uVar7,*(undefined8 *)puVar2,0);
              puVar1 = 
              Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<>c__DisplayClass71_0_<UpdateSortColumnDescriptionsOnClick>b__0__
              ;
              if (lVar6 == 0) goto LAB_036a25d0;
              if (*(int *)(lVar6 + 0x18) != 0) {
                *(undefined8 *)(lVar6 + 0x20) = uVar7;
                thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x20),uVar7);
                uVar7 = FUN_01f08890(*unaff_x24,3);
                FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
                puVar1 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_0__;
                if (1 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x28) = uVar7;
                  thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28),uVar7);
                  uVar7 = FUN_01f08890(*unaff_x24,3);
                  FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
                  puVar1 = 
                  Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfInt16_Run__;
                  if (2 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x30) = uVar7;
                    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x30),uVar7);
                    uVar7 = FUN_01f08890(*unaff_x24,3);
                    FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
                    puVar1 = 
                    Method_Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_Decode__;
                    if (3 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x38) = uVar7;
                      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x38),uVar7);
                      uVar7 = FUN_01f08890(*unaff_x24,4);
                      FUN_034a9d80(uVar7,*(undefined8 *)puVar1,0);
                      puVar5 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeRSA__;
                      puVar4 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeDSA__;
                      puVar3 = Method_Outline_<>c_<SmoothNormals>b__30_1__;
                      puVar2 = Method_Outline_<>c_<SmoothNormals>b__30_0__;
                      puVar1 = 
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
                      if (4 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x40) = uVar7;
                        thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x40),uVar7);
                        plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                        *plVar8 = lVar6;
                        thunk_FUN_01f51358(plVar8,lVar6);
                        uVar7 = FUN_01f08890(*(undefined8 *)puVar1,0x11);
                        FUN_034a9d80(uVar7,*(undefined8 *)puVar4,0);
                        puVar9 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                        *puVar9 = uVar7;
                        thunk_FUN_01f51358(puVar9,uVar7);
                        uVar7 = FUN_01f08890(*(undefined8 *)puVar2,0x18);
                        FUN_034a9d80(uVar7,*(undefined8 *)puVar5,0);
                        puVar9 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                        *puVar9 = uVar7;
                        thunk_FUN_01f51358(puVar9,uVar7);
                        uVar7 = FUN_01f08890(*unaff_x23,0x18);
                        FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
                        puVar9 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
                        *puVar9 = uVar7;
                        thunk_FUN_01f51358(puVar9,uVar7);
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



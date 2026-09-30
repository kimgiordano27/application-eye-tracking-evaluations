/*
FUNCTION_NAME: FUN_0647e368
ENTRY_POINT: 0647e368
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


void FUN_0647e368(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long local_48;
  
  puVar5 = System_Security_Cryptography_X509Certificates_X509CertificateCollection_TypeInfo;
  puVar4 = System_Runtime_Remoting_WellKnownClientTypeEntry_TypeInfo;
  if ((bRam0000000006e9c6f5 & 1) == 0) {
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_000011CB_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(Mono_Security_X509_X509CertificateCollection_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a706f0);
    FUN_02e3ca1c(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_X509CertificateStructure_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a706f8);
    FUN_02e3ca1c(Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<uint,_uint,_UintOptions>__ctor__);
    FUN_02e3ca1c(Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<ulong,_ulong,_NoOptions>__ctor__);
    FUN_02e3ca1c(
                Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_CircleOptions>__ctor__
                );
    FUN_02e3ca1c(System_Security_Cryptography_X509Certificates_X509CertificateCollection_TypeInfo);
    FUN_02e3ca1c(System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo
                );
    FUN_02e3ca1c(System_Runtime_Remoting_WellKnownClientTypeEntry_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a6e4d8);
    FUN_02e3ca1c(PTR_DAT_06a6cc40);
    FUN_02e3ca1c(
                Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
                );
    bRam0000000006e9c6f5 = 1;
  }
  puVar2 = PTR_DAT_06a6cc40;
  local_48 = 0;
  lVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar4);
  FUN_064b4480(lVar7,0);
  plVar1 = param_1 + 0x97;
  param_1[0x97] = lVar7;
  thunk_FUN_02ee2be8(plVar1,lVar7);
  FUN_0636e0c8(param_1,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar7 = *(long *)puVar5;
  }
  FUN_063b5a40(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x1c8),0);
  FUN_064e4840(param_1,1,0);
  (**(code **)(*param_1 + 0x248))(param_1,1,*(undefined8 *)(*param_1 + 0x250));
  uVar8 = *(undefined8 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x2a) = 0;
  lVar7 = thunk_FUN_02e78ab8(uVar8);
  FUN_063b3a18(lVar7,0);
  puVar6 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_CircleOptions>__ctor__;
  puVar3 = System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo;
  puVar2 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_X509CertificateStructure_TypeInfo;
  if (lVar7 != 0) {
    FUN_063b36a4(lVar7,*(undefined8 *)
                        Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
                 ,0);
    param_1[0x98] = lVar7;
    thunk_FUN_02ee2be8(param_1 + 0x98,lVar7);
    lVar7 = param_1[0x97];
    uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
    FUN_05207864(uVar8,param_1,*(undefined8 *)puVar6,0);
    FUN_0392ea34(lVar7,uVar8,*(undefined8 *)puVar3);
    if (param_1[0x97] != 0) {
      FUN_063b5a40(param_1[0x97],*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1d0),0);
      puVar2 = Mono_Security_X509_X509CertificateCollection_TypeInfo;
      if (*plVar1 != 0) {
        lVar7 = FUN_04ae3228(*plVar1,*(undefined8 *)
                                      Mono_Security_X509_X509CertificateCollection_TypeInfo);
        if (lVar7 != 0) {
          FUN_063b5a40(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1e0),0);
          puVar3 = PTR_DAT_06a6e4d8;
          if (*plVar1 != 0) {
            uVar8 = FUN_04ae3228(*plVar1,*(undefined8 *)puVar2);
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar7);
              lVar7 = *(long *)puVar4;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            lVar7 = FUN_063f76e4(uVar8,0,uVar10,0);
            puVar3 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<uint,_uint,_UintOptions>__ctor__
            ;
            puVar2 = 
            UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo;
            puVar4 = 
            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_000011CB_PostfixBurstDelegate_TypeInfo
            ;
            if (lVar7 != 0) {
              FUN_063b5a40(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1e8),0);
              lVar9 = param_1[0x97];
              uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)puVar4);
              FUN_04e0aa7c(uVar8,param_1,*(undefined8 *)puVar3,0);
              lVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
              FUN_064f2254(lVar7,uVar8,0);
              param_1[0x9a] = lVar7;
              thunk_FUN_02ee2be8(param_1 + 0x9a,lVar7);
              FUN_0640727c(lVar9,lVar7,0);
              local_48 = param_1[0x88];
              FUN_063bed9c(&local_48,param_1[0x97],0);
              puVar3 = 
              Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<ulong,_ulong,_NoOptions>__ctor__;
              puVar2 = PTR_DAT_06a706f8;
              puVar4 = PTR_DAT_06a706f0;
              if (param_1[0x98] != 0) {
                FUN_063b5a40(param_1[0x98],
                             *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1d8),0);
                local_48 = param_1[0x88];
                FUN_063bed9c(&local_48,param_1[0x98],0);
                uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                FUN_05207864(uVar8,param_1,*(undefined8 *)puVar3,0);
                FUN_038a47c4(param_1,uVar8,0,*(undefined8 *)puVar4);
                FUN_0647e0b8(param_1,1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}



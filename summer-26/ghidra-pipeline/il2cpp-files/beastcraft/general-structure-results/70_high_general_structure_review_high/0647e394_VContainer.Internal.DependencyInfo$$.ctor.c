/*
FUNCTION_NAME: VContainer.Internal.DependencyInfo$$.ctor
ENTRY_POINT: 0647e394
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


void VContainer_Internal_DependencyInfo___ctor(ulong param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long *unaff_x24;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x20 + 0x6f5) = 1;
  }
  puVar2 = PTR_DAT_06a6cc40;
  in_stack_00000008 = 0;
  lVar5 = thunk_FUN_02e78ab8(*unaff_x24);
  FUN_064b4480(lVar5,0);
  plVar1 = param_2 + 0x97;
  param_2[0x97] = lVar5;
  thunk_FUN_02ee2be8(plVar1,lVar5);
  FUN_0636e0c8(param_2,0);
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar5 = *unaff_x23;
  }
  FUN_063b5a40(param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x1c8),0);
  FUN_064e4840(param_2,1,0);
  (**(code **)(*param_2 + 0x248))(param_2,1,*(undefined8 *)(*param_2 + 0x250));
  uVar6 = *(undefined8 *)puVar2;
  *(undefined1 *)((long)param_2 + 0x2a) = 0;
  lVar5 = thunk_FUN_02e78ab8(uVar6);
  FUN_063b3a18(lVar5,0);
  puVar4 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_CircleOptions>__ctor__;
  puVar3 = System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo;
  puVar2 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_X509CertificateStructure_TypeInfo;
  if (lVar5 != 0) {
    FUN_063b36a4(lVar5,*(undefined8 *)
                        Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
                 ,0);
    param_2[0x98] = lVar5;
    thunk_FUN_02ee2be8(param_2 + 0x98,lVar5);
    lVar5 = param_2[0x97];
    uVar6 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
    FUN_05207864(uVar6,param_2,*(undefined8 *)puVar4,0);
    FUN_0392ea34(lVar5,uVar6,*(undefined8 *)puVar3);
    if (param_2[0x97] != 0) {
      FUN_063b5a40(param_2[0x97],*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1d0),0);
      puVar2 = Mono_Security_X509_X509CertificateCollection_TypeInfo;
      if (*plVar1 != 0) {
        lVar5 = FUN_04ae3228(*plVar1,*(undefined8 *)
                                      Mono_Security_X509_X509CertificateCollection_TypeInfo);
        if (lVar5 != 0) {
          FUN_063b5a40(lVar5,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1e0),0);
          puVar3 = PTR_DAT_06a6e4d8;
          if (*plVar1 != 0) {
            uVar6 = FUN_04ae3228(*plVar1,*(undefined8 *)puVar2);
            lVar5 = *unaff_x24;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar5);
              lVar5 = *unaff_x24;
            }
            uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            lVar5 = FUN_063f76e4(uVar6,0,uVar8,0);
            puVar4 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<uint,_uint,_UintOptions>__ctor__
            ;
            puVar3 = 
            UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo;
            puVar2 = 
            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_000011CB_PostfixBurstDelegate_TypeInfo
            ;
            if (lVar5 != 0) {
              FUN_063b5a40(lVar5,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1e8),0);
              lVar7 = param_2[0x97];
              uVar6 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
              FUN_04e0aa7c(uVar6,param_2,*(undefined8 *)puVar4,0);
              lVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
              FUN_064f2254(lVar5,uVar6,0);
              param_2[0x9a] = lVar5;
              thunk_FUN_02ee2be8(param_2 + 0x9a,lVar5);
              FUN_0640727c(lVar7,lVar5,0);
              in_stack_00000008 = param_2[0x88];
              FUN_063bed9c(&stack0x00000008,param_2[0x97],0);
              puVar4 = 
              Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<ulong,_ulong,_NoOptions>__ctor__;
              puVar3 = PTR_DAT_06a706f8;
              puVar2 = PTR_DAT_06a706f0;
              if (param_2[0x98] != 0) {
                FUN_063b5a40(param_2[0x98],*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1d8),0);
                in_stack_00000008 = param_2[0x88];
                FUN_063bed9c(&stack0x00000008,param_2[0x98],0);
                uVar6 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
                FUN_05207864(uVar6,param_2,*(undefined8 *)puVar4,0);
                FUN_038a47c4(param_2,uVar6,0,*(undefined8 *)puVar2);
                FUN_0647e0b8(param_2,1);
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



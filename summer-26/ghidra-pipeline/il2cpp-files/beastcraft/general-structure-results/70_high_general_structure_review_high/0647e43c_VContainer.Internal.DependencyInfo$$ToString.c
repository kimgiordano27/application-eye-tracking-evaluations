/*
FUNCTION_NAME: VContainer.Internal.DependencyInfo$$ToString
ENTRY_POINT: 0647e43c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void VContainer_Internal_DependencyInfo__ToString(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long *unaff_x24;
  long in_stack_00000008;
  
  FUN_02e3ca1c(*(undefined8 *)(param_1 + 0xc40));
  FUN_02e3ca1c(
              Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
              );
  *(undefined1 *)(unaff_x20 + 0x6f5) = 1;
  puVar2 = PTR_DAT_06a6cc40;
  in_stack_00000008 = 0;
  lVar4 = thunk_FUN_02e78ab8(*unaff_x24);
  FUN_064b4480(lVar4,0);
  plVar1 = unaff_x19 + 0x97;
  unaff_x19[0x97] = lVar4;
  thunk_FUN_02ee2be8(plVar1,lVar4);
  FUN_0636e0c8();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_063b5a40();
  FUN_064e4840();
  (**(code **)(*unaff_x19 + 0x248))();
  uVar5 = *(undefined8 *)puVar2;
  *(undefined1 *)((long)unaff_x19 + 0x2a) = 0;
  lVar4 = thunk_FUN_02e78ab8(uVar5);
  FUN_063b3a18(lVar4,0);
  puVar3 = System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo;
  puVar2 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_X509CertificateStructure_TypeInfo;
  if (lVar4 != 0) {
    FUN_063b36a4(lVar4,*(undefined8 *)
                        Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
                 ,0);
    unaff_x19[0x98] = lVar4;
    thunk_FUN_02ee2be8(unaff_x19 + 0x98,lVar4);
    lVar4 = unaff_x19[0x97];
    uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
    FUN_05207864();
    FUN_0392ea34(lVar4,uVar5,*(undefined8 *)puVar3);
    if (unaff_x19[0x97] != 0) {
      FUN_063b5a40(unaff_x19[0x97],*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1d0),0);
      puVar2 = Mono_Security_X509_X509CertificateCollection_TypeInfo;
      if (*plVar1 != 0) {
        lVar4 = FUN_04ae3228(*plVar1,*(undefined8 *)
                                      Mono_Security_X509_X509CertificateCollection_TypeInfo);
        if (lVar4 != 0) {
          FUN_063b5a40(lVar4,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1e0),0);
          puVar3 = PTR_DAT_06a6e4d8;
          if (*plVar1 != 0) {
            uVar5 = FUN_04ae3228(*plVar1,*(undefined8 *)puVar2);
            lVar4 = *unaff_x24;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar4);
              lVar4 = *unaff_x24;
            }
            uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            lVar4 = FUN_063f76e4(uVar5,0,uVar7,0);
            puVar3 = 
            UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo;
            puVar2 = 
            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_000011CB_PostfixBurstDelegate_TypeInfo
            ;
            if (lVar4 != 0) {
              FUN_063b5a40(lVar4,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1e8),0);
              lVar6 = unaff_x19[0x97];
              uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
              FUN_04e0aa7c();
              lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
              FUN_064f2254(lVar4,uVar5,0);
              unaff_x19[0x9a] = lVar4;
              thunk_FUN_02ee2be8(unaff_x19 + 0x9a,lVar4);
              FUN_0640727c(lVar6,lVar4,0);
              in_stack_00000008 = unaff_x19[0x88];
              FUN_063bed9c(&stack0x00000008,unaff_x19[0x97],0);
              puVar2 = PTR_DAT_06a706f8;
              if (unaff_x19[0x98] != 0) {
                FUN_063b5a40(unaff_x19[0x98],*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1d8),0
                            );
                in_stack_00000008 = unaff_x19[0x88];
                FUN_063bed9c(&stack0x00000008,unaff_x19[0x98],0);
                thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                FUN_05207864();
                FUN_038a47c4();
                FUN_0647e0b8();
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



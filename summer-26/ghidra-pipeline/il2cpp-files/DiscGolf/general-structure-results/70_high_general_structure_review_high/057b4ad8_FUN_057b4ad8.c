/*
FUNCTION_NAME: FUN_057b4ad8
ENTRY_POINT: 057b4ad8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void FUN_057b4ad8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_069fb9d8;
  if ((DAT_06dc0290 & 1) == 0) {
    FUN_02d965b8(Microsoft_CSharp_RuntimeBinder_ICSharpInvokeOrInvokeMemberBinder_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Contexts_IContributeObjectSink_TypeInfo);
    FUN_02d965b8(System_Func<JSONNode>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo);
    FUN_02d965b8(System_AssemblyLoadEventArgs_TypeInfo);
    FUN_02d965b8(System_Reflection_AssemblyName_TypeInfo);
    FUN_02d965b8(UnityEngine_AssemblyFullName_TypeInfo);
    FUN_02d965b8(System_Reflection_AssemblyNameFlags_TypeInfo);
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo);
    FUN_02d965b8(UnityEngine_AssemblyVersion_TypeInfo);
    FUN_02d965b8(System_Configuration_Assemblies_AssemblyVersionCompatibility_TypeInfo);
    FUN_02d965b8(UnityEngine_Assertions_Assert_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo);
    FUN_02d965b8(UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AssetDetails_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AssetDetailsList_TypeInfo);
    FUN_02d965b8(UnityEditor_Analytics_AssetExportAnalytic_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a07d50);
    FUN_02d965b8(Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo);
    DAT_06dc0290 = 1;
  }
  lVar4 = FUN_02d966a4(*(undefined8 *)puVar1,0x11);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)UnityEngine_AssemblyFullName_TypeInfo;
      LeanTween__value((undefined8 *)(lVar4 + 0x20));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) =
             *(undefined8 *)Oculus_Platform_Models_AssetDetailsList_TypeInfo;
        LeanTween__value((undefined8 *)(lVar4 + 0x28));
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)System_Reflection_AssemblyName_TypeInfo;
          LeanTween__value((undefined8 *)(lVar4 + 0x30));
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) =
                 *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo;
            LeanTween__value((undefined8 *)(lVar4 + 0x38));
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_06a07d50;
              LeanTween__value((undefined8 *)(lVar4 + 0x40));
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x48) =
                     *(undefined8 *)System_Reflection_AssemblyNameFlags_TypeInfo;
                LeanTween__value((undefined8 *)(lVar4 + 0x48));
                if (6 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x50) =
                       *(undefined8 *)Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo;
                  LeanTween__value((undefined8 *)(lVar4 + 0x50));
                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar4 + 0x58) =
                         *(undefined8 *)Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo;
                    LeanTween__value((undefined8 *)(lVar4 + 0x58));
                    if (8 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x60) =
                           *(undefined8 *)UnityEngine_AssemblyVersion_TypeInfo;
                      LeanTween__value((undefined8 *)(lVar4 + 0x60));
                      if (9 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x68) =
                             *(undefined8 *)
                              Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo;
                        LeanTween__value((undefined8 *)(lVar4 + 0x68));
                        if (10 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x70) =
                               *(undefined8 *)
                                UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo;
                          LeanTween__value((undefined8 *)(lVar4 + 0x70));
                          if (0xb < *(uint *)(lVar4 + 0x18)) {
                            *(undefined8 *)(lVar4 + 0x78) =
                                 *(undefined8 *)UnityEngine_Assertions_Assert_TypeInfo;
                            LeanTween__value((undefined8 *)(lVar4 + 0x78));
                            if (0xc < *(uint *)(lVar4 + 0x18)) {
                              *(undefined8 *)(lVar4 + 0x80) =
                                   *(undefined8 *)UnityEditor_Analytics_AssetExportAnalytic_TypeInfo
                              ;
                              LeanTween__value((undefined8 *)(lVar4 + 0x80));
                              if (0xd < *(uint *)(lVar4 + 0x18)) {
                                *(undefined8 *)(lVar4 + 0x88) =
                                     *(undefined8 *)
                                      System_Configuration_Assemblies_AssemblyVersionCompatibility_TypeInfo
                                ;
                                LeanTween__value((undefined8 *)(lVar4 + 0x88));
                                if (0xe < *(uint *)(lVar4 + 0x18)) {
                                  *(undefined8 *)(lVar4 + 0x90) =
                                       *(undefined8 *)
                                        System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo
                                  ;
                                  LeanTween__value((undefined8 *)(lVar4 + 0x90));
                                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar4 + 0x98) =
                                         *(undefined8 *)Oculus_Platform_Models_AssetDetails_TypeInfo
                                    ;
                                    LeanTween__value((undefined8 *)(lVar4 + 0x98));
                                    puVar1 = 
                                    Microsoft_CSharp_RuntimeBinder_ICSharpInvokeOrInvokeMemberBinder_TypeInfo
                                    ;
                                    if (0x10 < *(uint *)(lVar4 + 0x18)) {
                                      *(undefined8 *)(lVar4 + 0xa0) =
                                           *(undefined8 *)System_AssemblyLoadEventArgs_TypeInfo;
                                      LeanTween__value();
                                      **(long **)(*(long *)puVar1 + 0xb8) = lVar4;
                                      LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar4
                                                      );
                                      if (DAT_06dc035c == '\0') {
                                        FUN_02d965b8(
                                                  Microsoft_CSharp_RuntimeBinder_ICSharpInvokeOrInvokeMemberBinder_TypeInfo
                                                  );
                                        DAT_06dc035c = '\x01';
                                      }
                                      puVar3 = 
                                      System_Runtime_Remoting_Contexts_IContributeObjectSink_TypeInfo
                                      ;
                                      puVar2 = System_Func<JSONNode>_TypeInfo;
                                      lVar4 = *(long *)puVar1;
                                      if (*(int *)(lVar4 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                        lVar4 = *(long *)puVar1;
                                      }
                                      uVar7 = **(undefined8 **)(lVar4 + 0xb8);
                                      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                      FUN_03c22b08(uVar5,uVar7,*(undefined8 *)puVar3);
                                      puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8)
                                      ;
                                      *puVar6 = uVar5;
                                      LeanTween__value(puVar6,uVar5);
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
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



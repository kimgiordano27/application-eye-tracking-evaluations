/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetProjectionRaw$$Invoke
ENTRY_POINT: 0570a088
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 OVR_OpenVR_IVRSystem__GetProjectionRaw__Invoke(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x21;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  plVar3 = *(long **)(unaff_x21 + 0x220);
  uStack0000000000000000 = param_1;
  uStack0000000000000008 = param_2;
  if ((*(byte *)(unaff_x22 + 0xc3f) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(PTR_DAT_06a18d78);
    FUN_02d965b8(PTR_DAT_06a212c8);
    FUN_02d965b8(System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo);
    FUN_02d965b8(System_AssemblyLoadEventArgs_TypeInfo);
    FUN_02d965b8(System_Reflection_AssemblyName_TypeInfo);
    FUN_02d965b8(UnityEngine_AssemblyFullName_TypeInfo);
    FUN_02d965b8(System_Reflection_AssemblyNameFlags_TypeInfo);
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo);
    FUN_02d965b8(UnityEngine_AssemblyVersion_TypeInfo);
    FUN_02d965b8(System_Configuration_Assemblies_AssemblyVersionCompatibility_TypeInfo);
    FUN_02d965b8(UnityEngine_Assertions_Assert_TypeInfo);
    FUN_02d965b8(UnityEngine_Assertions_AssertionException_TypeInfo);
    FUN_02d965b8(UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AssetDetails_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AssetDetailsList_TypeInfo);
    FUN_02d965b8(UnityEditor_Analytics_AssetExportAnalytic_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a07d50);
    FUN_02d965b8(Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xc3f) = 1;
  }
  lVar4 = *plVar3;
  if (DAT_06db5d1d == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f570);
    DAT_06db5d1d = '\x01';
  }
  if (lVar4 != 0) {
    FUN_0536a2b8(lVar4,0);
  }
  uVar1 = FUN_05373c3c(param_1);
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)Oculus_Platform_Models_AssetDetailsList_TypeInfo;
    if (DAT_06db5d1d == '\0') {
      FUN_02d965b8(PTR_DAT_06a0f570);
      DAT_06db5d1d = '\x01';
    }
    if (lVar4 != 0) {
      FUN_0536a2b8(lVar4,0);
    }
    uVar1 = FUN_05373c3c(param_1);
    if ((uVar1 & 1) == 0) {
      lVar4 = *(long *)System_Reflection_AssemblyName_TypeInfo;
      if (DAT_06db5d1d == '\0') {
        FUN_02d965b8(PTR_DAT_06a0f570);
        DAT_06db5d1d = '\x01';
      }
      if (lVar4 != 0) {
        FUN_0536a2b8(lVar4,0);
      }
      uVar1 = FUN_05373c3c(param_1);
      if ((uVar1 & 1) == 0) {
        lVar4 = *(long *)PTR_DAT_06a07d50;
        if (DAT_06db5d1d == '\0') {
          FUN_02d965b8(PTR_DAT_06a0f570);
          DAT_06db5d1d = '\x01';
        }
        if (lVar4 != 0) {
          FUN_0536a2b8(lVar4,0);
        }
        uVar1 = FUN_05373c3c(param_1);
        if ((uVar1 & 1) == 0) {
          lVar4 = *(long *)System_Reflection_AssemblyNameFlags_TypeInfo;
          if (DAT_06db5d1d == '\0') {
            FUN_02d965b8(PTR_DAT_06a0f570);
            DAT_06db5d1d = '\x01';
          }
          if (lVar4 != 0) {
            FUN_0536a2b8(lVar4,0);
          }
          uVar1 = FUN_05373c3c(param_1);
          if ((uVar1 & 1) == 0) {
            lVar4 = *(long *)Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo;
            if (DAT_06db5d1d == '\0') {
              FUN_02d965b8(PTR_DAT_06a0f570);
              DAT_06db5d1d = '\x01';
            }
            if (lVar4 != 0) {
              FUN_0536a2b8(lVar4,0);
            }
            uVar1 = FUN_05373c3c(param_1);
            if ((uVar1 & 1) == 0) {
              FUN_0547dbe4(*(undefined8 *)Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo,0)
              ;
              uVar1 = FUN_05373c3c(param_1);
              if ((uVar1 & 1) == 0) {
                FUN_0547dbe4(*(undefined8 *)UnityEngine_AssemblyVersion_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 8;
                }
                FUN_0547dbe4(*(undefined8 *)
                              Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 9;
                }
                FUN_0547dbe4(*(undefined8 *)
                              UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 10;
                }
                FUN_0547dbe4(*(undefined8 *)UnityEngine_Assertions_Assert_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 0xb;
                }
                FUN_0547dbe4(*(undefined8 *)UnityEditor_Analytics_AssetExportAnalytic_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 0xc;
                }
                FUN_0547dbe4(*(undefined8 *)
                              System_Configuration_Assemblies_AssemblyVersionCompatibility_TypeInfo,
                             0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 3;
                }
                FUN_0547dbe4(*(undefined8 *)
                              System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 0xd;
                }
                FUN_0547dbe4(*(undefined8 *)Oculus_Platform_Models_AssetDetails_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 0xf;
                }
                FUN_0547dbe4(*(undefined8 *)System_AssemblyLoadEventArgs_TypeInfo,0);
                uVar1 = FUN_05373c3c(param_1);
                if ((uVar1 & 1) != 0) {
                  return 0xe;
                }
                uVar2 = FUN_0468c148();
                uVar2 = FUN_05362cb4(*(undefined8 *)
                                      UnityEngine_Assertions_AssertionException_TypeInfo,uVar2,0);
                if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                }
                FUN_06309d28(uVar2,0);
              }
              uVar2 = 7;
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



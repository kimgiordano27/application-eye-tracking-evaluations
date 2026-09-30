/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 014b8460
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d48444(PTR_DAT_033f4e80);
  thunk_FUN_00d48444(StringLiteral_7182);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<MB2_TexturePacker_Image>_Add__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PlayerPlatform>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033ebec0);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshr_n_s8__);
  thunk_FUN_00d48444(Method_System_Security_Cryptography_TripleDES_set_Key__);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<ParametricDoor>_Add__);
  thunk_FUN_00d48444(StringLiteral_2822);
  thunk_FUN_00d48444(StringLiteral_13783);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_JSONNode>_Remove__);
  *(undefined1 *)(unaff_x21 + 0xd93) = 1;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
  ;
  in_stack_00000008 = 0;
  if (unaff_x19 == 0) goto LAB_014b87cc;
  iVar4 = FUN_0133ec5c();
  if (iVar4 == 1) {
    if ((*(byte *)(**(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar5 = (long *)thunk_FUN_00d32ed4();
    if (*plVar5 == 0) goto LAB_014b87cc;
    lVar7 = *(long *)(*plVar5 + 0x80);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4e80);
    if ((lVar6 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_014b87cc;
    FUN_013df7e0(lVar7,lVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<MB2_TexturePacker_Image>_Add__);
  }
  if ((*(byte *)(**(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  plVar5 = (long *)thunk_FUN_00d32ed4();
  puVar2 = 
  Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__;
  if (*plVar5 != 0) {
    lVar7 = *(long *)(*plVar5 + 0x28);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                              );
    if (lVar6 != 0) {
      FUN_013df2bc();
      puVar3 = StringLiteral_7182;
      if (lVar7 != 0) {
        FUN_013df7e0(lVar7,lVar6,*(undefined8 *)StringLiteral_7182);
        if ((*(byte *)(**(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar5 = (long *)thunk_FUN_00d32ed4();
        if (*plVar5 != 0) {
          lVar7 = *(long *)(*plVar5 + 0x30);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if ((lVar6 != 0) && (FUN_013df2bc(), lVar7 != 0)) {
            FUN_013df7e0(lVar7,lVar6,*(undefined8 *)puVar3);
            if ((*(byte *)(**(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x132) & 1) == 0)
            {
              FUN_00d5941c();
            }
            plVar5 = (long *)thunk_FUN_00d32ed4();
            if (*plVar5 != 0) {
              lVar7 = *(long *)(*plVar5 + 0x38);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if ((lVar6 != 0) && (FUN_013df2bc(), lVar7 != 0)) {
                FUN_013df7e0(lVar7,lVar6,*(undefined8 *)puVar3);
                if ((*(byte *)(**(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x132) & 1)
                    == 0) {
                  FUN_00d5941c();
                }
                plVar5 = (long *)thunk_FUN_00d32ed4();
                if (*plVar5 != 0) {
                  lVar7 = *(long *)(*plVar5 + 0x40);
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if ((lVar6 != 0) && (FUN_013df2bc(), lVar7 != 0)) {
                    FUN_013df7e0(lVar7,lVar6,*(undefined8 *)puVar3);
                    lVar7 = *(long *)(unaff_x20 + 0x88);
                    lVar6 = FUN_00bc379c();
                    if ((lVar6 != 0) && (lVar7 != 0)) {
                      FUN_0127246c(lVar7,*(undefined8 *)(lVar6 + 0x10),&stack0x00000008,
                                   *(undefined8 *)
                                    Method_UnityEngine_Object_Instantiate<OVRSceneAnchor>__);
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
LAB_014b87cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



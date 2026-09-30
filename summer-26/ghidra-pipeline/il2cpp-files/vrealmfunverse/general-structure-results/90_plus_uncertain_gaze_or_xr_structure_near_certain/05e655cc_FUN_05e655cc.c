/*
FUNCTION_NAME: FUN_05e655cc
ENTRY_POINT: 05e655cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_8;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05e655cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_138;
  undefined8 uStack_130;
  int local_128;
  int local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [160];
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if ((DAT_066dc662 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    FUN_02b3c81c(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                );
    FUN_02b3c81c(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                );
    DAT_066dc662 = 1;
  }
  memset(auStack_e0,0,0xa0);
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_05e6421c(param_3,auStack_e0);
  FUN_05f42da8(&local_138,auStack_e0,0);
  if ((local_128 != 0) && (local_124 != 0)) {
    uVar10 = FUN_04dc6850(local_138,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                        );
    }
    local_f0 = FUN_033c0138(uVar10,local_128,
                            *(undefined8 *)
                             Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                           );
    uVar10 = FUN_04dc6850(uStack_130,0);
    local_100 = FUN_033c00f4(uVar10,local_124,
                             *(undefined8 *)
                              Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                            );
    puVar1 = 
    Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
    ;
    iVar6 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                      (local_f0,*(undefined8 *)
                                 Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                      );
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
    if (iVar6 != 0) {
      iVar6 = FUN_03ac7100(local_100,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
      if (iVar6 != 0) {
        uVar7 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                          (local_f0,*(undefined8 *)puVar1);
        uVar8 = FUN_03ac7100(local_100,*(undefined8 *)puVar2);
        FUN_05f4f5c0(param_1,uVar7,uVar8,&local_110,&local_120,0);
        iVar6 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                          (&local_110,*(undefined8 *)puVar1);
        iVar9 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                          (local_f0,*(undefined8 *)puVar1);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c45700(iVar6 == iVar9,0);
        iVar6 = FUN_03ac7100(&local_120,*(undefined8 *)puVar2);
        iVar9 = FUN_03ac7100(local_100,*(undefined8 *)puVar2);
        FUN_05c45700(iVar6 == iVar9,0);
        FUN_03ac75a4(&local_110,local_f0._0_8_,local_f0._8_8_,
                     *(undefined8 *)
                      Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
        FUN_03ac6ff8(&local_120,local_100._0_8_,local_100._8_8_,
                     *(undefined8 *)
                      Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__
                    );
        uVar5 = uStack_108;
        uVar4 = local_110;
        uVar3 = uStack_118;
        uVar10 = local_120;
        lVar11 = FUN_05e29228(&uStack_38,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05f4e458(lVar11,uVar4,uVar5,uVar10,uVar3,0,0,0);
      }
    }
  }
  return;
}



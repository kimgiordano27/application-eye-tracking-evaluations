/*
FUNCTION_NAME: FUN_06f4f360
ENTRY_POINT: 06f4f360
PROGRAM: vandalizer-libil2cpp.so
SCORE: 138
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_12;validity_or_gating_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_06f4f360(undefined4 param_1,undefined8 param_2,long param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,undefined1 *param_7,uint param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
                    /* try { // try from 06f4f36c to 0704f36f has its CatchHandler @ 06f4f398 */
                    /* try { // try from 06f4f370 to 0704f3a7 has its CatchHandler @ 06f4f204 */
                    /* catch() { ... } // from try @ 06f4f36c with catch @ 06f4f398 */
  if ((DAT_07a596c3 & 1) == 0) {
                    /* try { // try from 06f4f3a8 to 0704f3af has its CatchHandler @ 06f4f3c4 */
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo);
                    /* try { // try from 06f4f3b0 to 0704f3bb has its CatchHandler @ 06f4f204 */
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_TypeInfo);
                    /* try { // try from 06f4f3bc to 0704f3c3 has its CatchHandler @ 06f4f3c4 */
    FUN_031f20f4(Fusion_Photon_Realtime_LobbyType_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06f4f3a8 with catch @ 06f4f3c4
                       catch(type#2 @ 00000000) { ... } // from try @ 06f4f3bc with catch @ 06f4f3c4
                        */
    FUN_031f20f4(PTR_DAT_075b7460);
    FUN_031f20f4(PTR_DAT_075b74a8);
    FUN_031f20f4(PTR_DAT_075b74a0);
    FUN_031f20f4(Oculus_Platform_MessageWithLeaderboardEntryList_TypeInfo);
    FUN_031f20f4(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
                    /* try { // try from 06f4f404 to 0704f4a3 has its CatchHandler @ 06f4f404
                       catch() { ... } // from try @ 06f4f404 with catch @ 06f4f404
                       catch() { ... } // from try @ 06f4f560 with catch @ 06f4f404
                       catch() { ... } // from try @ 06f4f5a8 with catch @ 06f4f404
                       catch() { ... } // from try @ 06f4f5d8 with catch @ 06f4f404 */
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(UnityEngine_UIElements_UIR_MeshGenerator_TypeInfo);
    DAT_07a596c3 = 1;
  }
  *param_7 = 0;
  puVar2 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo;
  if ((param_3 != 0) && (iVar8 = *(int *)(param_3 + 0x18), iVar8 != 0)) {
    if ((param_4 & 1) != 0) {
      if (**(long **)(*(long *)
                       UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo +
                     0xb8) == 0) {
        uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075b74a0);
        FUN_0439c03c(uVar6,*(undefined8 *)PTR_DAT_075b74a8);
        **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
        thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar6);
      }
      else {
        FUN_0439c6d0(**(long **)(*(long *)
                                  UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo
                                + 0xb8),*(undefined8 *)PTR_DAT_075b7460);
      }
      iVar8 = *(int *)(param_3 + 0x18);
    }
                    /* try { // try from 06f4f4a4 to 0704f4c3 has its CatchHandler @ 06f4f584 */
    puVar3 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
    puVar2 = PTR_DAT_0759b2a8;
    if (0 < iVar8) {
      iVar9 = 0;
      do {
        plVar4 = (long *)FUN_047af170(param_3,iVar9,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
        }
        uVar5 = FUN_06e5ba28(plVar4,0,0);
        if ((uVar5 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar6 = thunk_FUN_03202440(plVar4,0);
          uVar10 = *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)(PTR_DAT_0759b388 + 0xe0));
          }
          uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
          uVar5 = FUN_05e19a88(uVar6,uVar10,0);
          if ((uVar5 & 1) == 0) {
            bVar1 = *(byte *)(*(long *)UnityEngine_UIElements_UIR_MeshGenerator_TypeInfo + 0x130);
            if (*(byte *)(*plVar4 + 0x130) < bVar1) {
              plVar4 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                     *(long *)UnityEngine_UIElements_UIR_MeshGenerator_TypeInfo) {
              plVar4 = (long *)0x0;
            }
            lVar7 = FUN_06f4f63c(param_1,plVar4,1);
          }
          else {
            bVar1 = *(byte *)(*(long *)Fusion_Photon_Realtime_LobbyType_TypeInfo + 0x130);
            if (*(byte *)(*plVar4 + 0x130) < bVar1) {
              plVar4 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                     *(long *)Fusion_Photon_Realtime_LobbyType_TypeInfo) {
              plVar4 = (long *)0x0;
            }
            lVar7 = FUN_06f4eaa0(param_1,plVar4,param_4 & 1,param_5,param_6,param_7,param_8 & 1);
          }
          if (lVar7 != 0) {
            return lVar7;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar9);
    }
  }
  return 0;
}



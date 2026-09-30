/*
FUNCTION_NAME: FUN_05d20d34
ENTRY_POINT: 05d20d34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_12;functionality_possible_biometrics_hits_2
*/


long FUN_05d20d34(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 05d20d34 to 05e20d4b has its CatchHandler @ 05d20de0 */
                    /* try { // try from 05d20d4c to 05e20dcf has its CatchHandler @ 05d20998 */
  if ((DAT_06dc2f43 & 1) == 0) {
    FUN_02d965b8(
                Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_GameObjectItem,_GameObject>__ctor__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
    FUN_02d965b8(Mono_Security_PKCS7_SignerInfo_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_MoveNext__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_get_Current__
                );
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                );
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
                );
    FUN_02d965b8(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                );
                    /* try { // try from 05d20dd0 to 05e20ddf has its CatchHandler @ 05d20de0 */
    DAT_06dc2f43 = 1;
  }
  local_50 = 0;
  local_48 = 0;
                    /* catch() { ... } // from try @ 05d20d34 with catch @ 05d20de0
                       catch() { ... } // from try @ 05d20dd0 with catch @ 05d20de0 */
  lVar5 = FUN_05d206fc(param_1);
                    /* try { // try from 05d20de4 to 05e20de7 has its CatchHandler @ 05d20df0 */
  if (lVar5 == 0) goto LAB_05d210b4;
                    /* try { // try from 05d20de8 to 05e20df3 has its CatchHandler @ 05d20998 */
  uVar11 = *(undefined8 *)(param_1 + 0x118);
                    /* catch() { ... } // from try @ 05d20de4 with catch @ 05d20df0 */
  FUN_05d1a428(lVar5,uVar11);
  lVar6 = FUN_05d1acec(uVar11,90000);
  if (lVar6 == 0) goto LAB_05d210b4;
  iVar10 = *(int *)(lVar6 + 0x30);
  if (iVar10 == 0x191) {
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_05d210b4;
    lVar7 = FUN_05ccbaa0(*(long *)(lVar6 + 0x10),
                         *(undefined8 *)
                          Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                         ,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__ +
                0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__
                        );
    }
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) == 0)) {
      lVar5 = *(long *)(param_1 + 0x98);
      thunk_FUN_02da4860();
      puVar2 = (undefined8 *)
               Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
      ;
    }
    else {
                    /* try { // try from 05d20e70 to 05e20f97 has its CatchHandler @ 05d20e70
                       catch() { ... } // from try @ 05d20e70 with catch @ 05d20e70
                       catch() { ... } // from try @ 05d21188 with catch @ 05d20e70
                       catch() { ... } // from try @ 05d2122c with catch @ 05d20e70
                       catch() { ... } // from try @ 05d21290 with catch @ 05d20e70
                       catch() { ... } // from try @ 05d21310 with catch @ 05d20e70 */
      lVar7 = FUN_05d23270(lVar7);
      if (lVar7 != 0) {
        *(long *)(param_1 + 0x10) = lVar7;
        LeanTween__value((long *)(param_1 + 0x10),lVar7);
        lVar7 = *(long *)(param_1 + 0x48);
        if (lVar7 == 0) {
          return lVar6;
        }
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_1 + 0xb0);
        plVar8 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_GameObjectItem,_GameObject>__ctor__
                                           );
        FUN_05d204b4(plVar8,uVar11,lVar7,uVar1);
        if (plVar8 == (long *)0x0) goto LAB_05d210b4;
        lVar7 = *(long *)(lVar5 + 0x10);
        iVar10 = 0;
        if ((int)plVar8[2] != -1) {
          iVar10 = (int)plVar8[2];
        }
        *(int *)(param_1 + 0xb0) = iVar10;
        uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar7 == 0) goto LAB_05d210b4;
        FUN_05ccbab0(lVar7,*(undefined8 *)
                            Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
                     ,uVar11,0);
        uVar9 = FUN_05d1b620(lVar6);
        if ((uVar9 & 1) != 0) {
          FUN_05d22808(param_1);
          FUN_05d20934(param_1);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x118);
        FUN_05d1a428(lVar5,uVar11);
        lVar6 = FUN_05d1acec(uVar11,15000);
        if (lVar6 == 0) goto LAB_05d210b4;
        iVar10 = *(int *)(lVar6 + 0x30);
        goto LAB_05d20f4c;
      }
      lVar5 = *(long *)(param_1 + 0x98);
                    /* try { // try from 05d20fb8 to 05e20fc3 has its CatchHandler @ 05d21070 */
      thunk_FUN_02da4860();
      puVar2 = (undefined8 *)
               Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
      ;
    }
  }
  else {
LAB_05d20f4c:
    if (1 < iVar10 - 0x12dU) {
      return lVar6;
    }
    if (*(char *)(param_1 + 0x51) == '\0') {
      return lVar6;
    }
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_05d210b4;
    lVar5 = FUN_05ccbaa0(*(long *)(lVar6 + 0x10),
                         *(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,0);
    puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__ +
                0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__
                        );
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) == 0)) {
                    /* try { // try from 05d21060 to 05e21063 has its CatchHandler @ 05d21078 */
      lVar5 = *(long *)(param_1 + 0x98);
                    /* try { // try from 05d21064 to 05e21067 has its CatchHandler @ 05d21088 */
      thunk_FUN_02da4860();
                    /* catch() { ... } // from try @ 05d2101c with catch @ 05d21068 */
      puVar2 = (undefined8 *)
               Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_get_Current__
      ;
    }
    else {
                    /* try { // try from 05d20fe8 to 05e20ff7 has its CatchHandler @ 05d2108c */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_05d18284(lVar5,&local_48,&local_50);
      if ((uVar9 & 1) != 0) {
                    /* try { // try from 05d21004 to 05e21007 has its CatchHandler @ 05d2107c */
        FUN_05d22808(param_1);
        *(long *)(param_1 + 0x120) = local_48;
        LeanTween__value(param_1 + 0x120);
                    /* try { // try from 05d2101c to 05e21027 has its CatchHandler @ 05d21068 */
        if (local_48 != 0) {
          uVar11 = FUN_05c0c424(local_48,0);
                    /* try { // try from 05d21034 to 05e21053 has its CatchHandler @ 05d2106c */
          bVar4 = thunk_FUN_0536b75c(uVar11,*(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo,0);
          *(byte *)(param_1 + 0x10c) = bVar4 & 1;
          FUN_05d20934(param_1);
          lVar5 = FUN_05d20d34(param_1);
          return lVar5;
                    /* try { // try from 05d21058 to 05e2105b has its CatchHandler @ 05d21084 */
                    /* try { // try from 05d2105c to 05e2105f has its CatchHandler @ 05d21080 */
        }
        goto LAB_05d210b4;
      }
                    /* catch() { ... } // from try @ 05d21060 with catch @ 05d21078 */
      lVar5 = *(long *)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 05d21004 with catch @ 05d2107c */
      thunk_FUN_02da4860();
      puVar2 = (undefined8 *)
               Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_MoveNext__
      ;
    }
  }
                    /* catch() { ... } // from try @ 05d2105c with catch @ 05d21080 */
  if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 05d20fe8 with catch @ 05d2108c */
    FUN_05d1c7fc(lVar5,*puVar2);
                    /* try { // try from 05d210ac to 05e210af has its CatchHandler @ 05d210b0 */
                    /* catch() { ... } // from try @ 05d20fc8 with catch @ 05d210b0
                       catch() { ... } // from try @ 05d210ac with catch @ 05d210b0
                       catch() { ... } // from try @ 05d2117c with catch @ 05d210b0 */
    return lVar6;
  }
LAB_05d210b4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



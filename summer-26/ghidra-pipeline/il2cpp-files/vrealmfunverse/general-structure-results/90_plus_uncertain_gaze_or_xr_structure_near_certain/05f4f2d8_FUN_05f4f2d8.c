/*
FUNCTION_NAME: FUN_05f4f2d8
ENTRY_POINT: 05f4f2d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_7;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05f4f2d8(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar2 = StringLiteral_527;
                    /* try { // try from 05f4f308 to 0604f337 has its CatchHandler @ 05f4f38c */
  if ((DAT_066dd082 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__);
                    /* try { // try from 05f4f338 to 0604f377 has its CatchHandler @ 05f4f128 */
    FUN_02b3c81c(StringLiteral_527);
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
                    /* try { // try from 05f4f378 to 0604f37b has its CatchHandler @ 05f4f384 */
                    /* try { // try from 05f4f37c to 0604f3af has its CatchHandler @ 05f4f128 */
    DAT_066dd082 = 1;
  }
  puVar1 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f4f2ac with catch @ 05f4f380
                        */
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f4f378 with catch @ 05f4f384
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f4f2c4 with catch @ 05f4f388
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f4f308 with catch @ 05f4f38c
                        */
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f4f2b0 with catch @ 05f4f390
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05f4f290 with catch @ 05f4f394
                        */
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_78 = FUN_03ac922c(param_1 + 2,param_2,*(undefined8 *)puVar2);
  uVar13 = local_78._8_8_;
                    /* try { // try from 05f4f3b0 to 0604f3b3 has its CatchHandler @ 05f4f3cc */
                    /* try { // try from 05f4f3b4 to 0604f3cf has its CatchHandler @ 05f4f128 */
  uVar14 = *param_1;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
                    /* catch() { ... } // from try @ 05f4f3b0 with catch @ 05f4f3cc */
  if (DAT_066dcf90 == (code *)0x0) {
                    /* try { // try from 05f4f3d0 to 0604f3d7 has its CatchHandler @ 05f4f3e0 */
                    /* try { // try from 05f4f3d8 to 0604f3e3 has its CatchHandler @ 05f4f128 */
    DAT_066dcf90 = (code *)FUN_02b3c7e0(
                                       "UnityEngine.UIElements.UIPainter2D::ExecuteSnapshotFromJob_Injected(System.IntPtr,System.Int32,UnityEngine.UIElements.MeshWriteDataInterface&)"
                                       );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f4f3d0 with catch @ 05f4f3e0
                        */
  }
  puVar4 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__;
  puVar3 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__;
  puVar2 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
  ;
  (*DAT_066dcf90)(uVar14,uVar13 & 0xffffffff,&local_68);
  uVar13 = local_58;
  uVar14 = uStack_60;
  uVar8 = local_58._4_4_;
  uVar11 = FUN_04dc6850(local_68,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar1);
  }
  local_88 = FUN_033c0138(uVar11,uVar13 & 0xffffffff,*(undefined8 *)puVar4);
  uVar14 = FUN_04dc6850(uVar14,0);
  local_98 = FUN_033c00f4(uVar14,uVar8,*(undefined8 *)puVar3);
  iVar7 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                    (local_88,*(undefined8 *)puVar2);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  if (iVar7 != 0) {
    iVar7 = FUN_03ac7100(local_98,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    if (iVar7 != 0) {
      uVar8 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                        (local_88,*(undefined8 *)puVar2);
      uVar9 = FUN_03ac7100(local_98,*(undefined8 *)puVar1);
      FUN_05f4f5c0(param_1 + 1,uVar8,uVar9,&local_a8,&local_b8);
      iVar7 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                        (&local_a8,*(undefined8 *)puVar2);
      iVar10 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                         (local_88,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c45700(iVar7 == iVar10,0);
      iVar7 = FUN_03ac7100(&local_b8,*(undefined8 *)puVar1);
      iVar10 = FUN_03ac7100(local_98,*(undefined8 *)puVar1);
      FUN_05c45700(iVar7 == iVar10,0);
      FUN_03ac75a4(&local_a8,local_88._0_8_,local_88._8_8_,
                   *(undefined8 *)
                    Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
      FUN_03ac6ff8(&local_b8,local_98._0_8_,local_98._8_8_,
                   *(undefined8 *)
                    Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__
                  );
      uVar6 = local_a0;
      uVar5 = local_a8;
      uVar11 = local_b0;
      uVar14 = local_b8;
      lVar12 = FUN_05e29228(local_78,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05f4e458(lVar12,uVar5,uVar6,uVar14,uVar11,0,0);
    }
  }
  return;
}



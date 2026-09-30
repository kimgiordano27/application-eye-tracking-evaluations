/*
FUNCTION_NAME: FUN_031e4518
ENTRY_POINT: 031e4518
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7
*/


void FUN_031e4518(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_0453263f & 1) == 0) {
                    /* try { // try from 031e4544 to 032e454f has its CatchHandler @ 031e467c */
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeReportProgressListener_OnSuccessDelegate_TypeInfo
                );
    FUN_01c5d288(System_Xml_Linq_NamespaceResolver_NamespaceDeclaration_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_NativePlugins_Android_NativeActivity_<>c__DisplayClass2_0_TypeInfo
                );
    DAT_0453263f = 1;
  }
  if ((0 < param_4) && (0 < param_2)) {
    uVar3 = FUN_03210168(param_3,0,0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_01c273e8(PTR_DAT_0422fa20);
      uVar4 = thunk_FUN_01c496e0();
      uVar6 = thunk_FUN_01c273e8(
                                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                                );
                    /* try { // try from 031e4784 to 032e4793 has its CatchHandler @ 031e4794 */
      FUN_0323fc78(uVar4,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(
                                VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeRequestCameraAccessListener_OnCompleteDelegate_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar6);
    }
                    /* try { // try from 031e4590 to 032e45bb has its CatchHandler @ 031e4680 */
    if (param_3 != (long *)0x0) {
      lVar8 = *param_3;
      bVar2 = *(byte *)(*(long *)System_Xml_Linq_NamespaceResolver_NamespaceDeclaration_TypeInfo +
                       0x130);
                    /* try { // try from 031e45d4 to 032e45f7 has its CatchHandler @ 031e4674 */
      if (((bVar2 <= *(byte *)(lVar8 + 0x130)) &&
          (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
           *(long *)System_Xml_Linq_NamespaceResolver_NamespaceDeclaration_TypeInfo)) ||
         (lVar8 == *(long *)
                    VoxelBusters_CoreLibrary_NativePlugins_Android_NativeActivity_<>c__DisplayClass2_0_TypeInfo
         )) {
        lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                    VoxelBusters_EssentialKit_GameServicesCore_Android_NativeReportProgressListener_OnSuccessDelegate_TypeInfo
                                  );
        FUN_03313b6c(lVar8,0);
                    /* try { // try from 031e45f8 to 032e466f has its CatchHandler @ 031e42b0 */
        *(long *)(lVar8 + 0x10) = param_4;
        *(long **)(lVar8 + 0x18) = param_3;
        *(undefined4 *)(lVar8 + 0x20) = 2;
        FUN_031e430c(param_1,lVar8,param_2,param_4);
        return;
      }
    }
    uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar4 = FUN_01c5d2fc(uVar4,1);
    FUN_019b2708(param_3);
    plVar5 = (long *)thunk_FUN_01c5d21c(param_3,0);
    FUN_019b2708();
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                    /* try { // try from 031e4670 to 032e4673 has its CatchHandler @ 031e4678 */
    FUN_019b2708(uVar4);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031e45d4 with catch @ 031e4674
                       try { // try from 031e4674 to 032e469b has its CatchHandler @ 031e42b0 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031e4670 with catch @ 031e4678
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031e4544 with catch @ 031e467c
                        */
    FUN_019b8dd4(uVar4,uVar6);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031e4590 with catch @ 031e4680
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 031e4508 with catch @ 031e4684
                        */
    FUN_019b8e08(uVar4,0,uVar6);
    uVar6 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_NativeUICore_Android_NativeButtonClickListener_OnClickDelegate_TypeInfo
                              );
                    /* try { // try from 031e469c to 032e46b3 has its CatchHandler @ 031e4794 */
    uVar4 = FUN_03315920(uVar6,uVar4,0);
                    /* try { // try from 031e46b4 to 032e4783 has its CatchHandler @ 031e42b0 */
    thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
    uVar6 = thunk_FUN_01c496e0();
    FUN_031dce5c(uVar6,uVar4,0);
    uVar4 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeRequestCameraAccessListener_OnCompleteDelegate_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar4);
  }
  puVar1 = 
  VoxelBusters_EssentialKit_AddressBookCore_Android_NativeRequestContactsPermissionListener_OnSuccessDelegate_TypeInfo
  ;
  if (0 < param_2) {
    puVar1 = 
    VoxelBusters_EssentialKit_AddressBookCore_Android_NativeRequestContactsPermissionListener_OnFailureDelegate_TypeInfo
    ;
  }
  uVar4 = thunk_FUN_01c273e8(puVar1);
  uVar6 = thunk_FUN_01c273e8(
                            VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeRequestGalleryAccessListener_OnCompleteDelegate_TypeInfo
                            );
  uVar6 = FUN_03313b64(uVar6,0);
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar7 = thunk_FUN_01c496e0();
  FUN_03243400(uVar7,uVar4,uVar6,0);
  uVar4 = thunk_FUN_01c273e8(
                            VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeRequestCameraAccessListener_OnCompleteDelegate_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar7,uVar4);
}



/*
FUNCTION_NAME: FUN_05d111fc
ENTRY_POINT: 05d111fc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8 FUN_05d111fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_64;
  long local_58;
  
  puVar3 = OVRPlugin_OVRP_1_121_0_TypeInfo;
                    /* try { // try from 05d1122c to 05e1123b has its CatchHandler @ 05d1123c */
  if ((DAT_06dc2ebf & 1) == 0) {
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_Remove__);
                    /* catch() { ... } // from try @ 05d111dc with catch @ 05d1123c
                       catch() { ... } // from try @ 05d1122c with catch @ 05d1123c */
                    /* try { // try from 05d11240 to 05e11243 has its CatchHandler @ 05d1124c */
                    /* try { // try from 05d11244 to 05e1124f has its CatchHandler @ 05d10584 */
    FUN_02d965b8(Method_UnityEngine_UI_Collections_IndexedSet<IClipper>__ctor__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d11240 with catch @ 05d1124c
                        */
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<int>_Add__);
    FUN_02d965b8(OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff540);
    FUN_02d965b8(Method_UnityEngine_UI_Collections_IndexedSet<IClipper>_get_Item__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__);
    FUN_02d965b8(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Align>__ctor__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<DisplayStyle>__ctor__
                );
    FUN_02d965b8(Assets_Scripts_Menu_PlayerSave_<>c__DisplayClass56_0_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo)
    ;
    FUN_02d965b8(OVRPlugin_OVRP_1_0_0_TypeInfo);
    DAT_06dc2ebf = 1;
  }
  local_58 = 0;
  lVar8 = FUN_05d15434(param_1);
  lVar11 = *(long *)puVar3;
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar11);
    lVar11 = *(long *)puVar3;
  }
  uVar9 = FUN_05508634(uVar13,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
  puVar5 = Method_UnityEngine_UI_Collections_IndexedSet<IClipper>__ctor__;
  if (((uVar9 & 1) != 0) && ((lVar8 == 0 || (*(int *)(lVar8 + 0x10) == 0)))) {
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_05d1181c;
    uVar13 = *(undefined8 *)
              Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Align>__ctor__
    ;
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + 0x30);
    *puVar12 = uVar13;
    goto LAB_05d116e8;
  }
  local_58 = 0;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_05d1181c;
  uVar13 = FUN_05371d64(*(long *)(param_1 + 0x58),0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar5);
  }
  puVar1 = PTR_DAT_069ff488;
  uVar9 = FUN_05d15190(uVar13);
  if ((uVar9 & 1) == 0) {
LAB_05d113d8:
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    if (lVar8 == 0) goto LAB_05d113e8;
LAB_05d113e0:
    if (*(int *)(lVar8 + 0x10) == 0) goto LAB_05d113e8;
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_05c0d38c(uVar13,1,&local_58,0);
    if ((uVar9 & 1) == 0) goto LAB_05d113d8;
    if (local_58 == 0) goto LAB_05d1181c;
    uVar13 = FUN_05c0b574(local_58,0);
    if (lVar8 != 0) goto LAB_05d113e0;
LAB_05d113e8:
    lVar8 = FUN_05d15488(param_1);
  }
  lVar11 = local_58;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_05c093b0(lVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if (local_58 == 0) goto LAB_05d1181c;
    lVar8 = FUN_05c0b888(local_58,0);
  }
  puVar6 = Method_UnityEngine_UI_Collections_IndexedSet<IClipper>_get_Item__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__;
  puVar2 = OVRPlugin_OVRP_1_0_0_TypeInfo;
  if (lVar8 == 0) goto LAB_05d1181c;
  iVar7 = FUN_05372384(lVar8,0x3a,0);
  if (-1 < iVar7) {
    lVar8 = FUN_0536f444(lVar8,0,iVar7,0);
  }
  uVar9 = FUN_05d154a8(param_1);
  uVar14 = *(undefined8 *)puVar6;
  uVar16 = *(undefined8 *)puVar2;
  uVar15 = *(undefined8 *)puVar4;
  lVar11 = FUN_05d154cc(param_1);
  if (lVar11 == 0) goto LAB_05d1181c;
  local_64 = *(undefined4 *)(lVar11 + 0x18);
  if ((uVar9 & 1) == 0) {
    uVar16 = uVar15;
  }
  uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_64);
  uVar16 = FUN_0536e120(uVar14,uVar16,lVar8,uVar15,0);
  uVar14 = FUN_05362cb4(uVar16,uVar13,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar1);
  }
  uVar9 = FUN_05c0d38c(uVar14,1,param_1 + 0x60,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x78);
    uVar13 = FUN_0536d554(*(undefined8 *)
                           Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<DisplayStyle>__ctor__
                          ,uVar16,uVar13,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<int>_Add__ + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Method_System_Collections_Generic_HashSet<int>_Add__);
    }
    uVar13 = FUN_05cf2024(uVar13,0);
    if (lVar8 != 0) {
      puVar12 = (undefined8 *)(lVar8 + 0x30);
      *puVar12 = uVar13;
LAB_05d116e8:
      LeanTween__value(puVar12,uVar13);
      return 1;
    }
    goto LAB_05d1181c;
  }
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_05d1181c;
  uVar13 = FUN_05c0c1dc(*(long *)(param_1 + 0x60),0);
  FUN_05d14f5c(param_1,uVar13);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_05d1181c;
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar13 = FUN_05c0c424(*(long *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_05d1181c;
  uVar14 = FUN_05c0b228(*(long *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_05d1181c;
  uVar15 = FUN_05c0ab9c(*(long *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_05d1181c;
  uVar10 = FUN_05c0c1dc(*(long *)(param_1 + 0x60),0);
  if (*(int *)(*(long *)
                Method_Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_Remove__ +
              0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)
                        Method_Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_Remove__
                      );
  }
  uVar13 = FUN_05ce9228(uVar16,uVar13,uVar14,uVar15,uVar10,0);
  *(undefined8 *)(param_1 + 0x60) = uVar13;
  LeanTween__value(param_1 + 0x60,uVar13);
  lVar8 = *(long *)puVar3;
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar3;
  }
  uVar9 = FUN_05508644(uVar13,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),0);
  if ((uVar9 & 1) == 0) {
    if (*(char *)(param_1 + 0x80) == '\0') {
LAB_05d11720:
      if ((*(char *)(param_1 + 0x20) == '\0') &&
         ((iVar7 = FUN_0536a4b0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_069ff540,5,0)
          , iVar7 == 0 ||
          (iVar7 = FUN_0536a4b0(*(undefined8 *)(param_1 + 0x38),
                                *(undefined8 *)
                                 OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo,5,0),
          iVar7 == 0)))) {
        if ((*(long *)(param_1 + 0x78) != 0) &&
           (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x28), lVar8 != 0)) {
          uVar13 = 0x19b;
LAB_05d11810:
          FUN_05d084f4(lVar8,0,uVar13);
          return 0;
        }
        goto LAB_05d1181c;
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05d1181c;
    lVar8 = FUN_05ccbaa0(*(long *)(param_1 + 0x30),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,0)
    ;
    if (lVar8 == 0) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      goto LAB_05d11720;
    }
    iVar7 = FUN_0536a4b0(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,5,0);
    *(bool *)(param_1 + 0x80) = iVar7 == 0;
    if (iVar7 != 0) {
      if ((*(long *)(param_1 + 0x78) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x28), lVar8 == 0)) goto LAB_05d1181c;
      uVar13 = 0x1f5;
      goto LAB_05d11810;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar13 = FUN_05ccbaa0(*(long *)(param_1 + 0x30),
                          *(undefined8 *)
                           Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo
                          ,0);
    iVar7 = FUN_0536a4b0(uVar13,*(undefined8 *)
                                 Assets_Scripts_Menu_PlayerSave_<>c__DisplayClass56_0_TypeInfo,5,0);
    if (iVar7 != 0) {
      return 1;
    }
    if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(*(long *)(param_1 + 0x78) + 0x28) != 0)) {
      lVar8 = FUN_05d10a10();
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar11);
        lVar11 = *(long *)puVar5;
      }
      lVar11 = **(long **)(lVar11 + 0xb8);
      if ((lVar11 != 0) && (lVar8 != 0)) {
        FUN_05c22620(lVar8,lVar11,0,*(undefined4 *)(lVar11 + 0x18),0);
        return 1;
      }
    }
  }
LAB_05d1181c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



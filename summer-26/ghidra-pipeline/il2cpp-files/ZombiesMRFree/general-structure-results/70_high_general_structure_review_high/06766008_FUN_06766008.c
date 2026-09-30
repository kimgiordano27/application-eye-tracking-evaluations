/*
FUNCTION_NAME: FUN_06766008
ENTRY_POINT: 06766008
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_06766008(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x20;
  long *plVar12;
  undefined8 *unaff_x22;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_List<Destination>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06fbd0a0);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WeaponExplosion>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<Event_SpawnAmmo>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<Event_Teleport>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WeaponInfoProvider>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<SimulateMovementControl>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WeaponScope>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WeaponFX>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<AutoGrabGrabbable>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9a540);
    FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WeaponSlide>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<SteeringWheelUnityEvent>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x4fe) = 1;
  }
  lVar9 = thunk_FUN_0301080c(*unaff_x22);
  FUN_06658764(lVar9,0);
  plVar12 = (long *)(param_2 + 0x18);
  *plVar12 = lVar9;
  thunk_FUN_03048534(plVar12,lVar9);
  *(undefined1 *)(param_2 + 0x30) = 1;
  lVar9 = *unaff_x24;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar9 = *unaff_x24;
  }
  puVar2 = Unity_Entities_TypeManager_SharedTypeIndex<AutoGrabGrabbable>_TypeInfo;
  lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar9 = *unaff_x24;
    }
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    lVar13 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fbd0a0);
    FUN_050b929c(lVar13,uVar14,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<WeaponScope>_TypeInfo,0);
    plVar10 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *plVar10 = lVar13;
    thunk_FUN_03048534(plVar10,lVar13);
  }
  puVar1 = PTR_DAT_06f9a540;
  *(long *)(param_2 + 0x38) = lVar13;
  thunk_FUN_03048534((long *)(param_2 + 0x38),lVar13);
  FUN_0691b9e8(param_2,0);
  *(long *)(param_2 + 0x28) = param_3;
  thunk_FUN_03048534((long *)(param_2 + 0x28),param_3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo;
  uVar14 = FUN_06766520();
  *(undefined8 *)(param_2 + 0x20) = uVar14;
  thunk_FUN_03048534((undefined8 *)(param_2 + 0x20),uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_06766698(uVar14);
  uVar6 = FUN_068c5f24(0);
  uVar7 = FUN_068c5f4c(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar2);
  }
  FUN_0668f27c(uVar6,uVar7,0);
  if (param_3 != 0) {
    FUN_06911cbc(*(undefined1 *)(param_3 + 0xe8),0);
    iVar8 = FUN_068ca810(0);
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    else {
      iVar8 = FUN_068ca810(0);
    }
    puVar2 = System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo;
    if (iVar8 != *(int *)(param_3 + 0x5c)) {
      FUN_068ca838(*(int *)(param_3 + 0x5c),0);
    }
    puVar3 = Unity_Entities_TypeManager_SharedTypeIndex<SteeringWheelUnityEvent>_TypeInfo;
    uVar14 = FUN_068ca810(0);
    iVar8 = FUN_068edda0(uVar14,0);
    if (7 < iVar8) {
      iVar8 = 8;
    }
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    puVar2 = Unity_Entities_TypeManager_SharedTypeIndex<WeaponInfoProvider>_TypeInfo;
    FUN_0663fc98(iVar8,0);
    FUN_0663ff00(*(undefined4 *)(param_3 + 0x60),0);
    FUN_068cef68(*(undefined8 *)puVar3,0);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar9 = *(long *)puVar1;
    }
    puVar3 = System_Collections_Generic_List<Destination>_TypeInfo;
    uVar14 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x80);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar2);
    }
    FUN_06929294(uVar14,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (DAT_073a1581 == '\0') {
      FUN_02fe925c(System_Collections_Generic_List<Destination>_TypeInfo);
      DAT_073a1581 = '\x01';
    }
    puVar2 = System_Collections_Generic_List<TypeName>_TypeInfo;
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar9 = *(long *)puVar3;
    }
    *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 8) = 1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<WeaponSlide>_TypeInfo;
    puVar4 = Unity_Entities_TypeManager_SharedTypeIndex<SimulateMovementControl>_TypeInfo;
    puVar3 = UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo;
    puVar2 = 
    System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo;
    FUN_0674d53c(0);
    uVar14 = FUN_06705488(param_3,0);
    if (DAT_073a1582 == '\0') {
      FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<GarbageCollect>_TypeInfo);
      DAT_073a1582 = '\x01';
    }
    puVar11 = (undefined8 *)
              (*(long *)(*(long *)
                          Unity_Entities_TypeManager_SharedTypeIndex<GarbageCollect>_TypeInfo + 0xb8
                        ) + 0x28);
    *puVar11 = uVar14;
    thunk_FUN_03048534(puVar11,uVar14);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_06641ed0(uVar14,*(undefined8 *)puVar5,0);
    puVar11 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *puVar11 = uVar14;
    thunk_FUN_03048534(puVar11,uVar14);
    *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = 0;
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
    FUN_067516cc(uVar14,0);
    puVar11 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *puVar11 = uVar14;
    thunk_FUN_03048534(puVar11,uVar14);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar9 = FUN_06653348(0);
    puVar1 = Unity_Entities_TypeManager_SharedTypeIndex<Event_Teleport>_TypeInfo;
    puVar2 = Unity_Entities_TypeManager_SharedTypeIndex<Event_SpawnAmmo>_TypeInfo;
    if (lVar9 != 0) {
      FUN_0665857c(lVar9,0);
      lVar9 = *plVar12;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar14 = FUN_05109a64(*(undefined8 *)puVar2);
      if (lVar9 != 0) {
        FUN_06658394(lVar9,uVar14,0);
        FUN_068ca798(*(undefined1 *)(param_3 + 0x70),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



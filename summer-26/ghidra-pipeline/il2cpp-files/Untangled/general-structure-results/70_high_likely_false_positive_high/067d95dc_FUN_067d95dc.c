/*
FUNCTION_NAME: FUN_067d95dc
ENTRY_POINT: 067d95dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void FUN_067d95dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar4 = Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsMetaProperty_TypeInfo;
  puVar1 = Unity_VisualScripting_FullSerializer_fsKeyValuePairConverter_TypeInfo;
  puVar2 = System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TypeInfo;
  if ((DAT_071d6585 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d08068);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsMissingVersionConstructorException_TypeInfo)
    ;
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsNullableConverter_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsMetaProperty_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsKeyValuePairConverter_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsObjectProcessor_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsPrimitiveConverter_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsReflectedConverter_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsResult_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsSerializationCallbackProcessor_TypeInfo);
    FUN_02f07e70(
                Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                );
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo);
    DAT_071d6585 = 1;
  }
  puVar5 = Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo;
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_03fd0468(uVar6,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar6;
  thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar6);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar7 = *(long *)puVar2;
  }
  puVar3 = Unity_VisualScripting_FullSerializer_fsObjectProcessor_TypeInfo;
  puVar1 = PTR_DAT_06d08068;
  lVar11 = *(long *)puVar5;
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar11);
    lVar11 = *(long *)puVar5;
  }
  uVar12 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_0555e110(uVar8,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05648f2c(uVar6,uVar8,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto UnityEngine_UIElements_StyleScale__GetHashCode;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto UnityEngine_UIElements_StyleScale__GetHashCode;
  }
  puVar3 = Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo;
  thunk_FUN_02f411dc(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_0555e110(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05648f2c(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto UnityEngine_UIElements_StyleScale__GetHashCode;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto UnityEngine_UIElements_StyleScale__GetHashCode;
  }
  puVar4 = Unity_VisualScripting_FullSerializer_fsPrimitiveConverter_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsNullableConverter_TypeInfo;
  thunk_FUN_02f411dc(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_0516df40(uVar6,uVar12,*(undefined8 *)puVar4,0);
  lVar7 = FUN_05648f2c(uVar8,uVar6,0);
  if (lVar7 == 0) {
    lVar11 = 0;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_02ef170c(lVar7,uVar6);
    if (lVar11 == 0) goto LAB_067d9ae8;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar9 = lVar11;
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_02ef170c(lVar7,uVar6);
    if (lVar11 == 0) goto LAB_067d9af4;
  }
  puVar3 = Unity_VisualScripting_FullSerializer_fsReflectedConverter_TypeInfo;
  thunk_FUN_02f411dc(plVar9,lVar11);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_0555e110(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05648f2c(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto UnityEngine_UIElements_StyleScale__GetHashCode;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto UnityEngine_UIElements_StyleScale__GetHashCode;
  }
  puVar4 = Unity_VisualScripting_FullSerializer_fsResult_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsMissingVersionConstructorException_TypeInfo;
  thunk_FUN_02f411dc(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_0513bd28(uVar6,uVar12,*(undefined8 *)puVar4,0);
  lVar7 = FUN_05648f2c(uVar8,uVar6,0);
  if (lVar7 == 0) {
    lVar11 = 0;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_02ef170c(lVar7,uVar6);
    if (lVar11 == 0) {
LAB_067d9ae8:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar7,uVar6);
    }
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar9 = lVar11;
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_02ef170c(lVar7,uVar6);
    if (lVar11 == 0) {
LAB_067d9af4:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar7,uVar6);
    }
  }
  puVar3 = Unity_VisualScripting_FullSerializer_fsSerializationCallbackProcessor_TypeInfo;
  thunk_FUN_02f411dc(plVar9,lVar11);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_0555e110(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05648f2c(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar10 = 0;
LAB_067d9ad0:
    thunk_FUN_02f411dc(plVar10,plVar9);
    return;
  }
  lVar7 = *(long *)puVar1;
  if (*plVar9 == lVar7) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar10 = (long)plVar9;
    if (*plVar9 == lVar7) goto LAB_067d9ad0;
  }
UnityEngine_UIElements_StyleScale__GetHashCode:
                    /* WARNING: Subroutine does not return */
  FUN_02f08440(plVar9);
}



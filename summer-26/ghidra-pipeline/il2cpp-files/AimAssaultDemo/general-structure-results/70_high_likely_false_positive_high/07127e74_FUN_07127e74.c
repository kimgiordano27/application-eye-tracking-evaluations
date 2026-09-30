/*
FUNCTION_NAME: FUN_07127e74
ENTRY_POINT: 07127e74
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07128080) */
/* WARNING: Removing unreachable block (ram,0x071287a0) */
/* WARNING: Removing unreachable block (ram,0x07128790) */

void FUN_07127e74(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  
  if ((DAT_08267eaa & 1) == 0) {
    FUN_0373b518(PTR_DAT_07df4d48);
    FUN_0373b518(PTR_DAT_07d8dc68);
    FUN_0373b518(System_Action<MessageEventArgs>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(System_Runtime_Serialization_SerializationInfo_var);
    FUN_0373b518(PTR_DAT_07df5ec8);
    FUN_0373b518(System_Data_SqlTypes_INullable_var);
    FUN_0373b518(PTR_DAT_07d97de8);
    FUN_0373b518(PTR_DAT_07d96768);
    FUN_0373b518(PTR_DAT_07d88c10);
    FUN_0373b518(System_Action<LightCompiler,_Expression>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo);
    FUN_0373b518(
                UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_TypeInfo
                );
    DAT_08267eaa = 1;
  }
  puVar4 = System_Action<MessageEventArgs>_TypeInfo;
  local_68[0] = 0;
  local_70[0] = 0;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar9 = *(int *)(param_5 + 0x14);
  bVar1 = *(byte *)(param_5 + 0x30);
  lVar12 = *(long *)System_Action<MessageEventArgs>_TypeInfo;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar12 = *(long *)puVar4;
  }
  puVar2 = PTR_DAT_07df4d48;
  FUN_06f533dc(local_68,**(undefined8 **)(lVar12 + 0xb8),0);
  if (*(char *)(param_1 + 0x51) == '\0') {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_070dbfe0(param_1 + 0xb0,*(undefined8 *)(param_2 + 0x10),param_3 + 0x18,0);
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar12 = *(long *)puVar4;
    }
    local_78[0] = 0;
    FUN_06f533dc(local_78,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
    local_70[0] = local_78[0];
    FUN_0754b7c0(param_1 + 0x68,0);
    FUN_06f533e8(local_70,0);
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar12 = *(long *)puVar4;
    }
    local_80[0] = 0;
    FUN_06f533dc(local_80,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
    puVar3 = UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo;
    local_70[0] = local_80[0];
    lVar12 = *(long *)(param_1 + 0x88);
    auVar18 = FUN_03b1a3ac(param_1 + 0x78,4,
                           *(undefined8 *)
                            UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
    puVar4 = UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_TypeInfo;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_03fe6904(lVar12,auVar18._0_8_,auVar18._8_8_,
                 *(undefined8 *)UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_TypeInfo);
    lVar12 = *(long *)(param_1 + 0xa0);
    auVar18 = FUN_03b1a3ac(param_1 + 0x90,4,*(undefined8 *)puVar3);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_03fe6904(lVar12,auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar4);
    uVar16 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_07d97de8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar8 = FUN_07109790(0);
    FUN_06f3b100(param_2,uVar16,
                 *(undefined8 *)
                  UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo,0,
                 iVar8 << 2,0);
    uVar16 = *(undefined8 *)(param_1 + 0xa0);
    iVar8 = FUN_07109798(0);
    FUN_06f3b100(param_2,uVar16,
                 *(undefined8 *)
                  UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
                 ,0,iVar8 << 2,0);
    FUN_06f533e8(local_70,0);
    FUN_06d4c654(*(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x140),
                 (float)*(int *)(param_1 + 0x144),(float)*(int *)(param_1 + 0x54),0);
    FUN_06f3ab7c(param_2,*(undefined8 *)
                          UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                 ,0);
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_06d3bf80(*(float *)(param_4 + 0x134) / (float)*(int *)(param_1 + 0x58),
                 *(float *)(param_4 + 0x138) / (float)*(int *)(param_1 + 0x58),0);
    FUN_06d4c654(0);
    FUN_06f3ab7c(param_2,*(undefined8 *)
                          UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
                 ,0);
    FUN_06d4c654((float)*(int *)(param_1 + 0x148),
                 (float)(*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x5c)),0,0,0);
    FUN_06f3ab7c(param_2,*(undefined8 *)
                          UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                 ,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  Unity_VisualScripting_Graph__set_summary(param_1,param_2,param_5);
  FUN_0712924c(param_1,param_2,param_3 + 0x18,param_5);
  puVar4 = System_Data_SqlTypes_INullable_var;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(long *)(param_4 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((*(char *)(*(long *)(param_4 + 0x1d8) + 0x142) == '\0') || (*(char *)(param_5 + 0x35) == '\0')
     ) {
    bVar6 = 0 < iVar9;
  }
  else {
    bVar6 = true;
  }
  if ((bVar6 & bVar1) == 0) {
    bVar15 = 0;
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x51) ^ 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_06f38b38(param_2,*(long *)(*(long *)System_Data_SqlTypes_INullable_var + 0xb8) + 0x40,
               bVar15 != 0,0);
  bVar15 = 0;
  if ((bVar1 == 0) && (bVar6 != false)) {
    bVar15 = *(byte *)(param_1 + 0x51) ^ 1;
  }
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x50,bVar15 != 0,0);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x60,*(undefined1 *)(param_1 + 0x51),0);
  if (*(char *)(param_5 + 0x31) == '\0') {
    bVar5 = false;
    bVar7 = false;
    bVar6 = false;
  }
  else {
    bVar5 = *(int *)(param_1 + 0x18) == 1;
    if (bVar5) {
      iVar9 = FUN_0756d398(0);
      bVar6 = iVar9 == 0;
      if (*(char *)(param_5 + 0x31) == '\0') {
        bVar7 = false;
        bVar5 = true;
        goto LAB_071283d4;
      }
    }
    else {
      bVar6 = false;
    }
    bVar7 = *(int *)(param_1 + 0x18) == 2;
  }
LAB_071283d4:
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0xf0,bVar7 | bVar6,0);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x100,bVar5,0);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0xe0,bVar7,0);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x90,*(undefined1 *)(param_5 + 0x33),0);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x80,*(undefined1 *)(param_5 + 0x32),0);
  if (*(int *)(*(long *)PTR_DAT_07d97de8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar12 = FUN_070fbc78(0);
  if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075aa744(lVar12,0,0);
  if ((uVar13 & 1) == 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    bVar6 = false;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    bVar6 = *(int *)(lVar12 + 0x74) == 1;
  }
  iVar9 = *(int *)(lVar12 + 0x84);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x480,iVar9 == 1 && bVar6,0);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x490,iVar9 == 2 && bVar6,0);
  uVar10 = *(undefined4 *)(lVar12 + 0x70);
  if (*(int *)(*(long *)System_Runtime_Serialization_SerializationInfo_var + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  iVar9 = FUN_07119964(uVar10);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x460,iVar9 == 2,0);
  FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x470,iVar9 == 1,0);
  if (*(int *)(*(long *)PTR_DAT_07d88c10 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar12 = FUN_06f4282c(0);
  puVar3 = PTR_DAT_07df5ec8;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_07df5ec8 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07df5ec8);
  }
  if (DAT_08267079 == '\0') {
    FUN_0373b518(PTR_DAT_07df5ec8);
    DAT_08267079 = '\x01';
  }
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar14 = *(long *)puVar3;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar2);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar16 = FUN_042a01ac(lVar12,*(undefined8 *)System_Action<LightCompiler,_Expression>_TypeInfo);
  uVar13 = FUN_070a3e84(param_4,0);
  if ((uVar13 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_075a6824(0);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar11 = FUN_06f59548(lVar14,uVar17,uVar16,uVar10,*(undefined1 *)(param_5 + 0x34),0);
  FUN_06f3ab44(param_2,*(undefined8 *)
                        UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_TypeInfo
               ,uVar11 & 1,0);
  lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
  if (*(char *)(param_5 + 0x34) == '\0') {
    uVar11 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(param_4 + 0xd8);
    if (*(int *)(*(long *)PTR_DAT_07d8dc68 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar11 = FUN_06fa8958(uVar16,0);
    uVar11 = uVar11 ^ 1;
  }
  FUN_06f38b38(param_2,lVar12 + 0x110,uVar11 & 1,0);
  lVar12 = *(long *)(param_1 + 0xa8);
  if (lVar12 == 0) {
    FUN_06f38b38(param_2,*(long *)(*(long *)puVar4 + 0xb8) + 0x140,0,0);
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_070a6ba4(lVar12,*(undefined8 *)(param_2 + 0x10),param_5,0);
  }
  FUN_06f533e8(local_68,0);
  return;
}



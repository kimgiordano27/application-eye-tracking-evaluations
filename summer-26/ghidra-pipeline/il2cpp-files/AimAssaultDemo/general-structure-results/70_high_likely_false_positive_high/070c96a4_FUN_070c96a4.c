/*
FUNCTION_NAME: FUN_070c96a4
ENTRY_POINT: 070c96a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_070c96a4(long param_1,undefined8 param_2,long param_3,undefined1 (*param_4) [16],
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  byte *pbVar20;
  undefined1 auVar21 [16];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_70 [12];
  
  puVar5 = PTR_DAT_07d88c10;
  if ((DAT_08267bd4 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07dfbd48);
    FUN_0373b518(PTR_DAT_07d88c08);
    FUN_0373b518(PTR_DAT_07d97de8);
    FUN_0373b518(PTR_DAT_07dfc190);
    FUN_0373b518(PTR_DAT_07d88c10);
    FUN_0373b518(System_Runtime_Serialization_XmlObjectSerializerContext_var);
    FUN_0373b518(UnityEngine_UIElements_VisualElement_var);
    FUN_0373b518(System_Xml_Schema_XmlSchema_var);
    FUN_0373b518(UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var);
    FUN_0373b518(System_Xml_Schema_XmlSchemaComplexType_var);
    FUN_0373b518(UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_var);
    FUN_0373b518(BhapticsAndroidBasicExample_BhapticsAndroidExampleButtons_var);
    FUN_0373b518(System_Xml_Schema_XmlSchemaSequence_var);
    FUN_0373b518(System_Xml_Schema_XmlSchemaSet_var);
    DAT_08267bd4 = 1;
  }
  local_70._8_4_ = 0;
  local_70._0_8_ = 0;
  local_80 = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar12 = FUN_06f4282c(0);
  puVar6 = System_Runtime_Serialization_XmlObjectSerializerContext_var;
  puVar5 = UnityEngine_UIElements_VisualElement_var;
  auVar3._8_4_ = local_70._8_4_;
  auVar3._0_8_ = local_70._0_8_;
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), local_70 = auVar3, lVar12 == 0)) {
LAB_070c9d3c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar13 = FUN_042a01ac(lVar12,*(undefined8 *)UnityEngine_UIElements_VisualElement_var);
  *(undefined8 *)(param_1 + 0x200) = uVar13;
  thunk_FUN_037aeb94(param_1 + 0x200,uVar13);
  uVar13 = FUN_042a01ac(lVar12,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x208) = uVar13;
  thunk_FUN_037aeb94(param_1 + 0x208);
  uVar13 = FUN_042a01ac(lVar12,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x200) = uVar13;
  thunk_FUN_037aeb94(param_1 + 0x200,uVar13);
  if (param_3 == 0) goto LAB_070c9d3c;
  lVar12 = FUN_07041e9c(param_3,*(undefined8 *)PTR_DAT_07dfbd48);
  auVar4._8_4_ = local_70._8_4_;
  auVar4._0_8_ = local_70._0_8_;
  if ((*(long *)(param_1 + 0x1a0) == 0) ||
     (lVar18 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x80), local_70 = auVar4, lVar18 == 0))
  goto LAB_070c9d3c;
  thunk_FUN_075766d4(lVar18,0,0);
  local_70 = FUN_070cc970(0);
  *(undefined2 *)(param_1 + 0x244) = 1;
  *(byte *)(param_1 + 0x246) = param_7 & 1;
  if (*(long *)(param_1 + 0x208) == 0) goto LAB_070c9d3c;
  uVar14 = FUN_070ac8ec(*(long *)(param_1 + 0x208),0);
  if ((uVar14 & 1) == 0) {
    if (lVar12 == 0) goto LAB_070c9d3c;
  }
  else {
    FUN_07575314(lVar18,*(undefined8 *)UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_var,0);
    if (lVar12 == 0) goto LAB_070c9d3c;
    FUN_070db698(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x208),
                 *(undefined4 *)(lVar12 + 0x160),*(undefined4 *)(lVar12 + 0x164),lVar18,0);
  }
  if (*(char *)(lVar12 + 0x1c9) != '\0') {
    FUN_07575314(lVar18,*(undefined8 *)BhapticsAndroidBasicExample_BhapticsAndroidExampleButtons_var
                 ,0);
    uVar10 = FUN_070db4a0(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x220),
                          *(undefined4 *)(lVar12 + 0x160),*(undefined4 *)(lVar12 + 0x164),lVar18,0);
    *(undefined4 *)(param_1 + 0x220) = uVar10;
  }
  uVar14 = FUN_070a36b0(lVar12,0);
  if (((uVar14 & 1) != 0) && (*(char *)(param_1 + 0x246) != '\0')) {
    uVar14 = FUN_07575314(lVar18,*(undefined8 *)System_Xml_Schema_XmlSchemaSet_var,0);
  }
  puVar5 = PTR_DAT_07d88c08;
  local_70._8_4_ = 0;
  bVar9 = FUN_070bb334(uVar14,lVar12);
  local_70._0_8_ = CONCAT44(local_70._4_4_,CONCAT13(bVar9,local_70._0_3_)) & 0xffffffff01ffffff;
  if ((bVar9 & 1) != 0) {
    uVar19 = (uint)*(byte *)(param_1 + 0x246) << 1;
    if (*(char *)(lVar12 + 0x1ac) == '\0') {
      uVar19 = uVar19 | 1;
    }
    local_70._8_4_ = uVar19;
    auVar21 = FUN_070a39e8(lVar12,0);
    uVar10 = FUN_070a3ae0(lVar12,0);
    uVar11 = FUN_070a3b70(lVar12,0);
    FUN_070bed18(param_1,auVar21._0_8_,auVar21._8_8_,uVar10,lVar18,uVar19,uVar11 & 1);
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar15 = FUN_070904a4(lVar12,0);
  if (lVar15 == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = FUN_0707a574(lVar15,*(undefined1 *)(lVar12 + 0x1e0),0);
    bVar9 = bVar9 & 1;
  }
  uVar13 = local_70._0_8_;
  local_70[4] = bVar9;
  local_70._6_2_ = SUB82(uVar13,6);
  local_70[5] = *(undefined1 *)(lVar12 + 399);
  iVar2 = *(int *)(lVar12 + 0x1cc);
  if (*(int *)(lVar12 + 0x170) == 1) {
    bVar8 = *(int *)(lVar12 + 0x174) == 2;
  }
  else {
    bVar8 = false;
  }
  local_70[1] = bVar8;
  local_70[0] = iVar2 == 1;
  uVar14 = FUN_070a3e84(lVar12,0);
  puVar1 = local_70;
  if ((uVar14 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  pbVar20 = (byte *)((ulong)local_70 | 2);
  if ((((uVar14 & 1) == 0) || (*(float *)(lVar12 + 0x224) <= 0.0)) || (pbVar20 = puVar1 + 2, bVar8))
  {
    bVar9 = 0;
  }
  else {
    bVar9 = FUN_070a3f98(lVar12,0);
    bVar9 = ~bVar9 & 1;
  }
  puVar5 = PTR_DAT_07dfc190;
  *pbVar20 = bVar9;
  uStack_88 = *(undefined8 *)(lVar12 + 0x120);
  local_90 = *(undefined8 *)(lVar12 + 0x118);
  local_80 = *(undefined4 *)(lVar12 + 0x128);
  local_a0 = *(undefined8 *)(lVar12 + 0x108);
  local_b0 = *(undefined8 *)(lVar12 + 0xf8);
  uStack_a8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar12 + 0x100) >> 0x20),1);
  uStack_98 = *(ulong *)(lVar12 + 0x110) & 0xffffffff;
  if ((local_70._0_8_ & 0x1000000) == 0) {
    if (*(int *)(*(long *)PTR_DAT_07d97de8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar10 = FUN_07112f24(0);
    FUN_07590518(&local_b0,uVar10,0);
  }
  puVar7 = UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var;
  puVar6 = System_Xml_Schema_XmlSchemaSequence_var;
  uStack_118 = uStack_a8;
  local_120 = local_b0;
  uStack_108 = uStack_98;
  local_110 = local_a0;
  uStack_f8 = uStack_88;
  uStack_100 = local_90;
  local_f0 = local_80;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uStack_158 = uStack_118;
  local_160 = local_120;
  uStack_148 = uStack_108;
  uStack_150 = local_110;
  uStack_138 = uStack_f8;
  local_140 = uStack_100;
  local_130 = local_f0;
  local_c0 = FUN_071026d0(param_2,&local_160,*(undefined8 *)puVar7,1,0,1,0);
  local_198 = *(undefined8 *)(lVar12 + 0x160);
  local_190 = 1;
  uStack_184 = *(undefined8 *)(lVar12 + 0x10c);
  local_18c = *(undefined8 *)(lVar12 + 0x104);
  local_17c = 0;
  local_168 = *(undefined4 *)(lVar12 + 0x128);
  uStack_170 = *(undefined8 *)(lVar12 + 0x120);
  local_178 = *(undefined8 *)(lVar12 + 0x118);
  local_d0 = FUN_071026d0(param_2,&local_198,*(undefined8 *)puVar6,1,0,1,0);
  local_e0._8_8_ = *(undefined8 *)(*param_4 + 8);
  local_e0._0_8_ = *(undefined8 *)*param_4;
  auVar21 = *param_4;
  iVar16 = *(int *)(lVar12 + 0x170);
  if (iVar16 == 0) {
    puVar17 = (undefined8 *)System_Xml_Schema_XmlSchemaComplexType_var;
    local_e0 = *param_4;
    if (iVar2 != 1) goto LAB_070c9cfc;
  }
  else {
    if ((bVar8) || (auVar21 = *param_4, iVar2 == 1)) {
      FUN_070c83a0(param_1,param_2,lVar12,local_e0,local_c0,local_70);
      local_70._0_8_ = local_70._0_8_ & 0xffffffffffffff00;
      iVar16 = *(int *)(lVar12 + 0x170);
      auVar21 = local_c0;
    }
    if (iVar16 == 2) {
      local_70[2] = 0;
      goto LAB_070c9cfc;
    }
    if (iVar16 != 1) goto LAB_070c9cfc;
    local_e0 = auVar21;
    if (*(int *)(lVar12 + 0x174) == 2) {
      FUN_070c8a48(param_1,param_2,local_e0,local_d0,local_70[5] & 1);
      auVar21 = local_d0;
      goto LAB_070c9cfc;
    }
    if ((*(int *)(lVar12 + 0x174) != 1) ||
       (puVar17 = (undefined8 *)System_Xml_Schema_XmlSchema_var, (local_70._0_8_ & 0x10000) != 0))
    goto LAB_070c9cfc;
  }
  FUN_07575314(lVar18,*puVar17,0);
  auVar21 = local_e0;
LAB_070c9cfc:
  local_e0 = auVar21;
  FUN_070c8f98(param_1,param_2,lVar12,local_e0,param_5,param_6,local_70);
  return;
}



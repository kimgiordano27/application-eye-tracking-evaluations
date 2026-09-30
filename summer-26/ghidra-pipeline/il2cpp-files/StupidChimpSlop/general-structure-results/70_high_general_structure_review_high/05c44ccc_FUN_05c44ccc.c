/*
FUNCTION_NAME: FUN_05c44ccc
ENTRY_POINT: 05c44ccc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_05c44ccc(long param_1,long param_2,long param_3,undefined1 (*param_4) [16],
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_2a0 [128];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [12];
  
  puVar7 = PTR_DAT_0664d6f0;
  if ((DAT_06a578e1 & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_SetBitsInBuffer__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRDisplaySubsystem>__);
    FUN_02d4dc40(PTR_DAT_06648568);
    FUN_02d4dc40(PTR_DAT_0664bc18);
    FUN_02d4dc40(PTR_DAT_0664d6f0);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__);
    FUN_02d4dc40(Method_POpusCodec_OpusEncoder_DataCallbackStatic__);
    FUN_02d4dc40(Method_UnityEngine_PhysicsSceneExtensions2D_GetPhysicsScene2D__);
    FUN_02d4dc40(Method_System_Collections_Specialized_OrderedDictionary_Add__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_ParameterDictionary_TryGetValue<int>__);
    FUN_02d4dc40(Method_System_Reflection_ParameterInfo_GetCustomAttributes__);
    FUN_02d4dc40(Method_System_Collections_Specialized_OrderedDictionary_OnDeserialization__);
    FUN_02d4dc40(Method_System_Collections_Specialized_OrderedDictionary_Remove__);
    DAT_06a578e1 = 1;
  }
  local_70._8_4_ = 0;
  local_70._0_8_ = 0;
  local_200._0_8_ = 0;
  local_200._8_8_ = 0;
  local_210._0_8_ = 0;
  local_210._8_8_ = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_220._0_8_ = 0;
  local_220._8_8_ = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar16 = FUN_05b1fe8c(0);
  puVar7 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__;
  auVar5._8_4_ = local_70._8_4_;
  auVar5._0_8_ = local_70._0_8_;
  if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), local_70 = auVar5, lVar16 == 0)) {
LAB_05c452e8:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar17 = FUN_0344f524(lVar16,*(undefined8 *)
                                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__
                       );
  *(undefined8 *)(param_1 + 0x210) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x210,uVar17);
  uVar17 = FUN_0344f524(lVar16,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x218) = uVar17;
  thunk_FUN_02dc1ef0(param_1 + 0x218,uVar17);
  if (param_3 == 0) goto LAB_05c452e8;
  lVar16 = FUN_05bfdf34(param_3,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_SetBitsInBuffer__
                       );
  auVar6._8_4_ = local_70._8_4_;
  auVar6._0_8_ = local_70._0_8_;
  if ((*(long *)(param_1 + 0x1b0) == 0) ||
     (lVar22 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x80), local_70 = auVar6, lVar22 == 0))
  goto LAB_05c452e8;
  thunk_FUN_05eb63c4(lVar22,0,0);
  local_70 = FUN_05c47f44(0);
  if (param_2 == 0) goto LAB_05c452e8;
  FUN_05b74310(auStack_2a0,param_2,param_4,0);
  memcpy(&local_f0,auStack_2a0,0x80);
  memcpy(&local_170,auStack_2a0,0x80);
  if (lVar16 == 0) goto LAB_05c452e8;
  uVar14 = *(undefined4 *)(lVar16 + 0x160);
  uVar2 = *(undefined4 *)(lVar16 + 0x164);
  *(undefined2 *)(param_1 + 0x254) = 1;
  local_170 = CONCAT44(uVar14,(undefined4)local_170);
  uStack_168 = CONCAT44(uStack_168._4_4_,uVar2);
  *(byte *)(param_1 + 0x256) = param_7 & 1;
  if (*(long *)(param_1 + 0x218) == 0) goto LAB_05c452e8;
  uVar18 = FUN_05c28a54(*(long *)(param_1 + 0x218),0);
  if ((uVar18 & 1) != 0) {
    FUN_05eb5004(lVar22,*(undefined8 *)
                         Method_ExitGames_Client_Photon_ParameterDictionary_TryGetValue<int>__,0);
    FUN_05c5656c(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x218),uVar14,uVar2,
                 lVar22,0);
  }
  if (*(char *)(lVar16 + 0x1c9) != '\0') {
    FUN_05eb5004(lVar22,*(undefined8 *)Method_System_Reflection_ParameterInfo_GetCustomAttributes__,
                 0);
    uVar14 = FUN_05c56374(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x230),uVar14,
                          uVar2,lVar22,0);
    *(undefined4 *)(param_1 + 0x230) = uVar14;
  }
  uVar18 = FUN_05c1fcc0(lVar16,0);
  if (((uVar18 & 1) != 0) && (*(char *)(param_1 + 0x256) != '\0')) {
    uVar18 = FUN_05eb5004(lVar22,*(undefined8 *)
                                  Method_System_Collections_Specialized_OrderedDictionary_Remove__,0
                         );
  }
  puVar7 = PTR_DAT_06648568;
  local_70._8_4_ = 0;
  bVar11 = FUN_05c36f54(uVar18,lVar16);
  local_70._0_8_ = CONCAT44(local_70._4_4_,CONCAT13(bVar11,local_70._0_3_)) & 0xffffffff01ffffff;
  if ((bVar11 & 1) != 0) {
    uVar23 = (uint)*(byte *)(param_1 + 0x256) << 1;
    if (*(char *)(lVar16 + 0x1ac) == '\0') {
      uVar23 = uVar23 | 1;
    }
    local_70._8_4_ = uVar23;
    auVar24 = FUN_05c1fff4(lVar16,0);
    uVar14 = FUN_05c200ec(lVar16,0);
    uVar15 = FUN_05c2017c(lVar16,0);
    FUN_05c3a79c(param_1,auVar24._0_8_,auVar24._8_8_,uVar14,lVar22,uVar23,uVar15 & 1);
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar19 = FUN_05c0c7d8(lVar16,0);
  uVar12 = 0;
  if (lVar19 != 0) {
    uVar12 = thunk_FUN_05bf5444(lVar19,*(undefined1 *)(lVar16 + 0x1e0),0);
  }
  iVar3 = *(int *)(lVar16 + 0x1cc);
  cVar4 = *(char *)(lVar16 + 399);
  local_70._0_8_ = CONCAT35(local_70._5_3_,CONCAT14(uVar12,local_70._0_4_)) & 0xffffff01ffffffff;
  local_70[5] = cVar4;
  if (*(int *)(lVar16 + 0x170) == 1) {
    bVar10 = *(int *)(lVar16 + 0x174) == 2;
  }
  else {
    bVar10 = false;
  }
  local_70[1] = bVar10;
  local_70[0] = iVar3 == 1;
  uVar18 = FUN_05c20504(lVar16,0);
  if ((uVar18 & 1) == 0) {
LAB_05c45108:
    bVar13 = 0;
  }
  else {
    bVar1 = bVar10;
    if (*(float *)(lVar16 + 0x224) <= 0.0) {
      bVar1 = true;
    }
    if (bVar1 != false) goto LAB_05c45108;
    bVar13 = FUN_05c20618(lVar16,0);
    bVar13 = bVar13 ^ 1;
  }
  puVar7 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRDisplaySubsystem>__;
  local_70._0_8_ = CONCAT53(local_70._3_5_,CONCAT12(bVar13,local_70._0_2_)) & 0xffffffffff01ffff;
  memcpy(&local_1f0,&local_f0,0x80);
  if ((bVar11 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0664bc18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar14 = FUN_05c93394(0);
    local_1d0 = CONCAT44(local_1d0._4_4_,uVar14);
  }
  puVar9 = Method_UnityEngine_PhysicsSceneExtensions2D_GetPhysicsScene2D__;
  puVar8 = Method_System_Collections_Specialized_OrderedDictionary_OnDeserialization__;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  local_200 = FUN_05c3c258(param_2,&local_1f0,*(undefined8 *)puVar9,1,0);
  local_210 = FUN_05c3c258(param_2,&local_170,*(undefined8 *)puVar8,1,0);
  local_220._8_8_ = *(undefined8 *)(*param_4 + 8);
  local_220._0_8_ = *(undefined8 *)*param_4;
  auVar24 = *param_4;
  iVar20 = *(int *)(lVar16 + 0x170);
  if (iVar20 == 0) {
    puVar21 = (undefined8 *)Method_System_Collections_Specialized_OrderedDictionary_Add__;
    local_220 = *param_4;
    if (iVar3 != 1) goto LAB_05c452a8;
  }
  else {
    if (iVar3 == 1) {
      bVar10 = true;
    }
    auVar24 = *param_4;
    if (bVar10 == true) {
      FUN_05c43a58(param_1,param_2,lVar16,local_220,local_200,local_70);
      iVar20 = *(int *)(lVar16 + 0x170);
      local_70._0_8_ = local_70._0_8_ & 0xffffffffffffff00;
      auVar24 = local_200;
    }
    if (iVar20 == 2) {
      local_70[2] = 0;
      goto LAB_05c452a8;
    }
    if (iVar20 != 1) goto LAB_05c452a8;
    local_220 = auVar24;
    if (*(int *)(lVar16 + 0x174) == 2) {
      FUN_05c440c8(param_1,param_2,local_220,&local_f0,local_210,&local_170,cVar4 != '\0');
      auVar24 = local_210;
      goto LAB_05c452a8;
    }
    if ((*(int *)(lVar16 + 0x174) != 1) ||
       (puVar21 = (undefined8 *)Method_POpusCodec_OpusEncoder_DataCallbackStatic__,
       (bVar13 & 1) != 0)) goto LAB_05c452a8;
  }
  FUN_05eb5004(lVar22,*puVar21,0);
  auVar24 = local_220;
LAB_05c452a8:
  local_220 = auVar24;
  FUN_05c445e0(param_1,param_2,lVar16,local_220,param_5,param_6,local_70);
  return;
}



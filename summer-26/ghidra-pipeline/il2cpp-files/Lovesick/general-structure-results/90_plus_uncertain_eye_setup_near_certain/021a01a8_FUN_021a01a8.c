/*
FUNCTION_NAME: FUN_021a01a8
ENTRY_POINT: 021a01a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 119
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_021a01a8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = param_1;
  if ((DAT_03781529 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f5748);
    thunk_FUN_00d48444(Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    thunk_FUN_00d48444(Method_UnityEngine_UI_Dropdown_GetOrAddComponent<GraphicRaycaster>__);
    thunk_FUN_00d48444(PTR_DAT_033ed3a0);
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs__ctor__
                      );
    thunk_FUN_00d48444(Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixOffset>b__35_0__);
    thunk_FUN_00d48444(Method_Unity_Mathematics_math_select_shuffle_component__);
    thunk_FUN_00d48444(PTR_DAT_033f5508);
    thunk_FUN_00d48444(StringLiteral_12753);
    thunk_FUN_00d48444(System_Xml_Schema_SchemaCollectionCompiler_TypeInfo);
    thunk_FUN_00d48444(Method_CableSwitchBox_OnTriggerEntered__);
    thunk_FUN_00d48444(Oculus_Platform_Models_AchievementProgress_TypeInfo);
    DAT_03781529 = 1;
  }
  puVar9 = StringLiteral_12753;
  puVar8 = Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixOffset>b__35_0__;
  puVar7 = Method_CableSwitchBox_OnTriggerEntered__;
  puVar6 = Method_Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs__ctor__;
  puVar5 = Oculus_Platform_Models_AchievementProgress_TypeInfo;
  puVar3 = PTR_DAT_033f5508;
  puVar2 = PTR_DAT_033ed3a0;
  local_128 = &local_68;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_120 = 0;
  local_130 = 0;
  if (6 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar15 = *(long *)(param_1 + 0x38);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar10 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x28),0);
    puVar4 = PTR_DAT_033f5748;
    if ((uVar10 & 1) == 0) {
      local_140 = 0;
      uStack_138 = 0;
      FUN_021f605c(&local_140,*(undefined8 *)(local_68 + 0x28),0);
      *(undefined8 *)(local_68 + 0x48) = uStack_138;
      *(undefined8 *)(local_68 + 0x40) = local_140;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129b5d0(*(long *)(lVar15 + 0x18),&local_1a0,*(undefined8 *)puVar4);
      uStack_148 = uStack_178;
      local_150 = uStack_180;
      uStack_168 = uStack_198;
      local_170 = local_1a0;
      uStack_158 = uStack_188;
      local_160 = local_190;
      *(undefined8 *)(local_68 + 0x68) = uStack_188;
      *(undefined8 *)(local_68 + 0x60) = local_190;
      *(undefined8 *)(local_68 + 0x78) = uStack_178;
      *(undefined8 *)(local_68 + 0x70) = uStack_180;
      *(undefined8 *)(local_68 + 0x58) = uStack_198;
      *(undefined8 *)(local_68 + 0x50) = local_1a0;
      param_1 = local_68;
      goto LAB_021a0624;
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129b5d0(*(long *)(lVar15 + 0x18),&local_1a0,*(undefined8 *)PTR_DAT_033f5748);
    uStack_148 = uStack_178;
    local_150 = uStack_180;
    uStack_168 = uStack_198;
    local_170 = local_1a0;
    uStack_158 = uStack_188;
    local_160 = local_190;
    *(undefined8 *)(local_68 + 0x68) = uStack_188;
    *(undefined8 *)(local_68 + 0x60) = local_190;
    *(undefined8 *)(local_68 + 0x78) = uStack_178;
    *(undefined8 *)(local_68 + 0x70) = uStack_180;
    *(undefined8 *)(local_68 + 0x58) = uStack_198;
    *(undefined8 *)(local_68 + 0x50) = local_1a0;
    param_1 = local_68;
    break;
  case 1:
LAB_021a0624:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    while (uVar10 = FUN_012bf140(param_1 + 0x50,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      FUN_00c5f7e0(&local_170,local_68 + 0x50,*(undefined8 *)puVar3);
      uStack_78 = uStack_168;
      local_80 = local_170;
      local_70 = local_160;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(local_68 + 0x40);
      uVar1 = *(undefined8 *)(local_68 + 0x48);
      auVar16 = FUN_00c5f9e8(&local_80,*(undefined8 *)puVar5);
      uVar10 = FUN_021ef194(lVar15 + 0x18,uVar11,uVar1,auVar16._0_8_,auVar16._8_8_,0);
      param_1 = local_68;
      if ((uVar10 & 1) != 0) {
        auVar16 = FUN_00c5f9e8(&local_80,*(undefined8 *)puVar5);
        uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
        *(undefined8 *)(local_68 + 0x18) = uVar11;
        *(undefined4 *)(local_68 + 0x10) = 1;
        return 1;
      }
    }
    FUN_021a0a74();
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    *(undefined8 *)(local_68 + 0x68) = 0;
    *(undefined8 *)(local_68 + 0x60) = 0;
    *(undefined8 *)(local_68 + 0x78) = 0;
    *(undefined8 *)(local_68 + 0x70) = 0;
    *(undefined8 *)(local_68 + 0x58) = 0;
    *(undefined8 *)(local_68 + 0x50) = 0;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129b5d0(*(long *)(lVar15 + 0x20),&local_1a0,
                 *(undefined8 *)Method_UnityEngine_UI_Dropdown_GetOrAddComponent<GraphicRaycaster>__
                );
    uStack_148 = uStack_178;
    local_150 = uStack_180;
    uStack_168 = uStack_198;
    local_170 = local_1a0;
    uStack_158 = uStack_188;
    local_160 = local_190;
    *(undefined8 *)(local_68 + 0x98) = uStack_188;
    *(undefined8 *)(local_68 + 0x90) = local_190;
    *(undefined8 *)(local_68 + 0xa8) = uStack_178;
    *(undefined8 *)(local_68 + 0xa0) = uStack_180;
    *(undefined8 *)(local_68 + 0x88) = uStack_198;
    *(undefined8 *)(local_68 + 0x80) = local_1a0;
    *(undefined4 *)(local_68 + 0x10) = 0xfffffffc;
    param_1 = local_68;
    goto LAB_021a070c;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
LAB_021a070c:
    do {
      uVar10 = FUN_012bf140(param_1 + 0x80,*(undefined8 *)puVar8);
      if ((uVar10 & 1) == 0) {
        FUN_021a0ac4();
        *(undefined8 *)(local_68 + 0x98) = 0;
        *(undefined8 *)(local_68 + 0x90) = 0;
        *(undefined8 *)(local_68 + 0xa8) = 0;
        *(undefined8 *)(local_68 + 0xa0) = 0;
        *(undefined8 *)(local_68 + 0x88) = 0;
        *(undefined8 *)(local_68 + 0x80) = 0;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129b5d0(*(long *)(lVar15 + 0x28),&local_1a0,
                     *(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
        uStack_148 = uStack_178;
        local_150 = uStack_180;
        uStack_168 = uStack_198;
        local_170 = local_1a0;
        uStack_158 = uStack_188;
        local_160 = local_190;
        *(undefined8 *)(local_68 + 200) = uStack_188;
        *(undefined8 *)(local_68 + 0xc0) = local_190;
        *(undefined8 *)(local_68 + 0xd8) = uStack_178;
        *(undefined8 *)(local_68 + 0xd0) = uStack_180;
        *(undefined8 *)(local_68 + 0xb8) = uStack_198;
        *(undefined8 *)(local_68 + 0xb0) = local_1a0;
        *(undefined4 *)(local_68 + 0x10) = 0xfffffffb;
        param_1 = local_68;
        goto Unity_Mathematics_int4__get_xzzz;
      }
      FUN_00c61ff4(&local_170,local_68 + 0x80,*(undefined8 *)puVar9);
      uStack_98 = uStack_168;
      local_a0 = local_170;
      local_90 = local_160;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(local_68 + 0x40);
      uVar1 = *(undefined8 *)(local_68 + 0x48);
      auVar16 = FUN_00c620f4(&local_a0,*(undefined8 *)puVar7);
      uVar10 = FUN_021ef194(lVar15 + 0x18,uVar11,uVar1,auVar16._0_8_,auVar16._8_8_,0);
      param_1 = local_68;
    } while ((uVar10 & 1) == 0);
    auVar16 = FUN_00c620f4(&local_a0,*(undefined8 *)puVar7);
    uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
    uVar12 = 2;
    goto FUN_021a08b8;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
Unity_Mathematics_int4__get_xzzz:
    do {
      uVar10 = FUN_012bf140(param_1 + 0xb0,*(undefined8 *)puVar2);
      if ((uVar10 & 1) == 0) {
        FUN_021a0b14();
        *(undefined8 *)(local_68 + 200) = 0;
        *(undefined8 *)(local_68 + 0xc0) = 0;
        *(undefined8 *)(local_68 + 0xd8) = 0;
        *(undefined8 *)(local_68 + 0xd0) = 0;
        *(undefined8 *)(local_68 + 0xb8) = 0;
        *(undefined8 *)(local_68 + 0xb0) = 0;
        *(undefined8 *)(local_68 + 0x40) = 0;
        *(undefined8 *)(local_68 + 0x48) = 0;
        return 0;
      }
      FUN_00c61330(&local_170,local_68 + 0xb0,*puVar14);
      uStack_b8 = uStack_168;
      local_c0 = local_170;
      local_b0 = local_160;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(local_68 + 0x40);
      uVar1 = *(undefined8 *)(local_68 + 0x48);
      auVar16 = FUN_00c61430(&local_c0,*puVar13);
      uVar10 = FUN_021ef194(lVar15 + 0x18,uVar11,uVar1,auVar16._0_8_,auVar16._8_8_,0);
      param_1 = local_68;
    } while ((uVar10 & 1) == 0);
    auVar16 = FUN_00c61430(&local_c0,*puVar13);
    uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
    uVar12 = 3;
    goto FUN_021a08b8;
  case 4:
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffff9;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    goto LAB_021a04a4;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffff8;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    goto Unity_Mathematics_int4__get_xxww;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffa;
  uVar10 = FUN_012bf140(param_1 + 0x50,*(undefined8 *)puVar6);
  if ((uVar10 & 1) == 0) {
    FUN_021a0b64();
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    *(undefined8 *)(local_68 + 0x68) = 0;
    *(undefined8 *)(local_68 + 0x60) = 0;
    *(undefined8 *)(local_68 + 0x78) = 0;
    *(undefined8 *)(local_68 + 0x70) = 0;
    *(undefined8 *)(local_68 + 0x58) = 0;
    *(undefined8 *)(local_68 + 0x50) = 0;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129b5d0(*(long *)(lVar15 + 0x20),&local_1a0,
                 *(undefined8 *)Method_UnityEngine_UI_Dropdown_GetOrAddComponent<GraphicRaycaster>__
                );
    uStack_148 = uStack_178;
    local_150 = uStack_180;
    uStack_168 = uStack_198;
    local_170 = local_1a0;
    uStack_158 = uStack_188;
    local_160 = local_190;
    *(undefined8 *)(local_68 + 0x98) = uStack_188;
    *(undefined8 *)(local_68 + 0x90) = local_190;
    *(undefined8 *)(local_68 + 0xa8) = uStack_178;
    *(undefined8 *)(local_68 + 0xa0) = uStack_180;
    *(undefined8 *)(local_68 + 0x88) = uStack_198;
    *(undefined8 *)(local_68 + 0x80) = local_1a0;
    *(undefined4 *)(local_68 + 0x10) = 0xfffffff9;
    param_1 = local_68;
LAB_021a04a4:
    uVar10 = FUN_012bf140(param_1 + 0x80,*(undefined8 *)puVar8);
    if ((uVar10 & 1) == 0) {
      FUN_021a0bb4();
      *(undefined8 *)(local_68 + 0x98) = 0;
      *(undefined8 *)(local_68 + 0x90) = 0;
      *(undefined8 *)(local_68 + 0xa8) = 0;
      *(undefined8 *)(local_68 + 0xa0) = 0;
      *(undefined8 *)(local_68 + 0x88) = 0;
      *(undefined8 *)(local_68 + 0x80) = 0;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129b5d0(*(long *)(lVar15 + 0x28),&local_1a0,
                   *(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
      uStack_148 = uStack_178;
      local_150 = uStack_180;
      uStack_168 = uStack_198;
      local_170 = local_1a0;
      uStack_158 = uStack_188;
      local_160 = local_190;
      *(undefined8 *)(local_68 + 200) = uStack_188;
      *(undefined8 *)(local_68 + 0xc0) = local_190;
      *(undefined8 *)(local_68 + 0xd8) = uStack_178;
      *(undefined8 *)(local_68 + 0xd0) = uStack_180;
      *(undefined8 *)(local_68 + 0xb8) = uStack_198;
      *(undefined8 *)(local_68 + 0xb0) = local_1a0;
      *(undefined4 *)(local_68 + 0x10) = 0xfffffff8;
      param_1 = local_68;
Unity_Mathematics_int4__get_xxww:
      uVar10 = FUN_012bf140(param_1 + 0xb0,*(undefined8 *)puVar2);
      if ((uVar10 & 1) == 0) {
        FUN_021a0c04();
        *(undefined8 *)(local_68 + 200) = 0;
        *(undefined8 *)(local_68 + 0xc0) = 0;
        *(undefined8 *)(local_68 + 0xd8) = 0;
        *(undefined8 *)(local_68 + 0xd0) = 0;
        *(undefined8 *)(local_68 + 0xb8) = 0;
        *(undefined8 *)(local_68 + 0xb0) = 0;
        return 0;
      }
      FUN_00c61330(&local_170,local_68 + 0xb0,*puVar14);
      uStack_118 = uStack_168;
      local_120 = local_170;
      local_110 = local_160;
      auVar16 = FUN_00c61430(&local_120,*puVar13);
      uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
      uVar12 = 6;
    }
    else {
      FUN_00c61ff4(&local_170,local_68 + 0x80,*(undefined8 *)puVar9);
      uStack_f8 = uStack_168;
      local_100 = local_170;
      local_f0 = local_160;
      auVar16 = FUN_00c620f4(&local_100,*(undefined8 *)puVar7);
      uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
      uVar12 = 5;
    }
  }
  else {
    FUN_00c5f7e0(&local_170,local_68 + 0x50,*(undefined8 *)puVar3);
    uStack_d8 = uStack_168;
    local_e0 = local_170;
    local_d0 = local_160;
    auVar16 = FUN_00c5f9e8(&local_e0,*(undefined8 *)puVar5);
    uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
    uVar12 = 4;
  }
FUN_021a08b8:
  *(undefined8 *)(local_68 + 0x18) = uVar11;
  *(undefined4 *)(local_68 + 0x10) = uVar12;
  return 1;
}



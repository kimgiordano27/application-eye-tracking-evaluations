/*
FUNCTION_NAME: Unity.Mathematics.int4$$op_Inequality
ENTRY_POINT: 021a028c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Mathematics_int4__op_Inequality(undefined8 param_1)

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
  long unaff_x19;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000148;
  
  puVar9 = StringLiteral_12753;
  puVar8 = Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixOffset>b__35_0__;
  puVar7 = Method_CableSwitchBox_OnTriggerEntered__;
  puVar6 = Method_Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs__ctor__;
  puVar5 = Oculus_Platform_Models_AchievementProgress_TypeInfo;
  puVar3 = PTR_DAT_033f5508;
  puVar2 = PTR_DAT_033ed3a0;
  uStack00000000000000d8 = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000c0 = 0;
  uStack00000000000000b0 = 0;
  uStack0000000000000098 = 0;
  uStack00000000000000a0 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000080 = 0;
  if (6 < *(uint *)(unaff_x19 + 0x10)) {
    return 0;
  }
  lVar15 = *(long *)(unaff_x19 + 0x38);
  uStack0000000000000088 = param_1;
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    uVar10 = FUN_015ff8a0(*(undefined8 *)(unaff_x19 + 0x28),0);
    puVar4 = PTR_DAT_033f5748;
    if ((uVar10 & 1) == 0) {
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_021f605c(&stack0x00000070,*(undefined8 *)(in_stack_00000148 + 0x28),0);
      *(undefined8 *)(in_stack_00000148 + 0x48) = in_stack_00000078;
      *(undefined8 *)(in_stack_00000148 + 0x40) = in_stack_00000070;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129b5d0(*(long *)(lVar15 + 0x18),&stack0x00000010,*(undefined8 *)puVar4);
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000048 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000010;
      in_stack_00000058 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000020;
      *(undefined8 *)(in_stack_00000148 + 0x68) = in_stack_00000028;
      *(undefined8 *)(in_stack_00000148 + 0x60) = in_stack_00000020;
      *(undefined8 *)(in_stack_00000148 + 0x78) = in_stack_00000038;
      *(undefined8 *)(in_stack_00000148 + 0x70) = in_stack_00000030;
      *(undefined8 *)(in_stack_00000148 + 0x58) = in_stack_00000018;
      *(undefined8 *)(in_stack_00000148 + 0x50) = in_stack_00000010;
      unaff_x19 = in_stack_00000148;
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
    FUN_0129b5d0(*(long *)(lVar15 + 0x18),&stack0x00000010,*(undefined8 *)PTR_DAT_033f5748);
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000048 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000010;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    *(undefined8 *)(in_stack_00000148 + 0x68) = in_stack_00000028;
    *(undefined8 *)(in_stack_00000148 + 0x60) = in_stack_00000020;
    *(undefined8 *)(in_stack_00000148 + 0x78) = in_stack_00000038;
    *(undefined8 *)(in_stack_00000148 + 0x70) = in_stack_00000030;
    *(undefined8 *)(in_stack_00000148 + 0x58) = in_stack_00000018;
    *(undefined8 *)(in_stack_00000148 + 0x50) = in_stack_00000010;
    unaff_x19 = in_stack_00000148;
    break;
  case 1:
LAB_021a0624:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    while (uVar10 = FUN_012bf140(unaff_x19 + 0x50,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      FUN_00c5f7e0(&stack0x00000040,in_stack_00000148 + 0x50,*(undefined8 *)puVar3);
      in_stack_00000138 = in_stack_00000048;
      in_stack_00000130 = in_stack_00000040;
      in_stack_00000140 = in_stack_00000050;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(in_stack_00000148 + 0x40);
      uVar1 = *(undefined8 *)(in_stack_00000148 + 0x48);
      auVar16 = FUN_00c5f9e8(&stack0x00000130,*(undefined8 *)puVar5);
      uVar10 = FUN_021ef194(lVar15 + 0x18,uVar11,uVar1,auVar16._0_8_,auVar16._8_8_,0);
      unaff_x19 = in_stack_00000148;
      if ((uVar10 & 1) != 0) {
        auVar16 = FUN_00c5f9e8(&stack0x00000130,*(undefined8 *)puVar5);
        uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
        *(undefined8 *)(in_stack_00000148 + 0x18) = uVar11;
        *(undefined4 *)(in_stack_00000148 + 0x10) = 1;
        return 1;
      }
    }
    FUN_021a0a74();
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    *(undefined8 *)(in_stack_00000148 + 0x68) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x60) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x78) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x70) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x58) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x50) = 0;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129b5d0(*(long *)(lVar15 + 0x20),&stack0x00000010,
                 *(undefined8 *)Method_UnityEngine_UI_Dropdown_GetOrAddComponent<GraphicRaycaster>__
                );
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000048 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000010;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    *(undefined8 *)(in_stack_00000148 + 0x98) = in_stack_00000028;
    *(undefined8 *)(in_stack_00000148 + 0x90) = in_stack_00000020;
    *(undefined8 *)(in_stack_00000148 + 0xa8) = in_stack_00000038;
    *(undefined8 *)(in_stack_00000148 + 0xa0) = in_stack_00000030;
    *(undefined8 *)(in_stack_00000148 + 0x88) = in_stack_00000018;
    *(undefined8 *)(in_stack_00000148 + 0x80) = in_stack_00000010;
    *(undefined4 *)(in_stack_00000148 + 0x10) = 0xfffffffc;
    unaff_x19 = in_stack_00000148;
    goto LAB_021a070c;
  case 2:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
LAB_021a070c:
    do {
      uVar10 = FUN_012bf140(unaff_x19 + 0x80,*(undefined8 *)puVar8);
      if ((uVar10 & 1) == 0) {
        FUN_021a0ac4();
        *(undefined8 *)(in_stack_00000148 + 0x98) = 0;
        *(undefined8 *)(in_stack_00000148 + 0x90) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xa8) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xa0) = 0;
        *(undefined8 *)(in_stack_00000148 + 0x88) = 0;
        *(undefined8 *)(in_stack_00000148 + 0x80) = 0;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129b5d0(*(long *)(lVar15 + 0x28),&stack0x00000010,
                     *(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
        in_stack_00000068 = in_stack_00000038;
        in_stack_00000060 = in_stack_00000030;
        in_stack_00000048 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000058 = in_stack_00000028;
        in_stack_00000050 = in_stack_00000020;
        *(undefined8 *)(in_stack_00000148 + 200) = in_stack_00000028;
        *(undefined8 *)(in_stack_00000148 + 0xc0) = in_stack_00000020;
        *(undefined8 *)(in_stack_00000148 + 0xd8) = in_stack_00000038;
        *(undefined8 *)(in_stack_00000148 + 0xd0) = in_stack_00000030;
        *(undefined8 *)(in_stack_00000148 + 0xb8) = in_stack_00000018;
        *(undefined8 *)(in_stack_00000148 + 0xb0) = in_stack_00000010;
        *(undefined4 *)(in_stack_00000148 + 0x10) = 0xfffffffb;
        unaff_x19 = in_stack_00000148;
        goto Unity_Mathematics_int4__get_xzzz;
      }
      FUN_00c61ff4(&stack0x00000040,in_stack_00000148 + 0x80,*(undefined8 *)puVar9);
      in_stack_00000118 = in_stack_00000048;
      in_stack_00000110 = in_stack_00000040;
      in_stack_00000120 = in_stack_00000050;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(in_stack_00000148 + 0x40);
      uVar1 = *(undefined8 *)(in_stack_00000148 + 0x48);
      auVar16 = FUN_00c620f4(&stack0x00000110,*(undefined8 *)puVar7);
      uVar10 = FUN_021ef194(lVar15 + 0x18,uVar11,uVar1,auVar16._0_8_,auVar16._8_8_,0);
      unaff_x19 = in_stack_00000148;
    } while ((uVar10 & 1) == 0);
    auVar16 = FUN_00c620f4(&stack0x00000110,*(undefined8 *)puVar7);
    uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
    uVar12 = 2;
    goto FUN_021a08b8;
  case 3:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffb;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
Unity_Mathematics_int4__get_xzzz:
    do {
      uVar10 = FUN_012bf140(unaff_x19 + 0xb0,*(undefined8 *)puVar2);
      if ((uVar10 & 1) == 0) {
        FUN_021a0b14();
        *(undefined8 *)(in_stack_00000148 + 200) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xc0) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xd8) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xd0) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xb8) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xb0) = 0;
        *(undefined8 *)(in_stack_00000148 + 0x40) = 0;
        *(undefined8 *)(in_stack_00000148 + 0x48) = 0;
        return 0;
      }
      FUN_00c61330(&stack0x00000040,in_stack_00000148 + 0xb0,*puVar14);
      in_stack_000000f8 = in_stack_00000048;
      in_stack_000000f0 = in_stack_00000040;
      in_stack_00000100 = in_stack_00000050;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(in_stack_00000148 + 0x40);
      uVar1 = *(undefined8 *)(in_stack_00000148 + 0x48);
      auVar16 = FUN_00c61430(&stack0x000000f0,*puVar13);
      uVar10 = FUN_021ef194(lVar15 + 0x18,uVar11,uVar1,auVar16._0_8_,auVar16._8_8_,0);
      unaff_x19 = in_stack_00000148;
    } while ((uVar10 & 1) == 0);
    auVar16 = FUN_00c61430(&stack0x000000f0,*puVar13);
    uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
    uVar12 = 3;
    goto FUN_021a08b8;
  case 4:
    break;
  case 5:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffff9;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    goto LAB_021a04a4;
  case 6:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffff8;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    goto Unity_Mathematics_int4__get_xxww;
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffa;
  uVar10 = FUN_012bf140(unaff_x19 + 0x50,*(undefined8 *)puVar6);
  if ((uVar10 & 1) == 0) {
    FUN_021a0b64();
    puVar14 = (undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    puVar13 = (undefined8 *)System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
    *(undefined8 *)(in_stack_00000148 + 0x68) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x60) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x78) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x70) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x58) = 0;
    *(undefined8 *)(in_stack_00000148 + 0x50) = 0;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0129b5d0(*(long *)(lVar15 + 0x20),&stack0x00000010,
                 *(undefined8 *)Method_UnityEngine_UI_Dropdown_GetOrAddComponent<GraphicRaycaster>__
                );
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000048 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000010;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    *(undefined8 *)(in_stack_00000148 + 0x98) = in_stack_00000028;
    *(undefined8 *)(in_stack_00000148 + 0x90) = in_stack_00000020;
    *(undefined8 *)(in_stack_00000148 + 0xa8) = in_stack_00000038;
    *(undefined8 *)(in_stack_00000148 + 0xa0) = in_stack_00000030;
    *(undefined8 *)(in_stack_00000148 + 0x88) = in_stack_00000018;
    *(undefined8 *)(in_stack_00000148 + 0x80) = in_stack_00000010;
    *(undefined4 *)(in_stack_00000148 + 0x10) = 0xfffffff9;
    unaff_x19 = in_stack_00000148;
LAB_021a04a4:
    uVar10 = FUN_012bf140(unaff_x19 + 0x80,*(undefined8 *)puVar8);
    if ((uVar10 & 1) == 0) {
      FUN_021a0bb4();
      *(undefined8 *)(in_stack_00000148 + 0x98) = 0;
      *(undefined8 *)(in_stack_00000148 + 0x90) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xa8) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xa0) = 0;
      *(undefined8 *)(in_stack_00000148 + 0x88) = 0;
      *(undefined8 *)(in_stack_00000148 + 0x80) = 0;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129b5d0(*(long *)(lVar15 + 0x28),&stack0x00000010,
                   *(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000048 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000010;
      in_stack_00000058 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000020;
      *(undefined8 *)(in_stack_00000148 + 200) = in_stack_00000028;
      *(undefined8 *)(in_stack_00000148 + 0xc0) = in_stack_00000020;
      *(undefined8 *)(in_stack_00000148 + 0xd8) = in_stack_00000038;
      *(undefined8 *)(in_stack_00000148 + 0xd0) = in_stack_00000030;
      *(undefined8 *)(in_stack_00000148 + 0xb8) = in_stack_00000018;
      *(undefined8 *)(in_stack_00000148 + 0xb0) = in_stack_00000010;
      *(undefined4 *)(in_stack_00000148 + 0x10) = 0xfffffff8;
      unaff_x19 = in_stack_00000148;
Unity_Mathematics_int4__get_xxww:
      uVar10 = FUN_012bf140(unaff_x19 + 0xb0,*(undefined8 *)puVar2);
      if ((uVar10 & 1) == 0) {
        FUN_021a0c04();
        *(undefined8 *)(in_stack_00000148 + 200) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xc0) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xd8) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xd0) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xb8) = 0;
        *(undefined8 *)(in_stack_00000148 + 0xb0) = 0;
        return 0;
      }
      FUN_00c61330(&stack0x00000040,in_stack_00000148 + 0xb0,*puVar14);
      uStack0000000000000098 = in_stack_00000048;
      uStack0000000000000090 = in_stack_00000040;
      uStack00000000000000a0 = in_stack_00000050;
      auVar16 = FUN_00c61430(&stack0x00000090,*puVar13);
      uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
      uVar12 = 6;
    }
    else {
      FUN_00c61ff4(&stack0x00000040,in_stack_00000148 + 0x80,*(undefined8 *)puVar9);
      uStack00000000000000b8 = in_stack_00000048;
      uStack00000000000000b0 = in_stack_00000040;
      uStack00000000000000c0 = in_stack_00000050;
      auVar16 = FUN_00c620f4(&stack0x000000b0,*(undefined8 *)puVar7);
      uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
      uVar12 = 5;
    }
  }
  else {
    FUN_00c5f7e0(&stack0x00000040,in_stack_00000148 + 0x50,*(undefined8 *)puVar3);
    uStack00000000000000d8 = in_stack_00000048;
    uStack00000000000000d0 = in_stack_00000040;
    uStack00000000000000e0 = in_stack_00000050;
    auVar16 = FUN_00c5f9e8(&stack0x000000d0,*(undefined8 *)puVar5);
    uVar11 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar16._0_8_,auVar16._8_8_,0);
    uVar12 = 4;
  }
FUN_021a08b8:
  *(undefined8 *)(in_stack_00000148 + 0x18) = uVar11;
  *(undefined4 *)(in_stack_00000148 + 0x10) = uVar12;
  return 1;
}



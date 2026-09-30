/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_xyzy
ENTRY_POINT: 021a0634
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Unity_Mathematics_int4__get_xyzy(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar7 [16];
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
  
  while (uVar4 = FUN_012bf140(param_1,param_2), (uVar4 & 1) != 0) {
    FUN_00c5f7e0(&stack0x00000040,in_stack_00000148 + 0x50,*unaff_x23);
    in_stack_00000138 = in_stack_00000048;
    in_stack_00000130 = in_stack_00000040;
    in_stack_00000140 = in_stack_00000050;
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00c5f9e8(&stack0x00000130,*unaff_x26);
    uVar4 = FUN_021ef194();
    if ((uVar4 & 1) != 0) {
      auVar7 = FUN_00c5f9e8(&stack0x00000130,*unaff_x26);
      uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar7._0_8_,auVar7._8_8_,0);
      *(undefined8 *)(in_stack_00000148 + 0x18) = uVar5;
      *(undefined4 *)(in_stack_00000148 + 0x10) = 1;
      return 1;
    }
    param_2 = *unaff_x22;
    param_1 = in_stack_00000148 + 0x50;
  }
  FUN_021a0a74();
  puVar3 = Method_Unity_Mathematics_math_select_shuffle_component__;
  puVar2 = System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
  *(undefined8 *)(in_stack_00000148 + 0x68) = 0;
  *(undefined8 *)(in_stack_00000148 + 0x60) = 0;
  *(undefined8 *)(in_stack_00000148 + 0x78) = 0;
  *(undefined8 *)(in_stack_00000148 + 0x70) = 0;
  *(undefined8 *)(in_stack_00000148 + 0x58) = 0;
  *(undefined8 *)(in_stack_00000148 + 0x50) = 0;
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(unaff_x25 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0129b5d0(*(long *)(unaff_x25 + 0x20),&stack0x00000010,
               *(undefined8 *)Method_UnityEngine_UI_Dropdown_GetOrAddComponent<GraphicRaycaster>__);
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
  do {
    uVar4 = FUN_012bf140(in_stack_00000148 + 0x80,*unaff_x29);
    if ((uVar4 & 1) == 0) {
      FUN_021a0ac4();
      *(undefined8 *)(in_stack_00000148 + 0x98) = 0;
      *(undefined8 *)(in_stack_00000148 + 0x90) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xa8) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xa0) = 0;
      *(undefined8 *)(in_stack_00000148 + 0x88) = 0;
      *(undefined8 *)(in_stack_00000148 + 0x80) = 0;
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129b5d0(*(long *)(unaff_x25 + 0x28),&stack0x00000010,
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
      do {
        uVar4 = FUN_012bf140(in_stack_00000148 + 0xb0,*unaff_x24);
        if ((uVar4 & 1) == 0) {
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
        FUN_00c61330(&stack0x00000040,in_stack_00000148 + 0xb0,*(undefined8 *)puVar3);
        in_stack_000000f8 = in_stack_00000048;
        in_stack_000000f0 = in_stack_00000040;
        in_stack_00000100 = in_stack_00000050;
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar5 = *(undefined8 *)(in_stack_00000148 + 0x40);
        uVar1 = *(undefined8 *)(in_stack_00000148 + 0x48);
        auVar7 = FUN_00c61430(&stack0x000000f0,*(undefined8 *)puVar2);
        uVar4 = FUN_021ef194(unaff_x25 + 0x18,uVar5,uVar1,auVar7._0_8_,auVar7._8_8_,0);
      } while ((uVar4 & 1) == 0);
      auVar7 = FUN_00c61430(&stack0x000000f0,*(undefined8 *)puVar2);
      uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar7._0_8_,auVar7._8_8_,0);
      uVar6 = 3;
      goto FUN_021a08b8;
    }
    FUN_00c61ff4(&stack0x00000040,in_stack_00000148 + 0x80,*unaff_x28);
    in_stack_00000118 = in_stack_00000048;
    in_stack_00000110 = in_stack_00000040;
    in_stack_00000120 = in_stack_00000050;
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = *(undefined8 *)(in_stack_00000148 + 0x40);
    uVar1 = *(undefined8 *)(in_stack_00000148 + 0x48);
    auVar7 = FUN_00c620f4(&stack0x00000110,*unaff_x27);
    uVar4 = FUN_021ef194(unaff_x25 + 0x18,uVar5,uVar1,auVar7._0_8_,auVar7._8_8_,0);
  } while ((uVar4 & 1) == 0);
  auVar7 = FUN_00c620f4(&stack0x00000110,*unaff_x27);
  uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar7._0_8_,auVar7._8_8_,0);
  uVar6 = 2;
FUN_021a08b8:
  *(undefined8 *)(in_stack_00000148 + 0x18) = uVar5;
  *(undefined4 *)(in_stack_00000148 + 0x10) = uVar6;
  return 1;
}



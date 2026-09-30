/*
FUNCTION_NAME: Unity.Mathematics.int4$$set_xywz
ENTRY_POINT: 021a06b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Unity_Mathematics_int4__set_xywz(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar5;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar6 [16];
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
  long in_stack_00000148;
  
  puVar5 = *(undefined8 **)(unaff_x23 + 0x308);
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
    uVar2 = FUN_012bf140(in_stack_00000148 + 0x80,*unaff_x29);
    if ((uVar2 & 1) == 0) {
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
        uVar2 = FUN_012bf140(in_stack_00000148 + 0xb0,*unaff_x24);
        if ((uVar2 & 1) == 0) {
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
        FUN_00c61330(&stack0x00000040,in_stack_00000148 + 0xb0,*puVar5);
        in_stack_000000f8 = in_stack_00000048;
        in_stack_000000f0 = in_stack_00000040;
        in_stack_00000100 = in_stack_00000050;
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar3 = *(undefined8 *)(in_stack_00000148 + 0x40);
        uVar1 = *(undefined8 *)(in_stack_00000148 + 0x48);
        auVar6 = FUN_00c61430(&stack0x000000f0,*unaff_x22);
        uVar2 = FUN_021ef194(unaff_x25 + 0x18,uVar3,uVar1,auVar6._0_8_,auVar6._8_8_,0);
      } while ((uVar2 & 1) == 0);
      auVar6 = FUN_00c61430(&stack0x000000f0,*unaff_x22);
      uVar3 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar6._0_8_,auVar6._8_8_,0);
      uVar4 = 3;
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
    uVar3 = *(undefined8 *)(in_stack_00000148 + 0x40);
    uVar1 = *(undefined8 *)(in_stack_00000148 + 0x48);
    auVar6 = FUN_00c620f4(&stack0x00000110,*unaff_x27);
    uVar2 = FUN_021ef194(unaff_x25 + 0x18,uVar3,uVar1,auVar6._0_8_,auVar6._8_8_,0);
  } while ((uVar2 & 1) == 0);
  auVar6 = FUN_00c620f4(&stack0x00000110,*unaff_x27);
  uVar3 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar6._0_8_,auVar6._8_8_,0);
  uVar4 = 2;
FUN_021a08b8:
  *(undefined8 *)(in_stack_00000148 + 0x18) = uVar3;
  *(undefined4 *)(in_stack_00000148 + 0x10) = uVar4;
  return 1;
}



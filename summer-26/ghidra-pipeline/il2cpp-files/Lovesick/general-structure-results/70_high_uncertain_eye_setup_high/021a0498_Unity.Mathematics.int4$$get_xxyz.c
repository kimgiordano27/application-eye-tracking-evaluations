/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_xxyz
ENTRY_POINT: 021a0498
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Unity_Mathematics_int4__get_xxyz
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 in_w8;
  undefined4 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar4 [16];
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
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_00000148;
  
  *(long *)(unaff_x19 + 0x98) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x90) = param_2._0_8_;
  *(long *)(unaff_x19 + 0xa8) = param_1._8_8_;
  *(long *)(unaff_x19 + 0xa0) = param_1._0_8_;
  *(long *)(unaff_x19 + 0x88) = param_3._8_8_;
  *(long *)(unaff_x19 + 0x80) = param_3._0_8_;
  *(undefined4 *)(unaff_x19 + 0x10) = in_w8;
  uVar1 = FUN_012bf140(unaff_x19 + 0x80,*unaff_x29);
  if ((uVar1 & 1) == 0) {
    FUN_021a0bb4();
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
    *(undefined4 *)(in_stack_00000148 + 0x10) = 0xfffffff8;
    uVar1 = FUN_012bf140(in_stack_00000148 + 0xb0,*unaff_x24);
    if ((uVar1 & 1) == 0) {
      FUN_021a0c04();
      *(undefined8 *)(in_stack_00000148 + 200) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xc0) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xd8) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xd0) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xb8) = 0;
      *(undefined8 *)(in_stack_00000148 + 0xb0) = 0;
      return 0;
    }
    FUN_00c61330(&stack0x00000040,in_stack_00000148 + 0xb0,*unaff_x21);
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    in_stack_000000a0 = in_stack_00000050;
    auVar4 = FUN_00c61430(&stack0x00000090,*unaff_x20);
    uVar2 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar4._0_8_,auVar4._8_8_,0);
    uVar3 = 6;
  }
  else {
    FUN_00c61ff4(&stack0x00000040,in_stack_00000148 + 0x80,*unaff_x28);
    in_stack_000000b8 = in_stack_00000048;
    in_stack_000000b0 = in_stack_00000040;
    in_stack_000000c0 = in_stack_00000050;
    auVar4 = FUN_00c620f4(&stack0x000000b0,*unaff_x27);
    uVar2 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar4._0_8_,auVar4._8_8_,0);
    uVar3 = 5;
  }
  *(undefined8 *)(in_stack_00000148 + 0x18) = uVar2;
  *(undefined4 *)(in_stack_00000148 + 0x10) = uVar3;
  return 1;
}



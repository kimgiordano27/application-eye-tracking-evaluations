/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._RequestScreenshot$$.ctor
ENTRY_POINT: 05cd4bcc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


float OVR_OpenVR_IVRScreenshots__RequestScreenshot___ctor(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int in_w9;
  long unaff_x19;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  long in_stack_000000e8;
  
  uVar2 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  puVar1 = PTR_DAT_06fb6ba8;
  fVar7 = 0.0;
  if ((uVar2 & 1) != 0) {
    if (unaff_x19 == 0) {
LAB_05cd4d6c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
    if (0 < (long)((uVar2 << 0x20) + -0x200000000)) {
      uVar5 = 0;
      fVar7 = 0.0;
      lVar3 = 0x200000000;
      lVar4 = 0x100000000;
      do {
        if (uVar2 <= uVar5) {
OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        if (in_stack_000000e8 == 0) goto LAB_05cd4d6c;
        FUN_05d386d0(&stack0x000000a0,in_stack_000000e8,
                     *(undefined4 *)(unaff_x19 + 0x20 + uVar5 * 4),0);
        in_stack_000000c8 = in_stack_000000a8;
        in_stack_000000c0 = in_stack_000000a0;
        uStack00000000000000d4 = uStack00000000000000b4;
        uStack00000000000000d0 = uStack00000000000000b0;
        if ((ulong)*(uint *)(unaff_x19 + 0x18) <= uVar5 + 1)
        goto OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke;
        if (in_stack_000000e8 == 0) goto LAB_05cd4d6c;
        FUN_05d386d0(&stack0x00000080,in_stack_000000e8,
                     *(undefined4 *)(unaff_x19 + (lVar4 >> 0x1e) + 0x20),0);
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        uStack00000000000000b4 = uStack0000000000000094;
        uStack00000000000000b0 = uStack0000000000000090;
        if ((ulong)*(uint *)(unaff_x19 + 0x18) <= uVar5 + 2)
        goto OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke;
        if (in_stack_000000e8 == 0) goto LAB_05cd4d6c;
        FUN_05d386d0(&stack0x00000060,in_stack_000000e8,
                     *(undefined4 *)(unaff_x19 + (lVar3 >> 0x1e) + 0x20),0);
        in_stack_00000088 = in_stack_00000068;
        in_stack_00000080 = in_stack_00000060;
        uStack0000000000000094 = uStack0000000000000074;
        uStack0000000000000090 = uStack0000000000000070;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        in_stack_00000048 = in_stack_000000c8;
        in_stack_00000040 = in_stack_000000c0;
        uStack0000000000000054 = uStack00000000000000d4;
        uStack0000000000000050 = uStack00000000000000d0;
        in_stack_00000028 = in_stack_000000a8;
        in_stack_00000020 = in_stack_000000a0;
        uStack0000000000000034 = uStack00000000000000b4;
        uStack0000000000000030 = uStack00000000000000b0;
        fVar6 = (float)FUN_05cd4858(&stack0x00000040,&stack0x00000020);
        uVar5 = uVar5 + 1;
        fVar7 = fVar7 + fVar6;
        lVar4 = lVar4 + 0x100000000;
        uVar2 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
        lVar3 = lVar3 + 0x100000000;
      } while ((long)uVar5 < (long)((int)*(ulong *)(unaff_x19 + 0x18) + -2));
    }
  }
  return fVar7;
}



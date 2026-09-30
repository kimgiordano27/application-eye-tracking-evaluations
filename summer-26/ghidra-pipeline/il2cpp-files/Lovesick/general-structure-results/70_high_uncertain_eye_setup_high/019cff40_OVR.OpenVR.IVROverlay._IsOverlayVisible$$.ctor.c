/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._IsOverlayVisible$$.ctor
ENTRY_POINT: 019cff40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


float OVR_OpenVR_IVROverlay__IsOverlayVisible___ctor(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  float fVar2;
  float unaff_s8;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000e8;
  
  do {
    if (in_stack_000000e8 == 0) {
LAB_019d0078:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    OVRPlugin__EraseSpace
              (&stack0x000000a0,in_stack_000000e8,*(undefined4 *)(unaff_x19 + unaff_x25 * 4 + 0x20),
               0);
    in_stack_000000c8 = in_stack_000000a8;
    in_stack_000000c0 = in_stack_000000a0;
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x2c);
    if ((ulong)*(uint *)(unaff_x19 + 0x18) <= unaff_x25 + 1) break;
    if (in_stack_000000e8 == 0) goto LAB_019d0078;
    OVRPlugin__EraseSpace
              (&stack0x00000080,in_stack_000000e8,*(undefined4 *)(unaff_x19 + unaff_x25 * 4 + 0x24),
               0);
    in_stack_000000a8 = in_stack_00000088;
    in_stack_000000a0 = in_stack_00000080;
    *(undefined8 *)(unaff_x21 + 0x34) = *(undefined8 *)(unaff_x21 + 0x14);
    *(undefined8 *)(unaff_x21 + 0x2c) = *(undefined8 *)(unaff_x21 + 0xc);
    if ((ulong)*(uint *)(unaff_x19 + 0x18) <= unaff_x25 + 2) break;
    if (in_stack_000000e8 == 0) goto LAB_019d0078;
    OVRPlugin__EraseSpace
              (&stack0x00000060,in_stack_000000e8,
               *(undefined4 *)(unaff_x19 + (unaff_x23 >> 0x1e) + 0x20),0);
    in_stack_00000088 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    lVar1 = *unaff_x22;
    in_stack_00000080 = in_stack_00000060;
    *(undefined8 *)(unaff_x21 + 0x14) = uStack0000000000000074;
    *(ulong *)(unaff_x21 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack0000000000000054 = *(undefined8 *)(unaff_x21 + 0x54);
    uStack0000000000000034 = *(undefined8 *)(unaff_x21 + 0x34);
    uStack0000000000000048 = (undefined4)in_stack_000000c8;
    in_stack_00000040 = in_stack_000000c0;
    uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x21 + 0x4c);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x4c) >> 0x20);
    uStack0000000000000028 = (undefined4)in_stack_000000a8;
    in_stack_00000020 = in_stack_000000a0;
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x21 + 0x2c);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x2c) >> 0x20);
    fVar2 = (float)FUN_019cfa08(&stack0x00000040,&stack0x00000020);
    unaff_x25 = unaff_x25 + 1;
    unaff_s8 = unaff_s8 + fVar2;
    unaff_x23 = unaff_x23 + unaff_x24;
    if ((long)(unaff_x20 + ((ulong)*(uint *)(unaff_x19 + 0x18) << 0x20)) >> 0x20 <= (long)unaff_x25)
    {
      return unaff_s8;
    }
  } while (unaff_x25 < *(uint *)(unaff_x19 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}



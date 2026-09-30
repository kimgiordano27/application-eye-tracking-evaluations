/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._HideOverlay$$BeginInvoke
ENTRY_POINT: 019cfe94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


float OVR_OpenVR_IVROverlay__HideOverlay__BeginInvoke(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar6;
  float fVar7;
  float fVar8;
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
  
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_6481) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
        goto LAB_019cfeec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724();
LAB_019cfeec:
  uVar4 = (*(code *)*puVar2)();
  puVar1 = PTR_DAT_033ee740;
  fVar8 = 0.0;
  if ((uVar4 & 1) != 0) {
    if (unaff_x19 == 0) {
LAB_019d0078:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
    if (0 < (long)((uVar4 << 0x20) + -0x200000000)) {
      uVar6 = 0;
      fVar8 = 0.0;
      lVar3 = 0x200000000;
      do {
        if (uVar4 <= uVar6) {
LAB_019d0074:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (in_stack_000000e8 == 0) goto LAB_019d0078;
        OVRPlugin__EraseSpace
                  (&stack0x000000a0,in_stack_000000e8,*(undefined4 *)(unaff_x19 + uVar6 * 4 + 0x20),
                   0);
        in_stack_000000c8 = in_stack_000000a8;
        in_stack_000000c0 = in_stack_000000a0;
        uStack00000000000000d4 = uStack00000000000000b4;
        uStack00000000000000d0 = uStack00000000000000b0;
        if ((ulong)*(uint *)(unaff_x19 + 0x18) <= uVar6 + 1) goto LAB_019d0074;
        if (in_stack_000000e8 == 0) goto LAB_019d0078;
        OVRPlugin__EraseSpace
                  (&stack0x00000080,in_stack_000000e8,*(undefined4 *)(unaff_x19 + uVar6 * 4 + 0x24),
                   0);
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        uStack00000000000000b4 = uStack0000000000000094;
        uStack00000000000000b0 = uStack0000000000000090;
        if ((ulong)*(uint *)(unaff_x19 + 0x18) <= uVar6 + 2) goto LAB_019d0074;
        if (in_stack_000000e8 == 0) goto LAB_019d0078;
        OVRPlugin__EraseSpace
                  (&stack0x00000060,in_stack_000000e8,
                   *(undefined4 *)(unaff_x19 + (lVar3 >> 0x1e) + 0x20),0);
        in_stack_00000088 = in_stack_00000068;
        in_stack_00000080 = in_stack_00000060;
        uStack0000000000000094 = uStack0000000000000074;
        uStack0000000000000090 = uStack0000000000000070;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00000048 = in_stack_000000c8;
        in_stack_00000040 = in_stack_000000c0;
        uStack0000000000000054 = uStack00000000000000d4;
        uStack0000000000000050 = uStack00000000000000d0;
        in_stack_00000028 = in_stack_000000a8;
        in_stack_00000020 = in_stack_000000a0;
        uStack0000000000000034 = uStack00000000000000b4;
        uStack0000000000000030 = uStack00000000000000b0;
        fVar7 = (float)FUN_019cfa08(&stack0x00000040,&stack0x00000020);
        uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
        fVar8 = fVar8 + fVar7;
        lVar3 = lVar3 + 0x100000000;
      } while ((long)uVar6 < (long)((uVar4 << 0x20) + -0x200000000) >> 0x20);
    }
  }
  return fVar8;
}



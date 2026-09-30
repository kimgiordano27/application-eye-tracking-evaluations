/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 06019bbc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SendVirtualKeyboardInput(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
  FUN_031f20f4();
  FUN_031f20f4(PTR_DAT_075f7488);
  FUN_031f20f4(PTR_DAT_075d64f0);
  *(undefined1 *)(unaff_x22 + 0xa18) = 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e684bc(0);
  uStack0000000000000034 = uStack0000000000000014;
  in_stack_00000030 = uStack0000000000000010;
  in_stack_00000028 = uStack0000000000000008;
  uStack000000000000002c = uStack000000000000000c;
  in_stack_00000020 = in_stack_00000000;
  unaff_x19[1] = _uStack0000000000000008;
  *unaff_x19 = in_stack_00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  uVar1 = FUN_06019728();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_060196d0();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f7488) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06019c8c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar2,*(long *)PTR_DAT_075f7488,0);
LAB_06019c8c:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f39f0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_06019cf8;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar2,*(long *)PTR_DAT_075f39f0,2);
LAB_06019cf8:
      uVar1 = (*(code *)*puVar3)(plVar2,unaff_w20,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      FUN_06019aa4();
      if (*(long *)(unaff_x21 + 0x80) != 0) {
        FUN_06036a90(&stack0x00000020,*(long *)(unaff_x21 + 0x80),unaff_w20,0);
        unaff_x19[1] = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *unaff_x19 = in_stack_00000020;
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$.ctor
ENTRY_POINT: 06ca43d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
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
  
  uStack0000000000000018 = in_stack_00000058;
  uStack0000000000000010 = in_stack_00000050;
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04481fb8(lVar4);
  }
  thunk_FUN_04484e3c(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000010);
  puVar1 = PTR_DAT_09f2a3b0;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2a3b0) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06ca446c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_06ca446c:
  iVar2 = (*(code *)*puVar3)();
  if (iVar2 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x21 + 0x18);
    uStack0000000000000010 = *(undefined8 *)(unaff_x21 + 0x10);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000010);
    in_stack_00000028 = in_stack_00000058;
    in_stack_00000020 = in_stack_00000050;
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000030 = in_stack_00000060;
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8(lVar4);
    }
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06ca453c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_06ca453c:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 == 0) {
      uStack0000000000000018 = *(undefined8 *)(unaff_x21 + 0x28);
      uStack0000000000000010 = *(undefined8 *)(unaff_x21 + 0x20);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),&stack0x00000010);
      in_stack_00000038 = in_stack_00000068;
      in_stack_00000030 = in_stack_00000060;
      in_stack_00000048 = in_stack_00000078;
      in_stack_00000040 = in_stack_00000070;
      in_stack_00000028 = in_stack_00000058;
      in_stack_00000020 = in_stack_00000050;
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8(lVar4);
      }
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06ca460c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac();
LAB_06ca460c:
      (*(code *)*puVar3)();
    }
  }
  return;
}



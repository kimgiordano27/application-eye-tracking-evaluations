/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$.cctor
ENTRY_POINT: 06ca2fb4
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>___cctor(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  thunk_FUN_04484e3c(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000020);
  in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,in_stack_00000058);
  in_stack_00000010 = in_stack_00000050;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  thunk_FUN_04484e3c(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000010);
  puVar1 = PTR_DAT_09f2a3b0;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2a3b0) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06ca3078;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac();
LAB_06ca3078:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x14);
    in_stack_00000010 = *(undefined8 *)(unaff_x21 + 0xc);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000010);
    in_stack_00000028 = in_stack_00000058;
    uStack0000000000000020 = in_stack_00000050;
    in_stack_00000038 = (undefined4)in_stack_00000068;
    uStack000000000000003c = (undefined4)((ulong)in_stack_00000068 >> 0x20);
    in_stack_00000030 = (undefined4)in_stack_00000060;
    uStack0000000000000034 = (undefined4)((ulong)in_stack_00000060 >> 0x20);
    in_stack_00000040 = (undefined4)in_stack_00000070;
    uStack0000000000000044 = (undefined4)((ulong)in_stack_00000070 >> 0x20);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06ca314c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_06ca314c:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      in_stack_00000010 = *(undefined8 *)(unaff_x21 + 0x1c);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0x24));
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),&stack0x00000010);
      in_stack_00000040 = (undefined4)in_stack_00000070;
      uStack0000000000000044 = (undefined4)((ulong)in_stack_00000070 >> 0x20);
      in_stack_00000028 = in_stack_00000058;
      uStack0000000000000020 = in_stack_00000050;
      in_stack_00000038 = (undefined4)in_stack_00000068;
      uStack000000000000003c = (undefined4)((ulong)in_stack_00000068 >> 0x20);
      in_stack_00000030 = (undefined4)in_stack_00000060;
      uStack0000000000000034 = (undefined4)((ulong)in_stack_00000060 >> 0x20);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
      lVar3 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06ca3230;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac();
LAB_06ca3230:
      (*(code *)*puVar4)();
    }
  }
  return;
}



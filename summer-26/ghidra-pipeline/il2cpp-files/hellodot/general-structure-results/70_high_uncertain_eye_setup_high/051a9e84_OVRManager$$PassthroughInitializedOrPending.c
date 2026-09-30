/*
FUNCTION_NAME: OVRManager$$PassthroughInitializedOrPending
ENTRY_POINT: 051a9e84
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__PassthroughInitializedOrPending(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xc40));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604c48);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604c28);
  *(undefined1 *)(unaff_x21 + 0x2c0) = 1;
  _uStack0000000000000048 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06604c28) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_051a9f14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051a9f14:
    lVar3 = (*(code *)*puVar2)();
    if (unaff_x19 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar5 = FUN_051af030();
      if ((uVar5 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        if (lVar3 == 0) goto LAB_051aa0e4;
        uVar1 = FUN_051ce158(lVar3,0);
        _uStack0000000000000048 = CONCAT44(uVar1,uStack0000000000000048);
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06604c48) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
              goto LAB_051a9fb4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051a9fb4:
        (*(code *)*puVar2)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(*(long *)PTR_DAT_06604c40 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_051cd958(&stack0x00000020,(long)&stack0x00000048 + 4,0);
        uVar7 = uStack000000000000004c;
      }
      uVar5 = FUN_051af0e0();
      if ((uVar5 & 1) != 0) {
        if (lVar3 == 0) goto LAB_051aa0e4;
        uVar1 = FUN_051ce238(lVar3,0);
        _uStack0000000000000048 = CONCAT44(uStack000000000000004c,uVar1);
        lVar3 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06604c48) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_051aa07c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051aa07c:
        (*(code *)*puVar2)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(*(long *)PTR_DAT_06604c40 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_051cd958(&stack0x00000020,&stack0x00000048,0);
        uVar7 = uStack0000000000000048 | uVar7;
      }
    }
    return uVar7;
  }
LAB_051aa0e4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}



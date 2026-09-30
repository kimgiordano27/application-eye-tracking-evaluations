/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<object>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04e1f5a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<object>__get_NumberOfDisplayStrings(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  undefined4 unaff_w26;
  undefined8 unaff_x27;
  undefined4 uVar6;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar6 = (undefined4)((ulong)unaff_x27 >> 0x20);
  iVar1 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (iVar1 == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000010 = *(undefined8 *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&stack0x00000010);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000008._4_4_ = uVar6;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&stack0x00000008);
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04e1f670;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08();
LAB_04e1f670:
    iVar1 = (*(code *)*puVar3)();
    if (iVar1 == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 0x28));
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38),&stack0x00000010);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,unaff_w26);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38),&stack0x00000008);
      iVar1 = FUN_02d355c4(0,*unaff_x25);
      if (iVar1 == 0) {
        lVar2 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000010 = CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)(unaff_x21 + 0x2c));
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x40),&stack0x00000010);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000008 =
             CONCAT71(in_stack_00000008._1_7_,(char)((ulong)in_stack_00000000 >> 0x20)) &
             0xffffffffffffff01;
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x40),&stack0x00000008);
        iVar1 = FUN_02d355c4(0,*unaff_x25);
        if (iVar1 == 0) {
          lVar2 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000010 = CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)(unaff_x21 + 0x2d));
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(**(undefined8 **)(lVar2 + 0xc0),&stack0x00000010);
          lVar2 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000008 =
               CONCAT71(in_stack_00000008._1_7_,(char)((ulong)in_stack_00000000 >> 0x28));
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(**(undefined8 **)(lVar2 + 0xc0),&stack0x00000008);
          FUN_02d355c4(0,*unaff_x25);
        }
      }
    }
  }
  return;
}



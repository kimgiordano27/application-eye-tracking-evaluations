/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 01b3e9e0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w24;
  long *unaff_x25;
  undefined4 unaff_w26;
  undefined8 unaff_x27;
  undefined4 uVar6;
  undefined4 unaff_w28;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar6 = (undefined4)((ulong)unaff_x27 >> 0x20);
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0103c348();
      goto LAB_01b3ea10;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_01b3ea10:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) != 0) {
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 8));
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000018);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,unaff_w28);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01b3ead0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3ead0:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) != 0) {
      in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x10);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),&stack0x00000018);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      in_stack_00000008._4_4_ = uVar6;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244(lVar4);
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),&stack0x00000008);
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01b3eb90;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3eb90:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) != 0) {
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0x18));
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20),&stack0x00000018);
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,unaff_w26);
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244(lVar4);
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20),&stack0x00000008);
        lVar4 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_01b3ec50;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3ec50:
        uVar3 = (*(code *)*puVar2)();
        if ((uVar3 & 1) != 0) {
          in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,*(undefined1 *)(unaff_x21 + 0x1c));
          lVar4 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),&stack0x00000018);
          in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,unaff_w24) & 0xffffffffffffff01;
          lVar4 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244(lVar4);
          }
          thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),&stack0x00000008);
          lVar4 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x25) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_01b3ed3c;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b3ed3c:
          uVar1 = (*(code *)*puVar2)();
          goto LAB_01b3ed0c;
        }
      }
    }
  }
  uVar1 = 0;
LAB_01b3ed0c:
  return uVar1 & 1;
}



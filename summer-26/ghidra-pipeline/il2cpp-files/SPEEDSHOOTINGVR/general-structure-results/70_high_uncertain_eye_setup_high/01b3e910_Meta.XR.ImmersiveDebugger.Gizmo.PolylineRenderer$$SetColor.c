/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColor
ENTRY_POINT: 01b3e910
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


uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar6 = FUN_0103c244();
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  puVar7 = (undefined8 *)thunk_FUN_01040230();
  in_stack_00000018 = *unaff_x21;
  uVar10 = *puVar7;
  uVar3 = *(undefined4 *)(puVar7 + 1);
  uVar11 = puVar7[2];
  uVar1 = *(undefined4 *)(puVar7 + 3);
  uVar2 = *(undefined4 *)((long)puVar7 + 0x1c);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000018);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000008 = uVar10;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000008);
  puVar4 = PTR_DAT_0234d9c0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234d9c0) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01b3ea10;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b3ea10:
  uVar8 = (*(code *)*puVar7)();
  if ((uVar8 & 1) != 0) {
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 1));
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000018);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar3);
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000008);
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01b3ead0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b3ead0:
    uVar8 = (*(code *)*puVar7)();
    if ((uVar8 & 1) != 0) {
      in_stack_00000018 = unaff_x21[2];
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),&stack0x00000018);
      lVar6 = *(long *)(unaff_x20 + 0x20);
      in_stack_00000008 = uVar11;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244(lVar6);
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),&stack0x00000008);
      lVar6 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01b3eb90;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b3eb90:
      uVar8 = (*(code *)*puVar7)();
      if ((uVar8 & 1) != 0) {
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 3));
        lVar6 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0103c244();
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),&stack0x00000018);
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar1);
        lVar6 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0103c244(lVar6);
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),&stack0x00000008);
        lVar6 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01b3ec50;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b3ec50:
        uVar8 = (*(code *)*puVar7)();
        if ((uVar8 & 1) != 0) {
          in_stack_00000018 =
               CONCAT71(in_stack_00000018._1_7_,*(undefined1 *)((long)unaff_x21 + 0x1c));
          lVar6 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0103c244();
          }
          thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),&stack0x00000018);
          in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,(char)uVar2) & 0xffffffffffffff01;
          lVar6 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0103c244(lVar6);
          }
          thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),&stack0x00000008);
          lVar6 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_01b3ed3c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b3ed3c:
          uVar5 = (*(code *)*puVar7)();
          goto LAB_01b3ed0c;
        }
      }
    }
  }
  uVar5 = 0;
LAB_01b3ed0c:
  return uVar5 & 1;
}



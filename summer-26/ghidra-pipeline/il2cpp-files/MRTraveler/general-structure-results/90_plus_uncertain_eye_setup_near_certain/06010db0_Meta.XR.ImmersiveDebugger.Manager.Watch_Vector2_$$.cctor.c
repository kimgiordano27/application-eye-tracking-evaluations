/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 06010db0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 uStack0000000000000004;
  byte in_stack_00000008;
  undefined1 uStack000000000000000c;
  
  FUN_03c8f898();
  *(undefined1 *)(unaff_x22 + 0xb8c) = 1;
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    if (*unaff_x21 == lVar4) {
      lVar4 = *(long *)(unaff_x23 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244(lVar4);
      }
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      puVar5 = (undefined8 *)thunk_FUN_03cf5388();
      uStack000000000000000c = *unaff_x20;
      uVar1 = *puVar5;
      lVar4 = *(long *)(unaff_x23 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      thunk_FUN_03cf4e64(**(undefined8 **)(lVar4 + 0xc0),&stack0x0000000c);
      in_stack_00000008 = (byte)uVar1 & 1;
      lVar4 = *(long *)(unaff_x23 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244(lVar4);
      }
      thunk_FUN_03cf4e64(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000008);
      puVar2 = PTR_DAT_08e80978;
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e80978) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06010ef8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06010ef8:
      uVar6 = (*(code *)*puVar5)();
      if ((uVar6 & 1) != 0) {
        uStack0000000000000004 = unaff_x20[1];
        lVar4 = *(long *)(unaff_x23 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03cf1244();
        }
        thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000004);
        lVar4 = *(long *)(unaff_x23 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03cf1244(lVar4);
        }
        thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
        lVar4 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06010fbc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06010fbc:
        uVar6 = (*(code *)*puVar5)();
        if ((uVar6 & 1) != 0) {
          lVar4 = *unaff_x19;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_06011024;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06011024:
          uVar6 = (*(code *)*puVar5)();
          if ((uVar6 & 1) != 0) {
            lVar4 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_060110b0;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_060110b0:
            uVar3 = (*(code *)*puVar5)();
            goto LAB_06011084;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_06011084:
  return uVar3 & 1;
}



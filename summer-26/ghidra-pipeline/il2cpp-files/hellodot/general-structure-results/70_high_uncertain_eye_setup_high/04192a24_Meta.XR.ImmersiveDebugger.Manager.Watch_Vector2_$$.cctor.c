/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 04192a24
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  byte in_stack_00000008;
  undefined1 uStack000000000000000c;
  
  lVar4 = FUN_02ce0978();
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02ce0978();
  }
  if (*unaff_x22 == lVar4) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978(lVar4);
    }
    if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    lVar4 = thunk_FUN_02cea9e8();
    puVar2 = PTR_DAT_065dcb20;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *unaff_x19;
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065dcb20) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04192af0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_04192af0:
    uVar7 = (*(code *)*puVar5)();
    if ((uVar7 & 1) != 0) {
      uStack000000000000000c = *(undefined1 *)(unaff_x21 + 8);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02ce0978();
      }
      thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x0000000c);
      in_stack_00000008 = (byte)uVar1 & 1;
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02ce0978(lVar4);
      }
      thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
      lVar4 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04192bd4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_04192bd4:
      uVar3 = (*(code *)*puVar5)();
      goto LAB_04192bac;
    }
  }
  uVar3 = 0;
LAB_04192bac:
  return uVar3 & 1;
}



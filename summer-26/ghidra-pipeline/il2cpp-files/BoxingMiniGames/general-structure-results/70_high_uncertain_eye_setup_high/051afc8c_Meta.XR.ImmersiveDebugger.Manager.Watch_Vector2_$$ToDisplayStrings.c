/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ToDisplayStrings
ENTRY_POINT: 051afc8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ToDisplayStrings(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0367c9fc();
  }
  if (*unaff_x22 == param_1) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    puVar6 = (undefined4 *)thunk_FUN_0367ff68();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uStack000000000000000c = *unaff_x21;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    thunk_FUN_0367fa58(**(undefined8 **)(lVar5 + 0xc0),&stack0x0000000c);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000008 = uVar1;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    thunk_FUN_0367fa58(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000008);
    puVar3 = PTR_DAT_079fd7b8;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fd7b8) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_051afdb4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30();
LAB_051afdb4:
    uVar8 = (*(code *)*puVar7)();
    if ((uVar8 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + 0x20);
      uStack000000000000000c = unaff_x21[1];
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x0000000c);
      lVar5 = *(long *)(unaff_x20 + 0x20);
      in_stack_00000008 = uVar2;
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000008);
      lVar5 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_051afe94;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30();
LAB_051afe94:
      uVar4 = (*(code *)*puVar7)();
      goto LAB_051afe6c;
    }
  }
  uVar4 = 0;
LAB_051afe6c:
  return uVar4 & 1;
}



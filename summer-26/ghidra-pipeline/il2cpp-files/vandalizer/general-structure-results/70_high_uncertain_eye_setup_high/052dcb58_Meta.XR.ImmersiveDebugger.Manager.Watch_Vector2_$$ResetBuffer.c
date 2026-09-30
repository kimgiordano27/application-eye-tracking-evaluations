/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 052dcb58
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer
               (undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000018;
  
  uVar8 = *param_2;
  uVar7 = param_2[1];
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack0000000000000000 = param_1;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(**(undefined8 **)(lVar3 + 0xc0));
  lVar3 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000018 = uVar8;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  thunk_FUN_0322ed78(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000018);
  puVar1 = PTR_DAT_075da548;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075da548) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_052dcc18;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_052dcc18:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    uStack0000000000000000 = CONCAT44(uStack0000000000000000._4_4_,*(undefined4 *)(unaff_x21 + 8));
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,(int)uVar7);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000018);
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_052dccd8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_052dccd8:
    (*(code *)*puVar4)();
  }
  return;
}



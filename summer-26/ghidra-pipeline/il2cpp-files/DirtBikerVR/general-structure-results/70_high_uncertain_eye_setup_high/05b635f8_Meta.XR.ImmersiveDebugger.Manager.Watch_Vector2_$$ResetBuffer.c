/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 05b635f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  if (param_1 != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40();
  }
  puVar5 = (undefined4 *)thunk_FUN_03ac7604();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000008 = *unaff_x21;
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  thunk_FUN_03ac70f4(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000008);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uStack0000000000000004 = uVar1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  thunk_FUN_03ac70f4(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000004);
  puVar3 = PTR_DAT_08495ab8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08495ab8) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05b636c8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_03ac43c4();
LAB_05b636c8:
  iVar4 = (*(code *)*puVar7)();
  if (iVar4 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000008 = CONCAT22(in_stack_00000008._2_2_,*(undefined2 *)(unaff_x21 + 1));
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000008);
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uStack0000000000000004 = CONCAT22(uStack0000000000000004._2_2_,(short)uVar2);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000004);
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_05b63788;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03ac43c4();
FUN_05b63788:
    (*(code *)*puVar7)();
  }
  return;
}



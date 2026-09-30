/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 06ca48c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = unaff_x21[1];
  uStack0000000000000020 = *unaff_x21;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
  thunk_FUN_04484e3c(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000020);
  puVar1 = PTR_DAT_09f25788;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f25788) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_06ca4950;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac();
LAB_06ca4950:
  uVar2 = (*(code *)*puVar6)();
  in_stack_00000018 = unaff_x21[3];
  in_stack_00000010 = unaff_x21[2];
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
  }
  thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000010);
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_06ca49e8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac();
LAB_06ca49e8:
  uVar3 = (*(code *)*puVar6)();
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
  }
  thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_06ca4a80;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac();
LAB_06ca4a80:
  uVar4 = (*(code *)*puVar6)();
  FUN_07a5d104(uVar2,uVar3,uVar4,0);
  return;
}



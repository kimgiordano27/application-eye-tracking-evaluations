/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfDisplayStrings
ENTRY_POINT: 05b6404c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfDisplayStrings(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar5 = (undefined4 *)thunk_FUN_03ac7604();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000000c = *unaff_x21;
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  thunk_FUN_03ac70f4(**(undefined8 **)(lVar6 + 0xc0),&stack0x0000000c);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000008 = uVar1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  thunk_FUN_03ac70f4(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000008);
  puVar3 = PTR_DAT_084917d8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_084917d8) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05b6410c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_03ac43c4();
LAB_05b6410c:
  uVar8 = (*(code *)*puVar7)();
  if ((uVar8 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uStack000000000000000c = unaff_x21[1];
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x0000000c);
    lVar6 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000008 = uVar2;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000008);
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05b641ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03ac43c4();
LAB_05b641ec:
    uVar4 = (*(code *)*puVar7)();
  }
  return uVar4 & 1;
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 05b644b0
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03ac4090();
  }
  if (*unaff_x22 != param_1) {
    in_stack_00000008 = *unaff_x21;
    lVar5 = FUN_0351a760(*(undefined8 *)(unaff_x20 + 0x20));
    uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8),&stack0x00000008);
    plVar9 = (long *)thunk_FUN_03a9a6e8(uVar8,0);
    FUN_0350b94c();
    uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar10 = thunk_FUN_03af1434(PTR_DAT_08495ac0);
    uVar8 = FUN_065adf54(uVar10,uVar8,0);
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar10 = thunk_FUN_03ac74bc();
    uVar11 = thunk_FUN_03af1434(PTR_DAT_08493fd8);
    FUN_066af718(uVar10,uVar8,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar10);
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03ac4090();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03ac4090(lVar5);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40();
  }
  puVar6 = (undefined4 *)thunk_FUN_03ac7604();
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,*(undefined4 *)unaff_x21);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03ac4090();
  }
  thunk_FUN_03ac70f4(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000008);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uStack0000000000000004 = uVar1;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03ac4090();
  }
  thunk_FUN_03ac70f4(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000004);
  puVar3 = PTR_DAT_08495ab8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08495ab8) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05b645e0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_03ac43c4();
LAB_05b645e0:
  iVar4 = (*(code *)*puVar7)();
  if (iVar4 == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,*(undefined4 *)((long)unaff_x21 + 4));
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000008);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uStack0000000000000004 = uVar2;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000004);
    lVar5 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05b646a0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03ac43c4();
LAB_05b646a0:
    (*(code *)*puVar7)();
  }
  return;
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 05b63548
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


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues
          (undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  if ((DAT_08978b03 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08495ab8);
    DAT_08978b03 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar6 = 1;
  }
  else {
    lVar4 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    if (*param_2 != lVar4) {
      in_stack_00000008 = *param_1;
      lVar4 = FUN_0351a760(*(undefined8 *)(param_4 + 0x20));
      uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8),&stack0x00000008);
      plVar9 = (long *)thunk_FUN_03a9a6e8(uVar6,0);
      FUN_0350b94c();
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      uVar7 = thunk_FUN_03af1434(PTR_DAT_08495ac0);
      uVar6 = FUN_065adf54(uVar7,uVar6,0);
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar7 = thunk_FUN_03ac74bc();
      uVar10 = thunk_FUN_03af1434(PTR_DAT_08493fd8);
      FUN_066af718(uVar7,uVar6,uVar10,0);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar7,param_4);
    }
    lVar4 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(param_2);
    }
    puVar5 = (undefined4 *)thunk_FUN_03ac7604();
    lVar4 = *(long *)(param_4 + 0x20);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,*(undefined4 *)param_1);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    uVar6 = thunk_FUN_03ac70f4(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000008);
    lVar4 = *(long *)(param_4 + 0x20);
    uStack0000000000000004 = uVar1;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    uVar7 = thunk_FUN_03ac70f4(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000004);
    puVar3 = PTR_DAT_08495ab8;
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08495ab8) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05b636c8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(param_3,*(long *)PTR_DAT_08495ab8,0);
LAB_05b636c8:
    uVar6 = (*(code *)*puVar8)(param_3,uVar6,uVar7,puVar8[1]);
    if ((int)uVar6 == 0) {
      lVar4 = *(long *)(param_4 + 0x20);
      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,*(undefined2 *)((long)param_1 + 4));
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
      lVar4 = *(long *)(param_4 + 0x20);
      uStack0000000000000004 = CONCAT22(uStack0000000000000004._2_2_,(short)uVar2);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000004);
      lVar4 = *param_3;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto FUN_05b63788;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(param_3,*(long *)puVar3,0);
FUN_05b63788:
      uVar6 = (*(code *)*puVar8)(param_3,uVar6,uVar7,puVar8[1]);
    }
  }
  return uVar6;
}



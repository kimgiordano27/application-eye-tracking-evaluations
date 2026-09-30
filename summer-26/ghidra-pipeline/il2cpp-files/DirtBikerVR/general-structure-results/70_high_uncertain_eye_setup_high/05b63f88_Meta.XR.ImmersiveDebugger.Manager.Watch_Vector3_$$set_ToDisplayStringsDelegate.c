/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 05b63f88
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


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_ToDisplayStringsDelegate
               (undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((DAT_08978b07 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084917d8);
    DAT_08978b07 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar5 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090();
    }
    if (*param_2 == lVar5) {
      lVar5 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090(lVar5);
      }
      if (*(long *)(*param_2 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(param_2);
      }
      puVar6 = (undefined4 *)thunk_FUN_03ac7604();
      lVar5 = *(long *)(param_4 + 0x20);
      uStack000000000000000c = *param_1;
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090();
      }
      uVar7 = thunk_FUN_03ac70f4(**(undefined8 **)(lVar5 + 0xc0),&stack0x0000000c);
      lVar5 = *(long *)(param_4 + 0x20);
      in_stack_00000008 = uVar1;
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090();
      }
      uVar8 = thunk_FUN_03ac70f4(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000008);
      puVar3 = PTR_DAT_084917d8;
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *param_3;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_084917d8) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05b6410c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(param_3,*(long *)PTR_DAT_084917d8,0);
LAB_05b6410c:
      uVar10 = (*(code *)*puVar9)(param_3,uVar7,uVar8,puVar9[1]);
      if ((uVar10 & 1) != 0) {
        lVar5 = *(long *)(param_4 + 0x20);
        uStack000000000000000c = param_1[1];
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03ac4090();
        }
        uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x0000000c)
        ;
        lVar5 = *(long *)(param_4 + 0x20);
        in_stack_00000008 = uVar2;
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03ac4090();
        }
        uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000008)
        ;
        lVar5 = *param_3;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05b641ec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4(param_3,*(long *)puVar3,0);
LAB_05b641ec:
        uVar4 = (*(code *)*puVar9)(param_3,uVar7,uVar8,puVar9[1]);
        goto LAB_05b641c4;
      }
    }
  }
  uVar4 = 0;
LAB_05b641c4:
  return uVar4 & 1;
}



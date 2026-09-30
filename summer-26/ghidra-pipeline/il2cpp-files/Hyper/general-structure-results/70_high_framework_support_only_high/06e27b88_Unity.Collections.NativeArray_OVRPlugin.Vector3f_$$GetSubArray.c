/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetSubArray
ENTRY_POINT: 06e27b88
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetSubArray
              (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  FUN_05e63968(param_2,0x14,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58));
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34(lVar3);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(param_2);
    }
    puVar2 = (undefined8 *)thunk_FUN_049840a8(param_2);
    uVar7 = puVar2[1];
    uVar5 = *puVar2;
    uVar11 = puVar2[3];
    uVar9 = puVar2[2];
    lVar3 = *(long *)(param_1 + 0x10);
    uVar8 = puVar2[5];
    uVar6 = puVar2[4];
    uVar12 = puVar2[7];
    uVar10 = puVar2[6];
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x40;
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + 0x28) = uVar7;
        *(undefined8 *)(lVar3 + 0x20) = uVar5;
        *(undefined8 *)(lVar3 + 0x38) = uVar11;
        *(undefined8 *)(lVar3 + 0x30) = uVar9;
        *(undefined8 *)(lVar3 + 0x48) = uVar8;
        *(undefined8 *)(lVar3 + 0x40) = uVar6;
        *(undefined8 *)(lVar3 + 0x58) = uVar12;
        *(undefined8 *)(lVar3 + 0x50) = uVar10;
        thunk_FUN_049ee3d8(lVar3 + 0x20,0);
      }
      else {
        in_stack_00000040 = uVar5;
        in_stack_00000048 = uVar7;
        in_stack_00000050 = uVar9;
        in_stack_00000058 = uVar11;
        in_stack_00000060 = uVar6;
        in_stack_00000068 = uVar8;
        in_stack_00000070 = uVar10;
        in_stack_00000078 = uVar12;
        FUN_06e27b04(param_1,&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      return *(int *)(param_1 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



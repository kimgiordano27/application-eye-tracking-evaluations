/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 047a9ec4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_03f154b4(param_2,0x14,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58));
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(param_2);
    }
    puVar2 = (undefined8 *)thunk_FUN_0367ff68(param_2);
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    uVar8 = puVar2[3];
    uVar7 = puVar2[2];
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x20;
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + 0x28) = uVar6;
        *(undefined8 *)(lVar3 + 0x20) = uVar5;
        *(undefined8 *)(lVar3 + 0x38) = uVar8;
        *(undefined8 *)(lVar3 + 0x30) = uVar7;
        thunk_FUN_036b7ad0(lVar3 + 0x20,0);
      }
      else {
        in_stack_00000020 = uVar5;
        in_stack_00000028 = uVar6;
        in_stack_00000030 = uVar7;
        in_stack_00000038 = uVar8;
        FUN_047a9e48(param_1,&stack0x00000020,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      return *(int *)(param_1 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}



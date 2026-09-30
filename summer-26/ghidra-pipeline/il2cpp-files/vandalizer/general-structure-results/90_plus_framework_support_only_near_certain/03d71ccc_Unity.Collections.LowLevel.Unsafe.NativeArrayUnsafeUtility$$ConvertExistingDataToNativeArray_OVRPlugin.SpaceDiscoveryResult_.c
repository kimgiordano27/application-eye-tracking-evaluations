/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03d71ccc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
               long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_x9 == 0) {
    FUN_0322bf50(param_5);
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar5 = thunk_FUN_0322f148();
    uVar2 = thunk_FUN_03257e30(PTR_DAT_075d6aa8);
    FUN_05d6f364(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar5,param_5);
  }
  lVar3 = **(long **)(param_5 + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  lVar4 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_03d71d60;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8(param_2,lVar3,1);
LAB_03d71d60:
  uVar6 = (*(code *)*puVar1)(param_2,param_3,&stack0x00000008,puVar1[1]);
  puVar1 = &stack0x00000008;
  if ((uVar6 & 1) == 0) {
    puVar1 = param_4;
  }
  uVar2 = *puVar1;
  uVar5 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = uVar5;
  return;
}



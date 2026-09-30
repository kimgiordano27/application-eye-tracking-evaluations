/*
FUNCTION_NAME: FUN_05db9e10
ENTRY_POINT: 05db9e10
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_05db9e10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar5 = 
  Method_UnityEngine_Playables_ScriptPlayable<VisualEffectControlPlayableBehaviour>_op_Implicit__;
  puVar4 = Method_Unity_VisualScripting_Project<Vector3>__ctor__;
  puVar3 = PTR_DAT_0676a790;
  puVar2 = PTR_DAT_0676a758;
  puVar1 = PTR_DAT_06769e80;
  if ((DAT_06b83023 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676a790);
    FUN_02d6084c(
                Method_UnityEngine_Playables_ScriptPlayable<VisualEffectControlPlayableBehaviour>_op_Implicit__
                );
    FUN_02d6084c(PTR_DAT_0676a758);
    FUN_02d6084c(
                Method_System_Collections_Generic_Queue<Tuple<SendOrPostCallback,_object>>_Dequeue__
                );
    FUN_02d6084c(PTR_DAT_06769e80);
    FUN_02d6084c(PTR_DAT_06769e88);
    FUN_02d6084c(Method_Unity_VisualScripting_Project<Vector3>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_CreateResolvedPromise__
                );
    DAT_06b83023 = 1;
  }
  FUN_05db7de4(param_1);
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04d62ba4(uVar6,param_1,*(undefined8 *)puVar5,0);
  uVar6 = FUN_05dc15a0(param_1,*(undefined8 *)puVar4,uVar6,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  thunk_FUN_02dd37b4();
  lVar7 = FUN_035d1fbc(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  puVar3 = Method_System_Collections_Generic_Queue<Tuple<SendOrPostCallback,_object>>_Dequeue__;
  puVar2 = Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_CreateResolvedPromise__;
  puVar1 = PTR_DAT_06769e88;
  if (lVar7 != 0) {
    uVar6 = FUN_05da9378();
    puVar9 = (undefined8 *)(param_1 + 0xb0);
    *puVar9 = uVar6;
    thunk_FUN_02dd37b4(puVar9,lVar7);
    uVar6 = FUN_035d29c8(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
    puVar8 = (undefined8 *)(param_1 + 0xc0);
    *puVar8 = uVar6;
    thunk_FUN_02dd37b4(puVar8);
    uVar6 = FUN_05dc1798(param_1,*(undefined8 *)puVar2,0);
    puVar10 = (undefined8 *)(param_1 + 0xb8);
    *puVar10 = uVar6;
    thunk_FUN_02dd37b4(puVar10,uVar6);
    thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),0);
    thunk_FUN_05dc64d0(param_1,*puVar9,*(undefined8 *)(param_1 + 0xa8),0);
    thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0xa8),*puVar8,0);
    thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0xa8),*puVar10,0);
    if (*(int *)(param_1 + 0x90) == 2) {
      thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



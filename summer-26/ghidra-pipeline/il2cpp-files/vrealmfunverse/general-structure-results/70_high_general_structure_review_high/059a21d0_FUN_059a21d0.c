/*
FUNCTION_NAME: FUN_059a21d0
ENTRY_POINT: 059a21d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_7;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059a2534) */

void FUN_059a21d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long local_48;
  
  puVar1 = Method_System_Array_Resize<Muscle>__;
                    /* try { // try from 059a21dc to 05aa21df has its CatchHandler @ 059a2a74 */
                    /* try { // try from 059a21ec to 05aa224b has its CatchHandler @ 059a2a84 */
  if ((DAT_066d39e6 & 1) == 0) {
    FUN_02b3c81c(Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__);
    FUN_02b3c81c(Method_System_Array_Resize<Muscle>__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_AsyncGPUReadback_RequestIntoNativeArray<float>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__);
    FUN_02b3c81c(Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__);
    DAT_066d39e6 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_48 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x78);
  if ((lVar2 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar3 = (long *)FUN_032fab48(param_2,*(undefined8 *)(lVar2 + 0x20),&local_48,lVar2,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__
                                ,0x139,*(undefined8 *)
                                        Method_UnityEngine_Rendering_AsyncGPUReadback_RequestIntoNativeArray<float>__
                               );
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(local_48 + 0x10) = param_3;
  thunk_FUN_02bb0e9c((long *)(local_48 + 0x10),param_3);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar6 = *(undefined8 *)(param_3 + 0xf8);
  *(undefined8 *)(local_48 + 0x18) = param_4;
  *(undefined8 *)(local_48 + 0x28) = uVar6;
  thunk_FUN_02bb0e9c((undefined8 *)(local_48 + 0x18),param_4);
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(local_48 + 0x20) = param_1;
  thunk_FUN_02bb0e9c((undefined8 *)(local_48 + 0x20),param_1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar2 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto FUN_059a238c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02b7654c(plVar3,*(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,
                        0xb);
FUN_059a238c:
  (*(code *)*puVar4)(plVar3,0,puVar4[1]);
  puVar1 = Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__;
  lVar2 = *(long *)Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar9 = puVar4[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                              );
    FUN_03e026bc(lVar9,uVar6,
                 *(undefined8 *)Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>__,
                 0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar9;
    thunk_FUN_02bb0e9c(plVar5,lVar9);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar2 = *plVar3;
  lVar10 = *(long *)Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_059a2480;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar2 = FUN_02b7654c(plVar3);
LAB_059a2480:
  lVar2 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar2 + 8),lVar10);
  (**(code **)(lVar2 + 8))(plVar3,lVar9,lVar2);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059a2504;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_06312f78,0);
LAB_059a2504:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}



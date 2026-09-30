/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRControllerRecording$$AddRecordingFrame
ENTRY_POINT: 059a22ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x059a2534) */

void UnityEngine_XR_Interaction_Toolkit_XRControllerRecording__AddRecordingFrame(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long in_stack_00000018;
  long *in_stack_00000028;
  
  *(long *)(param_1 + 0x10) = unaff_x21;
  thunk_FUN_02bb0e9c();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar4 = *(undefined8 *)(unaff_x21 + 0xf8);
  *(undefined8 *)(in_stack_00000018 + 0x18) = unaff_x20;
  *(undefined8 *)(in_stack_00000018 + 0x28) = uVar4;
  thunk_FUN_02bb0e9c();
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(in_stack_00000018 + 0x20) = unaff_x19;
  thunk_FUN_02bb0e9c();
  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar5 = *in_stack_00000028;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto FUN_059a238c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02b7654c(in_stack_00000028,
                        *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xb);
FUN_059a238c:
  (*(code *)*puVar2)(in_stack_00000028,0,puVar2[1]);
  puVar1 = Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__;
  lVar5 = *(long *)Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar2[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                              );
    FUN_03e026bc(lVar8,uVar4,
                 *(undefined8 *)Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>__,
                 0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar8;
    thunk_FUN_02bb0e9c(plVar3,lVar8);
  }
  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar5 = *in_stack_00000028;
  lVar9 = *(long *)Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_059a2480;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_02b7654c(in_stack_00000028);
LAB_059a2480:
  lVar5 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))(in_stack_00000028,lVar8,lVar5);
  if (in_stack_00000028 != (long *)0x0) {
    lVar5 = *in_stack_00000028;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059a2504;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)PTR_DAT_06312f78,0);
LAB_059a2504:
    (*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
  }
  return;
}



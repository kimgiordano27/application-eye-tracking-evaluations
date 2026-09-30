/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$TryGetDestructibleMeshForRoom
ENTRY_POINT: 0146b73c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__TryGetDestructibleMeshForRoom
               (ulong param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x1;
  int iVar7;
  long unaff_x21;
  long *plVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f0290);
    thunk_FUN_00d48444(StringLiteral_3868);
    thunk_FUN_00d48444(PTR_DAT_033eb1e0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vminvq_s8__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<IObserver<InputEventPtr>>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TempoSlider_ShowComplete__);
    *(undefined1 *)(unaff_x21 + 0xadb) = 1;
  }
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if ((*(long *)(param_2 + 0x10) == 0) ||
     (lVar5 = FUN_012998a8(*(long *)(param_2 + 0x10),*(undefined8 *)StringLiteral_3868),
     puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vminvq_s8__,
     puVar3 = 
     Method_UnityEngine_InputSystem_Utilities_InlinedArray<IObserver<InputEventPtr>>_AppendWithCapacity__
     , puVar2 = PTR_DAT_033eb1e0, lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01311764();
  bVar1 = false;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  plVar8 = (long *)0x0;
  do {
    while( true ) {
      do {
        uVar6 = FUN_012c2b80(&stack0x00000020,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) {
          iVar7 = 6;
          goto LAB_0146b8a8;
        }
        FUN_00bc1890(&stack0x00000020,*(undefined8 *)puVar3);
        if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar6 = FUN_015fe250(extraout_x1,param_3,0);
      } while ((uVar6 & 1) == 0);
      if (bVar1) break;
      if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01299bc0();
      bVar1 = true;
      plVar8 = in_stack_00000048;
    }
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01299bc0();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar6 = (**(code **)(*plVar8 + 0x138))
                      (plVar8,in_stack_00000048,*(undefined8 *)(*plVar8 + 0x140));
    bVar1 = true;
  } while ((uVar6 & 1) != 0);
  iVar7 = 5;
LAB_0146b8a8:
  FUN_012c2b7c(&stack0x00000020,*(undefined8 *)puVar2);
  return iVar7 != 5;
}



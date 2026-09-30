/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 019bed48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke
                (float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  
  fStack0000000000000020 = param_1;
  fStack0000000000000024 = param_2;
  fStack0000000000000028 = param_3;
  if ((DAT_0377a676 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__);
    DAT_0377a676 = 1;
  }
  uStack000000000000000c = 0;
  fStack0000000000000004 = 0.0;
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = *param_5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_019bede4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_00d59724(param_5,*(long *)
                                 Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__
                        ,2);
LAB_019bede4:
  (*(code *)*puVar5)(0,param_5,&stack0x00000020);
  fVar4 = fStack0000000000000028;
  fVar3 = fStack0000000000000024;
  fVar2 = fStack0000000000000020;
  fVar1 = fStack0000000000000004;
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  return SQRT((fVar2 - 0.0) * (fVar2 - 0.0) + (fVar3 - fVar1) * (fVar3 - fVar1) +
              (fVar4 - 0.0) * (fVar4 - 0.0)) - param_4;
}



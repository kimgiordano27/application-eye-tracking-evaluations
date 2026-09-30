/*
FUNCTION_NAME: FUN_03488168
ENTRY_POINT: 03488168
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03488168(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_04832abd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StateUnit_Start__);
    thunk_FUN_01efb3a4(Method_Gameplay_Creeps_Spawner_<Start>b__24_0__);
    thunk_FUN_01efb3a4(Method_Gameplay_Creeps_Spawner_<WaveRoutine>b__28_0__);
    DAT_04832abd = 1;
  }
  if ((0 < param_4) && (0 < param_2)) {
    uVar3 = FUN_034a1d74(param_3,0,0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar4 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticInvokerBase__ctor__);
      FUN_034efd20(uVar4,uVar6,0);
      uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StateUnit_Stop__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar6);
    }
    if (param_3 != (long *)0x0) {
      lVar8 = *param_3;
      bVar2 = *(byte *)(*(long *)Method_Gameplay_Creeps_Spawner_<Start>b__24_0__ + 0x130);
      if (((bVar2 <= *(byte *)(lVar8 + 0x130)) &&
          (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
           *(long *)Method_Gameplay_Creeps_Spawner_<Start>b__24_0__)) ||
         (lVar8 == *(long *)Method_Gameplay_Creeps_Spawner_<WaveRoutine>b__28_0__)) {
        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)Method_Unity_VisualScripting_StateUnit_Start__);
        FUN_035ac8e8(lVar8,0);
        *(long *)(lVar8 + 0x10) = param_4;
        *(long *)(lVar8 + 0x18) = (long)param_3;
        thunk_FUN_01f51358((long *)(lVar8 + 0x18),param_3);
        *(undefined4 *)(lVar8 + 0x20) = 2;
        FUN_03487f44(param_1,lVar8,param_2,param_4);
        return;
      }
    }
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar4 = FUN_01f08890(uVar4,1);
    FUN_01bc50c0(param_3);
    plVar5 = (long *)thunk_FUN_01ecaf38(param_3,0);
    FUN_01bc50c0();
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    FUN_01bc50c0(uVar4);
    FUN_01bc56ec(uVar4,uVar6);
    FUN_01bc5408(uVar4,0,uVar6);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_SphericalHarmonicsL2_set_Item__);
    uVar4 = FUN_035ae81c(uVar6,uVar4,0);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_03480238(uVar6,uVar4);
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StateUnit_Stop__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar4);
  }
  puVar1 = Method_Unity_VisualScripting_StaticActionInvoker_Invoke__;
  if (0 < param_2) {
    puVar1 = Method_Unity_VisualScripting_StaticActionInvoker_<CreateDelegate>b__7_0__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticActionInvoker_Invoke__);
  uVar6 = FUN_035ac8e0(uVar6,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar7 = thunk_FUN_01f117cc();
  FUN_034f3578(uVar7,uVar4,uVar6,0);
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StateUnit_Stop__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar4);
}



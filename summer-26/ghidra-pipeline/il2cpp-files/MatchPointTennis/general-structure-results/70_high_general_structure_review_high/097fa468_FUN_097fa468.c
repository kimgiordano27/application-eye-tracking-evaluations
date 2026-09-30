/*
FUNCTION_NAME: FUN_097fa468
ENTRY_POINT: 097fa468
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_097fa468(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_28;
  
  puVar3 = UnityEngine_SerializeField_var;
  if ((DAT_0a547de1 & 1) == 0) {
    FUN_04447ba8(
                System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                );
    FUN_04447ba8(UnityEngine_SerializeField_var);
    FUN_04447ba8(
                System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                );
    FUN_04447ba8(
                System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Vector2>,_EventBase>_TypeInfo
                );
    FUN_04447ba8(System_Func<Vector3,_Vector3,_ValueTuple<Touch,_Nullable<int>>,_EventBase>_TypeInfo
                );
    FUN_04447ba8(ETD_PAM_SeasonStats_var);
    DAT_0a547de1 = 1;
  }
  puVar2 = ETD_PAM_SeasonStats_var;
  local_28 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar5 = FUN_097fa824(param_1);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar7);
  }
  uVar6 = FUN_096e9f08(uVar5,&local_28,0);
  if ((uVar6 & 1) != 0) {
    return local_28;
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar7 = *(long *)puVar3;
  }
  FUN_097facac(param_1,**(undefined8 **)(lVar7 + 0xb8));
  if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
    local_28 = FUN_04447c90(*(undefined8 *)
                             System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                            ,*(undefined4 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18));
    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
      FUN_05a9c514(**(long **)(*(long *)puVar3 + 0xb8),local_28,
                   *(undefined8 *)
                    System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Vector2>,_EventBase>_TypeInfo
                  );
      lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
        }
        uVar4 = local_28;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_096e9f98(uVar5,uVar4,0);
        return local_28;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



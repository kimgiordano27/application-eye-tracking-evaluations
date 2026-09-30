/*
FUNCTION_NAME: FUN_00f9ba98
ENTRY_POINT: 00f9ba98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_00f9ba98(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long local_38;
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if ((DAT_0377596e & 1) == 0) {
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<LinkedAccountList>__ctor__);
    thunk_FUN_00d48444(Method_Obi_ObiUtils_Swap<Vector4>__);
    thunk_FUN_00d48444(System_Globalization_UmAlQuraCalendar_TypeInfo);
    thunk_FUN_00d48444(Method_SceneLoader02112025_OnCueFired__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhh_lane_s16__);
    thunk_FUN_00d48444(Method_MessengerInternal_OnListenerAdding__);
    thunk_FUN_00d48444(
                      Method_System_ValueTuple<Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>,_float>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                      );
    DAT_0377596e = 1;
  }
  local_38 = 0;
  if ((*(char *)(param_5 + 0xa8) != '\0') &&
     (uVar3 = FUN_010bd310(param_6,&local_38,
                           *(undefined8 *)Method_Oculus_Platform_Request<LinkedAccountList>__ctor__)
     , (uVar3 & 1) != 0)) {
    if (*(long *)(param_5 + 0x178) != 0) {
      uVar3 = FUN_01322618(*(long *)(param_5 + 0x178),local_38,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                          );
      lVar2 = local_38;
      puVar1 = Method_MessengerInternal_OnListenerAdding__;
      if ((uVar3 & 1) == 0) {
        if ((*(long *)(param_5 + 0x178) != 0) &&
           (FUN_00ad27bc(*(long *)(param_5 + 0x178),local_38,
                         *(undefined8 *)
                          Method_System_ValueTuple<Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>,_float>__ctor__
                        ), lVar2 = local_38, local_38 != 0)) {
          lVar5 = *(long *)(param_5 + 0x188);
          lVar4 = FUN_0268fd10(local_38,0);
          if ((lVar4 != 0) &&
             ((iVar6 = FUN_0269f578(lVar4,0), lVar5 != 0 &&
              (local_30 = iVar6, uStack_2c = param_2, local_28 = param_3,
              FUN_0129a054(lVar5,lVar2,&local_30,
                           *(undefined8 *)System_Globalization_UmAlQuraCalendar_TypeInfo),
              lVar2 = local_38, local_38 != 0)))) {
            lVar5 = *(long *)(param_5 + 400);
            lVar4 = FUN_0268fd10(local_38,0);
            if ((lVar4 != 0) && (iVar6 = FUN_0269f810(lVar4,0), lVar5 != 0)) {
              local_30 = iVar6;
              uStack_2c = param_2;
              local_28 = param_3;
              uStack_24 = param_4;
              FUN_0129a054(lVar5,lVar2,&local_30,
                           *(undefined8 *)Method_SceneLoader02112025_OnCueFired__);
              if (*(long *)(param_5 + 0x180) != 0) {
                local_30 = 1;
                FUN_0129a054(*(long *)(param_5 + 0x180),local_38,&local_30,
                             *(undefined8 *)Method_Obi_ObiUtils_Swap<Vector4>__);
                return;
              }
            }
          }
        }
      }
      else {
        lVar4 = *(long *)(param_5 + 0x180);
        if (lVar4 != 0) {
          FUN_01299bc0(lVar4,local_38,&local_30,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhh_lane_s16__);
          local_30 = local_30 + 1;
          FUN_01299e64(lVar4,lVar2,&local_30,*(undefined8 *)puVar1);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}



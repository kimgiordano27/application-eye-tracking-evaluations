/*
FUNCTION_NAME: FUN_00f9bcac
ENTRY_POINT: 00f9bcac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_00f9bcac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_30;
  int local_24;
  
  if ((DAT_0377596f & 1) == 0) {
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<LinkedAccountList>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgez_s16__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<bool>_Add__);
    thunk_FUN_00d48444(System_Runtime_InteropServices_UnmanagedType_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhh_lane_s16__);
    thunk_FUN_00d48444(Method_MessengerInternal_OnListenerAdding__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_System_Net_Sockets_Socket_Receive__);
    DAT_0377596f = 1;
  }
  local_30 = 0;
  if ((*(char *)(param_1 + 0xa8) != '\0') &&
     (uVar4 = FUN_010bd310(param_2,&local_30,
                           *(undefined8 *)Method_Oculus_Platform_Request<LinkedAccountList>__ctor__)
     , (uVar4 & 1) != 0)) {
    if (*(long *)(param_1 + 0x178) != 0) {
      uVar4 = FUN_01322618(*(long *)(param_1 + 0x178),local_30,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                          );
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhh_lane_s16__;
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x180) != 0) {
        FUN_01299bc0(*(long *)(param_1 + 0x180),local_30,&local_24,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhh_lane_s16__);
        uVar3 = local_30;
        puVar1 = Method_MessengerInternal_OnListenerAdding__;
        if (local_24 == 1) {
          if (*(long *)(param_1 + 0x178) != 0) {
            FUN_0132448c(*(long *)(param_1 + 0x178),local_30,
                         *(undefined8 *)Method_System_Net_Sockets_Socket_Receive__);
            if (*(long *)(param_1 + 0x188) != 0) {
              FUN_0129de0c(*(long *)(param_1 + 0x188),local_30,
                           *(undefined8 *)System_Runtime_InteropServices_UnmanagedType_TypeInfo);
              if (*(long *)(param_1 + 400) != 0) {
                FUN_0129de0c(*(long *)(param_1 + 400),local_30,
                             *(undefined8 *)Method_System_Collections_Generic_List<bool>_Add__);
                if (*(long *)(param_1 + 0x180) != 0) {
                  FUN_0129de0c(*(long *)(param_1 + 0x180),local_30,
                               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgez_s16__);
                  return;
                }
              }
            }
          }
        }
        else {
          lVar5 = *(long *)(param_1 + 0x180);
          if (lVar5 != 0) {
            FUN_01299bc0(lVar5,local_30,&local_24,*(undefined8 *)puVar2);
            local_24 = local_24 + -1;
            FUN_01299e64(lVar5,uVar3,&local_24,*(undefined8 *)puVar1);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}



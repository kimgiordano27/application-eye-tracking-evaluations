/*
FUNCTION_NAME: FUN_0588cab4
ENTRY_POINT: 0588cab4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void FUN_0588cab4(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_066d3083 & 1) == 0) {
    FUN_02b3c81c(Method_System_Nullable<JsonPosition>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<ObjectCreationHandling>_GetValueOrDefault__);
    DAT_066d3083 = 1;
  }
  if (*(long *)(param_1 + 0xc0) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    uVar5 = 0;
    do {
      puVar1 = Method_System_Nullable<JsonPosition>__ctor__;
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar5) {
        lVar3 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        lVar4 = **(long **)(lVar3 + 0xb8);
        lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_System_Nullable<ObjectCreationHandling>_GetValueOrDefault__
                                  );
        FUN_04dbdb8c(lVar3,0);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x10) = param_3;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x10),param_3);
          *(undefined4 *)(lVar3 + 0x18) = param_4;
          if (lVar4 != 0) {
            FUN_0452f9a0(lVar4,param_2,lVar3,
                         *(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__);
            return;
          }
        }
        break;
      }
      if (param_2 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar2 = thunk_FUN_04c08854(*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(lVar3 + uVar5 * 8 + 0x20),0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0xe8);
      uVar5 = uVar5 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



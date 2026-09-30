/*
FUNCTION_NAME: FUN_02082b44
ENTRY_POINT: 02082b44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_02082b44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_0482f710 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementUpdate>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<IEnumerator<int>>_Clear__);
    DAT_0482f710 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = FUN_04073258(*(long *)(param_1 + 0x10),0),
     puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__, lVar2 != 0)) {
    lVar2 = FUN_0407eba8(lVar2,*(undefined8 *)
                                Method_System_Collections_Generic_Stack<IEnumerator<int>>_Clear__,0)
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      FUN_02082984(param_1,param_2);
      return;
    }
    if (lVar2 != 0) {
      lVar4 = FUN_04070398(lVar2,0);
      if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>__ctor__);
      }
      FUN_0373e7a4(auStack_40,&local_28,0);
      if (lVar4 != 0) {
        FUN_0407c958(0,0,(local_2c + local_2c) * -0.5,lVar4,0);
        lVar2 = FUN_04070398(lVar2,0);
        FUN_0373e7a4(auStack_40,&local_28,0);
        if (lVar2 != 0) {
          FUN_0407da88(local_34 + local_34,local_30 + local_30,local_2c + local_2c,lVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



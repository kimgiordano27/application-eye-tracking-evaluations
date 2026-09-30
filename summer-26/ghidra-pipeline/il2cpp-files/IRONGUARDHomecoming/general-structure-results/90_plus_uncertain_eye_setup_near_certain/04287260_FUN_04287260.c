/*
FUNCTION_NAME: FUN_04287260
ENTRY_POINT: 04287260
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0428742c) */

void FUN_04287260(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  if ((DAT_048417ff & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_System_Char_IsUpper__);
    thunk_FUN_01efb3a4(PTR_DAT_04592fc0);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    DAT_048417ff = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar2 = FUN_04286ea0(param_1,*(undefined8 *)(param_1 + 0x28),param_2,1), (uVar2 & 1) != 0)) {
    uVar3 = FUN_04286990();
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar2 = FUN_04073094(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_04286990();
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x160);
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_0428b434(lVar4);
      FUN_04289a88(lVar4,uVar3,uVar5);
    }
    plVar6 = (long *)FUN_025eaefc(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04592fc0);
    FUN_04286fe0(param_1,plVar6,param_2);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(undefined4 *)((long)plVar6 + 0x9c);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(uVar1,uVar3,0);
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04287400;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04287400:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}



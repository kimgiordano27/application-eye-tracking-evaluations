/*
FUNCTION_NAME: FUN_04287044
ENTRY_POINT: 04287044
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x042871a0) */

void FUN_04287044(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((DAT_048417fe & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Char_IsUpper__);
    thunk_FUN_01efb3a4(PTR_DAT_04592fb8);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    thunk_FUN_01efb3a4(Method_System_Char_IsWhiteSpace__);
    DAT_048417fe = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar2 = FUN_04286ea0(param_1,*(undefined8 *)(param_1 + 0x28),param_2,2), (uVar2 & 1) != 0)) {
    plVar3 = (long *)FUN_025eaefc(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04592fb8);
    FUN_04286fe0(param_1,plVar3,param_2);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((int)plVar3[0x16] == 0) {
      uVar1 = *(undefined4 *)((long)plVar3 + 0x9c);
      if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(uVar1,0,0);
    }
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04287184;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04287184:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}



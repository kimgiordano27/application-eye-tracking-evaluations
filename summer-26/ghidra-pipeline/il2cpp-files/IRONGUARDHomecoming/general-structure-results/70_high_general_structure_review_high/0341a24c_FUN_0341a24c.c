/*
FUNCTION_NAME: FUN_0341a24c
ENTRY_POINT: 0341a24c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long FUN_0341a24c(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long local_58;
  
  if ((DAT_04832744 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Mono_Unity_Debug_CheckAndThrow__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832744 = 1;
  }
  puVar2 = Method_Mono_Unity_Debug_CheckAndThrow__;
  puVar4 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  local_58 = 0;
  iVar9 = *(int *)(param_1 + 0x24);
  uVar10 = *(int *)(param_1 + 0x20) + iVar9;
  if (uVar10 < param_4) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    puVar4 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__;
  }
  else {
    if ((-1 < param_5) && ((int)param_4 <= (int)(uVar10 - param_5))) {
      if (param_2 == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<PlayerController>__);
        FUN_034efd20(uVar5,uVar6,0);
      }
      else {
        if (*(int *)(param_2 + 0x10) != 0) {
          if ((param_3 == 0) &&
             (param_3 = **(long **)(*(long *)
                                     Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                   + 0xb8), param_3 == 0)) {
LAB_0341a440:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          local_58 = 0;
          lVar8 = param_1;
          do {
            if (iVar9 <= (int)param_4) {
              iVar9 = param_4 - iVar9;
              do {
                uVar10 = 0;
                do {
                  if (param_5 < 1) {
                    return param_1;
                  }
                  uVar3 = FUN_0341a560(param_1,lVar8,iVar9,param_5,param_2);
                  if ((uVar3 & 1) == 0) {
                    iVar9 = iVar9 + 1;
                    param_5 = param_5 + -1;
                  }
                  else {
                    if (local_58 == 0) {
                      local_58 = FUN_01f08890(*(undefined8 *)puVar4,5);
LAB_0341a3bc:
                      if (local_58 == 0) goto LAB_0341a440;
                    }
                    else if (*(int *)(local_58 + 0x18) <= (int)uVar10) {
                      iVar1 = *(int *)(local_58 + 0x18) * 3;
                      if (iVar1 < 0) {
                        iVar1 = iVar1 + 1;
                      }
                      FUN_0223c640(&local_58,(iVar1 >> 1) + 4,*(undefined8 *)puVar2);
                      goto LAB_0341a3bc;
                    }
                    if (*(uint *)(local_58 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(int *)(local_58 + (long)(int)uVar10 * 4 + 0x20) = iVar9;
                    uVar10 = uVar10 + 1;
                    iVar9 = *(int *)(param_2 + 0x10) + iVar9;
                    param_5 = param_5 - *(int *)(param_2 + 0x10);
                  }
                } while ((param_5 != 0) && (iVar9 < *(int *)(lVar8 + 0x20)));
                iVar1 = *(int *)(lVar8 + 0x24);
                FUN_0341a638(param_1,local_58,uVar10,lVar8,*(undefined4 *)(param_2 + 0x10),param_3);
                iVar1 = iVar1 + iVar9 +
                        (*(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10)) * uVar10;
                lVar8 = param_1;
                while (iVar9 = iVar1 - *(int *)(lVar8 + 0x24), iVar1 < *(int *)(lVar8 + 0x24)) {
                  lVar8 = *(long *)(lVar8 + 0x18);
                  if (lVar8 == 0) goto LAB_0341a440;
                }
              } while( true );
            }
            lVar8 = *(long *)(lVar8 + 0x18);
            if (lVar8 == 0) goto LAB_0341a440;
            iVar9 = *(int *)(lVar8 + 0x24);
          } while( true );
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(Method_Utility_OculusProvider_<Initialize>b__6_0__);
        uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<PlayerController>__);
        FUN_034efd98(uVar5,uVar6,uVar7,0);
      }
      goto LAB_0341a548;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    puVar4 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
  }
  uVar6 = thunk_FUN_01efb3a4(puVar4);
  uVar7 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                            );
  FUN_034f3578(uVar5,uVar6,uVar7,0);
LAB_0341a548:
  uVar6 = thunk_FUN_01efb3a4(Method_OculusSpatializerUnity_AudioRaycast__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}



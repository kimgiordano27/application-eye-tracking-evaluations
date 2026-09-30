/*
FUNCTION_NAME: FUN_07815efc
ENTRY_POINT: 07815efc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_07815efc(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  if ((DAT_0827233f & 1) == 0) {
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<TeamSpeakClient_TeamSpeakSoundDevice>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    DAT_0827233f = 1;
  }
  local_28 = 0;
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                     + 0x130);
    if (((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
         *(long *)Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__)
        ) && (*(char *)(param_1 + 0x4d9) == '\0')) {
      if (*(long *)(param_1 + 0x4a8) != 0) {
        lVar4 = param_2[0xa1];
        FUN_0771dd1c(*(long *)(param_1 + 0x4a8),lVar4,0);
        if (*(long *)(param_1 + 0x4c0) != 0) {
          FUN_049d0340(*(long *)(param_1 + 0x4c0),lVar4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<TeamSpeakClient_TeamSpeakSoundDevice>_Dispose__
                      );
          if (*(long *)(param_1 + 0x4b8) != 0) {
            FUN_049d0340(*(long *)(param_1 + 0x4b8),param_2,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_get_Current__
                        );
            FUN_0781229c(param_2,0,0);
            local_28 = param_2[0x88];
            FUN_07721a60(&local_28,0,lVar4,0);
            FUN_07812368(param_2,0);
            lVar4 = *(long *)(param_1 + 0x4b8);
            if (*(long **)(param_1 + 0x4c8) == param_2) {
              if (lVar4 != 0) {
                iVar1 = *(int *)(lVar4 + 0x18);
                if (0 < iVar1) {
                  uVar3 = FUN_049cec24(lVar4,0,*(undefined8 *)
                                                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
                                      );
                  FUN_07815104(param_1,uVar3);
                  return;
                }
                goto LAB_07816044;
              }
            }
            else if (lVar4 != 0) {
              iVar1 = *(int *)(lVar4 + 0x18);
LAB_07816044:
              if (iVar1 != 0) {
                return;
              }
              *(undefined8 *)(param_1 + 0x4c8) = 0;
              thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x4c8),0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  return;
}



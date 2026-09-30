/*
FUNCTION_NAME: FUN_0365523c
ENTRY_POINT: 0365523c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0365523c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_04833c56 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<Matrix4x4>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<MaterialReference>__);
    thunk_FUN_01efb3a4(Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    thunk_FUN_01efb3a4(Method_System_Array_FindIndex<string>__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_04833c56 = 1;
  }
  plVar8 = (long *)(param_1 + 0x20);
  if (*plVar8 == 0) {
    uVar2 = FUN_022c59ec(param_1,*(undefined8 *)
                                  Method_System_Collections_Generic_Queue<Matrix4x4>_Enqueue__);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar3 = FUN_04073094(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Array_FindIndex<string>__);
      FUN_030f2380(lVar4,*(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)Method_System_Array_Resize<MaterialReference>__;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar2;
            thunk_FUN_01f51358(puVar5,uVar2);
          }
          else {
            FUN_030f2bb4(lVar4,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *plVar8 = lVar4;
          thunk_FUN_01f51358(plVar8,lVar4);
          goto LAB_0365538c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
LAB_0365538c:
  FUN_0365109c(param_1);
  return;
}



/*
FUNCTION_NAME: FUN_035c0c98
ENTRY_POINT: 035c0c98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_035c0c98(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 local_34 [4];
  uint local_28;
  undefined4 local_24;
  
  if ((DAT_048335f6 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_AsyncProcessMessage__
                      );
    DAT_048335f6 = 1;
  }
  if (param_3 != 0) {
    if (*(long *)(param_3 + 0x18) == 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x10);
    local_24 = param_2;
    uVar2 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_AsyncProcessMessage__
                               ,&local_24);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x318))(plVar4,param_3,uVar2,*(undefined8 *)(*plVar4 + 800));
      puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
      if (*(int *)(param_3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar4 = *(long **)(param_1 + 0x18);
      local_28 = (uint)*(byte *)(param_3 + 0x20);
      uVar2 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_28);
      local_34[0] = 1;
      uVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x318))(plVar4,uVar2,uVar3,*(undefined8 *)(*plVar4 + 800));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



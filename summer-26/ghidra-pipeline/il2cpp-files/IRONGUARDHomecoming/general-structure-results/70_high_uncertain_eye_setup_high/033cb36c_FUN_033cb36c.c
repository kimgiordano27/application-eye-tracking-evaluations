/*
FUNCTION_NAME: FUN_033cb36c
ENTRY_POINT: 033cb36c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_033cb36c(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  float fVar5;
  
  if ((DAT_048324bb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandPinchOffset_HandleHandUpdated__);
    DAT_048324bb = 1;
  }
  uVar2 = FUN_033a5d08(param_2,0,0);
  puVar4 = (undefined8 *)
           Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__;
  if ((uVar2 & 1) == 0) {
    if ((param_2 == (long *)0x0) ||
       (plVar3 = (long *)(**(code **)(*param_2 + 0x1a8))
                                   (param_2,*(undefined8 *)
                                             Method_Oculus_Interaction_HandPinchOffset_HandleHandUpdated__
                                    ,*(undefined8 *)(*param_2 + 0x1b0)), plVar3 == (long *)0x0)) {
LAB_033cb498:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
    if (0 < iVar1) {
      plVar3 = (long *)FUN_0339551c(param_2,0);
      if ((plVar3 == (long *)0x0) ||
         (plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                     (plVar3,*(undefined8 *)
                                              Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__
                                      ,*(undefined8 *)(*plVar3 + 0x1b0)), plVar3 == (long *)0x0))
      goto LAB_033cb498;
      fVar5 = (float)(**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
      puVar4 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__;
      if (*(float *)(param_1 + 0x2c) <= fVar5) goto LAB_033cb488;
    }
    puVar4 = *(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  }
LAB_033cb488:
  return *puVar4;
}



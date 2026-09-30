/*
FUNCTION_NAME: XRIF._Core.UpdateManager.FusionUpdateManager$$Unregister
ENTRY_POINT: 038cd020
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint XRIF__Core_UpdateManager_FusionUpdateManager__Unregister(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000d0;
  uint in_stack_000000d8;
  
  FUN_021b51c4(&stack0x000000b0,*unaff_x21);
  lVar2 = FUN_038b38f0();
  if (lVar2 != 0) {
    Animancer_FadeGroup__get_TargetWeight(lVar2,&stack0x00000018,*unaff_x27);
    in_stack_00000098 = in_stack_00000020;
    in_stack_00000090 = in_stack_00000018;
    in_stack_000000a0 = in_stack_00000028;
    while (uVar3 = FUN_021b51c8(&stack0x00000090,*unaff_x23), (uVar3 & 1) != 0) {
      FUN_01b7a454(&stack0x00000090,&stack0x000000d0,*unaff_x26);
      in_stack_00000088 = in_stack_000000d0;
      uVar1 = FUN_038eb31c(&stack0x00000088,0);
      unaff_w20 = uVar1 ^ unaff_w20 * 0x18d;
    }
    FUN_021b51c4(&stack0x00000090,*unaff_x21);
    lVar2 = FUN_038b3940();
    if (lVar2 != 0) {
      Animancer_FadeGroup__get_TargetWeight
                (lVar2,&stack0x00000018,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__
                );
      in_stack_00000068 = in_stack_00000020;
      in_stack_00000060 = in_stack_00000018;
      in_stack_00000078 = in_stack_00000030;
      in_stack_00000070 = in_stack_00000028;
      while (uVar3 = FUN_021b51c8(&stack0x00000060,*unaff_x28), (uVar3 & 1) != 0) {
        FUN_01b7a454(&stack0x00000060,&stack0x00000018,*unaff_x29);
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000058 = in_stack_00000020;
        uVar1 = FUN_038f0684(&stack0x00000050,0);
        unaff_w20 = uVar1 ^ unaff_w20 * 0x18d;
      }
      FUN_021b51c4(&stack0x00000060,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                  );
      lVar2 = FUN_038b3990();
      if (lVar2 != 0) {
        Animancer_FadeGroup__get_TargetWeight
                  (lVar2,&stack0x00000038,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>_Dispose__
                  );
        while (uVar3 = FUN_021b51c8(&stack0x00000038,*unaff_x24), (uVar3 & 1) != 0) {
          FUN_01b7a454(&stack0x00000038,&stack0x000000d8,*unaff_x25);
          unaff_w20 = in_stack_000000d8 ^ unaff_w20 * 0x18d;
        }
        FUN_021b51c4(&stack0x00000038,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_AnimancerState>_Dispose__
                    );
        return unaff_w20;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



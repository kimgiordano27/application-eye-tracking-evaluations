/*
FUNCTION_NAME: OVRSpectatorModeDomeTest$$OnApplicationPause
ENTRY_POINT: 01aadf18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRSpectatorModeDomeTest__OnApplicationPause(int param_1,void *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  puVar1 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  if ((DAT_0377ce5a & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_TypeInfo
                      );
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<DelaunayTriangle>_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    DAT_0377ce5a = 1;
  }
  lVar3 = *(long *)puVar1;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  FUN_0289d8a4(**(undefined8 **)(lVar3 + 0xb8),0);
  lVar5 = *(long *)puVar1;
  lVar3 = **(long **)(lVar5 + 0xb8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_01aae080:
      uVar4 = 0;
    }
    else {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar3 == 0) goto LAB_01aae0e0;
      }
      FUN_0132138c(lVar3,0);
      memcpy(param_2,&stack0x00000000,0x60);
      iVar6 = 0;
      while( true ) {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *(long *)puVar1;
        }
        lVar5 = **(long **)(lVar3 + 0xb8);
        if (lVar5 == 0) goto LAB_01aae0e0;
        if (*(int *)(lVar5 + 0x18) <= iVar6) goto LAB_01aae080;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
          if (lVar5 == 0) goto LAB_01aae0e0;
        }
        FUN_0132138c(lVar5,iVar6);
        memcpy(&stack0x00000060,&stack0x00000000,0x60);
        iVar2 = FUN_0289dd2c(&stack0x00000060,0);
        if (iVar2 == param_1) break;
        iVar6 = iVar6 + 1;
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_01aae0e0;
      FUN_0132138c(**(long **)(lVar3 + 0xb8),iVar6);
      memcpy(param_2,&stack0x00000000,0x60);
      uVar4 = 1;
    }
    return uVar4;
  }
LAB_01aae0e0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



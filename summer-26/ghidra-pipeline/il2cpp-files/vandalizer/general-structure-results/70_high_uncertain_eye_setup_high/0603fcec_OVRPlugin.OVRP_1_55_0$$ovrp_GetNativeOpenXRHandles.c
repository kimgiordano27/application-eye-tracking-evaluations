/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetNativeOpenXRHandles
ENTRY_POINT: 0603fcec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_GetNativeOpenXRHandles(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    uVar3 = FUN_0603eab0(unaff_x22);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20) = uVar3;
    uVar2 = FUN_05afc380(&stack0x00000030,*unaff_x26);
    unaff_x22 = in_stack_00000048;
    uVar3 = in_stack_00000040;
    if ((uVar2 & 1) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    param_2 = FUN_0603eab0(uVar3);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    param_1 = unaff_x19 + (long)(int)(unaff_w27 + 1) * 8;
    unaff_w27 = unaff_w27 + 2;
  }
  FUN_05afc4a0(&stack0x00000030,*unaff_x25);
  puVar1 = PTR_DAT_075d6af8;
  FUN_05e5b8a8((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
  }
  FUN_0603fe74();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar2 = 0;
      uVar4 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar2 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        free(__ptr);
        uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



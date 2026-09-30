/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 0366e99c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LateUpdate(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  if (*(char *)(unaff_x20 + 0xba) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x20 + 0xba) = 1;
  }
  fVar3 = fVar3 * fVar4;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar1 = -0x80000000;
  if ((float)(int)fVar3 != INFINITY) {
    iVar1 = (int)fVar3;
  }
  *(int *)(unaff_x19 + 0x13c) = iVar1;
  if (*(long *)(unaff_x19 + 0x130) != 0) {
    FUN_032277b4(*(long *)(unaff_x19 + 0x130),iVar1,
                 *(undefined8 *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_1__);
    uVar2 = FUN_0369db04(0);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x78),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



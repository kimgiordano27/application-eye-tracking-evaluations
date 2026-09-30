/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetTiledMultiResLevel
ENTRY_POINT: 07a67e40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07a67f3c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin_OVRP_1_21_0__ovrp_SetTiledMultiResLevel(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  char cStack0000000000000024;
  
  uVar4 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture();
  if ((uVar4 & 1) == 0) {
    uVar5 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>();
    *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
    thunk_FUN_040ec700();
  }
  cStack0000000000000024 = '\0';
  FUN_076e7928();
  if (*(int *)(unaff_x19 + 0x38) == 0) {
    uVar1 = *(undefined4 *)(unaff_x19 + 0x28);
    cVar2 = *(char *)(unaff_x19 + 0x2c);
    if (*(int *)(*(long *)PTR_DAT_092f0d40 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar3 = FUN_07a66560((int *)(unaff_x19 + 0x38),uVar1,0,cVar2 != '\0');
    if (iVar3 != 0) {
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0897e8f4(*(undefined8 *)PTR_DAT_092f0df0,0);
    }
  }
  if (cStack0000000000000024 != '\0') {
    thunk_FUN_0408541c(unaff_x19,0);
  }
  return;
}



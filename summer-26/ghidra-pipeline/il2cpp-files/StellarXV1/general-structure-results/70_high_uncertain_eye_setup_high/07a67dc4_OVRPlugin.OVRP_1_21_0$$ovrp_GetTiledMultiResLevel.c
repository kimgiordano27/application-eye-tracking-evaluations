/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetTiledMultiResLevel
ENTRY_POINT: 07a67dc4
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

void OVRPlugin_OVRP_1_21_0__ovrp_GetTiledMultiResLevel(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  undefined8 uVar6;
  char cStack0000000000000024;
  long in_stack_00000028;
  
  plVar5 = *(long **)(unaff_x20 + 0xbb0);
  if ((*(byte *)(unaff_x21 + 0x5d1) & 1) == 0) {
    FUN_04077588(PTR_DAT_0928a7a8);
    FUN_04077588(PTR_DAT_09285d70);
    FUN_04077588(PTR_DAT_092f0d40);
    FUN_04077588(PTR_DAT_09285bb0);
    FUN_04077588(PTR_DAT_092f0df0);
    *(undefined1 *)(unaff_x21 + 0x5d1) = 1;
  }
  in_stack_00000028 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  cStack0000000000000024 = 0;
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar4 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(uVar6,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>
                      (param_1,*(undefined8 *)PTR_DAT_0928a7a8);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    thunk_FUN_040ec700((undefined8 *)(param_1 + 0x20),uVar6);
  }
  cStack0000000000000024 = '\0';
  in_stack_00000028 = param_1;
  FUN_076e7928(param_1,&stack0x00000024,0);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    cVar2 = *(char *)(param_1 + 0x2c);
    if (*(int *)(*(long *)PTR_DAT_092f0d40 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar3 = FUN_07a66560((int *)(param_1 + 0x38),uVar1,0,cVar2 != '\0');
    if (iVar3 != 0) {
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0897e8f4(*(undefined8 *)PTR_DAT_092f0df0,0);
    }
  }
  if (cStack0000000000000024 != '\0') {
    thunk_FUN_0408541c(in_stack_00000028,0);
  }
  return;
}



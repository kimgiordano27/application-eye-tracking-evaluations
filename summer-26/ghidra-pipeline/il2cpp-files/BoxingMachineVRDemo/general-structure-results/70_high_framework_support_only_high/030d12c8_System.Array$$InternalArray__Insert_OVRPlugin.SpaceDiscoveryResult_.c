/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 030d12c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__Insert<OVRPlugin_SpaceDiscoveryResult>(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 030d12d4 to 031d12d7 has its CatchHandler @ 030d1340 */
  if (*(long *)(param_2 + 0x38) == 0) {
                    /* try { // try from 030d12d8 to 031d12db has its CatchHandler @ 030d133c */
                    /* try { // try from 030d12dc to 031d12df has its CatchHandler @ 030d0f54 */
    FUN_02d9a33c(param_2);
  }
                    /* try { // try from 030d12e0 to 031d12e3 has its CatchHandler @ 030d1334 */
                    /* try { // try from 030d12e4 to 031d1363 has its CatchHandler @ 030d0f54 */
  iVar1 = FUN_0501f6a4(param_1,0);
  if (iVar1 == 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_038164ac(&stack0x00000010,param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18));
    uVar2 = thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
  }
  return uVar2;
}



/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$Dispose
ENTRY_POINT: 0793de44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0793e080) */
/* WARNING: Removing unreachable block (ram,0x0793e084) */
/* WARNING: Removing unreachable block (ram,0x0793e0b4) */
/* WARNING: Removing unreachable block (ram,0x0793e0b8) */

void Unity_Services_Vivox_vx_req_account_list_block_rules_t__Dispose(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 in_w9;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined4 *puVar7;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  undefined4 *in_stack_00000068;
  
  *param_1 = in_w9;
  uVar1 = FUN_0587c704(&stack0x00000048,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
                    /* try { // try from 0793de68 to 07a3de9b has its CatchHandler @ 0793e16c */
  if ((*in_stack_00000028 < 0) &&
     (plVar6 = *(long **)(*in_stack_00000030 + 0x28), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 0793dea0 to 07a3deaf has its CatchHandler @ 0793e134 */
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0793e064;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_08488550,0);
LAB_0793e064:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  lVar3 = *(long *)OVRPlugin_Vector3f___TypeInfo;
  puVar7 = in_stack_00000068 + 2;
  *in_stack_00000068 = 0xfffffffe;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(puVar7,uVar1,
               *(undefined8 *)UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
  return;
}



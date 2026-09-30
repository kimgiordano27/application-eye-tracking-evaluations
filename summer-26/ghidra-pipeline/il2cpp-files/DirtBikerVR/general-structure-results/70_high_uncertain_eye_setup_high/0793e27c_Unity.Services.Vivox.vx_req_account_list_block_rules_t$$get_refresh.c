/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$get_refresh
ENTRY_POINT: 0793e27c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0793e0dc) */
/* WARNING: Removing unreachable block (ram,0x0793e0fc) */
/* WARNING: Removing unreachable block (ram,0x0793e100) */
/* WARNING: Removing unreachable block (ram,0x0793e084) */
/* WARNING: Removing unreachable block (ram,0x0793e0b4) */
/* WARNING: Removing unreachable block (ram,0x0793e0b8) */

void Unity_Services_Vivox_vx_req_account_list_block_rules_t__get_refresh(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined4 uStack000000000000005c;
  undefined4 *in_stack_00000068;
  
  uStack000000000000005c = 0;
  *in_stack_00000068 = 0;
  *(undefined8 *)(in_stack_00000068 + 0xc) = in_stack_00000048;
  thunk_FUN_03afed3c(in_stack_00000068 + 0xc,0);
  puVar1 = in_stack_00000068;
  if (*(int *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)OVRPlugin_Vector3f___TypeInfo,extraout_x1,in_stack_00000068);
  }
                    /* try { // try from 0793e2c0 to 07a3e42b has its CatchHandler @ 0793e2c0
                       catch() { ... } // from try @ 0793e2c0 with catch @ 0793e2c0
                       catch() { ... } // from try @ 0793e734 with catch @ 0793e2c0
                       catch() { ... } // from try @ 0793e7f8 with catch @ 0793e2c0
                       catch() { ... } // from try @ 0793e894 with catch @ 0793e2c0
                       catch() { ... } // from try @ 0793e930 with catch @ 0793e2c0 */
  FUN_03ffb420(puVar1 + 2,&stack0x00000048,in_stack_00000068,
               *(undefined8 *)UnityEngine_ParticleSystem_Particle___TypeInfo);
  if ((*in_stack_00000028 < 0) &&
     (plVar6 = *(long **)(*in_stack_00000030 + 0x28), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
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
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}



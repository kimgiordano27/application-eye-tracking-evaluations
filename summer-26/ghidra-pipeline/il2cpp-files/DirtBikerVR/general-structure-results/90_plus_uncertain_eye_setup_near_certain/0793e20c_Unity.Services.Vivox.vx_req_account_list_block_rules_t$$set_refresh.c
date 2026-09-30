/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$set_refresh
ENTRY_POINT: 0793e20c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Services_Vivox_vx_req_account_list_block_rules_t__set_refresh(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  long in_x9;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  int iVar9;
  long unaff_x22;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined4 *in_stack_00000068;
  
  lVar6 = *(long *)(in_stack_00000068 + 10);
  uVar3 = thunk_FUN_03ac74bc(**(undefined8 **)(in_x9 + 0xb50));
                    /* try { // try from 0793e220 to 07a3e22f has its CatchHandler @ 0793e230 */
  FUN_07fc4948(uVar3,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* catch() { ... } // from try @ 0793e184 with catch @ 0793e230
                       catch() { ... } // from try @ 0793e220 with catch @ 0793e230 */
                    /* try { // try from 0793e234 to 07a3e237 has its CatchHandler @ 0793e240 */
                    /* try { // try from 0793e238 to 07a3e243 has its CatchHandler @ 0793db7c */
  FUN_07fc52b8(lVar6,uVar3,0);
                    /* catch() { ... } // from try @ 0793e234 with catch @ 0793e240 */
  if (*(long *)(unaff_x22 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc5660(*(long *)(in_stack_00000068 + 10),0);
  in_stack_00000048 = FUN_0793e484();
  uVar4 = FUN_0587c6c4(&stack0x00000048,
                       *(undefined8 *)
                        UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo)
  ;
  if ((uVar4 & 1) == 0) {
    in_stack_00000058._4_4_ = 0;
    *in_stack_00000068 = 0;
    *(undefined8 *)(in_stack_00000068 + 0xc) = in_stack_00000048;
    thunk_FUN_03afed3c(in_stack_00000068 + 0xc,0);
    puVar8 = in_stack_00000068;
    if (*(int *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_Vector3f___TypeInfo,extraout_x1,in_stack_00000068);
    }
    FUN_03ffb420(puVar8 + 2,&stack0x00000048,in_stack_00000068,
                 *(undefined8 *)UnityEngine_ParticleSystem_Particle___TypeInfo);
    uVar3 = 0;
    iVar9 = 10;
  }
  else {
    uVar3 = FUN_0587c704(&stack0x00000048,
                         *(undefined8 *)
                          UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
    iVar9 = 0xb;
  }
  if ((*in_stack_00000028 < 0) &&
     (plVar7 = *(long **)(*in_stack_00000030 + 0x28), plVar7 != (long *)0x0)) {
    lVar6 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0793e064;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)PTR_DAT_08488550,0);
LAB_0793e064:
    (*(code *)*puVar1)(plVar7,puVar1[1]);
  }
  if (in_stack_00000020 == 0) {
    if (iVar9 == 0xb) {
      lVar6 = *(long *)OVRPlugin_Vector3f___TypeInfo;
      puVar8 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(puVar8,uVar3,
                   *(undefined8 *)
                    UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    }
    else if (iVar9 == 0) {
      uVar3 = *(undefined8 *)(&stack0x00000038 + (long)(in_stack_00000040 + -1) * 8);
      puVar8 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      lVar6 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
      FUN_05338d34(puVar8,uVar3,uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}



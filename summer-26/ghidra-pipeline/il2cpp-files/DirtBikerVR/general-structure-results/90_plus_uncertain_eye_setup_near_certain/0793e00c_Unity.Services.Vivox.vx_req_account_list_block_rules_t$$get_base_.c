/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$get_base_
ENTRY_POINT: 0793e00c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Services_Vivox_vx_req_account_list_block_rules_t__get_base_(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x20;
  undefined4 *puVar7;
  int unaff_w21;
  undefined8 uVar8;
  long unaff_x22;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined4 *in_stack_00000068;
  
  if (unaff_x20 != (long *)0x0) {
                    /* try { // try from 0793e010 to 07a3e017 has its CatchHandler @ 0793e13c */
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0793e024 to 07a3e037 has its CatchHandler @ 0793e164 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 0793e038 to 07a3e08b has its CatchHandler @ 0793db7c */
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
                    /* catch() { ... } // from try @ 0793e0e4 with catch @ 0793e12c */
                    /* catch() { ... } // from try @ 0793deb0 with catch @ 0793e130 */
                    /* catch() { ... } // from try @ 0793dea0 with catch @ 0793e134 */
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0793e138;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_0793e138:
                    /* catch() { ... } // from try @ 0793e0e0 with catch @ 0793e138 */
    (*(code *)*puVar1)();
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  if ((unaff_w21 == 6) || (unaff_w21 == 0)) {
    if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07fc6c14(*(long *)(in_stack_00000068 + 10),*(undefined4 *)(unaff_x22 + 0x28),0);
    if ((*(long *)(unaff_x22 + 0x30) != 0) &&
       (((uVar4 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),
                                     *(undefined8 *)PTR_DAT_084c82e0,0), (uVar4 & 1) != 0 ||
         (uVar4 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),
                                     *(undefined8 *)PTR_DAT_084c82e8,0), (uVar4 & 1) != 0)) ||
        (uVar4 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),
                                    *(undefined8 *)
                                     UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo,0),
        (uVar4 & 1) != 0)))) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar3 = *(long *)(in_stack_00000068 + 10);
      uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<int,_HierarchyNode>_TypeInfo);
      FUN_07fc701c(uVar2,uVar8,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07fc5380(lVar3,uVar2,0);
    }
    lVar3 = *(long *)(in_stack_00000068 + 10);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_SetGlobalColorPassData,_RenderGraphContext>_TypeInfo
                              );
    FUN_07fc4948(uVar2,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07fc52b8(lVar3,uVar2,0);
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
                          UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo
                        );
    if ((uVar4 & 1) == 0) {
      in_stack_00000058._4_4_ = 0;
      *in_stack_00000068 = 0;
      *(undefined8 *)(in_stack_00000068 + 0xc) = in_stack_00000048;
      thunk_FUN_03afed3c(in_stack_00000068 + 0xc,0);
      puVar7 = in_stack_00000068;
      if (*(int *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_Vector3f___TypeInfo,extraout_x1,in_stack_00000068);
      }
      FUN_03ffb420(puVar7 + 2,&stack0x00000048,in_stack_00000068,
                   *(undefined8 *)UnityEngine_ParticleSystem_Particle___TypeInfo);
      uVar2 = 0;
      unaff_w21 = 10;
    }
    else {
      uVar2 = FUN_0587c704(&stack0x00000048,
                           *(undefined8 *)
                            UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo
                          );
      unaff_w21 = 0xb;
    }
  }
  else {
    uVar2 = 0;
  }
  if ((*in_stack_00000028 < 0) &&
     (plVar6 = *(long **)(*in_stack_00000030 + 0x28), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0793e064;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_08488550,0);
LAB_0793e064:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  if (in_stack_00000020 == 0) {
    if (unaff_w21 == 0xb) {
      lVar3 = *(long *)OVRPlugin_Vector3f___TypeInfo;
      puVar7 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(puVar7,uVar2,
                   *(undefined8 *)
                    UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    }
    else if (unaff_w21 == 0) {
                    /* try { // try from 0793e08c to 07a3e093 has its CatchHandler @ 0793e100 */
      uVar2 = *(undefined8 *)(&stack0x00000038 + (long)(in_stack_00000040 + -1) * 8);
      puVar7 = in_stack_00000068 + 2;
                    /* try { // try from 0793e0a0 to 07a3e0bf has its CatchHandler @ 0793e104 */
      *in_stack_00000068 = 0xfffffffe;
      lVar3 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar8 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
      FUN_05338d34(puVar7,uVar2,uVar8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}



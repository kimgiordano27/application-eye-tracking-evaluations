/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$set_account_handle
ENTRY_POINT: 0793e13c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Services_Vivox_vx_req_account_list_block_rules_t__set_account_handle(code *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  int *piVar4;
  long unaff_x19;
  long lVar5;
  long *plVar6;
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
  
                    /* catch() { ... } // from try @ 0793e010 with catch @ 0793e13c */
                    /* catch() { ... } // from try @ 0793dffc with catch @ 0793e140 */
  (*param_1)();
                    /* catch() { ... } // from try @ 0793de40 with catch @ 0793e144 */
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
                    /* catch() { ... } // from try @ 0793de18 with catch @ 0793e148 */
                    /* catch() { ... } // from try @ 0793ddf0 with catch @ 0793e14c */
                    /* catch() { ... } // from try @ 0793ddc0 with catch @ 0793e150 */
  if ((unaff_w21 == 6) || (unaff_w21 == 0)) {
                    /* catch() { ... } // from try @ 0793dd98 with catch @ 0793e154 */
                    /* catch() { ... } // from try @ 0793dd64 with catch @ 0793e158 */
                    /* catch() { ... } // from try @ 0793dd34 with catch @ 0793e15c
                       catch() { ... } // from try @ 0793e0dc with catch @ 0793e15c */
    if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* catch() { ... } // from try @ 0793dd00 with catch @ 0793e160 */
                    /* catch() { ... } // from try @ 0793e024 with catch @ 0793e164 */
                    /* catch() { ... } // from try @ 0793df6c with catch @ 0793e168
                       catch() { ... } // from try @ 0793e0f8 with catch @ 0793e168 */
    FUN_07fc6c14(*(long *)(in_stack_00000068 + 10),*(undefined4 *)(unaff_x22 + 0x28),0);
                    /* catch() { ... } // from try @ 0793de68 with catch @ 0793e16c */
                    /* try { // try from 0793e184 to 07a3e19b has its CatchHandler @ 0793e230 */
                    /* try { // try from 0793e19c to 07a3e21f has its CatchHandler @ 0793db7c */
    if ((*(long *)(unaff_x22 + 0x30) != 0) &&
       (((uVar2 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),
                                     *(undefined8 *)PTR_DAT_084c82e0,0), (uVar2 & 1) != 0 ||
         (uVar2 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),
                                     *(undefined8 *)PTR_DAT_084c82e8,0), (uVar2 & 1) != 0)) ||
        (uVar2 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),
                                    *(undefined8 *)
                                     UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo,0),
        (uVar2 & 1) != 0)))) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar5 = *(long *)(in_stack_00000068 + 10);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<int,_HierarchyNode>_TypeInfo);
      FUN_07fc701c(uVar3,uVar8,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07fc5380(lVar5,uVar3,0);
    }
    lVar5 = *(long *)(in_stack_00000068 + 10);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_SetGlobalColorPassData,_RenderGraphContext>_TypeInfo
                              );
    FUN_07fc4948(uVar3,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07fc52b8(lVar5,uVar3,0);
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
    uVar2 = FUN_0587c6c4(&stack0x00000048,
                         *(undefined8 *)
                          UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo
                        );
    if ((uVar2 & 1) == 0) {
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
      uVar3 = 0;
      unaff_w21 = 10;
    }
    else {
      uVar3 = FUN_0587c704(&stack0x00000048,
                           *(undefined8 *)
                            UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo
                          );
      unaff_w21 = 0xb;
    }
  }
  else {
    uVar3 = 0;
  }
  if ((*in_stack_00000028 < 0) &&
     (plVar6 = *(long **)(*in_stack_00000030 + 0x28), plVar6 != (long *)0x0)) {
    lVar5 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08488550) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0793e064;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_08488550,0);
LAB_0793e064:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  if (in_stack_00000020 == 0) {
    if (unaff_w21 == 0xb) {
                    /* try { // try from 0793e0dc to 07a3e0df has its CatchHandler @ 0793e15c */
                    /* try { // try from 0793e0e0 to 07a3e0e3 has its CatchHandler @ 0793e138 */
                    /* try { // try from 0793e0e4 to 07a3e0e7 has its CatchHandler @ 0793e12c */
                    /* try { // try from 0793e0e8 to 07a3e0eb has its CatchHandler @ 0793e128 */
                    /* try { // try from 0793e0ec to 07a3e0ef has its CatchHandler @ 0793e120 */
      lVar5 = *(long *)OVRPlugin_Vector3f___TypeInfo;
      puVar7 = in_stack_00000068 + 2;
                    /* try { // try from 0793e0f0 to 07a3e0f3 has its CatchHandler @ 0793e118 */
      *in_stack_00000068 = 0xfffffffe;
                    /* try { // try from 0793e0f4 to 07a3e0f7 has its CatchHandler @ 0793e110 */
                    /* try { // try from 0793e0f8 to 07a3e0fb has its CatchHandler @ 0793e168 */
      if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0793dd60 with catch @ 0793e0fc
                       try { // try from 0793e0fc to 07a3e183 has its CatchHandler @ 0793db7c */
        thunk_FUN_03ae8be4();
      }
                    /* catch() { ... } // from try @ 0793e08c with catch @ 0793e100 */
                    /* catch() { ... } // from try @ 0793e0a0 with catch @ 0793e104 */
                    /* catch() { ... } // from try @ 0793dfe4 with catch @ 0793e108 */
                    /* catch() { ... } // from try @ 0793dfd0 with catch @ 0793e10c */
                    /* catch() { ... } // from try @ 0793e0f4 with catch @ 0793e110 */
                    /* catch() { ... } // from try @ 0793df00 with catch @ 0793e114 */
      FUN_05338ae8(puVar7,uVar3,
                   *(undefined8 *)
                    UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    }
    else if (unaff_w21 == 0) {
      uVar3 = *(undefined8 *)(&stack0x00000038 + (long)(in_stack_00000040 + -1) * 8);
      puVar7 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      lVar5 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar8 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
      FUN_05338d34(puVar7,uVar3,uVar8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}



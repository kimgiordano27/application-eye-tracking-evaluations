/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_login_t$$get_connector_handle
ENTRY_POINT: 0793eed4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Services_Vivox_vx_req_account_login_t__get_connector_handle(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x7f0));
                    /* try { // try from 0793eedc to 07a3eefb has its CatchHandler @ 0793ef40 */
  FUN_03a8a718(PTR_DAT_0848acd8);
  FUN_03a8a718(TMPro_TMP_InputField_ContentType___TypeInfo);
  FUN_03a8a718(TMPro_TMP_Text_TextProcessingElement___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xdcd) = 1;
  puVar2 = OVRPlugin_Vector3f___TypeInfo;
  in_stack_00000028 = 0;
                    /* try { // try from 0793ef18 to 07a3ef1b has its CatchHandler @ 0793ef98 */
  in_stack_00000018 = 0;
                    /* try { // try from 0793ef1c to 07a3ef1f has its CatchHandler @ 0793ef74 */
                    /* try { // try from 0793ef20 to 07a3ef23 has its CatchHandler @ 0793ef68 */
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
    lVar4 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)
                          UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                        );
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
    uVar5 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo
                        );
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe2cf0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  else {
                    /* try { // try from 0793ef24 to 07a3ef27 has its CatchHandler @ 0793ef64 */
                    /* try { // try from 0793ef28 to 07a3ef2b has its CatchHandler @ 0793ef5c */
    if (*unaff_x19 != 1) {
      lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)TMPro_TMP_Text_TextProcessingElement___TypeInfo);
      FUN_0679343c(lVar4,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(unaff_x19 + 8);
      thunk_FUN_03afed3c();
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(unaff_x19 + 10);
      thunk_FUN_03afed3c();
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(unaff_x19 + 0xc);
      thunk_FUN_03afed3c();
      iVar1 = unaff_x19[0xe];
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(unaff_x19 + 0x10);
      *(int *)(lVar4 + 0x28) = iVar1;
      thunk_FUN_03afed3c();
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(unaff_x19 + 0x12);
      thunk_FUN_03afed3c();
      puVar2 = PTR_DAT_0848acd8;
      if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (DAT_08975f9e == '\0') {
        FUN_03a8a718(PTR_DAT_0848acd8);
        DAT_08975f9e = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar2;
      }
      FUN_07fd7d8c(*(undefined8 *)(lVar4 + 0xb8));
      return;
    }
                    /* try { // try from 0793ef2c to 07a3ef2f has its CatchHandler @ 0793ef54 */
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x16);
                    /* try { // try from 0793ef30 to 07a3ef33 has its CatchHandler @ 0793ef4c */
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
  }
  uVar6 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  puVar3 = UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}



/*
FUNCTION_NAME: FUN_070c6bcc
ENTRY_POINT: 070c6bcc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070c6bcc(long *param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  int extraout_w1;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  long local_28;
  
                    /* try { // try from 070c6bd4 to 071c6bdb has its CatchHandler @ 070c6ea4 */
  if ((DAT_07a5a94e & 1) == 0) {
                    /* try { // try from 070c6bf0 to 071c6bf7 has its CatchHandler @ 070c6ea0 */
    FUN_031f20f4(UnityEngine_UIElements_RadioButtonGroup_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo);
                    /* try { // try from 070c6c0c to 071c6c13 has its CatchHandler @ 070c6e9c */
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__SetSkyboxOverride_TypeInfo);
    FUN_031f20f4(OVRPlugin_HandStatus_TypeInfo);
                    /* try { // try from 070c6c2c to 071c6c33 has its CatchHandler @ 070c6e10 */
    FUN_031f20f4(OVRPassthroughColorLut_ColorChannels_TypeInfo);
    FUN_031f20f4(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
                    /* try { // try from 070c6c4c to 071c6c5f has its CatchHandler @ 070c6db4 */
    FUN_031f20f4(OVRPlugin_LayerLayout_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d81c0);
    DAT_07a5a94e = 1;
  }
                    /* try { // try from 070c6c64 to 071c6c6f has its CatchHandler @ 070c6dd4 */
  puVar5 = OVRPassthroughColorLut_ColorChannels_TypeInfo;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_28 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_2 == (long *)0x0) {
LAB_070c6cb0:
    if (param_2 != (long *)param_1[0xa8]) {
                    /* try { // try from 070c6cbc to 071c6cc3 has its CatchHandler @ 070c6dfc */
      local_28 = param_1[0x88];
      FUN_06fd1174(&local_28,param_2,0);
    }
                    /* try { // try from 070c6cd8 to 071c6ce3 has its CatchHandler @ 070c6e14 */
    return;
  }
                    /* try { // try from 070c6c84 to 071c6c8b has its CatchHandler @ 070c6e48 */
  bVar2 = *(byte *)(*(long *)
                     UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo +
                   0x130);
                    /* try { // try from 070c6c98 to 071c6c9f has its CatchHandler @ 070c6e44 */
  if ((*(byte *)(*param_2 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo))
  goto LAB_070c6cb0;
  auVar4 = ZEXT816(0);
  if (param_1[0xa7] == 0) {
LAB_070c6ee0:
    local_40 = auVar4;
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
                    /* try { // try from 070c6cf8 to 071c6d03 has its CatchHandler @ 070c6e24 */
  iVar1 = *(int *)(param_1[0xa7] + 0x18);
  lVar6 = *(long *)OVRPassthroughColorLut_ColorChannels_TypeInfo;
                    /* try { // try from 070c6d04 to 071c6d53 has its CatchHandler @ 070c6608 */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar6 = *(long *)puVar5;
  }
  if (0x40 < iVar1 + 1) {
    uVar7 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06de0af4(uVar7,0);
    return;
  }
                    /* try { // try from 070c6d54 to 071c6d57 has its CatchHandler @ 070c6ef8 */
                    /* try { // try from 070c6d58 to 071c6d5b has its CatchHandler @ 070c6e98 */
  FUN_06fc7f68(param_2,(*(undefined8 **)(lVar6 + 0xb8))[0x2a],0);
                    /* try { // try from 070c6d5c to 071c6d5f has its CatchHandler @ 070c6e40 */
                    /* try { // try from 070c6d60 to 071c6d63 has its CatchHandler @ 070c6e34 */
                    /* try { // try from 070c6d64 to 071c6d6b has its CatchHandler @ 070c6608 */
  lVar6 = FUN_070862a4(param_2,0);
                    /* try { // try from 070c6d6c to 071c6d6f has its CatchHandler @ 070c6e34 */
                    /* try { // try from 070c6d70 to 071c6d77 has its CatchHandler @ 070c6e24 */
                    /* try { // try from 070c6d78 to 071c6d7f has its CatchHandler @ 070c6e28 */
  uVar7 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_RadioButtonGroup_TypeInfo);
                    /* try { // try from 070c6d80 to 071c6d87 has its CatchHandler @ 070c6e14 */
                    /* try { // try from 070c6d88 to 071c6d8f has its CatchHandler @ 070c6e10 */
                    /* try { // try from 070c6d90 to 071c6d97 has its CatchHandler @ 070c6dfc */
                    /* try { // try from 070c6d98 to 071c6d9b has its CatchHandler @ 070c6dc4 */
  FUN_056fa11c(uVar7,param_1,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo,0);
  auVar4._8_8_ = local_40._8_8_;
  auVar4._0_8_ = local_40._0_8_;
                    /* try { // try from 070c6d9c to 071c6d9f has its CatchHandler @ 070c6df4 */
  if (lVar6 == 0) goto LAB_070c6ee0;
                    /* try { // try from 070c6da0 to 071c6da3 has its CatchHandler @ 070c6de8 */
                    /* try { // try from 070c6da4 to 071c6da7 has its CatchHandler @ 070c6dac */
                    /* catch() { ... } // from try @ 070c6b14 with catch @ 070c6da8
                       try { // try from 070c6da8 to 071c6e5f has its CatchHandler @ 070c6608 */
                    /* catch() { ... } // from try @ 070c6da4 with catch @ 070c6dac */
                    /* catch() { ... } // from try @ 070c68dc with catch @ 070c6db0 */
  FUN_06f9a624(lVar6,uVar7,0);
                    /* catch() { ... } // from try @ 070c6c4c with catch @ 070c6db4 */
                    /* catch() { ... } // from try @ 070c6b7c with catch @ 070c6db8 */
                    /* catch() { ... } // from try @ 070c6aec with catch @ 070c6dbc */
  lVar6 = param_1[0xa6];
                    /* catch() { ... } // from try @ 070c6998 with catch @ 070c6dc0 */
                    /* catch() { ... } // from try @ 070c6d98 with catch @ 070c6dc4 */
                    /* catch() { ... } // from try @ 070c67bc with catch @ 070c6dc8 */
  if (*(int *)(*(long *)PTR_DAT_075d81c0 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 070c692c with catch @ 070c6dcc */
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* catch() { ... } // from try @ 070c6b98 with catch @ 070c6dd0 */
                    /* catch() { ... } // from try @ 070c6c64 with catch @ 070c6dd4 */
                    /* catch() { ... } // from try @ 070c6960 with catch @ 070c6dd8 */
                    /* catch() { ... } // from try @ 070c67a4 with catch @ 070c6ddc */
                    /* catch() { ... } // from try @ 070c689c with catch @ 070c6de0 */
                    /* catch() { ... } // from try @ 070c6bb0 with catch @ 070c6de4 */
                    /* catch() { ... } // from try @ 070c6b58 with catch @ 070c6de8
                       catch() { ... } // from try @ 070c6da0 with catch @ 070c6de8 */
  FUN_03fca1dc(&local_70,lVar6,0,0,*(undefined8 *)OVRPlugin_LayerLayout_TypeInfo);
                    /* catch() { ... } // from try @ 070c6a48 with catch @ 070c6df4
                       catch() { ... } // from try @ 070c6d9c with catch @ 070c6df4 */
                    /* catch() { ... } // from try @ 070c67cc with catch @ 070c6df8 */
                    /* catch() { ... } // from try @ 070c6cbc with catch @ 070c6dfc
                       catch() { ... } // from try @ 070c6d90 with catch @ 070c6dfc */
                    /* catch() { ... } // from try @ 070c6a60 with catch @ 070c6e00 */
  lVar6 = FUN_05207510(&local_70,*(undefined8 *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
                    /* catch() { ... } // from try @ 070c6784 with catch @ 070c6e04 */
                    /* catch() { ... } // from try @ 070c6a10 with catch @ 070c6e08 */
  param_1[0xa7] = lVar6;
                    /* catch() { ... } // from try @ 070c6834 with catch @ 070c6e0c */
                    /* catch() { ... } // from try @ 070c6c2c with catch @ 070c6e10
                       catch() { ... } // from try @ 070c6d88 with catch @ 070c6e10 */
  thunk_FUN_0329bf60(param_1 + 0xa7,lVar6);
                    /* catch() { ... } // from try @ 070c6cd8 with catch @ 070c6e14
                       catch() { ... } // from try @ 070c6d80 with catch @ 070c6e14 */
  FUN_070c6ee4(param_1);
                    /* catch() { ... } // from try @ 070c6cf8 with catch @ 070c6e24
                       catch() { ... } // from try @ 070c6d70 with catch @ 070c6e24 */
                    /* catch() { ... } // from try @ 070c6abc with catch @ 070c6e28
                       catch() { ... } // from try @ 070c6d78 with catch @ 070c6e28 */
  local_40 = (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
  uVar7 = local_40._0_8_;
                    /* catch() { ... } // from try @ 070c6760 with catch @ 070c6e34
                       catch() { ... } // from try @ 070c6d60 with catch @ 070c6e34
                       catch() { ... } // from try @ 070c6d6c with catch @ 070c6e34 */
  auVar4 = local_40;
  if (param_1[0xa7] == 0) goto LAB_070c6ee0;
                    /* catch() { ... } // from try @ 070c6d5c with catch @ 070c6e40 */
  iVar1 = *(int *)(param_1[0xa7] + 0x18);
                    /* catch() { ... } // from try @ 070c6c98 with catch @ 070c6e44 */
                    /* catch() { ... } // from try @ 070c6c84 with catch @ 070c6e48 */
  (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
  if (extraout_w1 <= iVar1) {
                    /* try { // try from 070c6e60 to 071c6e63 has its CatchHandler @ 070c6e90 */
    lVar6 = param_1[0xa7];
    auVar4 = local_40;
    if (lVar6 == 0) goto LAB_070c6ee0;
    iVar1 = *(int *)(lVar6 + 0x18);
    if (iVar1 < 0x41) {
                    /* try { // try from 070c6e7c to 071c6e8f has its CatchHandler @ 070c7060 */
      bVar3 = true;
      local_40._8_4_ = iVar1;
      goto LAB_070c6e84;
    }
  }
  bVar3 = false;
LAB_070c6e84:
                    /* catch() { ... } // from try @ 070c6e60 with catch @ 070c6e90
                       try { // try from 070c6e90 to 071c6ebb has its CatchHandler @ 070c6608 */
  lVar6 = (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
                    /* catch() { ... } // from try @ 070c6d58 with catch @ 070c6e98 */
                    /* catch() { ... } // from try @ 070c6c0c with catch @ 070c6e9c */
                    /* catch() { ... } // from try @ 070c6bf0 with catch @ 070c6ea0 */
  if ((lVar6 == 0) && (*(char *)((long)param_1 + 0x549) == '\0')) {
    FUN_070c5e74(local_40,0,1);
                    /* try { // try from 070c6ebc to 071c6ebf has its CatchHandler @ 070c6ef0 */
    uVar7 = local_40._0_8_;
  }
  else {
                    /* catch() { ... } // from try @ 070c6bd4 with catch @ 070c6ea4 */
    if (!bVar3) {
      return;
    }
  }
  (**(code **)(*param_1 + 0xa38))(param_1,uVar7,local_40._8_8_,*(undefined8 *)(*param_1 + 0xa40));
  return;
                    /* try { // try from 070c6edc to 071c6eef has its CatchHandler @ 070c7060 */
}



/*
FUNCTION_NAME: FUN_070c6294
ENTRY_POINT: 070c6294
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;ray_or_cast_sink_hits_4;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_070c6294(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar5 = OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo;
  puVar3 = OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo;
  puVar2 = OVR_OpenVR_IVRCompositor__LockGLSharedTextureForAccess_TypeInfo;
  if ((DAT_07a5a94a & 1) == 0) {
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_Sha224Digest_TypeInfo);
                    /* try { // try from 070c62f0 to 071c632f has its CatchHandler @ 070c62f0
                       catch() { ... } // from try @ 070c62f0 with catch @ 070c62f0
                       catch() { ... } // from try @ 070c6380 with catch @ 070c62f0
                       catch() { ... } // from try @ 070c6398 with catch @ 070c62f0
                       catch() { ... } // from try @ 070c63bc with catch @ 070c62f0
                       catch() { ... } // from try @ 070c63f8 with catch @ 070c62f0 */
    FUN_031f20f4(OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    FUN_031f20f4(OVRPassthroughLayer_StylesHandler_TypeInfo);
    FUN_031f20f4(OVRPermissionsRequester_<>c_TypeInfo);
    FUN_031f20f4(OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759bc60);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
                    /* try { // try from 070c6330 to 071c6333 has its CatchHandler @ 070c6398 */
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__LockGLSharedTextureForAccess_TypeInfo);
                    /* try { // try from 070c6340 to 071c6363 has its CatchHandler @ 070c639c */
    FUN_031f20f4(OVRPermissionsRequester_Permission_TypeInfo);
    FUN_031f20f4(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    FUN_031f20f4(OVRPassthroughColorLut_ColorChannels_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d69f8);
    DAT_07a5a94a = 1;
  }
  puVar6 = OVRPassthroughLayer_NoneStyleHandler_TypeInfo;
  puVar4 = OVRPassthroughColorLut_ColorChannels_TypeInfo;
                    /* try { // try from 070c6378 to 071c637f has its CatchHandler @ 070c63a0 */
                    /* try { // try from 070c6380 to 071c6393 has its CatchHandler @ 070c62f0 */
  lVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                    /* try { // try from 070c6394 to 071c6397 has its CatchHandler @ 070c63a0 */
  FUN_047aec0c(lVar7,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 070c6330 with catch @ 070c6398
                       try { // try from 070c6398 to 071c63b7 has its CatchHandler @ 070c62f0 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 070c6340 with catch @ 070c639c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 070c6378 with catch @ 070c63a0
                       catch(type#1 @ 0718d318) { ... } // from try @ 070c6394 with catch @ 070c63a0
                        */
  param_1[0xa7] = lVar7;
  thunk_FUN_0329bf60(param_1 + 0xa7,lVar7);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar3 = OVRPermissionsRequester_<>c_TypeInfo;
  puVar2 = PTR_DAT_075d69f8;
                    /* try { // try from 070c63b8 to 071c63bb has its CatchHandler @ 070c63e8 */
                    /* try { // try from 070c63bc to 071c63eb has its CatchHandler @ 070c62f0 */
  FUN_054363ec(param_1,param_2,*(undefined8 *)puVar6);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    /* catch() { ... } // from try @ 070c63b8 with catch @ 070c63e8 */
    lVar7 = *(long *)puVar4;
  }
                    /* try { // try from 070c63ec to 071c63f7 has its CatchHandler @ 070c640c */
                    /* try { // try from 070c63f8 to 071c6403 has its CatchHandler @ 070c62f0 */
  FUN_06fc7f68(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x138),0);
                    /* try { // try from 070c6404 to 071c640b has its CatchHandler @ 070c640c */
  uVar8 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 070c63ec with catch @ 070c640c
                       catch(type#2 @ 00000000) { ... } // from try @ 070c6404 with catch @ 070c640c
                        */
  FUN_06fc5e0c(uVar8,0);
  FUN_05435a2c(param_1,uVar8,*(undefined8 *)puVar3);
  lVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_06fc5e0c(lVar7,0);
  if (lVar7 != 0) {
    UnityEngine_UIElements_Toggle_UxmlTraits___ctor
              (lVar7,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x140),0);
    lVar9 = FUN_06fc5b50(lVar7,0);
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x148);
      lVar12 = *(long *)PTR_DAT_0759bc60;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      puVar2 = OVRPassthroughLayer_StylesHandler_TypeInfo;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar11 = uVar8;
          thunk_FUN_0329bf60(puVar11);
        }
        else {
          FUN_047af440(lVar9,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        param_1[0xa6] = lVar7;
        thunk_FUN_0329bf60(param_1 + 0xa6,lVar7);
        lVar7 = FUN_05435a24(param_1,*(undefined8 *)puVar2);
        puVar3 = OVRPermissionsRequester_Permission_TypeInfo;
        puVar2 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_Sha224Digest_TypeInfo;
        if (lVar7 != 0) {
          FUN_06fcd3a0(lVar7,param_1[0xa6],0);
          lVar7 = param_1[0xa6];
          uVar8 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
          FUN_056fa11c(uVar8,param_1,*(undefined8 *)puVar3,0);
          puVar3 = UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo;
          if (lVar7 != 0) {
            FUN_06fcd09c(lVar7,uVar8,0);
            lVar7 = param_1[0xa6];
            uVar8 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
            FUN_056fa11c(uVar8,param_1,*(undefined8 *)puVar3,0);
            if (lVar7 != 0) {
              FUN_06fcd204(lVar7,uVar8,0);
                    /* WARNING: Could not recover jumptable at 0x070c65ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0xac8))
                        (param_1,param_3,param_4,*(undefined8 *)(*param_1 + 0xad0));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



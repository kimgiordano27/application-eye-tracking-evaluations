/*
FUNCTION_NAME: FUN_070c7058
ENTRY_POINT: 070c7058
PROGRAM: vandalizer-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_070c7058(long *param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong __n;
  code *pcVar10;
  undefined1 *__s;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [8];
  undefined1 local_68 [16];
  long local_58;
  
                    /* catch() { ... } // from try @ 070c6e7c with catch @ 070c7060
                       catch() { ... } // from try @ 070c6edc with catch @ 070c7060
                       catch() { ... } // from try @ 070c6f38 with catch @ 070c7060
                       catch() { ... } // from try @ 070c6f74 with catch @ 070c7060
                       catch() { ... } // from try @ 070c6fb8 with catch @ 070c7060
                       catch() { ... } // from try @ 070c6fe4 with catch @ 070c7060
                       catch() { ... } // from try @ 070c7044 with catch @ 070c7060 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((DAT_07a5a94f & 1) == 0) {
    FUN_031f20f4(UnityEngine_UIElements_RadioButtonGroup_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo);
    FUN_031f20f4(OVRPlugin_LogLevel_TypeInfo);
    FUN_031f20f4(OVRPlugin_Media_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__SetSkyboxOverride_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__SetTrackingSpace_TypeInfo);
    FUN_031f20f4(OVRPlugin_<>c__DisplayClass537_0_TypeInfo);
    FUN_031f20f4(PTR_DAT_075a5e60);
    FUN_031f20f4(PTR_DAT_075a5e68);
    FUN_031f20f4(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    FUN_031f20f4(OVRPlugin_HandStatus_TypeInfo);
    DAT_07a5a94f = 1;
  }
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  if (param_2 != (long *)0x0) {
                    /* try { // try from 070c713c to 071c7217 has its CatchHandler @ 070c713c
                       catch() { ... } // from try @ 070c713c with catch @ 070c713c
                       catch() { ... } // from try @ 070c7234 with catch @ 070c713c
                       catch() { ... } // from try @ 070c72d4 with catch @ 070c713c
                       catch() { ... } // from try @ 070c7378 with catch @ 070c713c */
    bVar2 = *(byte *)(*(long *)
                       UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo +
                     0x130);
    if (bVar2 <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo) {
        param_2 = (long *)0x0;
      }
      if (param_2 != (long *)0x0) {
        auVar11 = (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
        uVar9 = auVar11._8_8_;
        local_68 = auVar11;
        if (param_1[0xa7] != 0) {
          uVar4 = FUN_047b0068(param_1[0xa7],param_2,*(undefined8 *)OVRPlugin_LogLevel_TypeInfo);
          __n = -(uVar9 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar9 & 0xffffffff) << 2;
          if (auVar11._8_4_ == 0) {
            memset((void *)0x0,0,__n);
            __s = (undefined1 *)0x0;
          }
          else {
            __s = auStack_70 + -(__n + 0xf & 0xfffffffffffffff0);
            memset(__s,0,__n);
            if (auVar11._8_4_ < 0) {
              FUN_05e21fe0(0);
            }
          }
          auVar11 = FUN_070c5ce8(local_68,__s,uVar9 & 0xffffffff);
          iVar5 = FUN_070dcbc0(auVar11._0_8_,auVar11._8_8_,uVar4,
                               *(undefined8 *)OVRPlugin_<>c__DisplayClass537_0_TypeInfo);
                    /* try { // try from 070c7218 to 071c721f has its CatchHandler @ 070c72e0 */
          lVar7 = FUN_070862a4(param_2,0);
                    /* try { // try from 070c7224 to 071c7233 has its CatchHandler @ 070c72dc */
          uVar8 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_UIElements_RadioButtonGroup_TypeInfo
                                    );
                    /* try { // try from 070c7234 to 071c72cf has its CatchHandler @ 070c713c */
          FUN_056fa11c(uVar8,param_1,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo,0);
          if (lVar7 != 0) {
            FUN_06f9a6d4(lVar7,uVar8,0);
            if (iVar5 != -1) {
              if ((param_1[0xa7] == 0) ||
                 (lVar7 = FUN_047af170(param_1[0xa7],uVar4,
                                       *(undefined8 *)
                                        OVR_OpenVR_IVRCompositor__SetTrackingSpace_TypeInfo),
                 lVar7 == 0)) goto LAB_070c737c;
              uVar6 = FUN_06fc56bc(lVar7,0);
              FUN_06fc56c4(lVar7,uVar6 & 0xfffffff7,0);
            }
            if (param_1[0xa7] != 0) {
              FUN_047b08f0(param_1[0xa7],param_2,*(undefined8 *)OVRPlugin_Media_TypeInfo);
              FUN_070c6ee4(param_1);
                    /* try { // try from 070c72d0 to 071c72d3 has its CatchHandler @ 070c72e0 */
              if (param_1[0xa7] != 0) {
                    /* try { // try from 070c72d4 to 071c72f7 has its CatchHandler @ 070c713c */
                iVar1 = *(int *)(param_1[0xa7] + 0x18);
                local_68._8_4_ = iVar1;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 070c7224 with catch @ 070c72dc
                        */
                if (iVar1 == 0) {
                  local_68._0_8_ = 0;
                  pcVar10 = *(code **)(*param_1 + 0xac8);
                  uVar8 = *(undefined8 *)(*param_1 + 0xad0);
                }
                else {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 070c7218 with catch @ 070c72e0
                       catch(type#1 @ 0718d318) { ... } // from try @ 070c72d0 with catch @ 070c72e0
                        */
                  if (iVar5 == -1) goto LAB_070c7350;
                  FUN_070c5e74(local_68,uVar4,0);
                    /* try { // try from 070c72f8 to 071c72fb has its CatchHandler @ 070c7310 */
                  if ((auVar11._8_4_ == 1) && (*(char *)((long)param_1 + 0x549) == '\0')) {
                    /* catch() { ... } // from try @ 070c72f8 with catch @ 070c7310 */
                    FUN_070c5e74(local_68,0,1);
                  }
                  pcVar10 = *(code **)(*param_1 + 0xa38);
                  uVar8 = *(undefined8 *)(*param_1 + 0xa40);
                }
                (*pcVar10)(param_1,local_68._0_8_,local_68._8_8_,uVar8);
                goto LAB_070c7350;
              }
            }
          }
        }
LAB_070c737c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
    }
  }
LAB_070c7350:
                    /* try { // try from 070c7350 to 071c7377 has its CatchHandler @ 070c738c */
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 070c7378 to 071c7383 has its CatchHandler @ 070c713c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



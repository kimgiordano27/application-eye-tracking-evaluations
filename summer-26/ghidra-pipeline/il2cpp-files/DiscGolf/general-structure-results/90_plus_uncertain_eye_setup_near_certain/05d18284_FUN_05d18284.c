/*
FUNCTION_NAME: FUN_05d18284
ENTRY_POINT: 05d18284
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_05d18284(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 local_44;
  
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d18248 with catch @ 05d18284
                       try { // try from 05d18284 to 05e182b3 has its CatchHandler @ 05d18160 */
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d18244 with catch @ 05d18288
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d18220 with catch @ 05d1828c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d181f8 with catch @ 05d18290
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d18194 with catch @ 05d18294
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d181b0 with catch @ 05d18298
                       catch(type#1 @ 066567d8) { ... } // from try @ 05d18234 with catch @ 05d18298
                        */
                    /* try { // try from 05d182b4 to 05e182b7 has its CatchHandler @ 05d182c0 */
  if ((DAT_06dc2ee8 & 1) == 0) {
                    /* catch() { ... } // from try @ 05d182b4 with catch @ 05d182c0 */
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
                    /* try { // try from 05d182c4 to 05e182cb has its CatchHandler @ 05d182d4 */
                    /* try { // try from 05d182cc to 05e182d7 has its CatchHandler @ 05d18160 */
    FUN_02d965b8(PTR_DAT_069fc180);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d182c4 with catch @ 05d182d4
                        */
                    /* try { // try from 05d182d8 to 05e1844b has its CatchHandler @ 05d182d8
                       catch() { ... } // from try @ 05d182d8 with catch @ 05d182d8
                       catch() { ... } // from try @ 05d18494 with catch @ 05d182d8
                       catch() { ... } // from try @ 05d185a0 with catch @ 05d182d8
                       catch() { ... } // from try @ 05d18640 with catch @ 05d182d8 */
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__ctor__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append__);
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Clear__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Merge__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_get_Item__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_AppendWithCapacity__
                );
    DAT_06dc2ee8 = 1;
  }
  puVar1 = PTR_DAT_069ff488;
  *param_2 = 0;
  LeanTween__value(param_2,0);
  *param_3 = 0;
  LeanTween__value(param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar4 = FUN_05d18600(param_1);
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
  }
  uVar5 = FUN_05c0cd54(lVar4,0,0);
  puVar9 = (undefined8 *)
           Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__ctor__;
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) goto LAB_05d185fc;
    uVar5 = FUN_05c08d10(lVar4,0);
    puVar9 = (undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Clear__;
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_05c0c424(lVar4,0);
      puVar2 = Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__;
      uVar5 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                        Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__
                                 ,0);
      if ((((uVar5 & 1) != 0) ||
          (uVar5 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo,0),
          puVar9 = (undefined8 *)
                   Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Merge__,
          (uVar5 & 1) != 0)) &&
         (iVar3 = FUN_05c0c118(lVar4,0),
         puVar9 = (undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append__,
         iVar3 != 0)) {
        lVar8 = FUN_05c0c300(lVar4,0);
        if (lVar8 != 0) {
          puVar9 = (undefined8 *)
                   Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_AppendWithCapacity__
          ;
          if (0 < *(int *)(lVar8 + 0x10)) goto LAB_05d18470;
          if (iVar3 != -1) {
            *param_2 = lVar4;
            LeanTween__value(param_2,lVar4);
            return 1;
          }
          uVar5 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)puVar2,0);
          lVar8 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
          if (lVar8 != 0) {
            uVar7 = 0x50;
            if ((uVar5 & 1) == 0) {
              uVar7 = 0x1bb;
            }
            FUN_0297c314(lVar8,uVar6);
            FUN_02978e90(lVar8,0,uVar6);
            uVar6 = FUN_05c0b888(lVar4,0);
            FUN_0297c314(lVar8,uVar6);
            FUN_02978e90(lVar8,1,uVar6);
                    /* try { // try from 05d18558 to 05e1859f has its CatchHandler @ 05d18600 */
            local_44 = uVar7;
            uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_44);
            FUN_0297c314(lVar8,uVar6);
            FUN_02978e90(lVar8,2,uVar6);
            uVar6 = FUN_05c0b574(lVar4,0);
            FUN_0297c314(lVar8,uVar6);
                    /* try { // try from 05d185a0 to 05e1861f has its CatchHandler @ 05d182d8 */
            FUN_02978e90(lVar8,3,uVar6);
            uVar6 = FUN_0536e164(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_get_Item__
                                 ,lVar8,0);
            lVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_05c08998(lVar4,uVar6,0);
            *param_2 = lVar4;
            LeanTween__value(param_2,lVar4);
            return 1;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d18480 with catch @ 05d185f8
                        */
          }
        }
LAB_05d185fc:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d18474 with catch @ 05d185fc
                        */
        FUN_02d96860();
      }
    }
  }
LAB_05d18470:
                    /* try { // try from 05d18474 to 05e18477 has its CatchHandler @ 05d185fc */
  *param_3 = *puVar9;
  LeanTween__value(param_3);
                    /* try { // try from 05d18480 to 05e18493 has its CatchHandler @ 05d185f8 */
                    /* try { // try from 05d18494 to 05e18557 has its CatchHandler @ 05d182d8 */
  return 0;
}



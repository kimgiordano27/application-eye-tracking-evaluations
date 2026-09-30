/*
FUNCTION_NAME: FUN_00f51f1c
ENTRY_POINT: 00f51f1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_00f51f1c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,uint param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar1 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
  ;
                    /* try { // try from 00f51f5c to 01051f63 has its CatchHandler @ 00f5212c */
  if ((DAT_03775723 & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_Timeline_ControlPlayableAsset_<GetControlableScripts>d__39_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRSpatialAnchor>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_X86_Fma_fnmadd_sd__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IMarker>_Clear__);
                    /* try { // try from 00f51fa4 to 01051fa7 has its CatchHandler @ 00f5213c */
    thunk_FUN_00d48444(UnityEngine_Timeline_TrackBindingTypeAttribute_var);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_39_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_WeakReference<SslStream>_TryGetTarget__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                      );
                    /* try { // try from 00f51fcc to 01051fcf has its CatchHandler @ 00f52124 */
    DAT_03775723 = 1;
  }
                    /* try { // try from 00f51fd4 to 01051fdb has its CatchHandler @ 00f52118 */
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = UnityEngine_Timeline_ControlPlayableAsset_<GetControlableScripts>d__39_TypeInfo;
  if (lVar4 != 0) {
                    /* try { // try from 00f51fe0 to 01051feb has its CatchHandler @ 00f5210c */
                    /* try { // try from 00f51ff0 to 0105200f has its CatchHandler @ 00f52134 */
    FUN_00f67690(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_5;
    uVar5 = FUN_0107eb04(0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Collections_Generic_List<OVRSpatialAnchor>__ctor__;
    if (lVar6 != 0) {
                    /* try { // try from 00f5202c to 01052033 has its CatchHandler @ 00f52138 */
      FUN_0128180c(lVar6,lVar4,*(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo,0);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar3 = Method_Unity_Burst_Intrinsics_X86_Fma_fnmadd_sd__;
      puVar2 = Method_System_Collections_Generic_List<IMarker>_Clear__;
      puVar1 = UnityEngine_Timeline_TrackBindingTypeAttribute_var;
                    /* try { // try from 00f52040 to 01052047 has its CatchHandler @ 00f52128 */
      if (lVar7 != 0) {
                    /* try { // try from 00f52048 to 0105204f has its CatchHandler @ 00f52120 */
        FUN_012819a8(lVar7,lVar4,
                     *(undefined8 *)Method_System_WeakReference<SslStream>_TryGetTarget__,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_78 = param_1;
        uStack_74 = param_2;
        uVar5 = FUN_010c90ec(param_4,uVar5,lVar6,lVar7,&local_78,*(undefined8 *)puVar3);
        uVar8 = FUN_0107d968(param_3,uVar5,param_6 & 1,param_7 & 1,0);
        FUN_0114e340(uVar8,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)puVar1);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f520f4 to 010520f7 has its CatchHandler @ 00f5211c */
  FUN_00da518c();
}



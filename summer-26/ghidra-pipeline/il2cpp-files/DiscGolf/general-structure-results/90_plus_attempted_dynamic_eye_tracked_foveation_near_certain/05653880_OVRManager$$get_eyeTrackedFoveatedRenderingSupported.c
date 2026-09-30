/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05653880
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported
               (undefined8 param_1,undefined4 param_2,long *param_3,long *param_4,long *param_5,
               long *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_06dbc34f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyCollection<NetworkClient>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_HashSet<IXRGroupMember>_TypeInfo);
    DAT_06dbc34f = 1;
  }
  puVar1 = System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo;
  if (*param_5 != 0) {
    lVar7 = *(long *)System_Collections_Generic_HashSet<IXRGroupMember>_TypeInfo;
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_02dcfd74(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 8);
    if (*(long *)(lVar6 + 0x38) == 0) {
      FUN_02dcfd74(lVar6);
    }
    if (((0 < (int)param_5[1]) && (*param_5 != 0)) &&
       (lVar6 = FUN_036eca58(*param_5,param_5[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28)),
       lVar6 != 0)) {
      uVar2 = FUN_036ec990(*param_5,param_5[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
      goto LAB_05653974;
    }
  }
  uVar2 = 0;
LAB_05653974:
  lVar7 = *(long *)puVar1;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02dcfd74(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (*(long *)(lVar6 + 0x38) == 0) {
    FUN_02dcfd74(lVar6);
  }
  if ((((int)param_3[1] < 1) || (*param_3 == 0)) ||
     (lVar6 = FUN_036eca54(*param_3,param_3[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28)),
     lVar6 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_036ec98c(*param_3,param_3[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
  }
  lVar7 = *(long *)puVar1;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02dcfd74(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (*(long *)(lVar6 + 0x38) == 0) {
    FUN_02dcfd74(lVar6);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if ((((int)param_4[1] < 1) || (*param_4 == 0)) ||
     (lVar6 = FUN_036eca54(*param_4,param_4[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28)),
     lVar6 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_036ec98c(*param_4,param_4[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
  }
  lVar7 = *(long *)puVar1;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02dcfd74(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (*(long *)(lVar6 + 0x38) == 0) {
    FUN_02dcfd74(lVar6);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if ((((int)param_6[1] < 1) || (*param_6 == 0)) ||
     (lVar6 = FUN_036ec9e8(*param_6,param_6[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28)),
     lVar6 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_036ec8f8(*param_6,param_6[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
  }
  lVar6 = param_6[1];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05653440(param_1,param_2,uVar3,uVar4,uVar2,uVar5,(int)lVar6);
  return;
}



/*
FUNCTION_NAME: OVRUnityHumanoidSkeletonRetargeter$$Start
ENTRY_POINT: 031253c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void OVRUnityHumanoidSkeletonRetargeter__Start(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff1df1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f468);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1df1 = 1;
  }
  plVar6 = (long *)(param_1 + 0x20);
  lVar7 = *plVar6;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_01e8a9f8(param_1,*(undefined8 *)PTR_DAT_03d7f468);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_01b4f09c(plVar6,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  if ((*plVar6 != 0) && (lVar7 = FUN_03120f18(), lVar7 != 0)) {
    thunk_FUN_038fd510(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),lVar7,
                       *(undefined4 *)(param_1 + 0x68),0);
    thunk_FUN_038fd510(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                       *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),lVar7,
                       *(undefined4 *)(param_1 + 0x6c),0);
    thunk_FUN_038fd460(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58),lVar7,
                       *(undefined4 *)(param_1 + 0x70),0);
    uVar1 = *(undefined4 *)(param_1 + 0x74);
    lVar5 = FUN_0391c27c(param_1,0);
    if (lVar5 != 0) {
      uVar4 = FUN_03929354(lVar5,0);
      lVar5 = FUN_0391c27c(param_1,0);
      if (lVar5 != 0) {
        FUN_03929354(lVar5,0);
        thunk_FUN_038fd460(uVar4,lVar7,uVar1,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_03120f88();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



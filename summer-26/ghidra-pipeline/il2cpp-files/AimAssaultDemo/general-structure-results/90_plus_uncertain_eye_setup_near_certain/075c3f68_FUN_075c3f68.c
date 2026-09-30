/*
FUNCTION_NAME: FUN_075c3f68
ENTRY_POINT: 075c3f68
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_10
*/


undefined8 FUN_075c3f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0826e855 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_60_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_61_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_64_0_TypeInfo);
    DAT_0826e855 = 1;
  }
  local_48 = 0;
  FUN_075c52bc(param_1);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_075c412c;
  uVar2 = FUN_059ec97c(*(long *)(param_1 + 0x18),param_2,param_3,&local_48,
                       *(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
  if ((uVar2 & 1) == 0) {
    lVar3 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_075c5650();
    if (lVar3 == 0) goto LAB_075c412c;
    local_40 = param_2;
    uStack_38 = param_3;
    uVar4 = FUN_0623cf1c(&local_40,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    thunk_FUN_037aeb94();
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_075c56f4();
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20),uVar4);
    lVar5 = *(long *)(param_1 + 0x10);
    local_48 = lVar3;
    if (lVar5 == 0) goto LAB_075c412c;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)OVRPlugin_OVRP_1_62_0_TypeInfo;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_075c412c;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = lVar3;
      thunk_FUN_037aeb94(plVar7,lVar3);
    }
    else {
      FUN_049ceef4(lVar5,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_075c412c;
    FUN_059eaf08(*(long *)(param_1 + 0x18),param_2,param_3,local_48,
                 *(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
  }
  if (local_48 != 0) {
    *(int *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1;
    return *(undefined8 *)(local_48 + 0x20);
  }
LAB_075c412c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



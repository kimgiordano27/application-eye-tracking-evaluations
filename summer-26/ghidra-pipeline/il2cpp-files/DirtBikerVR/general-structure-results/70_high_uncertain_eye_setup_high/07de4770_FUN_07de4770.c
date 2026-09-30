/*
FUNCTION_NAME: FUN_07de4770
ENTRY_POINT: 07de4770
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_10
*/


undefined8 FUN_07de4770(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_28;
  
  puVar2 = OVRPlugin_Media_TypeInfo;
  if ((DAT_0899a18d & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Mesh_TypeInfo);
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(OVRPlugin_MeshType_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_0_1_2_TypeInfo);
    DAT_0899a18d = 1;
  }
  puVar3 = OVRPlugin_OVRP_0_1_2_TypeInfo;
  local_28 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_07de4b44(param_1);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar7);
  }
  uVar6 = FUN_07e66800(uVar5,&local_28,0);
  if ((uVar6 & 1) != 0) {
    return local_28;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar7 = *(long *)puVar2;
  }
  FUN_07de4f7c(param_1,**(undefined8 **)(lVar7 + 0xb8));
  if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
    local_28 = FUN_03a8a804(*(undefined8 *)OVRPlugin_Mesh_TypeInfo,
                            *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
    if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
      FUN_04cf44e4(**(long **)(*(long *)puVar2 + 0xb8),local_28,
                   *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar1) {
          Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                    (*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
        }
        uVar4 = local_28;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07e66890(uVar5,uVar4,0);
        return local_28;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



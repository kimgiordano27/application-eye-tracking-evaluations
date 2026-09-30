/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_is_channel_get
ENTRY_POINT: 078994a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_is_channel_get(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  FUN_03a8a718();
  FUN_03a8a718(System_Func<Task<byte[]>>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ERTree>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ERTreeInstance>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ERSOSection>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x82f) = 1;
  puVar1 = System_Collections_Generic_List<ERSOSection>_TypeInfo;
  if (unaff_x19 != 0) {
    lVar2 = *(long *)System_Collections_Generic_List<ERSOSection>_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
    puVar4 = *(undefined8 **)(lVar2 + 0xb8);
    if (puVar4[6] == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar5 = *puVar4;
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Func<Task<byte[]>>_TypeInfo);
      FUN_0495c41c(uVar3,uVar5,*(undefined8 *)System_Collections_Generic_List<ERTree>_TypeInfo,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *puVar4 = uVar3;
      thunk_FUN_03afed3c(puVar4,uVar3);
      lVar2 = *(long *)puVar1;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
    puVar4 = *(undefined8 **)(lVar2 + 0xb8);
    if (puVar4[7] == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar5 = *puVar4;
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<ERTrafficPosts>_TypeInfo);
      FUN_0495c41c(uVar3,uVar5,
                   *(undefined8 *)System_Collections_Generic_List<ERTreeInstance>_TypeInfo,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *puVar4 = uVar3;
      thunk_FUN_03afed3c(puVar4,uVar3);
    }
    uVar3 = FUN_044dec2c();
    return uVar3;
  }
  return 0;
}



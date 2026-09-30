/*
FUNCTION_NAME: FUN_05248f70
ENTRY_POINT: 05248f70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4
*/


void FUN_05248f70(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = Oculus_Platform_Request<AssetDetails>_TypeInfo;
  if ((DAT_06bba982 & 1) == 0) {
    FUN_02f08768(UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo);
    FUN_02f08768(
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                );
                    /* try { // try from 05248fb0 to 05348fbf has its CatchHandler @ 05249070 */
    FUN_02f08768(Oculus_Platform_Request<CowatchViewerList>_TypeInfo);
                    /* try { // try from 05248fc4 to 05348fd7 has its CatchHandler @ 05249074 */
    FUN_02f08768(Oculus_Platform_Request<AssetDetails>_TypeInfo);
    DAT_06bba982 = 1;
  }
  lVar2 = *(long *)puVar1;
  *(long *)(param_1 + 0x28) = param_2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[5];
  if (lVar4 == 0) {
                    /* try { // try from 05248ff8 to 05349007 has its CatchHandler @ 0524906c */
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                              );
    FUN_0472ba3c(lVar4,uVar5,*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar4;
  }
  if (param_2 != 0) {
    uVar5 = FUN_0303b0c0(param_2,lVar4,
                         *(undefined8 *)
                          UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                        );
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



/*
FUNCTION_NAME: FUN_07069878
ENTRY_POINT: 07069878
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_07069878(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
                    /* try { // try from 07069878 to 0716987b has its CatchHandler @ 0706a050 */
  puVar1 = PTR_DAT_07d86398;
                    /* try { // try from 07069884 to 07169893 has its CatchHandler @ 0706a05c */
  if ((DAT_08267902 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8b438);
    FUN_0373b518(PTR_DAT_07d86398);
                    /* try { // try from 070698c8 to 071698cf has its CatchHandler @ 0706a048 */
    FUN_0373b518(UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_var);
    FUN_0373b518(UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_var);
                    /* try { // try from 070698d8 to 071698e7 has its CatchHandler @ 0706a04c */
    FUN_0373b518(UnityEngine_XR_ARFoundation_ARTextureInfo_var);
    FUN_0373b518(Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var);
    FUN_0373b518(UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_var);
    FUN_0373b518(UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var);
    FUN_0373b518(UnityEngine_TextCore_Text_ATGMeshInfo_var);
    FUN_0373b518(UnityEngine_InputSystem_Accelerometer_var);
    FUN_0373b518(System_Data_AcceptRejectRule_var);
    FUN_0373b518(System_AccessViolationException_var);
    FUN_0373b518(System_Action_var);
    FUN_0373b518(System_Action<T>_var);
    FUN_0373b518(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var);
    FUN_0373b518(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11>_var);
    DAT_08267902 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar10 = FUN_075aa744(uVar11,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar11 = FUN_03f0da94(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07d8b438);
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    thunk_FUN_037aeb94();
  }
  puVar9 = System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var;
  puVar8 = System_Action<T>_var;
  puVar7 = System_AccessViolationException_var;
  puVar6 = UnityEngine_InputSystem_Accelerometer_var;
  puVar5 = UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_var;
  puVar4 = Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var;
  puVar3 = UnityEngine_XR_ARFoundation_ARTextureInfo_var;
  puVar2 = UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_var;
  puVar1 = UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_var;
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)System_Action_var,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar5,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar7,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar8,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x98) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar6,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar4,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x60) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar1,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x68) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar9,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar3,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)puVar2,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)System_Data_AcceptRejectRule_var,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x88) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)
                         System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11>_var,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x90) = uVar11;
  thunk_FUN_037aeb94();
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = FUN_071e2454(*(undefined8 *)UnityEngine_TextCore_Text_ATGMeshInfo_var,0);
  uVar11 = FUN_071f3798(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x80) = uVar11;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x80),uVar11);
  return;
}



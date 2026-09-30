/*
FUNCTION_NAME: FUN_0604d874
ENTRY_POINT: 0604d874
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0604d874(int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  undefined *puVar6;
  
  if ((DAT_06b8755a & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767c20);
    DAT_06b8755a = 1;
  }
  puVar6 = PTR_DAT_06767c20;
  iVar1 = param_1[5];
  if (iVar1 != 0) {
LAB_0604d8b4:
    uVar2 = FUN_06074e00(iVar1,0x10,0);
    if ((uVar2 & 1) != 0) {
      iVar7 = param_1[7];
      if (iVar7 != 0) goto LAB_0604d8d8;
      goto LAB_0604d8f8;
    }
    iVar1 = param_1[5];
    local_38 = thunk_FUN_02dc61f4(
                                 Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_ObjectReferenceEqualityComparator_TypeInfo
                                 );
    uStack_30 = 0xffffffffffffffff;
    local_28 = iVar1;
    uVar3 = FUN_0503c914(&local_38,0);
    uVar4 = thunk_FUN_02dc61f4(
                              Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchyRecursive__
                              );
    puVar6 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
LAB_0604dba4:
    uVar5 = thunk_FUN_02dc61f4(puVar6);
    uVar3 = FUN_04e8db00(uVar4,uVar3,uVar5,0);
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar4 = thunk_FUN_02d9d534();
    puVar6 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_GetControlIndex__;
LAB_0604dbdc:
    uVar5 = thunk_FUN_02dc61f4(puVar6);
    FUN_04f77088(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_02dc61f4(
                              Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_AddChildControls__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar3);
  }
  iVar7 = param_1[7];
  if (iVar7 == 0) {
    FUN_0604e9f4(param_1);
    FUN_0604c204();
    iVar1 = param_1[5];
    iVar7 = 0x5a;
    param_1[7] = 0x5a;
    if (iVar1 != 0) goto LAB_0604d8b4;
  }
LAB_0604d8d8:
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_060b0084(iVar7,0);
  if ((uVar2 & 1) == 0) {
    iVar1 = param_1[7];
    local_38 = thunk_FUN_02dc61f4(
                                 Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_ObjectReferenceEqualityComparator_TypeInfo
                                 );
    uStack_30 = 0xffffffffffffffff;
    local_28 = iVar1;
    uVar3 = FUN_0503c914(&local_38,0);
    uVar4 = thunk_FUN_02dc61f4(
                              Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ApplyUseStateFrom__
                              );
    uVar5 = thunk_FUN_02dc61f4(
                              Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                              );
    uVar3 = FUN_04e8db00(uVar4,uVar3,uVar5,0);
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar4 = thunk_FUN_02d9d534();
    puVar6 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchy__;
    goto LAB_0604dbdc;
  }
LAB_0604d8f8:
  if (*param_1 < 1) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar3 = thunk_FUN_02d9d534();
    uVar4 = thunk_FUN_02dc61f4(
                              Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<Quaternion>__
                              );
    puVar6 = Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<float>__;
    goto LAB_0604da68;
  }
  if (param_1[1] < 1) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar3 = thunk_FUN_02d9d534();
    uVar4 = thunk_FUN_02dc61f4(Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<uint>__);
    puVar6 = Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<Vector2>__;
    goto LAB_0604da68;
  }
  iVar1 = param_1[3];
  if (iVar1 < 1) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar3 = thunk_FUN_02d9d534();
    puVar6 = Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<Vector3>__;
  }
  else {
    if ((8 < (uint)param_1[2]) || ((1 << (ulong)(param_1[2] & 0x1f) & 0x116U) == 0)) {
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar3 = thunk_FUN_02d9d534();
      uVar4 = thunk_FUN_02dc61f4(
                                Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_InsertChildControl__
                                );
      puVar6 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_InstantiateLayout__;
      goto LAB_0604da68;
    }
    if ((((uint)(iVar1 * -0x55555555) >> 1 | iVar1 * -0x80000000) < 0x2aaaaaab) || (param_1[8] != 6)
       ) {
      iVar1 = param_1[5];
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_060b0084(iVar1,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      iVar1 = param_1[5];
      local_38 = thunk_FUN_02dc61f4(
                                   Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_ObjectReferenceEqualityComparator_TypeInfo
                                   );
      uStack_30 = 0xffffffffffffffff;
      local_28 = iVar1;
      uVar3 = FUN_0503c914(&local_38,0);
      uVar4 = thunk_FUN_02dc61f4(
                                Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_AddProcessors__
                                );
      puVar6 = PTR_DAT_06778320;
      goto LAB_0604dba4;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar3 = thunk_FUN_02d9d534();
    puVar6 = Method_UnityEngine_XR_InputDevice_SendHapticImpulse__;
  }
  uVar4 = thunk_FUN_02dc61f4(puVar6);
  puVar6 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_AddChildControl__;
LAB_0604da68:
  uVar5 = thunk_FUN_02dc61f4(puVar6);
  FUN_04f77088(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_02dc61f4(
                            Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_AddChildControls__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar4);
}



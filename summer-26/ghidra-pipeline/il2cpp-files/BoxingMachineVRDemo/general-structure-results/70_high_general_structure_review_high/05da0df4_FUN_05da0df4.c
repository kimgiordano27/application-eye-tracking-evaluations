/*
FUNCTION_NAME: FUN_05da0df4
ENTRY_POINT: 05da0df4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_2
*/


void FUN_05da0df4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int local_34;
  
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>__ctor__;
  puVar4 = 
  Method_System_Collections_Generic_Queue<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>_Dequeue__
  ;
  puVar3 = PTR_DAT_0676b5d0;
  if ((DAT_06b82e4e & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Count__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Queue<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>_Dequeue__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Queue<Tuple<SendOrPostCallback,_object>>_Dequeue__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Item__);
    FUN_02d6084c(PTR_DAT_0676b5d0);
    DAT_06b82e4e = 1;
  }
  local_34 = 0;
  FUN_04d773c8(param_1,*(undefined8 *)puVar5);
  uVar6 = FUN_035d23dc(param_1,*(undefined8 *)puVar3,
                       **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),
                       *(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xb0),uVar6);
  lVar7 = *(long *)(param_1 + 0xb8);
  if (lVar7 == 0) {
LAB_05da0fe0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_05029664(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
  }
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Item__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__;
  puVar3 = Method_System_Collections_Generic_Queue<Tuple<SendOrPostCallback,_object>>_Dequeue__;
  local_34 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar6 = FUN_050048bc(&local_34,0);
      uVar6 = FUN_04e83184(*(undefined8 *)puVar5,uVar6,0);
      uVar6 = FUN_035d29c8(param_1,uVar6,*(undefined8 *)puVar3);
      if (lVar7 == 0) goto LAB_05da0fe0;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05da0fe0;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)(param_1 + 0xa8));
  }
  return;
}



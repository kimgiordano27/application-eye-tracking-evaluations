/*
FUNCTION_NAME: FUN_0682bd14
ENTRY_POINT: 0682bd14
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long FUN_0682bd14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long local_28;
  
  if ((DAT_071d699a & 1) == 0) {
    FUN_02f07e70(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_InputActionAsset_WriteFileJson_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Reference_TypeInfo);
    FUN_02f07e70(MagicaCloth2_InertiaConstraint_SerializeData_TypeInfo);
    DAT_071d699a = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                      (*(long *)(param_1 + 0x28),param_2,&local_28,
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo
                      );
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0682be5c;
      FUN_0463ad1c(*(long *)(param_1 + 0x20),5,
                   *(undefined8 *)MagicaCloth2_InertiaConstraint_SerializeData_TypeInfo);
      local_28 = FUN_06829e88(param_1,param_2);
    }
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Reference_TypeInfo
                              );
    FUN_06829dc4(lVar4,3);
    puVar1 = UnityEngine_InputSystem_InputActionAsset_WriteFileJson_TypeInfo;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x24) = 5;
      plVar5 = (long *)FUN_02f07f14(*(undefined8 *)puVar1,1);
      lVar2 = local_28;
      if (plVar5 != (long *)0x0) {
        if ((local_28 != 0) &&
           (lVar6 = thunk_FUN_02ef170c(local_28,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar7,0);
        }
        if ((int)plVar5[3] != 0) {
          plVar5[4] = lVar2;
          thunk_FUN_02f411dc(plVar5 + 4,lVar2);
          *(long *)(lVar4 + 0x28) = (long)plVar5;
          thunk_FUN_02f411dc((long *)(lVar4 + 0x28),plVar5);
          return lVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
    }
  }
LAB_0682be5c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}



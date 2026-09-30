/*
FUNCTION_NAME: FUN_0682be70
ENTRY_POINT: 0682be70
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long FUN_0682be70(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_30;
  long local_28;
  undefined *puVar7;
  
  if ((DAT_071d699b & 1) == 0) {
    FUN_02f07e70(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_InputActionAsset_WriteFileJson_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Reference_TypeInfo);
    FUN_02f07e70(MagicaCloth2_InertiaConstraint_SerializeData_TypeInfo);
    FUN_02f07e70(System_Net_Http_HttpContent_FixedMemoryStream_TypeInfo);
    DAT_071d699b = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (param_2 == 0) goto LAB_0682c058;
  FUN_0682ad0c(local_48,param_2);
  if (local_48[0] == 8) {
    FUN_0682b984(local_48,param_2);
    if (local_48[0] == 1) {
      if (*(int *)(*(long *)System_Net_Http_HttpContent_FixedMemoryStream_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_0681d218(local_40,&local_30,0);
      if ((uVar2 & 1) == 0) {
        uVar8 = thunk_FUN_02f239f0(
                                  UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_TypeInfo
                                  );
        uVar6 = thunk_FUN_02f239f0(
                                  UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_TypeInfo
                                  );
        uVar8 = FUN_05465414(uVar8,local_40,uVar6,0);
        goto LAB_0682c114;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_0682c058:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar2 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                        (*(long *)(param_1 + 0x28),local_30,&local_28,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo
                        );
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0682c058;
        FUN_0463ad1c(*(long *)(param_1 + 0x20),5,
                     *(undefined8 *)MagicaCloth2_InertiaConstraint_SerializeData_TypeInfo);
        local_28 = FUN_06829e88(param_1,local_30);
      }
      FUN_0682b984(local_48,param_2);
      if (local_48[0] != 8) goto LAB_0682c05c;
      FUN_0682b984(local_48,param_2);
      if (local_48[0] == 0x13) {
        lVar3 = thunk_FUN_02ef1808(*(undefined8 *)
                                    System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Reference_TypeInfo
                                  );
        FUN_06829dc4(lVar3,3);
        puVar7 = UnityEngine_InputSystem_InputActionAsset_WriteFileJson_TypeInfo;
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x24) = 5;
          plVar4 = (long *)FUN_02f07f14(*(undefined8 *)puVar7,1);
          lVar1 = local_28;
          if (plVar4 != (long *)0x0) {
            if ((local_28 != 0) &&
               (lVar5 = thunk_FUN_02ef170c(local_28,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar8 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar8,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar1;
              thunk_FUN_02f411dc(plVar4 + 4,lVar1);
              *(long *)(lVar3 + 0x28) = (long)plVar4;
              thunk_FUN_02f411dc((long *)(lVar3 + 0x28),plVar4);
              return lVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
        }
        goto LAB_0682c058;
      }
      uVar8 = thunk_FUN_02f239f0(
                                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableValue_TypeInfo
                                );
      uVar8 = thunk_FUN_02ef1438(uVar8,local_48);
      puVar7 = UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutNotFoundException_TypeInfo;
    }
    else {
      uVar8 = thunk_FUN_02f239f0(
                                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableValue_TypeInfo
                                );
      uVar8 = thunk_FUN_02ef1438(uVar8,local_48);
      puVar7 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo;
    }
  }
  else {
LAB_0682c05c:
    uVar8 = thunk_FUN_02f239f0(
                              System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableValue_TypeInfo
                              );
    uVar8 = thunk_FUN_02ef1438(uVar8,local_48);
    puVar7 = UnityEngine_InputSystem_Layouts_InputControlLayout_<>c_TypeInfo;
  }
  uVar6 = thunk_FUN_02f239f0(puVar7);
  uVar8 = FUN_0545c378(uVar6,uVar8,0);
LAB_0682c114:
  thunk_FUN_02f239f0(PTR_DAT_06d021d0);
  uVar6 = thunk_FUN_02ef1808();
  FUN_05639edc(uVar6,uVar8,0);
  uVar8 = thunk_FUN_02f239f0(UnityEngine_InputSystem_InputControlPath_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar6,uVar8);
}



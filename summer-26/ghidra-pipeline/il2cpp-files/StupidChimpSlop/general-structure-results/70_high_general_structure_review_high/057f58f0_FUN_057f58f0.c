/*
FUNCTION_NAME: FUN_057f58f0
ENTRY_POINT: 057f58f0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


void FUN_057f58f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  
  if ((DAT_06a55647 & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append__);
    FUN_02d4dc40(System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
    FUN_02d4dc40(Method_System_Collections_Generic_List<ClimbInteractable>_Add__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<ClimbInteractable>_Clear__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<ClimbInteractable>_RemoveAt__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<NativeSlice<ushort>>__ctor__);
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_RuntimeVariablesInstruction_TypeInfo);
    FUN_02d4dc40(Method_System_Collections_Generic_List<Action>_GetEnumerator__);
    FUN_02d4dc40(PTR_DAT_0664de38);
    DAT_06a55647 = 1;
  }
  puVar1 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append__;
  if (param_2 == 0) {
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar11 = thunk_FUN_02d8a638();
    uVar6 = thunk_FUN_02db45e8(System_Net_HttpListenerRequestUriBuilder_TypeInfo);
    FUN_04f681bc(uVar11,uVar6,0);
    uVar6 = thunk_FUN_02db45e8(Method_System_Collections_Generic_List<ClimbInteractable>_get_Count__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar11,uVar6);
  }
  plVar3 = (long *)thunk_FUN_02d8a53c(param_2,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append__
                                     );
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_057f59f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d87540(plVar3,*(long *)puVar1,0);
LAB_057f59f0:
    lVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar7 != 0) {
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_057f5a4c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d87540(plVar3,*(long *)puVar1,0);
LAB_057f5a4c:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar11 = *(undefined8 *)Method_System_Collections_Generic_List<ClimbInteractable>_Add__;
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)(PTR_DAT_066462a0 + 0xe0));
      }
      uVar11 = FUN_050121a8(uVar11,0);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_System_Collections_Generic_List<NativeSlice<ushort>>__ctor__) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_057f5aec;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_02d87540(plVar5,*(long *)
                                      Method_System_Collections_Generic_List<NativeSlice<ushort>>__ctor__
                              ,0);
LAB_057f5aec:
        uVar11 = (*(code *)*puVar4)(plVar5,uVar11,puVar4[1]);
        puVar2 = Method_System_Collections_Generic_List<ClimbInteractable>_Clear__;
        plVar5 = (long *)thunk_FUN_02d8a53c(uVar11,*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_List<ClimbInteractable>_Clear__
                                           );
        if (*(int *)(*(long *)PTR_DAT_0664de38 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)PTR_DAT_0664de38);
        }
        uVar11 = FUN_057f495c(param_2);
        if (plVar5 == (long *)0x0) {
          lVar7 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_057f5be0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d87540(plVar3,*(long *)puVar1,0);
LAB_057f5be0:
          plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          if (plVar3 == (long *)0x0) goto LAB_057f5d70;
          lVar7 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Linq_Expressions_Interpreter_RuntimeVariablesInstruction_TypeInfo)
              {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_057f5c4c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_02d87540(plVar3,*(long *)
                                        System_Linq_Expressions_Interpreter_RuntimeVariablesInstruction_TypeInfo
                                ,1);
LAB_057f5c4c:
          plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          if (plVar5 == (long *)0x0) goto LAB_057f5ca8;
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_057f5cdc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_02d87540(plVar5,*(long *)
                                        System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo,
                                2);
LAB_057f5cdc:
          pcVar8 = (code *)*puVar4;
          uVar6 = puVar4[1];
        }
        else {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_057f5bc8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d87540(plVar5,*(long *)puVar2,0);
LAB_057f5bc8:
          pcVar8 = (code *)*puVar4;
          uVar6 = puVar4[1];
        }
        uVar6 = (*pcVar8)(plVar5,uVar6);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action>_GetEnumerator__ + 0xe4)
            == 0) {
          thunk_FUN_02dabd98(*(long *)Method_System_Collections_Generic_List<Action>_GetEnumerator__
                            );
        }
        FUN_057f5d74(uVar6,param_2,uVar11);
        return;
      }
LAB_057f5d70:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
LAB_057f5ca8:
  FUN_02d4dd2c(*(undefined8 *)Method_System_Collections_Generic_List<ClimbInteractable>_RemoveAt__,0
              );
  return;
}



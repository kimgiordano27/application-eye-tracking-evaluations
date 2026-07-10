/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$PerformLayoutPostRegistration
ENTRY_POINT: 03249ef0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_InputSystem_InputManager__PerformLayoutPostRegistration
               (long param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint param_5,
               uint param_6,ulong param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo_03cb6d28;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_03ef4dec & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<string,_InputControlLayoutChange>___03ccef10
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_Remove___03ccd470
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Count___03ccef18
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Item___03ccd478
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys___03ccd480
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InternedString>_set_Item___03ccef20
                );
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_ToArray<InternedString>___03ccef28);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_get_Item___03cceb60
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo_03cb6d28);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputManager_TypeInfo_03ccd688);
    FUN_01c5c92c(PTR_StringLiteral_3293_03ccef30);
    DAT_03ef4dec = 1;
  }
  lVar6 = *(long *)puVar2;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  iVar5 = *(int *)(lVar6 + 0xe4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar5 == 0) {
    thunk_FUN_01cb0d4c();
    lVar6 = *(long *)puVar2;
  }
  UnityEngine_InputSystem_Layouts_InputControlLayout_Cache__Clear(*(long *)(lVar6 + 0xb8) + 0x50,0);
  auVar13._8_8_ = local_80._8_8_;
  auVar13._0_8_ = local_80._0_8_;
  if (((param_7 & 1) == 0) && (local_80 = auVar13, 0 < *param_4)) {
    if (*param_4 != 1) {
      uStack_88 = uStack_68;
      local_90 = local_70;
      uVar8 = thunk_FUN_01cb9718(
                                PTR_UnityEngine_InputSystem_Utilities_InternedString_TypeInfo_03ccc910
                                );
      uVar8 = thunk_FUN_01c8f880(uVar8,&local_90);
      uVar10 = thunk_FUN_01cb9718(PTR_StringLiteral_3668_03ccef38);
      uVar8 = System_String__Format(uVar10,uVar8,0);
      thunk_FUN_01cb9718(PTR_System_NotSupportedException_TypeInfo_03cb5c28);
      uVar10 = thunk_FUN_01c8fc48();
      System_NotSupportedException___ctor(uVar10,uVar8,0);
      uVar8 = thunk_FUN_01cb9718(
                                PTR_Method_UnityEngine_InputSystem_InputManager_PerformLayoutPostRegistration___03ccef40
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5ca98(uVar10,uVar8);
    }
    local_80 = UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__get_Item
                         (param_4,0,
                          *(undefined8 *)
                           PTR_Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_get_Item___03cceb60
                         );
    uVar7 = UnityEngine_InputSystem_Utilities_InternedString__IsEmpty(local_80,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0324a30c;
      System_Collections_Generic_Dictionary<InternedString,_InternedString>__set_Item
                (*(long *)(param_1 + 0x30),param_2,param_3,local_80._0_8_,local_80._8_8_,
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InternedString>_set_Item___03ccef20
                );
    }
  }
  puVar2 = 
  PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_Remove___03ccd470
  ;
  if (*(long *)(param_1 + 0x48) != 0) {
    System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>__Remove
              (*(long *)(param_1 + 0x48),param_2,param_3,
               *(undefined8 *)
                PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_Remove___03ccd470
              );
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar5 = System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>__get_Count
                        (*(long *)(param_1 + 0x48),
                         *(undefined8 *)
                          PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Count___03ccef18
                        );
      puVar3 = PTR_Method_System_Linq_Enumerable_ToArray<InternedString>___03ccef28;
      if (iVar5 < 1) {
LAB_0324a208:
        puVar3 = 
        PTR_Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_get_Item___03cceb60
        ;
        puVar2 = PTR_UnityEngine_InputSystem_InputManager_TypeInfo_03ccd688;
        if ((param_7 & 1) == 0) {
          UnityEngine_InputSystem_InputManager__RecreateDevicesUsingLayout
                    (param_1,param_2,param_3,param_6 & 1);
        }
        else if (0 < *param_4) {
          iVar5 = 0;
          do {
            auVar13 = UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__get_Item
                                (param_4,iVar5,*(undefined8 *)puVar3);
            UnityEngine_InputSystem_InputManager__RecreateDevicesUsingLayout
                      (param_1,auVar13._0_8_,auVar13._8_8_,param_6 & 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *param_4);
        }
        puVar4 = PTR_StringLiteral_3293_03ccef30;
        puVar3 = 
        PTR_Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<string,_InputControlLayoutChange>___03ccef10
        ;
        uVar8 = UnityEngine_InputSystem_Utilities_InternedString__ToString(&local_70,0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(lVar6);
          lVar6 = *(long *)puVar2;
        }
        uVar12 = 2;
        if ((param_5 & 1) == 0) {
          uVar12 = 0;
        }
        UnityEngine_InputSystem_Utilities_DelegateHelpers__InvokeCallbacksSafe<object,_Int32Enum>
                  (param_1 + 0x230,uVar8,uVar12,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                   *(undefined8 *)puVar4,0,*(undefined8 *)puVar3);
        return;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar8 = System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>__get_Keys
                          (*(long *)(param_1 + 0x48),
                           *(undefined8 *)
                            PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys___03ccd480
                          );
        lVar6 = System_Linq_Enumerable__ToArray<InternedString>(uVar8,*(undefined8 *)puVar3);
        puVar3 = 
        PTR_Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_get_Item___03cceb60
        ;
        if (lVar6 != 0) {
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar7 = 0;
            uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5cbdc();
              }
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_0324a30c;
              lVar1 = lVar6 + uVar7 * 0x10;
              uVar8 = *(undefined8 *)(lVar1 + 0x20);
              uVar10 = *(undefined8 *)(lVar1 + 0x28);
              System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>__get_Item
                        (*(long *)(param_1 + 0x48),uVar8,uVar10,
                         *(undefined8 *)
                          PTR_Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Item___03ccd478
                        );
              if ((param_7 & 1) == 0) {
                uVar9 = UnityEngine_InputSystem_Utilities_InternedString__op_Implicit
                                  (param_2,param_3,0);
                uVar11 = UnityEngine_InputSystem_Utilities_StringHelpers__CharacterSeparatedListsHaveAtLeastOneCommonElement
                                   (extraout_x1,uVar9,0x3b,0);
                if ((uVar11 & 1) != 0) {
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_0324a30c;
                  System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>__Remove
                            (*(long *)(param_1 + 0x48),uVar8,uVar10,*(undefined8 *)puVar2);
                }
              }
              else if (0 < *param_4) {
                iVar5 = 0;
                do {
                  auVar13 = UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__get_Item
                                      (param_4,iVar5,*(undefined8 *)puVar3);
                  uVar11 = UnityEngine_InputSystem_Utilities_InternedString__op_Equality
                                     (uVar8,uVar10,auVar13._0_8_,auVar13._8_8_,0);
                  if ((uVar11 & 1) == 0) {
                    auVar13 = UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__get_Item
                                        (param_4,iVar5,*(undefined8 *)puVar3);
                    uVar9 = UnityEngine_InputSystem_Utilities_InternedString__op_Implicit
                                      (auVar13._0_8_,auVar13._8_8_,0);
                    uVar11 = UnityEngine_InputSystem_Utilities_StringHelpers__CharacterSeparatedListsHaveAtLeastOneCommonElement
                                       (extraout_x1,uVar9,0x3b,0);
                    if ((uVar11 & 1) != 0) goto LAB_0324a190;
                  }
                  else {
LAB_0324a190:
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_0324a30c;
                    System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>__Remove
                              (*(long *)(param_1 + 0x48),uVar8,uVar10,*(undefined8 *)puVar2);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *param_4);
              }
              uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
          goto LAB_0324a208;
        }
      }
    }
  }
LAB_0324a30c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}



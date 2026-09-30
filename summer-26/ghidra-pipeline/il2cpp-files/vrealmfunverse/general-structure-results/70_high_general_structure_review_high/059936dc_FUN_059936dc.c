/*
FUNCTION_NAME: FUN_059936dc
ENTRY_POINT: 059936dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05994808) */
/* WARNING: Removing unreachable block (ram,0x059945e4) */
/* WARNING: Removing unreachable block (ram,0x05994818) */
/* WARNING: Removing unreachable block (ram,0x0599435c) */
/* WARNING: Removing unreachable block (ram,0x05994704) */

void FUN_059936dc(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  char cVar22;
  undefined4 uVar23;
  float fVar24;
  int local_120;
  undefined8 local_118;
  undefined8 *puStack_110;
  long local_108;
  long *plStack_100;
  undefined8 local_f8;
  long *plStack_f0;
  long local_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *local_98;
  long local_90;
  long local_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  
  puVar2 = Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__;
  local_78 = param_1;
  if ((DAT_066d3910 & 1) == 0) {
    FUN_02b3c81c(Method_System_Array_IndexOf<Enum>__);
    FUN_02b3c81c(PTR_DAT_06320348);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<Pointer,_Pointer>__
                );
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<InputControl,_InputControl>__
                );
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__);
    FUN_02b3c81c(System_Collections_Generic_Stack<Disc>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Stack<Entry>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__
                );
    FUN_02b3c81c(PTR_DAT_06320cb0);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(PTR_DAT_063203a0);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Type>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    FUN_02b3c81c(PTR_DAT_0631d458);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputBindingComposite>__
                );
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputProcessor>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EnsureCapacity<Finger>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<int>__);
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputRemoting_Subscriber>__
                );
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<RemoteInputPlayerConnection_Subscriber>__
                );
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputAction>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputBinding>__);
    DAT_066d3910 = 1;
  }
  local_7c[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_b8 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  local_b0 = 0;
  local_98 = (long *)0x0;
  uStack_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  uVar11 = FUN_032b1148(2,*(undefined8 *)puVar2);
  FUN_05814cc8(local_7c,uVar11,0);
  local_e8 = 0;
  local_e0 = local_7c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_0317392c(param_2,&local_88,
               *(undefined8 *)Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
  lVar13 = local_88;
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar12 = FUN_05c8c45c(lVar13,0,0);
  lVar13 = local_88;
  puVar2 = PTR_DAT_063203a0;
  if ((uVar12 & 1) != 0) {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(local_88 + 0x2c) == 1) goto LAB_059947bc;
  }
  if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar13 = FUN_059954c8(param_2,lVar13);
  if ((lVar13 == 0) || (bVar6 = FUN_05919b18(lVar13,0,0), (bVar6 & local_88 != 0) != 1)) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_0597fa64(local_88,0);
  }
  lVar16 = local_88;
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar12 = FUN_05c8c45c(lVar16,0,0);
  if ((uVar12 & 1) == 0) {
    bVar4 = false;
  }
  else {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    bVar4 = *(char *)(local_88 + 0x4c) != '\0';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  bVar6 = FUN_05999b48();
  if (lVar14 == 0) {
LAB_05993f70:
    local_120 = -1;
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar15 = (long *)thunk_FUN_02b4c898(lVar13,0);
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar16 = *(long *)puVar2;
    }
    **(undefined1 **)(lVar16 + 0xb8) = 0;
    puVar1 = PTR_DAT_06312310;
    if (*(int *)(lVar14 + 0x18) < 1) goto LAB_05993f70;
    bVar5 = false;
    iVar10 = 0;
    local_120 = -1;
    do {
      lVar16 = FUN_037a6268(lVar14,iVar10,
                            *(undefined8 *)System_Collections_Generic_Stack<Entry>_TypeInfo);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_05c8e378(lVar16,0,0);
      if ((uVar12 & 1) == 0) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar12 = FUN_05c88bf8(lVar16,0);
        if ((uVar12 & 1) != 0) {
          FUN_0317392c(lVar16,&local_90,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
          lVar19 = local_90;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          plVar17 = (long *)FUN_059954c8(lVar16,lVar19);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar18 = (long *)thunk_FUN_02b4c898(plVar17,0);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar12 = FUN_04d94540(plVar18,plVar15,0);
          if ((uVar12 & 1) == 0) {
            uVar9 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
            lVar19 = local_90;
            if ((uVar9 >> 1 & 1) == 0) {
              lVar19 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar19 + 0x20) =
                   *(undefined8 *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<int>__
              ;
              thunk_FUN_02bb0e9c();
              uVar11 = thunk_FUN_05c92238(lVar16,0);
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar19 + 0x28) = uVar11;
              thunk_FUN_02bb0e9c();
              if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar19 + 0x30) =
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EnsureCapacity<Finger>__;
              thunk_FUN_02bb0e9c();
              plVar17 = (long *)thunk_FUN_02b4c898(lVar13,0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar11 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar19 + 0x38) = uVar11;
              thunk_FUN_02bb0e9c();
              if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar19 + 0x40) =
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputAction>__;
              thunk_FUN_02bb0e9c();
              uVar11 = FUN_04c0ac30(lVar19,0);
              if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c41e34(uVar11,0);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar12 = FUN_05c8e378(lVar19,0,0);
              if ((uVar12 & 1) == 0) {
                if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                if (*(int *)(local_90 + 0x2c) == 1) {
                  lVar16 = *(long *)puVar2;
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar16 = *(long *)puVar2;
                  }
                  bVar8 = **(byte **)(lVar16 + 0xb8);
                  bVar7 = FUN_05999c28();
                  **(byte **)(*(long *)puVar2 + 0xb8) = bVar8 | bVar7 & 1;
                  if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  bVar4 = (bool)(bVar4 | *(char *)(local_90 + 0x4c) != '\0');
                  local_120 = iVar10;
                  goto LAB_05993f48;
                }
              }
              uVar11 = thunk_FUN_05c92238(lVar16,0);
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(local_90 + 0x2c));
              uVar21 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                 (*(undefined8 *)Method_System_Array_IndexOf<Enum>__,&local_108);
              uVar21 = FUN_04c00984(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<RemoteInputPlayerConnection_Subscriber>__
                                    ,uVar21,0);
              uVar11 = FUN_04c0ab28(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputProcessor>__
                                    ,uVar11,*(undefined8 *)PTR_DAT_0631d458,uVar21,0);
              if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c41e34(uVar11,0);
            }
          }
          else {
            lVar19 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,9);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputBindingComposite>__
            ;
            thunk_FUN_02bb0e9c();
            uVar11 = thunk_FUN_05c92238(lVar16,0);
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x28) = uVar11;
            thunk_FUN_02bb0e9c();
            if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputBinding>__;
            thunk_FUN_02bb0e9c();
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar11 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x38) = uVar11;
            thunk_FUN_02bb0e9c();
            if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x40) =
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__;
            thunk_FUN_02bb0e9c();
            uVar11 = thunk_FUN_05c92238(param_2,0);
            if (*(uint *)(lVar19 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x48) = uVar11;
            thunk_FUN_02bb0e9c();
            if (*(uint *)(lVar19 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x50) =
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputRemoting_Subscriber>__
            ;
            thunk_FUN_02bb0e9c();
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar11 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x58) = uVar11;
            thunk_FUN_02bb0e9c();
            if (*(uint *)(lVar19 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            *(undefined8 *)(lVar19 + 0x60) =
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__;
            thunk_FUN_02bb0e9c();
            uVar11 = FUN_04c0ac30(lVar19,0);
            if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05c41e34(uVar11,0);
          }
        }
      }
      else {
        bVar5 = true;
      }
LAB_05993f48:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar14 + 0x18));
    if (bVar5) {
      if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0597fed4(local_88,0);
    }
  }
  if (local_88 == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(char *)(local_88 + 0x5b) != '\0';
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 0xe4) == 0)
  {
    thunk_FUN_02b9ad44();
  }
  lVar16 = FUN_057f2e74(0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_057ecbf4(lVar16,param_2,bVar5,0);
  if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_036b4178(&local_108,*(long *)(lVar16 + 0x10),
               *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__);
  bVar5 = false;
  plStack_a8 = plStack_100;
  local_b0 = local_108;
  local_98 = plStack_f0;
  uStack_a0 = local_f8;
  local_108 = 0;
  plStack_100 = &local_b0;
  while (uVar12 = FUN_04708318(&local_b0,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<InputControl,_InputControl>__
                              ), plVar15 = local_98, (uVar12 & 1) != 0) {
    local_b8 = local_98;
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    bVar8 = *(byte *)(*(long *)Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__ +
                     0x130);
    if (*(byte *)(*local_98 + 0x130) < bVar8) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = local_98;
      if (*(long *)(*(long *)(*local_98 + 200) + (ulong)bVar8 * 8 + -8) !=
          *(long *)Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__) {
        plVar17 = (long *)0x0;
      }
    }
    uVar12 = FUN_057ec748(local_98,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05999cf4(param_2,plVar15);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 0xe4) ==
          0) {
        thunk_FUN_02b9ad44();
      }
      uVar23 = FUN_057f2cd4(0);
      fVar24 = (float)FUN_057f2d38(0);
      if (fVar24 < 1.0) {
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 0xe4)
            == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar23 = FUN_057f2d38(0);
      }
      FUN_05c5171c(uVar23,uVar23,0);
      bVar5 = true;
    }
    uVar11 = local_78;
    local_118 = 0;
    puStack_110 = (undefined8 *)0x0;
    FUN_05994b5c(&local_118,local_78,param_2);
    lVar19 = local_88;
    local_d0 = local_118;
    local_118 = 0;
    uStack_c8 = puStack_110;
    puStack_110 = &local_d0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread_0000018A_PostfixBurstDelegate__Invoke
              (param_2,lVar19);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar19 = FUN_059955b0(*(undefined8 *)(lVar13 + 0x138),param_2,local_88);
    uVar12 = FUN_057ec748(plVar15,0);
    if ((uVar12 & 1) != 0) {
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(long **)(lVar19 + 0x1a0) = plVar15;
      thunk_FUN_02bb0e9c(lVar19 + 0x1a0,plVar15);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05999e78(lVar19,&local_b8);
      FUN_057ed4a4(lVar16,plVar15,param_2,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Type>__ctor__ + 0xe4
                  ) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0599a210(param_2,plVar17);
    }
    lVar20 = local_88;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05995b1c(param_2,lVar20,local_120 == -1,param_3 & 1,lVar19);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(byte *)(lVar19 + 0x192) = **(byte **)(*(long *)puVar2 + 0xb8) | *(byte *)(lVar19 + 0x192);
    uVar12 = FUN_057ec748(plVar15,0);
    bVar8 = bVar6;
    if ((uVar12 & 1) != 0) {
      bVar8 = FUN_057f0a2c(plVar15,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar20 = FUN_05993404();
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((bVar8 & *(char *)(lVar20 + 0x4d) != '\0') == 0) {
LAB_059942f8:
      cVar22 = '\0';
    }
    else {
      uVar21 = FUN_05c41024(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_05c8e378(uVar21,0,0);
      if (((uVar12 & 1) == 0) ||
         ((iVar10 = FUN_05c40560(param_2,0), iVar10 != 1 &&
          (iVar10 = FUN_05c40560(param_2,0), iVar10 != 8)))) goto LAB_059942f8;
      cVar22 = *(char *)(lVar19 + 0x18e);
    }
    lVar20 = *(long *)puVar2;
    *(bool *)(lVar19 + 0x1ad) = bVar4;
    *(bool *)(lVar19 + 0x195) = cVar22 != '\0';
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05996328(uVar11,lVar19);
    if (*(int *)(*(long *)PTR_DAT_06320348 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0599c934(puStack_110);
    if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar12 = FUN_057ec748(local_b8,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Type>__ctor__ + 0xe4
                  ) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0599a2e0(param_2,plVar17);
    }
    if (local_120 != -1) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        iVar10 = 0;
        do {
          lVar19 = FUN_037a6268(lVar14,iVar10,
                                *(undefined8 *)System_Collections_Generic_Stack<Entry>_TypeInfo);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar12 = FUN_05c88bf8(lVar19,0);
          if ((uVar12 & 1) != 0) {
            FUN_0317392c(lVar19,&local_d8,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
            lVar20 = local_d8;
            if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar12 = FUN_05c8c45c(lVar20,0,0);
            lVar20 = local_d8;
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              lVar20 = FUN_059954c8(lVar19,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar20 = FUN_059955b0(*(undefined8 *)(lVar20 + 0x138),param_2,local_88);
              plVar15 = local_b8;
              if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar12 = FUN_057ec748(local_b8,0);
              if ((uVar12 & 1) != 0) {
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                *(long **)(lVar20 + 0x1a0) = plVar15;
                thunk_FUN_02bb0e9c(lVar20 + 0x1a0,plVar15);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_05999e78(lVar20,&local_b8);
              }
              lVar3 = local_d8;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05995b1c(lVar19,lVar3,0,param_3 & 1,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              *(long *)(lVar20 + 0xd8) = lVar19;
              thunk_FUN_02bb0e9c((long *)(lVar20 + 0xd8),lVar19);
              *(long *)(lVar20 + 0x230) = param_2;
              thunk_FUN_02bb0e9c(lVar20 + 0x230,param_2);
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar11 = FUN_0597f950(local_d8,0);
              FUN_05999cf4(uVar11,plVar15);
              uVar11 = local_78;
              local_118 = 0;
              puStack_110 = (undefined8 *)0x0;
              FUN_05994b5c(&local_118,local_78,lVar19);
              lVar3 = local_d8;
              local_d0 = local_118;
              local_118 = 0;
              uStack_c8 = puStack_110;
              puStack_110 = &local_d0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread_0000018A_PostfixBurstDelegate__Invoke
                        (lVar19,lVar3);
              FUN_05995b1c(lVar19,local_d8,local_120 == iVar10,param_3 & 1,lVar20);
              *(bool *)(lVar20 + 0x1ad) = bVar4;
              *(bool *)(lVar20 + 0x195) = cVar22 != '\0';
              FUN_057ed4a4(lVar16,*(undefined8 *)(lVar20 + 0x1a0),lVar19,0);
              FUN_05996328(uVar11,lVar20);
              if (*(int *)(*(long *)PTR_DAT_06320348 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_0599c934(puStack_110);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar14 + 0x18));
      }
    }
  }
  FUN_04708314(plStack_100,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<Pointer,_Pointer>__
              );
  if (local_108 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if (bVar5) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_057fb7b0(0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 0xe4) == 0
       ) {
      thunk_FUN_02b9ad44();
    }
    FUN_057f2fb0(uVar11,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&local_78,uVar11,0);
    FUN_05cc8e88(&local_78,0);
    FUN_057fb8f0(uVar11,0);
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 0xe4) == 0)
  {
    thunk_FUN_02b9ad44();
  }
  FUN_057f2ed8(0);
LAB_059947bc:
  lVar13 = local_e8;
  FUN_05814cd4(local_e0,0);
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc(lVar13);
  }
  return;
}



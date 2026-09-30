/*
FUNCTION_NAME: System.Resources.ResourceManager$$.cctor
ENTRY_POINT: 033acb30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033acc34) */
/* WARNING: Removing unreachable block (ram,0x033ac500) */
/* WARNING: Removing unreachable block (ram,0x033acc1c) */
/* WARNING: Removing unreachable block (ram,0x033acde8) */
/* WARNING: Removing unreachable block (ram,0x033ac5e4) */

undefined8 System_Resources_ResourceManager___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long in_x9;
  int *piVar14;
  int *in_x10;
  undefined8 uVar15;
  long unaff_x24;
  long *unaff_x25;
  long lVar16;
  long lVar17;
  int unaff_w28;
  long unaff_x29;
  long in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto code_r0x033acbbc;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar9 = (undefined8 *)FUN_01ecb238();
code_r0x033acbbc:
  (*(code *)*puVar9)();
  puVar1 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<TextEvent>__;
  if (unaff_x29 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w28 != 1) {
    if (unaff_x25 != (long *)0x0) {
      lVar16 = *unaff_x25;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x033acdd0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
code_r0x033acdd0:
      (*(code *)*puVar9)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar10 = (long *)__cxa_begin_catch();
  lVar16 = *plVar10;
  __cxa_end_catch();
  if (unaff_x25 != (long *)0x0) {
    lVar11 = *unaff_x25;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_033ac0ec;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_033ac0ec:
    (*(code *)*puVar9)();
  }
  if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar16);
  }
  lVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_LoadFrom__);
  FUN_02b6aa68(lVar16,*(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_id__)
  ;
  uVar6 = FUN_035850ac(in_stack_00000028,0);
  lVar11 = *(long *)puVar1;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar11);
    lVar11 = *(long *)puVar1;
  }
  lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
  if (lVar17 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *(long *)puVar1;
    }
    uVar15 = **(undefined8 **)(lVar11 + 0xb8);
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__)
    ;
    FUN_02e6c0a0(lVar17,uVar15,*(undefined8 *)Method_UnityEngine_UI_InputField_Validate__,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar10 = lVar17;
    thunk_FUN_01f51358(plVar10,lVar17);
  }
  plVar10 = (long *)FUN_0230b6f4(uVar6,lVar17,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnInputEvent__
                                );
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_033ac230;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__
                          ,0);
LAB_033ac230:
    plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
    puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__;
    puVar4 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_Resize__;
    puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_LoadFrom__;
    puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar10;
      lVar11 = *(long *)puVar1;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033ac2b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_033ac2b8:
      uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_033ac5d8;
        lVar11 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_033ac5b0;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_033ac598;
      }
      lVar11 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033ac31c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__
                            ,0);
LAB_033ac31c:
      uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      plVar7 = (long *)FUN_022cd888(uVar6,*(undefined8 *)puVar2);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033ac388;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_033ac388:
      plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033ac39c:
      lVar17 = *plVar7;
      lVar11 = *(long *)puVar1;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033ac3e8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar7,lVar11,0);
LAB_033ac3e8:
      uVar13 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      if ((uVar13 & 1) != 0) {
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_033ac444;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_033ac444:
        lVar11 = (*(code *)*puVar9)(plVar7,puVar9[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = FUN_0340eec4(*(undefined8 *)(lVar11 + 0x10),0);
        if ((uVar13 & 1) == 0) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2d0(lVar16,*(undefined8 *)(lVar11 + 0x10),uVar6,*(undefined8 *)puVar3);
        }
        goto LAB_033ac39c;
      }
      if (plVar7 != (long *)0x0) {
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_033ac4e4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_033ac4e4:
        (*(code *)*puVar9)(plVar7,puVar9[1]);
      }
    } while( true );
  }
  goto LAB_033acbac;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_033ac598:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_033ac5cc;
    }
  }
LAB_033ac5b0:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033ac5cc:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_033ac5d8:
  if ((in_stack_00000010 != (long *)0x0) && (lVar11 = FUN_033acdf4(), lVar11 != 0)) {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar13 = 0;
      uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar13) goto LAB_033acbe0;
        uVar6 = *(undefined8 *)(lVar11 + 0x20 + uVar13 * 8);
        plVar10 = (long *)(**(code **)(*in_stack_00000028 + 0x6b8))
                                    (in_stack_00000028,uVar6,0x14,
                                     *(undefined8 *)(*in_stack_00000028 + 0x6c0));
        if (unaff_x24 == 0) goto LAB_033acbac;
        uVar12 = FUN_02b6b4d8();
        if ((uVar12 & 1) != 0) {
          plVar10 = (long *)FUN_02b6b264();
        }
        uVar12 = FUN_034b14b8(plVar10,0,0);
        if ((uVar12 & 1) == 0) {
          plVar10 = (long *)FUN_03584e88(in_stack_00000028,uVar6,0x14,0);
          if (lVar16 == 0) goto LAB_033acbac;
          uVar12 = FUN_02b6b4d8(lVar16,uVar6,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_deviceId__
                               );
          if ((uVar12 & 1) != 0) {
            plVar10 = (long *)FUN_02b6b264(lVar16,uVar6,
                                           *(undefined8 *)
                                            Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_time__
                                          );
          }
          uVar12 = FUN_034b298c(plVar10,0,0);
          if ((uVar12 & 1) != 0) {
            if (plVar10 == (long *)0x0) goto LAB_033acbac;
            uVar15 = FUN_034b43d4(plVar10,0);
            uVar12 = System_Console__SetOut(uVar15,0,0);
            if ((uVar12 & 1) != 0) {
              uVar15 = FUN_034b43c0(plVar10,0);
              uVar12 = System_Console__SetOut(uVar15,0,0);
              uVar15 = 0;
              if ((uVar12 & 1) != 0) {
                uVar15 = FUN_034b43e8(plVar10,in_stack_00000020,0);
              }
              uVar8 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
              }
              uVar15 = FUN_033aa338(uVar8,uVar15);
              uVar8 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
              uVar6 = (**(code **)(*in_stack_00000010 + 0x1a8))
                                (in_stack_00000010,uVar6,*(undefined8 *)(*in_stack_00000010 + 0x1b0)
                                );
              uVar6 = FUN_033aa5f8(uVar8,uVar15,uVar6,in_stack_00000008,in_stack_00000018);
              FUN_034b441c(plVar10,in_stack_00000020,uVar6,0);
              goto LAB_033ac99c;
            }
          }
          lVar17 = FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                ,5);
          if (lVar17 == 0) goto LAB_033acbac;
          if (*(int *)(lVar17 + 0x18) == 0) {
LAB_033acbe0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar17 + 0x20) =
               *(undefined8 *)Method_Unity_VisualScripting_GraphReference_CreateGraphData__;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x20));
          uVar15 = (**(code **)(*in_stack_00000028 + 0x2e8))
                             (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2f0));
          if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x28) = uVar15;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x28),uVar15);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x30) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetValueType__;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x30));
          if (*(uint *)(lVar17 + 0x18) < 4) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x38) = uVar6;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x38),uVar6);
          if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x40) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__;
          thunk_FUN_01f51358();
          uVar6 = FUN_0340efe8(lVar17,0);
          if (in_stack_00000008 == 0) goto LAB_033acbac;
          FUN_03418c10(in_stack_00000008,uVar6,0);
        }
        else {
          if (plVar10 == (long *)0x0) goto LAB_033acbac;
          uVar15 = (**(code **)(*plVar10 + 0x2e8))
                             (plVar10,in_stack_00000020,*(undefined8 *)(*plVar10 + 0x2f0));
          uVar8 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
          uVar6 = (**(code **)(*in_stack_00000010 + 0x1a8))
                            (in_stack_00000010,uVar6,*(undefined8 *)(*in_stack_00000010 + 0x1b0));
          if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
          }
          uVar6 = FUN_033aa5f8(uVar8,uVar15,uVar6,in_stack_00000008,in_stack_00000018);
          FUN_034b14f4(plVar10,in_stack_00000020,uVar6,0);
        }
LAB_033ac99c:
        uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    uVar6 = (**(code **)(*in_stack_00000028 + 0x8a8))
                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x8b0));
    uVar15 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar15 = FUN_03579868(uVar15,0);
    uVar13 = FUN_022ee1a4(uVar6,uVar15,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    puVar1 = Method_UnityEngine_UI_InputField_UpdateCaretMaterial__;
    if ((uVar13 & 1) != 0) {
      lVar16 = thunk_FUN_01f116d0(in_stack_00000020,
                                  *(undefined8 *)
                                   Method_UnityEngine_UI_InputField_UpdateCaretMaterial__);
      if (lVar16 == 0) goto LAB_033acbac;
      lVar11 = *(long *)puVar1;
      plVar10 = (long *)thunk_FUN_01f116d0(in_stack_00000020,lVar11);
      lVar16 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033aca98;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_033aca98:
      uVar13 = (*(code *)*puVar9)(plVar10,in_stack_00000010,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        uVar6 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__,
                             in_stack_00000028,0);
        if (in_stack_00000008 == 0) goto LAB_033acbac;
        FUN_03418c10(in_stack_00000008,uVar6,0);
      }
    }
    return in_stack_00000020;
  }
LAB_033acbac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



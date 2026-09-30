/*
FUNCTION_NAME: System.Resources.FileBasedResourceGroveler$$.ctor
ENTRY_POINT: 033abf40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033acc1c) */
/* WARNING: Removing unreachable block (ram,0x033ac500) */
/* WARNING: Removing unreachable block (ram,0x033ac018) */
/* WARNING: Removing unreachable block (ram,0x033acc28) */
/* WARNING: Removing unreachable block (ram,0x033acbe8) */
/* WARNING: Removing unreachable block (ram,0x033ac5e4) */
/* WARNING: Removing unreachable block (ram,0x033acc34) */
/* WARNING: Removing unreachable block (ram,0x033ac104) */

undefined8 System_Resources_FileBasedResourceGroveler___ctor(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 uVar16;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long lVar17;
  long in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
code_r0x033abf40:
  puVar6 = (undefined8 *)FUN_01ecb238(unaff_x26,param_2,0);
LAB_033abf5c:
  lVar7 = (*(code *)*puVar6)(unaff_x26,puVar6[1]);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = FUN_0340eec4(*(undefined8 *)(lVar7 + 0x10),0);
  if ((uVar8 & 1) == 0) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b6b2d0();
  }
  do {
    lVar7 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x20) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033abf00;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(unaff_x26,*unaff_x20,0);
LAB_033abf00:
    uVar8 = (*(code *)*puVar6)(unaff_x26,puVar6[1]);
    if ((uVar8 & 1) != 0) break;
    if (unaff_x26 != (long *)0x0) {
      lVar7 = *unaff_x26;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033abffc;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(unaff_x26,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_033abffc:
      (*(code *)*puVar6)(unaff_x26,puVar6[1]);
    }
    lVar7 = *unaff_x25;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x20) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033abdd0;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_033abdd0:
    uVar8 = (*(code *)*puVar6)();
    puVar1 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<TextEvent>__;
    if ((uVar8 & 1) == 0) {
      if (unaff_x25 == (long *)0x0) goto LAB_033ac0f8;
      lVar7 = *unaff_x25;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_033ac0d0;
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_033ac0b8;
    }
    lVar7 = *unaff_x25;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033abe34;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_033abe34:
    uVar9 = (*(code *)*puVar6)();
    plVar10 = (long *)FUN_022cd888(uVar9,*unaff_x22);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x23) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033abea0;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x23,0);
LAB_033abea0:
    unaff_x26 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  lVar7 = *unaff_x26;
  param_2 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 == 0) goto code_r0x033abf40;
  piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  while (*(long *)(piVar15 + -2) != param_2) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) goto code_r0x033abf40;
  }
  puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
  goto LAB_033abf5c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_033ac0b8:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ac0ec;
    }
  }
LAB_033ac0d0:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_033ac0ec:
  (*(code *)*puVar6)();
LAB_033ac0f8:
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_LoadFrom__);
  FUN_02b6aa68(lVar7,*(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_id__);
  uVar9 = FUN_035850ac(in_stack_00000028,0);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar13);
    lVar13 = *(long *)puVar1;
  }
  lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar13);
      lVar13 = *(long *)puVar1;
    }
    uVar16 = **(undefined8 **)(lVar13 + 0xb8);
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__)
    ;
    FUN_02e6c0a0(lVar17,uVar16,*(undefined8 *)Method_UnityEngine_UI_InputField_Validate__,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar10 = lVar17;
    thunk_FUN_01f51358(plVar10,lVar17);
  }
  plVar10 = (long *)FUN_0230b6f4(uVar9,lVar17,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnInputEvent__
                                );
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033ac230;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__
                          ,0);
LAB_033ac230:
    plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
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
      lVar13 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac2b8;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,lVar13,0);
LAB_033ac2b8:
      uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_033ac5d8;
        lVar13 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 == 0) goto LAB_033ac5b0;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033ac598;
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac31c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__
                            ,0);
LAB_033ac31c:
      uVar9 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      plVar11 = (long *)FUN_022cd888(uVar9,*(undefined8 *)puVar2);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac388;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_033ac388:
      plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033ac39c:
      lVar17 = *plVar11;
      lVar13 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac3e8;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar13,0);
LAB_033ac3e8:
      uVar8 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if ((uVar8 & 1) != 0) {
        lVar13 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033ac444;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_033ac444:
        lVar13 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = FUN_0340eec4(*(undefined8 *)(lVar13 + 0x10),0);
        if ((uVar8 & 1) == 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2d0(lVar7,*(undefined8 *)(lVar13 + 0x10),uVar9,*(undefined8 *)puVar3);
        }
        goto LAB_033ac39c;
      }
      if (plVar11 != (long *)0x0) {
        lVar13 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033ac4e4;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar11,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_033ac4e4:
        (*(code *)*puVar6)(plVar11,puVar6[1]);
      }
    } while( true );
  }
  goto LAB_033acbac;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_033ac598:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ac5cc;
    }
  }
LAB_033ac5b0:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033ac5cc:
  (*(code *)*puVar6)(plVar10,puVar6[1]);
LAB_033ac5d8:
  if ((in_stack_00000010 != (long *)0x0) && (lVar13 = FUN_033acdf4(), lVar13 != 0)) {
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      uVar8 = 0;
      uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar8) goto LAB_033acbe0;
        uVar9 = *(undefined8 *)(lVar13 + 0x20 + uVar8 * 8);
        plVar10 = (long *)(**(code **)(*in_stack_00000028 + 0x6b8))
                                    (in_stack_00000028,uVar9,0x14,
                                     *(undefined8 *)(*in_stack_00000028 + 0x6c0));
        if (unaff_x24 == 0) goto LAB_033acbac;
        uVar14 = FUN_02b6b4d8();
        if ((uVar14 & 1) != 0) {
          plVar10 = (long *)FUN_02b6b264();
        }
        uVar14 = FUN_034b14b8(plVar10,0,0);
        if ((uVar14 & 1) == 0) {
          plVar10 = (long *)FUN_03584e88(in_stack_00000028,uVar9,0x14,0);
          if (lVar7 == 0) goto LAB_033acbac;
          uVar14 = FUN_02b6b4d8(lVar7,uVar9,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_deviceId__
                               );
          if ((uVar14 & 1) != 0) {
            plVar10 = (long *)FUN_02b6b264(lVar7,uVar9,
                                           *(undefined8 *)
                                            Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_time__
                                          );
          }
          uVar14 = FUN_034b298c(plVar10,0,0);
          if ((uVar14 & 1) != 0) {
            if (plVar10 == (long *)0x0) goto LAB_033acbac;
            uVar16 = FUN_034b43d4(plVar10,0);
            uVar14 = System_Console__SetOut(uVar16,0,0);
            if ((uVar14 & 1) != 0) {
              uVar16 = FUN_034b43c0(plVar10,0);
              uVar14 = System_Console__SetOut(uVar16,0,0);
              uVar16 = 0;
              if ((uVar14 & 1) != 0) {
                uVar16 = FUN_034b43e8(plVar10,in_stack_00000020,0);
              }
              uVar12 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
              }
              uVar16 = FUN_033aa338(uVar12,uVar16);
              uVar12 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
              uVar9 = (**(code **)(*in_stack_00000010 + 0x1a8))
                                (in_stack_00000010,uVar9,*(undefined8 *)(*in_stack_00000010 + 0x1b0)
                                );
              uVar9 = FUN_033aa5f8(uVar12,uVar16,uVar9,in_stack_00000008,in_stack_00000018);
              FUN_034b441c(plVar10,in_stack_00000020,uVar9,0);
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
          uVar16 = (**(code **)(*in_stack_00000028 + 0x2e8))
                             (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2f0));
          if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x28) = uVar16;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x28),uVar16);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x30) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetValueType__;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x30));
          if (*(uint *)(lVar17 + 0x18) < 4) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x38) = uVar9;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x38),uVar9);
          if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x40) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__;
          thunk_FUN_01f51358();
          uVar9 = FUN_0340efe8(lVar17,0);
          if (in_stack_00000008 == 0) goto LAB_033acbac;
          FUN_03418c10(in_stack_00000008,uVar9,0);
        }
        else {
          if (plVar10 == (long *)0x0) goto LAB_033acbac;
          uVar16 = (**(code **)(*plVar10 + 0x2e8))
                             (plVar10,in_stack_00000020,*(undefined8 *)(*plVar10 + 0x2f0));
          uVar12 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
          uVar9 = (**(code **)(*in_stack_00000010 + 0x1a8))
                            (in_stack_00000010,uVar9,*(undefined8 *)(*in_stack_00000010 + 0x1b0));
          if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
          }
          uVar9 = FUN_033aa5f8(uVar12,uVar16,uVar9,in_stack_00000008,in_stack_00000018);
          FUN_034b14f4(plVar10,in_stack_00000020,uVar9,0);
        }
LAB_033ac99c:
        uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar13 + 0x18));
    }
    uVar9 = (**(code **)(*in_stack_00000028 + 0x8a8))
                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x8b0));
    uVar16 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar8 = FUN_022ee1a4(uVar9,uVar16,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    puVar1 = Method_UnityEngine_UI_InputField_UpdateCaretMaterial__;
    if ((uVar8 & 1) != 0) {
      lVar7 = thunk_FUN_01f116d0(in_stack_00000020,
                                 *(undefined8 *)
                                  Method_UnityEngine_UI_InputField_UpdateCaretMaterial__);
      if (lVar7 == 0) goto LAB_033acbac;
      lVar13 = *(long *)puVar1;
      plVar10 = (long *)thunk_FUN_01f116d0(in_stack_00000020,lVar13);
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033aca98;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,lVar13,0);
LAB_033aca98:
      uVar8 = (*(code *)*puVar6)(plVar10,in_stack_00000010,puVar6[1]);
      if ((uVar8 & 1) == 0) {
        uVar9 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__,
                             in_stack_00000028,0);
        if (in_stack_00000008 == 0) goto LAB_033acbac;
        FUN_03418c10(in_stack_00000008,uVar9,0);
      }
    }
    return in_stack_00000020;
  }
LAB_033acbac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



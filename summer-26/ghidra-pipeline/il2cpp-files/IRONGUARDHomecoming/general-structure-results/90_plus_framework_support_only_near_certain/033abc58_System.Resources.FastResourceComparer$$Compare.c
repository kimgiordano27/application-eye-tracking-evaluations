/*
FUNCTION_NAME: System.Resources.FastResourceComparer$$Compare
ENTRY_POINT: 033abc58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033acc1c) */
/* WARNING: Removing unreachable block (ram,0x033ac500) */
/* WARNING: Removing unreachable block (ram,0x033ac018) */
/* WARNING: Removing unreachable block (ram,0x033acc28) */
/* WARNING: Removing unreachable block (ram,0x033acbe8) */
/* WARNING: Removing unreachable block (ram,0x033ac104) */
/* WARNING: Removing unreachable block (ram,0x033ac5e4) */
/* WARNING: Removing unreachable block (ram,0x033acc34) */

undefined8 System_Resources_FastResourceComparer__Compare(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x21;
  undefined8 unaff_x23;
  undefined8 uVar16;
  long unaff_x24;
  long lVar17;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  
  thunk_FUN_01ee6d7c(param_1);
  lVar11 = *unaff_x19;
  if (*(long *)(*(long *)(lVar11 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *unaff_x19;
    }
    uVar16 = **(undefined8 **)(lVar11 + 0xb8);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__
                              );
    FUN_02e6c0a0(uVar6,uVar16,*(undefined8 *)Method_UnityEngine_UI_InputField_UpdateLabel__,0);
    puVar7 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x10);
    *puVar7 = uVar6;
    thunk_FUN_01f51358(puVar7,uVar6);
  }
  plVar8 = (long *)FUN_0230b6f4();
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)Method_System_Linq_Enumerable_Range__) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033abd44;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_Linq_Enumerable_Range__,0);
LAB_033abd44:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__;
    puVar4 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_Resize__;
    puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar1;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033abdd0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_033abdd0:
      uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<TextEvent>__;
      if ((uVar14 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_033ac0f8;
        lVar11 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_033ac0d0;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_033ac0b8;
      }
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033abe34;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_Linq_Enumerable_Sum__,0);
LAB_033abe34:
      uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      plVar9 = (long *)FUN_022cd888(uVar6,*(undefined8 *)puVar3);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033abea0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_033abea0:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033abeb4:
      lVar12 = *plVar9;
      lVar11 = *(long *)puVar1;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033abf00;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_033abf00:
      uVar14 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      if ((uVar14 & 1) != 0) {
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033abf5c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_033abf5c:
        lVar11 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar14 = FUN_0340eec4(*(undefined8 *)(lVar11 + 0x10),0);
        if ((uVar14 & 1) == 0) {
          if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2d0();
        }
        goto LAB_033abeb4;
      }
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033abffc;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar9,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_033abffc:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
      }
    } while( true );
  }
  goto LAB_033acbac;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_033ac0b8:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ac0ec;
    }
  }
LAB_033ac0d0:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033ac0ec:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_033ac0f8:
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_LoadFrom__);
  FUN_02b6aa68(lVar11,*(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_id__)
  ;
  uVar6 = FUN_035850ac(in_stack_00000028,0);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar12);
    lVar12 = *(long *)puVar2;
  }
  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  if (lVar17 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
      lVar12 = *(long *)puVar2;
    }
    uVar16 = **(undefined8 **)(lVar12 + 0xb8);
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__)
    ;
    FUN_02e6c0a0(lVar17,uVar16,*(undefined8 *)Method_UnityEngine_UI_InputField_Validate__,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar8 = lVar17;
    thunk_FUN_01f51358(plVar8,lVar17);
  }
  plVar8 = (long *)FUN_0230b6f4(uVar6,lVar17,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnInputEvent__
                               );
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033ac230;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__
                          ,0);
LAB_033ac230:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__;
    puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_Resize__;
    puVar4 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_LoadFrom__;
    puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar8;
      lVar12 = *(long *)puVar1;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac2b8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_033ac2b8:
      uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_033ac5d8;
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_033ac5b0;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_033ac598;
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac31c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__
                            ,0);
LAB_033ac31c:
      uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      plVar9 = (long *)FUN_022cd888(uVar6,*(undefined8 *)puVar3);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac388;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_033ac388:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033ac39c:
      lVar17 = *plVar9;
      lVar12 = *(long *)puVar1;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac3e8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_033ac3e8:
      uVar14 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      if ((uVar14 & 1) != 0) {
        lVar12 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033ac444;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_033ac444:
        lVar12 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar14 = FUN_0340eec4(*(undefined8 *)(lVar12 + 0x10),0);
        if ((uVar14 & 1) == 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2d0(lVar11,*(undefined8 *)(lVar12 + 0x10),uVar6,*(undefined8 *)puVar4);
        }
        goto LAB_033ac39c;
      }
      if (plVar9 != (long *)0x0) {
        lVar12 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033ac4e4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar9,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_033ac4e4:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
      }
    } while( true );
  }
  goto LAB_033acbac;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_033ac598:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ac5cc;
    }
  }
LAB_033ac5b0:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033ac5cc:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_033ac5d8:
  if ((in_stack_00000010 != (long *)0x0) && (lVar12 = FUN_033acdf4(), lVar12 != 0)) {
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar14 = 0;
      uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar14) goto LAB_033acbe0;
        uVar6 = *(undefined8 *)(lVar12 + 0x20 + uVar14 * 8);
        plVar8 = (long *)(**(code **)(*in_stack_00000028 + 0x6b8))
                                   (in_stack_00000028,uVar6,0x14,
                                    *(undefined8 *)(*in_stack_00000028 + 0x6c0));
        if (unaff_x24 == 0) goto LAB_033acbac;
        uVar13 = FUN_02b6b4d8();
        if ((uVar13 & 1) != 0) {
          plVar8 = (long *)FUN_02b6b264();
        }
        uVar13 = FUN_034b14b8(plVar8,0,0);
        if ((uVar13 & 1) == 0) {
          plVar8 = (long *)FUN_03584e88(in_stack_00000028,uVar6,0x14,0);
          if (lVar11 == 0) goto LAB_033acbac;
          uVar13 = FUN_02b6b4d8(lVar11,uVar6,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_deviceId__
                               );
          if ((uVar13 & 1) != 0) {
            plVar8 = (long *)FUN_02b6b264(lVar11,uVar6,
                                          *(undefined8 *)
                                           Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_time__
                                         );
          }
          uVar13 = FUN_034b298c(plVar8,0,0);
          if ((uVar13 & 1) != 0) {
            if (plVar8 == (long *)0x0) goto LAB_033acbac;
            uVar16 = FUN_034b43d4(plVar8,0);
            uVar13 = System_Console__SetOut(uVar16,0,0);
            if ((uVar13 & 1) != 0) {
              uVar16 = FUN_034b43c0(plVar8,0);
              uVar13 = System_Console__SetOut(uVar16,0,0);
              uVar16 = 0;
              if ((uVar13 & 1) != 0) {
                uVar16 = FUN_034b43e8(plVar8,unaff_x23,0);
              }
              uVar10 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
              }
              uVar16 = FUN_033aa338(uVar10,uVar16);
              uVar10 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
              uVar6 = (**(code **)(*in_stack_00000010 + 0x1a8))
                                (in_stack_00000010,uVar6,*(undefined8 *)(*in_stack_00000010 + 0x1b0)
                                );
              uVar6 = FUN_033aa5f8(uVar10,uVar16,uVar6,unaff_x21,in_stack_00000018);
              FUN_034b441c(plVar8,unaff_x23,uVar6,0);
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
          *(undefined8 *)(lVar17 + 0x38) = uVar6;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x38),uVar6);
          if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x40) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__;
          thunk_FUN_01f51358();
          uVar6 = FUN_0340efe8(lVar17,0);
          if (unaff_x21 == 0) goto LAB_033acbac;
          FUN_03418c10(unaff_x21,uVar6,0);
        }
        else {
          if (plVar8 == (long *)0x0) goto LAB_033acbac;
          uVar16 = (**(code **)(*plVar8 + 0x2e8))(plVar8,unaff_x23,*(undefined8 *)(*plVar8 + 0x2f0))
          ;
          uVar10 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
          uVar6 = (**(code **)(*in_stack_00000010 + 0x1a8))
                            (in_stack_00000010,uVar6,*(undefined8 *)(*in_stack_00000010 + 0x1b0));
          if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
          }
          uVar6 = FUN_033aa5f8(uVar10,uVar16,uVar6,unaff_x21,in_stack_00000018);
          FUN_034b14f4(plVar8,unaff_x23,uVar6,0);
        }
LAB_033ac99c:
        uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    uVar6 = (**(code **)(*in_stack_00000028 + 0x8a8))
                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x8b0));
    uVar16 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar14 = FUN_022ee1a4(uVar6,uVar16,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    puVar1 = Method_UnityEngine_UI_InputField_UpdateCaretMaterial__;
    if ((uVar14 & 1) != 0) {
      lVar11 = thunk_FUN_01f116d0(unaff_x23,
                                  *(undefined8 *)
                                   Method_UnityEngine_UI_InputField_UpdateCaretMaterial__);
      if (lVar11 == 0) goto LAB_033acbac;
      lVar12 = *(long *)puVar1;
      plVar8 = (long *)thunk_FUN_01f116d0(unaff_x23,lVar12);
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033aca98;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_033aca98:
      uVar14 = (*(code *)*puVar7)(plVar8,in_stack_00000010,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        uVar6 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__,
                             in_stack_00000028,0);
        if (unaff_x21 == 0) goto LAB_033acbac;
        FUN_03418c10(unaff_x21,uVar6,0);
      }
    }
    return unaff_x23;
  }
LAB_033acbac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



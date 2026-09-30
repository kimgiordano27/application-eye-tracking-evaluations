/*
FUNCTION_NAME: System.Resources.FastResourceComparer$$.ctor
ENTRY_POINT: 033abed0
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
/* WARNING: Removing unreachable block (ram,0x033ac104) */
/* WARNING: Removing unreachable block (ram,0x033acc34) */

undefined8
System_Resources_FastResourceComparer___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong in_x9;
  int *in_x10;
  int *piVar15;
  long in_x11;
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
  
  do {
    if (in_x11 == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_033abf00;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar6 = (undefined8 *)FUN_01ecb238(unaff_x26,param_3,0);
LAB_033abf00:
        uVar7 = (*(code *)*puVar6)(unaff_x26,puVar6[1]);
        if ((uVar7 & 1) == 0) {
          if (unaff_x26 != (long *)0x0) {
            lVar12 = *unaff_x26;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_033abffc;
                }
                uVar7 = uVar7 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01ecb238(unaff_x26,
                                  *(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_033abffc:
            (*(code *)*puVar6)(unaff_x26,puVar6[1]);
          }
          lVar12 = *unaff_x25;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x20) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_033abdd0;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238();
LAB_033abdd0:
          uVar7 = (*(code *)*puVar6)();
          puVar1 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<TextEvent>__;
          if ((uVar7 & 1) == 0) {
            if (unaff_x25 == (long *)0x0) goto LAB_033ac0f8;
            lVar12 = *unaff_x25;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 == 0) goto LAB_033ac0d0;
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_033ac0b8;
          }
          lVar12 = *unaff_x25;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_033abe34;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238();
LAB_033abe34:
          uVar8 = (*(code *)*puVar6)();
          plVar9 = (long *)FUN_022cd888(uVar8,*unaff_x22);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x23) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_033abea0;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar9,*unaff_x23,0);
LAB_033abea0:
          unaff_x26 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
          if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        else {
          lVar12 = *unaff_x26;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x21) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_033abf5c;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(unaff_x26,*unaff_x21,0);
LAB_033abf5c:
          lVar12 = (*(code *)*puVar6)(unaff_x26,puVar6[1]);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = FUN_0340eec4(*(undefined8 *)(lVar12 + 0x10),0);
          if ((uVar7 & 1) == 0) {
            if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02b6b2d0();
          }
        }
        param_1 = *unaff_x26;
        param_3 = *unaff_x20;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_033ac0b8:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ac0ec;
    }
  }
LAB_033ac0d0:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_033ac0ec:
  (*(code *)*puVar6)();
LAB_033ac0f8:
  lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_LoadFrom__);
  FUN_02b6aa68(lVar12,*(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_id__)
  ;
  uVar8 = FUN_035850ac(in_stack_00000028,0);
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
    plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar9 = lVar17;
    thunk_FUN_01f51358(plVar9,lVar17);
  }
  plVar9 = (long *)FUN_0230b6f4(uVar8,lVar17,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnInputEvent__
                               );
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033ac230;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReadFrom__
                          ,0);
LAB_033ac230:
    plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
    puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__;
    puVar4 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_Resize__;
    puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_LoadFrom__;
    puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar9;
      lVar13 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac2b8;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,0);
LAB_033ac2b8:
      uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_033ac5d8;
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 == 0) goto LAB_033ac5b0;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033ac598;
      }
      lVar13 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac31c;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__
                            ,0);
LAB_033ac31c:
      uVar8 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      plVar10 = (long *)FUN_022cd888(uVar8,*(undefined8 *)puVar2);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac388;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_033ac388:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033ac39c:
      lVar17 = *plVar10;
      lVar13 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ac3e8;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,lVar13,0);
LAB_033ac3e8:
      uVar7 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar7 & 1) != 0) {
        lVar13 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033ac444;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_033ac444:
        lVar13 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = FUN_0340eec4(*(undefined8 *)(lVar13 + 0x10),0);
        if ((uVar7 & 1) == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2d0(lVar12,*(undefined8 *)(lVar13 + 0x10),uVar8,*(undefined8 *)puVar3);
        }
        goto LAB_033ac39c;
      }
      if (plVar10 != (long *)0x0) {
        lVar13 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033ac4e4;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar10,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_033ac4e4:
        (*(code *)*puVar6)(plVar10,puVar6[1]);
      }
    } while( true );
  }
  goto LAB_033acbac;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_033ac598:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ac5cc;
    }
  }
LAB_033ac5b0:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033ac5cc:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_033ac5d8:
  if ((in_stack_00000010 != (long *)0x0) && (lVar13 = FUN_033acdf4(), lVar13 != 0)) {
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      uVar7 = 0;
      uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar7) goto LAB_033acbe0;
        uVar8 = *(undefined8 *)(lVar13 + 0x20 + uVar7 * 8);
        plVar9 = (long *)(**(code **)(*in_stack_00000028 + 0x6b8))
                                   (in_stack_00000028,uVar8,0x14,
                                    *(undefined8 *)(*in_stack_00000028 + 0x6c0));
        if (unaff_x24 == 0) goto LAB_033acbac;
        uVar14 = FUN_02b6b4d8();
        if ((uVar14 & 1) != 0) {
          plVar9 = (long *)FUN_02b6b264();
        }
        uVar14 = FUN_034b14b8(plVar9,0,0);
        if ((uVar14 & 1) == 0) {
          plVar9 = (long *)FUN_03584e88(in_stack_00000028,uVar8,0x14,0);
          if (lVar12 == 0) goto LAB_033acbac;
          uVar14 = FUN_02b6b4d8(lVar12,uVar8,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_deviceId__
                               );
          if ((uVar14 & 1) != 0) {
            plVar9 = (long *)FUN_02b6b264(lVar12,uVar8,
                                          *(undefined8 *)
                                           Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_set_time__
                                         );
          }
          uVar14 = FUN_034b298c(plVar9,0,0);
          if ((uVar14 & 1) != 0) {
            if (plVar9 == (long *)0x0) goto LAB_033acbac;
            uVar16 = FUN_034b43d4(plVar9,0);
            uVar14 = System_Console__SetOut(uVar16,0,0);
            if ((uVar14 & 1) != 0) {
              uVar16 = FUN_034b43c0(plVar9,0);
              uVar14 = System_Console__SetOut(uVar16,0,0);
              uVar16 = 0;
              if ((uVar14 & 1) != 0) {
                uVar16 = FUN_034b43e8(plVar9,in_stack_00000020,0);
              }
              uVar11 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
              }
              uVar16 = FUN_033aa338(uVar11,uVar16);
              uVar11 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
              uVar8 = (**(code **)(*in_stack_00000010 + 0x1a8))
                                (in_stack_00000010,uVar8,*(undefined8 *)(*in_stack_00000010 + 0x1b0)
                                );
              uVar8 = FUN_033aa5f8(uVar11,uVar16,uVar8,in_stack_00000008,in_stack_00000018);
              FUN_034b441c(plVar9,in_stack_00000020,uVar8,0);
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
          *(undefined8 *)(lVar17 + 0x38) = uVar8;
          thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x38),uVar8);
          if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_033acbe0;
          *(undefined8 *)(lVar17 + 0x40) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__;
          thunk_FUN_01f51358();
          uVar8 = FUN_0340efe8(lVar17,0);
          if (in_stack_00000008 == 0) goto LAB_033acbac;
          FUN_03418c10(in_stack_00000008,uVar8,0);
        }
        else {
          if (plVar9 == (long *)0x0) goto LAB_033acbac;
          uVar16 = (**(code **)(*plVar9 + 0x2e8))
                             (plVar9,in_stack_00000020,*(undefined8 *)(*plVar9 + 0x2f0));
          uVar11 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
          uVar8 = (**(code **)(*in_stack_00000010 + 0x1a8))
                            (in_stack_00000010,uVar8,*(undefined8 *)(*in_stack_00000010 + 0x1b0));
          if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
          }
          uVar8 = FUN_033aa5f8(uVar11,uVar16,uVar8,in_stack_00000008,in_stack_00000018);
          FUN_034b14f4(plVar9,in_stack_00000020,uVar8,0);
        }
LAB_033ac99c:
        uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar13 + 0x18));
    }
    uVar8 = (**(code **)(*in_stack_00000028 + 0x8a8))
                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x8b0));
    uVar16 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_022ee1a4(uVar8,uVar16,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    puVar1 = Method_UnityEngine_UI_InputField_UpdateCaretMaterial__;
    if ((uVar7 & 1) != 0) {
      lVar12 = thunk_FUN_01f116d0(in_stack_00000020,
                                  *(undefined8 *)
                                   Method_UnityEngine_UI_InputField_UpdateCaretMaterial__);
      if (lVar12 == 0) goto LAB_033acbac;
      lVar13 = *(long *)puVar1;
      plVar9 = (long *)thunk_FUN_01f116d0(in_stack_00000020,lVar13);
      lVar12 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033aca98;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,0);
LAB_033aca98:
      uVar7 = (*(code *)*puVar6)(plVar9,in_stack_00000010,puVar6[1]);
      if ((uVar7 & 1) == 0) {
        uVar8 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__,
                             in_stack_00000028,0);
        if (in_stack_00000008 == 0) goto LAB_033acbac;
        FUN_03418c10(in_stack_00000008,uVar8,0);
      }
    }
    return in_stack_00000020;
  }
LAB_033acbac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



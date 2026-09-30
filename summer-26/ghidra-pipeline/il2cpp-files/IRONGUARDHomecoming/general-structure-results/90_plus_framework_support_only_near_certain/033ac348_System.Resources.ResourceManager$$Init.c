/*
FUNCTION_NAME: System.Resources.ResourceManager$$Init
ENTRY_POINT: 033ac348
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033acc34) */
/* WARNING: Removing unreachable block (ram,0x033ac500) */
/* WARNING: Removing unreachable block (ram,0x033acc1c) */
/* WARNING: Removing unreachable block (ram,0x033ac5e4) */

undefined8 System_Resources_ResourceManager__Init(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar10;
  long unaff_x25;
  long *unaff_x26;
  undefined8 uVar11;
  long *unaff_x28;
  long in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  do {
    if (in_x9 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033ac388;
        }
        in_x9 = in_x9 - 1;
        piVar9 = piVar9 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x28,param_3,0);
LAB_033ac388:
    plVar3 = (long *)(*(code *)*puVar2)(unaff_x28,puVar2[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033ac39c:
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033ac3e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x20,0);
LAB_033ac3e8:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_033ac444;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x21,0);
LAB_033ac444:
      lVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = FUN_0340eec4(*(undefined8 *)(lVar6 + 0x10),0);
      if ((uVar8 & 1) == 0) {
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2d0();
      }
      goto LAB_033ac39c;
    }
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_033ac4e4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_033ac4e4:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
    lVar6 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033ac2b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033ac2b8:
    uVar8 = (*(code *)*puVar2)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_033ac5d8;
      lVar6 = *unaff_x26;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_033ac5b0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033ac31c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033ac31c:
    uVar11 = (*(code *)*puVar2)();
    unaff_x28 = (long *)FUN_022cd888(uVar11,*unaff_x22);
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *unaff_x28;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_033ac5cc;
    }
  }
LAB_033ac5b0:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033ac5cc:
  (*(code *)*puVar2)();
LAB_033ac5d8:
  if ((in_stack_00000010 != (long *)0x0) && (lVar6 = FUN_033acdf4(), lVar6 != 0)) {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar8 = 0;
      uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar8) goto LAB_033acbe0;
        uVar11 = *(undefined8 *)(lVar6 + 0x20 + uVar8 * 8);
        plVar3 = (long *)(**(code **)(*in_stack_00000028 + 0x6b8))
                                   (in_stack_00000028,uVar11,0x14,
                                    *(undefined8 *)(*in_stack_00000028 + 0x6c0));
        if (unaff_x24 == 0) goto LAB_033acbac;
        uVar7 = FUN_02b6b4d8();
        if ((uVar7 & 1) != 0) {
          plVar3 = (long *)FUN_02b6b264();
        }
        uVar7 = FUN_034b14b8(plVar3,0,0);
        if ((uVar7 & 1) == 0) {
          plVar3 = (long *)FUN_03584e88(in_stack_00000028,uVar11,0x14,0);
          if (unaff_x25 == 0) goto LAB_033acbac;
          uVar7 = FUN_02b6b4d8();
          if ((uVar7 & 1) != 0) {
            plVar3 = (long *)FUN_02b6b264();
          }
          uVar7 = FUN_034b298c(plVar3,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar3 == (long *)0x0) goto LAB_033acbac;
            uVar4 = FUN_034b43d4(plVar3,0);
            uVar7 = System_Console__SetOut(uVar4,0,0);
            if ((uVar7 & 1) != 0) {
              uVar4 = FUN_034b43c0(plVar3,0);
              uVar7 = System_Console__SetOut(uVar4,0,0);
              uVar4 = 0;
              if ((uVar7 & 1) != 0) {
                uVar4 = FUN_034b43e8(plVar3,in_stack_00000020,0);
              }
              uVar5 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
              }
              uVar4 = FUN_033aa338(uVar5,uVar4);
              uVar5 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
              uVar11 = (**(code **)(*in_stack_00000010 + 0x1a8))
                                 (in_stack_00000010,uVar11,
                                  *(undefined8 *)(*in_stack_00000010 + 0x1b0));
              uVar11 = FUN_033aa5f8(uVar5,uVar4,uVar11,in_stack_00000008,in_stack_00000018);
              FUN_034b441c(plVar3,in_stack_00000020,uVar11,0);
              goto LAB_033ac99c;
            }
          }
          lVar10 = FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                ,5);
          if (lVar10 == 0) goto LAB_033acbac;
          if (*(int *)(lVar10 + 0x18) == 0) {
LAB_033acbe0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x20) =
               *(undefined8 *)Method_Unity_VisualScripting_GraphReference_CreateGraphData__;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x20));
          uVar4 = (**(code **)(*in_stack_00000028 + 0x2e8))
                            (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2f0));
          if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_033acbe0;
          *(undefined8 *)(lVar10 + 0x28) = uVar4;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar4);
          if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_033acbe0;
          *(undefined8 *)(lVar10 + 0x30) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetValueType__;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x30));
          if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_033acbe0;
          *(undefined8 *)(lVar10 + 0x38) = uVar11;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x38),uVar11);
          if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_033acbe0;
          *(undefined8 *)(lVar10 + 0x40) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__;
          thunk_FUN_01f51358();
          uVar11 = FUN_0340efe8(lVar10,0);
          if (in_stack_00000008 == 0) goto LAB_033acbac;
          FUN_03418c10(in_stack_00000008,uVar11,0);
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_033acbac;
          uVar4 = (**(code **)(*plVar3 + 0x2e8))
                            (plVar3,in_stack_00000020,*(undefined8 *)(*plVar3 + 0x2f0));
          uVar5 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
          uVar11 = (**(code **)(*in_stack_00000010 + 0x1a8))
                             (in_stack_00000010,uVar11,*(undefined8 *)(*in_stack_00000010 + 0x1b0));
          if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
          }
          uVar11 = FUN_033aa5f8(uVar5,uVar4,uVar11,in_stack_00000008,in_stack_00000018);
          FUN_034b14f4(plVar3,in_stack_00000020,uVar11,0);
        }
LAB_033ac99c:
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    uVar11 = (**(code **)(*in_stack_00000028 + 0x8a8))
                       (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x8b0));
    uVar4 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar4 = FUN_03579868(uVar4,0);
    uVar8 = FUN_022ee1a4(uVar11,uVar4,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    puVar1 = Method_UnityEngine_UI_InputField_UpdateCaretMaterial__;
    if ((uVar8 & 1) != 0) {
      lVar6 = thunk_FUN_01f116d0(in_stack_00000020,
                                 *(undefined8 *)
                                  Method_UnityEngine_UI_InputField_UpdateCaretMaterial__);
      if (lVar6 == 0) goto LAB_033acbac;
      lVar10 = *(long *)puVar1;
      plVar3 = (long *)thunk_FUN_01f116d0(in_stack_00000020,lVar10);
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar10) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_033aca98;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar10,0);
LAB_033aca98:
      uVar8 = (*(code *)*puVar2)(plVar3,in_stack_00000010,puVar2[1]);
      if ((uVar8 & 1) == 0) {
        uVar11 = FUN_03406290(*(undefined8 *)
                               Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__,
                              in_stack_00000028,0);
        if (in_stack_00000008 == 0) goto LAB_033acbac;
        FUN_03418c10(in_stack_00000008,uVar11,0);
      }
    }
    return in_stack_00000020;
  }
LAB_033acbac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



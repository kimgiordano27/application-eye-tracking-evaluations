/*
FUNCTION_NAME: System.Resources.ManifestBasedResourceGroveler$$GetNeutralResourcesLanguageAttribute
ENTRY_POINT: 033ac2c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033acc34) */
/* WARNING: Removing unreachable block (ram,0x033ac500) */
/* WARNING: Removing unreachable block (ram,0x033acc1c) */
/* WARNING: Removing unreachable block (ram,0x033ac5e4) */

undefined8
System_Resources_ManifestBasedResourceGroveler__GetNeutralResourcesLanguageAttribute(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar11;
  long unaff_x25;
  long *unaff_x26;
  long in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  while ((param_1 & 1) != 0) {
    lVar7 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 033ac2d4 to 034ac2ff has its CatchHandler @ 033ad1d4 */
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033ac31c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 033ac300 to 034ac783 has its CatchHandler @ 033ab940 */
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033ac31c:
    uVar3 = (*(code *)*puVar2)();
    plVar4 = (long *)FUN_022cd888(uVar3,*unaff_x22);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033ac388;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x23,0);
LAB_033ac388:
    plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033ac39c:
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033ac3e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x20,0);
LAB_033ac3e8:
    uVar9 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((uVar9 & 1) != 0) {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033ac444;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x21,0);
LAB_033ac444:
      lVar7 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = FUN_0340eec4(*(undefined8 *)(lVar7 + 0x10),0);
      if ((uVar9 & 1) == 0) {
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2d0();
      }
      goto LAB_033ac39c;
    }
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033ac4e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_033ac4e4:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    lVar7 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033ac2b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033ac2b8:
    param_1 = (*(code *)*puVar2)();
  }
  if (unaff_x26 != (long *)0x0) {
    lVar7 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033ac5cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_033ac5cc:
    (*(code *)*puVar2)();
  }
  if ((in_stack_00000010 != (long *)0x0) && (lVar7 = FUN_033acdf4(), lVar7 != 0)) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar9 = 0;
      uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar9) goto LAB_033acbe0;
        uVar3 = *(undefined8 *)(lVar7 + 0x20 + uVar9 * 8);
        plVar4 = (long *)(**(code **)(*in_stack_00000028 + 0x6b8))
                                   (in_stack_00000028,uVar3,0x14,
                                    *(undefined8 *)(*in_stack_00000028 + 0x6c0));
        if (unaff_x24 == 0) goto LAB_033acbac;
        uVar8 = FUN_02b6b4d8();
        if ((uVar8 & 1) != 0) {
          plVar4 = (long *)FUN_02b6b264();
        }
        uVar8 = FUN_034b14b8(plVar4,0,0);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)FUN_03584e88(in_stack_00000028,uVar3,0x14,0);
          if (unaff_x25 == 0) goto LAB_033acbac;
          uVar8 = FUN_02b6b4d8();
          if ((uVar8 & 1) != 0) {
            plVar4 = (long *)FUN_02b6b264();
          }
          uVar8 = FUN_034b298c(plVar4,0,0);
          if ((uVar8 & 1) != 0) {
            if (plVar4 == (long *)0x0) goto LAB_033acbac;
            uVar5 = FUN_034b43d4(plVar4,0);
            uVar8 = System_Console__SetOut(uVar5,0,0);
            if ((uVar8 & 1) != 0) {
              uVar5 = FUN_034b43c0(plVar4,0);
              uVar8 = System_Console__SetOut(uVar5,0,0);
              uVar5 = 0;
              if ((uVar8 & 1) != 0) {
                uVar5 = FUN_034b43e8(plVar4,in_stack_00000020,0);
              }
              uVar6 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
              if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
              }
              uVar5 = FUN_033aa338(uVar6,uVar5);
              uVar6 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
              uVar3 = (**(code **)(*in_stack_00000010 + 0x1a8))
                                (in_stack_00000010,uVar3,*(undefined8 *)(*in_stack_00000010 + 0x1b0)
                                );
              uVar3 = FUN_033aa5f8(uVar6,uVar5,uVar3,in_stack_00000008,in_stack_00000018);
              FUN_034b441c(plVar4,in_stack_00000020,uVar3,0);
              goto LAB_033ac99c;
            }
          }
          lVar11 = FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                ,5);
          if (lVar11 == 0) goto LAB_033acbac;
          if (*(int *)(lVar11 + 0x18) == 0) {
LAB_033acbe0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar11 + 0x20) =
               *(undefined8 *)Method_Unity_VisualScripting_GraphReference_CreateGraphData__;
          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x20));
          uVar5 = (**(code **)(*in_stack_00000028 + 0x2e8))
                            (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2f0));
          if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_033acbe0;
          *(undefined8 *)(lVar11 + 0x28) = uVar5;
          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28),uVar5);
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_033acbe0;
          *(undefined8 *)(lVar11 + 0x30) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetValueType__;
          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x30));
          if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_033acbe0;
          *(undefined8 *)(lVar11 + 0x38) = uVar3;
          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x38),uVar3);
          if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_033acbe0;
          *(undefined8 *)(lVar11 + 0x40) =
               *(undefined8 *)Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__;
          thunk_FUN_01f51358();
          uVar3 = FUN_0340efe8(lVar11,0);
          if (in_stack_00000008 == 0) goto LAB_033acbac;
          FUN_03418c10(in_stack_00000008,uVar3,0);
        }
        else {
          if (plVar4 == (long *)0x0) goto LAB_033acbac;
          uVar5 = (**(code **)(*plVar4 + 0x2e8))
                            (plVar4,in_stack_00000020,*(undefined8 *)(*plVar4 + 0x2f0));
          uVar6 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
          uVar3 = (**(code **)(*in_stack_00000010 + 0x1a8))
                            (in_stack_00000010,uVar3,*(undefined8 *)(*in_stack_00000010 + 0x1b0));
          if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
          }
          uVar3 = FUN_033aa5f8(uVar6,uVar5,uVar3,in_stack_00000008,in_stack_00000018);
          FUN_034b14f4(plVar4,in_stack_00000020,uVar3,0);
        }
LAB_033ac99c:
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    uVar3 = (**(code **)(*in_stack_00000028 + 0x8a8))
                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x8b0));
    uVar5 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar5 = FUN_03579868(uVar5,0);
    uVar9 = FUN_022ee1a4(uVar3,uVar5,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    puVar1 = Method_UnityEngine_UI_InputField_UpdateCaretMaterial__;
    if ((uVar9 & 1) != 0) {
      lVar7 = thunk_FUN_01f116d0(in_stack_00000020,
                                 *(undefined8 *)
                                  Method_UnityEngine_UI_InputField_UpdateCaretMaterial__);
      if (lVar7 == 0) goto LAB_033acbac;
      lVar11 = *(long *)puVar1;
      plVar4 = (long *)thunk_FUN_01f116d0(in_stack_00000020,lVar11);
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033aca98;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar4,lVar11,0);
LAB_033aca98:
      uVar9 = (*(code *)*puVar2)(plVar4,in_stack_00000010,puVar2[1]);
      if ((uVar9 & 1) == 0) {
        uVar3 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputInteraction_GetDisplayName__,
                             in_stack_00000028,0);
        if (in_stack_00000008 == 0) goto LAB_033acbac;
        FUN_03418c10(in_stack_00000008,uVar3,0);
      }
    }
    return in_stack_00000020;
  }
LAB_033acbac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



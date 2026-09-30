/*
FUNCTION_NAME: System.Uri$$CheckAuthorityHelper
ENTRY_POINT: 039015cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 164
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_11;ray_or_cast_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03901a68) */
/* WARNING: Removing unreachable block (ram,0x03901c80) */
/* WARNING: Removing unreachable block (ram,0x03901e1c) */

void System_Uri__CheckAuthorityHelper(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToDictionary<CreepUnit,_int,_CreepUnit>__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<KeyValuePair<Camera,_List<DrawCommand>>>__
                    );
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__);
  *(undefined1 *)(unaff_x20 + 0x1d9) = 1;
  puVar2 = Method_System_Configuration_ConfigurationElement_Reset__;
  puVar1 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  in_stack_00000020 = 0;
  in_stack_00000028 = (long *)0x0;
  lVar11 = *unaff_x23;
  if (lVar11 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar13 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    plVar6 = (long *)thunk_FUN_01f116d0(lVar11,uVar13);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar11,uVar13);
    }
  }
  uVar7 = FUN_034b298c(*(undefined8 *)(unaff_x21 + 0x60),0,0);
  if ((uVar7 & 1) != 0) {
    plVar8 = *(long **)(unaff_x21 + 0x60);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    auVar14 = (**(code **)(*plVar8 + 0x308))(plVar8,*unaff_x23,0,*(undefined8 *)(*plVar8 + 0x310));
    if (auVar14._0_8_ != 0) {
      plVar8 = *(long **)(unaff_x21 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,auVar14._8_8_,auVar14._0_8_);
      }
      (**(code **)(*plVar8 + 0x188))
                (plVar8,*(undefined8 *)
                         Method_System_Linq_Enumerable_ToDictionary<CreepUnit,_int,_CreepUnit>__);
    }
  }
  plVar8 = *(long **)(unaff_x21 + 0x68);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                             (plVar8,*unaff_x23,0,*(undefined8 *)(*plVar8 + 0x310));
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(*plVar8 + 0x40) !=
      *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ + 0x40
               )) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  lVar12 = *(long *)puVar2;
  thunk_FUN_01f11920();
  lVar11 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar12) {
        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_03901774;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238();
LAB_03901774:
  (*(code *)*puVar9)();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *plVar6;
  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_039017d8;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,9);
LAB_039017d8:
  plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
  puVar5 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar4 = Method_System_Linq_Enumerable_ToList<ValueTuple<string,_Type>>__;
  puVar3 = Method_System_Linq_Enumerable_ToList<KeyValuePair<Camera,_List<DrawCommand>>>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  in_stack_00000010 = &stack0x00000028;
  in_stack_00000018 = &stack0x00000020;
  in_stack_00000008 = 0;
  do {
    in_stack_00000028 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03901874;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03901874:
    uVar7 = (*(code *)*puVar9)(plVar6,puVar9[1]);
    if ((uVar7 & 1) == 0) {
      FUN_01e5485c(&stack0x00000008);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 == 0) goto LAB_03901dc8;
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_039018d4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_039018d4:
    (*(code *)*puVar9)();
    plVar6 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *in_stack_00000028;
    plVar8 = *(long **)(unaff_x21 + 0x48);
    lVar11 = *(long *)puVar5;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03901940;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(in_stack_00000028,lVar11,0);
LAB_03901940:
    uVar13 = (*(code *)*puVar9)(plVar6,puVar9[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)puVar4,uVar13);
    plVar6 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *in_stack_00000028;
    plVar8 = *(long **)(unaff_x21 + 0x50);
    lVar11 = *(long *)puVar5;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_039019c8;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(in_stack_00000028,lVar11,1);
LAB_039019c8:
    uVar13 = (*(code *)*puVar9)(plVar6,puVar9[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)puVar3,uVar13);
    lVar11 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_03901a4c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_03901a4c:
    (*(code *)*puVar9)();
    plVar6 = in_stack_00000028;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar10 = piVar10 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
      goto LAB_03901de8;
    }
  }
LAB_03901dc8:
  puVar9 = (undefined8 *)FUN_01ecb238();
LAB_03901de8:
  (*(code *)*puVar9)();
  return;
}



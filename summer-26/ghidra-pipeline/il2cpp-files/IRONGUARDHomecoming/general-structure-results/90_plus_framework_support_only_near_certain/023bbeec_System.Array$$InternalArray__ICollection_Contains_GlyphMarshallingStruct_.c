/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<GlyphMarshallingStruct>
ENTRY_POINT: 023bbeec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023bc444) */
/* WARNING: Removing unreachable block (ram,0x023bc098) */
/* WARNING: Removing unreachable block (ram,0x023bc4e8) */
/* WARNING: Removing unreachable block (ram,0x023bc4e0) */

void System_Array__InternalArray__ICollection_Contains<GlyphMarshallingStruct>
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5
               ,undefined4 param_6,long param_7)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  long in_stack_00000008;
  
  if (*(long *)(param_7 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Renderer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<SkinnedMeshRenderer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Slider>__);
    if (*(long *)(param_7 + 0x38) == 0) {
      FUN_01ecafa0(param_7);
    }
  }
  in_stack_00000008 = 0;
  if (param_3 == (long *)0x0) {
LAB_023bbfa4:
    iVar15 = 0;
  }
  else {
    lVar5 = FUN_04224ea4(param_3,0);
    if (lVar5 == 0) {
      param_3 = (long *)0x0;
      goto LAB_023bbfa4;
    }
    iVar15 = 0;
    plVar6 = param_3;
    do {
      in_stack_00000008 = plVar6[0x6f];
      iVar15 = iVar15 + 1;
      plVar6 = (long *)FUN_042319e8(&stack0x00000008,0);
    } while (plVar6 != (long *)0x0);
  }
  iVar14 = 0;
  plVar6 = param_4;
  plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  while (iVar3 = iVar15,
        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__ =
             (undefined *)plVar2, plVar6 != (long *)0x0) {
    in_stack_00000008 = plVar6[0x6f];
    iVar14 = iVar14 + 1;
    plVar6 = (long *)FUN_042319e8(&stack0x00000008,0);
    plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  }
  for (; iVar14 < iVar15; iVar15 = iVar15 + -1) {
    plVar6 = (long *)FUN_025ead98(param_1,param_2,param_5,param_6,**(undefined8 **)(param_7 + 0x38))
    ;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar6,param_3,0);
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*param_3 + 0x198))(param_3,plVar6,*(undefined8 *)(*param_3 + 0x1a0));
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *plVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_023bc080;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*plVar2,0);
LAB_023bc080:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (param_3 == (long *)0x0) goto LAB_023bc4dc;
    in_stack_00000008 = param_3[0x6f];
    param_3 = (long *)FUN_042319e8(&stack0x00000008,0);
    iVar3 = iVar14;
  }
  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Slider>__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_0414dc14(iVar14,0);
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__;
  if (iVar3 < iVar14) {
    if (lVar5 == 0) goto LAB_023bc4dc;
    do {
      lVar10 = *(long *)(lVar5 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_023bc4dc;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = param_4;
        thunk_FUN_01f51358(puVar7,param_4);
      }
      else {
        FUN_030f2bb4(lVar5,param_4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      if (param_4 == (long *)0x0) goto LAB_023bc4dc;
      in_stack_00000008 = param_4[0x6f];
      iVar14 = iVar14 + -1;
      param_4 = (long *)FUN_042319e8(&stack0x00000008,0);
    } while (iVar3 < iVar14);
  }
  if (param_3 == param_4) {
    if (lVar5 == 0) {
LAB_023bc4dc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    do {
      plVar6 = (long *)FUN_025ead98(param_1,param_2,param_5,param_6,
                                    **(undefined8 **)(param_7 + 0x38));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar6,param_3,0);
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*param_3 + 0x198))(param_3,plVar6,*(undefined8 *)(*param_3 + 0x1a0));
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *plVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_023bc26c;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*plVar2,0);
LAB_023bc26c:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar5 == 0) goto LAB_023bc4dc;
      lVar10 = *(long *)(lVar5 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_023bc4dc;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = param_4;
        thunk_FUN_01f51358(puVar7,param_4);
      }
      else {
        FUN_030f2bb4(lVar5,param_4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      if (param_3 == (long *)0x0) goto LAB_023bc4dc;
      in_stack_00000008 = param_3[0x6f];
      param_3 = (long *)FUN_042319e8(&stack0x00000008,0);
      if (param_4 == (long *)0x0) goto LAB_023bc4dc;
      in_stack_00000008 = param_4[0x6f];
      param_4 = (long *)FUN_042319e8(&stack0x00000008,0);
    } while (param_3 != param_4);
  }
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<SkinnedMeshRenderer>__;
  iVar15 = *(int *)(lVar5 + 0x18);
  do {
    iVar15 = iVar15 + -1;
    if (iVar15 < 0) {
      if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Slider>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0414dcf4(lVar5,0);
      return;
    }
    plVar6 = (long *)FUN_025ead98(param_1,param_2,param_5,param_6,
                                  *(undefined8 *)(*(long *)(param_7 + 0x38) + 0x20));
    uVar8 = FUN_030f28e4(lVar5,iVar15,*(undefined8 *)puVar4);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar8,uVar8);
    }
    FUN_041d4560(plVar6,uVar8,0);
    plVar9 = (long *)FUN_030f28e4(lVar5,iVar15,*(undefined8 *)puVar4);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar9 + 0x198))(plVar9,plVar6,*(undefined8 *)(*plVar9 + 0x1a0));
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *plVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_023bc42c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*plVar2,0);
LAB_023bc42c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  } while( true );
}



/*
FUNCTION_NAME: System.Array$$LastIndexOf<ProbeBrickPool.BrickChunkAlloc>
ENTRY_POINT: 0213556c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02135b78) */

undefined8
System_Array__LastIndexOf<ProbeBrickPool_BrickChunkAlloc>
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  void *__s;
  ulong __n;
  undefined1 *__src;
  undefined8 *puVar14;
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0x58) = param_1;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(param_1 + 0x28);
  lVar7 = *(long *)(param_6 + 0x38);
  if (lVar7 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar7 = *(long *)(param_6 + 0x38);
    if (lVar7 == 0) {
      FUN_01ecafa0(param_6);
      lVar7 = *(long *)(param_6 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar7 + 0x30) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar9;
  *(ulong *)(unaff_x29 + -0x48) = (long)__src - uVar9;
  lVar11 = ((long)__src - uVar9) - uVar9;
  lVar8 = *(long *)(param_6 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar7 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
    uVar1 = *(ushort *)(*(long *)(param_6 + 0x20) + 0x135);
    lVar7 = *(long *)(param_6 + 0x20);
  }
  puVar14 = (undefined8 *)
            (lVar11 - ((ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0xfc) + 0xf &
                      0x1fffffff0));
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  puVar13 = (undefined8 *)
            ((long)puVar14 -
            ((ulong)*(uint *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0xfc) + 0xf & 0x1fffffff0)
            );
  __s = (void *)((long)puVar13 - (__n + 0xf & 0x1fffffff0));
  memset(__s,0,__n);
  puVar5 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if (((param_2 == (long *)0x0) ||
      (puVar5 = 
       Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalRotationPoseAtSurface__,
      *(long *)(unaff_x29 + -0x38) == 0)) ||
     (puVar5 = 
      Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalTranslationPoseAtSurface__,
     *(long *)(unaff_x29 + -0x40) == 0)) {
    uVar2 = thunk_FUN_01efb3a4(puVar5);
    uVar2 = FUN_03971094(uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,param_6);
  }
  lVar7 = *(long *)(param_6 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar2 = thunk_FUN_01f117cc();
  lVar8 = *(long *)(param_6 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
  *(long *)(unaff_x29 + -0x50) = lVar11;
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar7 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
    uVar1 = *(ushort *)(*(long *)(param_6 + 0x20) + 0x135);
    lVar7 = *(long *)(param_6 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  (*pcVar12)(*(undefined8 *)(unaff_x29 + -0x30),param_5,
             *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
  lVar7 = **(long **)(param_6 + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02135794;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_02135794:
  plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_021357fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_021357fc:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_02135afc;
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_02135ad4;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(param_6 + 0x38) + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02135870;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar7 = FUN_01ecb238(plVar4,lVar7,0);
LAB_02135870:
    *(undefined1 **)(unaff_x29 + -0x28) = __src;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar4,unaff_x29 + -0x28,__src);
    memcpy(__s,__src,__n);
    puVar3 = *(undefined8 **)(unaff_x29 + -0x48);
    memcpy(puVar3,__s,__n);
    if (-1 < *(int *)(*(long *)(*(long *)(param_6 + 0x38) + 0x30) + 0x28)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x38) + 0x38);
    uVar2 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar14;
    (*(code *)puVar6[2])(uVar2,puVar6,*(undefined8 *)(unaff_x29 + -0x38),unaff_x29 + -0x28,puVar14);
    if (*(long *)(unaff_x29 + -0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(param_6 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar7 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44();
      lVar8 = *(long *)(param_6 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
    }
    uVar2 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
    lVar7 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44();
      lVar8 = *(long *)(param_6 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    puVar3 = puVar14;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x28)) {
      puVar3 = (undefined8 *)*puVar14;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    *(undefined1 *)(unaff_x29 + -0xc) = 1;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    (**(code **)(lVar7 + 0x10))
              (uVar2,lVar7,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x28,unaff_x29 + -0x18);
    puVar3 = *(undefined8 **)(unaff_x29 + -0x50);
    lVar7 = *(long *)(unaff_x29 + -0x18);
    memcpy(puVar3,__s,__n);
    if (-1 < *(int *)(*(long *)(*(long *)(param_6 + 0x38) + 0x30) + 0x28)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x38) + 0x40);
    uVar2 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar13;
    (*(code *)puVar6[2])(uVar2,puVar6,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x28,puVar13);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(param_6 + 0x20);
    uVar1 = *(ushort *)(lVar11 + 0x135);
    lVar8 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_01ecaf44();
      lVar11 = *(long *)(param_6 + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x135);
    }
    uVar2 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_01ecaf44();
      lVar11 = *(long *)(param_6 + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_01ecaf44();
    }
    puVar3 = puVar13;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 0x28)) {
      puVar3 = (undefined8 *)*puVar13;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
    (**(code **)(lVar8 + 0x10))(uVar2,lVar8,lVar7,unaff_x29 + -0x28);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar14 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02135af0;
    }
  }
LAB_02135ad4:
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar4,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02135af0:
  (*(code *)*puVar14)(plVar4,puVar14[1]);
LAB_02135afc:
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return *(undefined8 *)(unaff_x29 + -0x30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



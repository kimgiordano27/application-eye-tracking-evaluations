/*
FUNCTION_NAME: System.Array$$LastIndexOf<StyleVariableResolver.ResolveContext>
ENTRY_POINT: 02135610
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02135b78) */

undefined8
System_Array__LastIndexOf<StyleVariableResolver_ResolveContext>(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ushort *in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  code *pcVar13;
  undefined8 *puVar14;
  void *__s;
  size_t unaff_x23;
  void *unaff_x24;
  long *unaff_x27;
  long unaff_x29;
  
  puVar7 = (undefined8 *)
           (&stack0x00000000 +
           -((ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x18) + 0xfc) + 0xf &
            0x1fffffff0));
  if ((*in_x9 & 1) == 0) {
    param_1 = FUN_01ecaf44(param_1);
  }
  puVar14 = (undefined8 *)
            ((long)puVar7 -
            ((ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x30) + 0xfc) + 0xf &
            0x1fffffff0));
  __s = (void *)((long)puVar14 - (unaff_x23 + 0xf & 0x1fffffff0));
  memset(__s,0,unaff_x23);
  puVar8 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if (((unaff_x27 == (long *)0x0) ||
      (puVar8 = 
       Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalRotationPoseAtSurface__,
      *(long *)(unaff_x29 + -0x38) == 0)) ||
     (puVar8 = 
      Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalTranslationPoseAtSurface__,
     *(long *)(unaff_x29 + -0x40) == 0)) {
    uVar3 = thunk_FUN_01efb3a4(puVar8);
    FUN_03971094(uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar3 = thunk_FUN_01f117cc();
  lVar10 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x30) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar2 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_01ecaf44(lVar2);
  }
  (*pcVar13)(*(undefined8 *)(unaff_x29 + -0x30));
  lVar2 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44(lVar2);
  }
  lVar10 = *unaff_x27;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02135794;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02135794:
  plVar5 = (long *)(*(code *)*puVar4)();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar2 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_021357fc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_021357fc:
    uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_02135afc;
      lVar2 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar11 == 0) goto LAB_02135ad4;
      piVar12 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar2) {
          lVar2 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_02135870;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar2 = FUN_01ecb238(plVar5,lVar2,0);
LAB_02135870:
    *(void **)(unaff_x29 + -0x28) = unaff_x24;
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar5,unaff_x29 + -0x28);
    memcpy(__s,unaff_x24,unaff_x23);
    puVar4 = *(undefined8 **)(unaff_x29 + -0x48);
    memcpy(puVar4,__s,unaff_x23);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    puVar9 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38);
    uVar3 = *puVar9;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar4;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    (*(code *)puVar9[2])(uVar3,puVar9,*(undefined8 *)(unaff_x29 + -0x38),unaff_x29 + -0x28,puVar7);
    if (*(long *)(unaff_x29 + -0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar10 + 0x135);
    lVar2 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_01ecaf44();
      lVar10 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    uVar3 = **(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x20);
    lVar2 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_01ecaf44();
      lVar10 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    puVar4 = puVar7;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x18) + 0x28)) {
      puVar4 = (undefined8 *)*puVar7;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar4;
    *(undefined1 *)(unaff_x29 + -0xc) = 1;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    (**(code **)(lVar2 + 0x10))
              (uVar3,lVar2,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x28,unaff_x29 + -0x18);
    puVar4 = *(undefined8 **)(unaff_x29 + -0x50);
    lVar2 = *(long *)(unaff_x29 + -0x18);
    memcpy(puVar4,__s,unaff_x23);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    puVar9 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40);
    uVar3 = *puVar9;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar4;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar14;
    (*(code *)puVar9[2])(uVar3,puVar9,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x28,puVar14);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar10 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_01ecaf44();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    uVar3 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
    lVar10 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_01ecaf44();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    puVar4 = puVar14;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x28)) {
      puVar4 = (undefined8 *)*puVar14;
    }
    *(undefined8 **)(unaff_x29 + -0x28) = puVar4;
    (**(code **)(lVar10 + 0x10))(uVar3,lVar10,lVar2,unaff_x29 + -0x28);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02135af0;
    }
  }
LAB_02135ad4:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02135af0:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_02135afc:
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return *(undefined8 *)(unaff_x29 + -0x30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



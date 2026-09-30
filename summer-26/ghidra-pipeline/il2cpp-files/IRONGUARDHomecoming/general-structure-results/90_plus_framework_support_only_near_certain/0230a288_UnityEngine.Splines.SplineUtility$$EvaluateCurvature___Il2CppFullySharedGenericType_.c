/*
FUNCTION_NAME: UnityEngine.Splines.SplineUtility$$EvaluateCurvature<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0230a288
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0230a6e4) */

long UnityEngine_Splines_SplineUtility__EvaluateCurvature<__Il2CppFullySharedGenericType>
               (long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  void *__s;
  ulong __n;
  undefined8 *__src;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *puVar11;
  long alStack_40 [4];
  long lStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_10;
  long lStack_8;
  undefined *puVar4;
  
  alStack_40[1] = tpidr_el0;
  lStack_8 = *(long *)(alStack_40[1] + 0x28);
  lVar9 = *(long *)(param_5 + 0x38);
  alStack_40[2] = param_4;
  alStack_40[3] = param_3;
  lStack_20 = param_2;
  if (lVar9 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar9 = *(long *)(param_5 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(param_5);
      lVar9 = *(long *)(param_5 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar9 + 0x48) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)alStack_40 - uVar7);
  __dest = (undefined8 *)((long)__src - uVar7);
  __dest_00 = (undefined8 *)((long)__dest - uVar7);
  puVar11 = (undefined8 *)
            ((long)__dest_00 -
            ((ulong)*(uint *)(*(long *)(lVar9 + 0x58) + 0xfc) + 0xf & 0x1fffffff0));
  puVar10 = (undefined8 *)
            ((long)puVar11 - ((ulong)*(uint *)(*(long *)(lVar9 + 0x68) + 0xfc) + 0xf & 0x1fffffff0))
  ;
  __s = (void *)((long)puVar10 - uVar7);
  memset(__s,0,__n);
  puVar4 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if (((param_1 == (long *)0x0) ||
      (puVar4 = 
       Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalRotationPoseAtSurface__,
      lStack_20 == 0)) ||
     (puVar4 = 
      Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalTranslationPoseAtSurface__,
     alStack_40[3] == 0)) {
    uVar3 = thunk_FUN_01efb3a4(puVar4);
    uVar3 = FUN_03971094(uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,param_5);
  }
  if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar9 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x38) + 0x28))(lVar9,alStack_40[2]);
  lVar5 = **(long **)(param_5 + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0230a41c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(param_1,lVar5,0);
LAB_0230a41c:
  plVar2 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0230a484;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0230a484:
    uVar7 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_0230a66c;
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0230a644;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0230a4f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(plVar2,lVar5,0);
LAB_0230a4f8:
    lVar5 = *(long *)(lVar5 + 8);
    puStack_18 = __src;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar2,&puStack_18,__src);
    memcpy(__s,__src,__n);
    memcpy(__dest,__s,__n);
    puStack_18 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(param_5 + 0x38) + 0x48) + 0x28)) {
      puStack_18 = (undefined8 *)*__dest;
    }
    puVar1 = *(undefined8 **)(*(long *)(param_5 + 0x38) + 0x50);
    puStack_10 = puVar11;
    (*(code *)puVar1[2])(*puVar1,puVar1,lStack_20,&puStack_18,puVar11);
    memcpy(__dest_00,__s,__n);
    puStack_18 = __dest_00;
    if (-1 < *(int *)(*(long *)(*(long *)(param_5 + 0x38) + 0x48) + 0x28)) {
      puStack_18 = (undefined8 *)*__dest_00;
    }
    puVar1 = *(undefined8 **)(*(long *)(param_5 + 0x38) + 0x60);
    puStack_10 = puVar10;
    (*(code *)puVar1[2])(*puVar1,puVar1,alStack_40[3],&puStack_18,puVar10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(param_5 + 0x38);
    puStack_18 = puVar11;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
      puStack_18 = (undefined8 *)*puVar11;
    }
    puStack_10 = puVar10;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x68) + 0x28)) {
      puStack_10 = (undefined8 *)*puVar10;
    }
    puVar1 = *(undefined8 **)(lVar5 + 0x70);
    (*(code *)puVar1[2])(*puVar1,puVar1,lVar9,&puStack_18);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0230a660;
    }
  }
LAB_0230a644:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar2,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0230a660:
  (*(code *)*puVar10)(plVar2,puVar10[1]);
LAB_0230a66c:
  if (*(long *)(alStack_40[1] + 0x28) == lStack_8) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



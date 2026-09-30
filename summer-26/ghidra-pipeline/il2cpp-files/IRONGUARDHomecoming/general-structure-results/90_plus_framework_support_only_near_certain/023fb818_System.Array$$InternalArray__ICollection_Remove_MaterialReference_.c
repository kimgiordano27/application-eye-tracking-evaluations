/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<MaterialReference>
ENTRY_POINT: 023fb818
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023fbb14) */

int System_Array__InternalArray__ICollection_Remove<MaterialReference>
              (undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  ulong __n;
  undefined1 *__src;
  undefined8 *puVar11;
  void *__s;
  long unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  plVar10 = *(long **)(param_4 + 0x38);
  if (plVar10 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar10 = *(long **)(param_4 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar10 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar10[4] + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar7;
  puVar11 = (undefined8 *)(__src + -uVar7);
  __s = (void *)((long)puVar11 - uVar7);
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023fb904;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_2,lVar4,0);
LAB_023fb904:
  plVar10 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = 1;
  do {
    lVar4 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023fb970;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_023fb970:
    uVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_023fbad0;
      lVar4 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_023fbaa8;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_023fb9e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_01ecb238(plVar10,lVar4,0);
LAB_023fb9e4:
    *(undefined1 **)(unaff_x29 + -0x18) = __src;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar10,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar11,__s,__n);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar2 = puVar11;
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x28)) {
      puVar2 = (undefined8 *)*puVar11;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar5[2])(uVar3,puVar5,param_3,unaff_x29 + -0x18,unaff_x29 + -0xc);
    iVar9 = *(int *)(unaff_x29 + -0xc) * iVar9;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_023fbac4;
    }
  }
LAB_023fbaa8:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023fbac4:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_023fbad0:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}



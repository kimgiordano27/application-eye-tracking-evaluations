/*
FUNCTION_NAME: FUN_0345676c
ENTRY_POINT: 0345676c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 228
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03456a28) */
/* WARNING: Removing unreachable block (ram,0x03456d04) */
/* WARNING: Removing unreachable block (ram,0x03456cf8) */

void FUN_0345676c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  
  if ((DAT_04832934 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<Collider>__);
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_SHA256Managed__ctor__);
    DAT_04832934 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_2 == 0) goto LAB_03456cf0;
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
    thunk_FUN_01f51358();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) goto LAB_03456cf0;
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
    thunk_FUN_01f51358();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (param_2 == 0) goto LAB_03456cf0;
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
    thunk_FUN_01f51358();
  }
  else if (param_2 == 0) goto LAB_03456cf0;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = *(long **)(param_2 + 0x28);
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
    puVar6 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_034568d0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_034568d0:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar4);
        if (plVar8 == (long *)0x0) goto LAB_03456a1c;
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_034569f4;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_034569dc;
      }
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_03456930;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,1);
LAB_03456930:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar9 = (undefined8 *)thunk_FUN_01f11920();
      plVar10 = *(long **)(param_1 + 0x28);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar14 = (**(code **)(*plVar10 + 0x2e8))(plVar10,uVar1,*(undefined8 *)(*plVar10 + 0x2f0));
      if ((uVar14 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0x28);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar10 + 0x318))(plVar10,uVar1,uVar2,*(undefined8 *)(*plVar10 + 800));
      }
    } while( true );
  }
LAB_03456cf0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_034569dc:
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03456a10;
    }
  }
LAB_034569f4:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03456a10:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03456a1c:
  plVar8 = *(long **)(param_2 + 0x30);
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)(param_1 + 0x30);
  if (*plVar10 == 0) {
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    FUN_0353e574(lVar12,0);
    *plVar10 = lVar12;
    thunk_FUN_01f51358(plVar10,lVar12);
    plVar8 = *(long **)(param_2 + 0x30);
    if (plVar8 == (long *)0x0) goto LAB_03456cf0;
  }
  lVar12 = *plVar8;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_03456ac4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                        ,0);
LAB_03456ac4:
  plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar7 = Method_System_Security_Cryptography_SHA256Managed__ctor__;
  puVar6 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar13 = *plVar8;
    lVar12 = *(long *)puVar5;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03456b3c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_03456b3c:
    uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar4);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 == 0) goto LAB_03456c90;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar8;
    lVar12 = *(long *)puVar5;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_03456b9c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,1);
LAB_03456b9c:
    plVar11 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar11 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar11);
      }
    }
    plVar16 = (long *)*plVar10;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_03456c34;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar6,2);
LAB_03456c34:
    (*(code *)*puVar9)(plVar16,plVar11,puVar9[1]);
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03456cac;
    }
  }
LAB_03456c90:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03456cac:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}



/*
FUNCTION_NAME: FUN_0390f050
ENTRY_POINT: 0390f050
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0390f6b4) */
/* WARNING: Removing unreachable block (ram,0x0390f690) */
/* WARNING: Removing unreachable block (ram,0x0390f6bc) */

void FUN_0390f050(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  
  if ((DAT_04838209 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_3366);
    thunk_FUN_01efb3a4(StringLiteral_3367);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__)
    ;
    thunk_FUN_01efb3a4(StringLiteral_3368);
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Builder_Join__);
    thunk_FUN_01efb3a4(StringLiteral_3369);
    DAT_04838209 = 1;
  }
  puVar4 = Method_System_Configuration_ConfigurationElement_Reset__;
  puVar2 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
  lVar14 = *param_2;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar15 = *(undefined8 *)
            Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
  plVar7 = (long *)thunk_FUN_01f116d0(lVar14,uVar15);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar14,uVar15);
  }
  lVar14 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_0390f190;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,1);
LAB_0390f190:
  iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *param_3;
  lVar14 = *(long *)puVar4;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar14) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
        goto LAB_0390f1f4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(param_3,lVar14,0xc);
LAB_0390f1f4:
  (*(code *)*puVar8)(param_3,(long)iVar6,puVar8[1]);
  if (*(int *)(*(long *)StringLiteral_3367 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar9 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3366);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar14 = plVar9[3];
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar6 = *(int *)(lVar14 + 0x18);
  *(undefined4 *)(lVar14 + 0x18) = 0;
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
  if (0 < iVar6) {
    FUN_0358d1e4(*(undefined8 *)(lVar14 + 0x10),0,iVar6,0);
  }
  lVar10 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0390f2bc;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                        ,0);
LAB_0390f2bc:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0390f32c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_0390f32c:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)puVar2);
      if (plVar7 == (long *)0x0) goto LAB_0390f464;
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_0390f43c;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0390f38c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_0390f38c:
    uVar15 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar10 = *(long *)(lVar14 + 0x10);
    lVar11 = *(long *)puVar5;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4(lVar14,uVar15,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
      ;
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0390f458;
    }
  }
LAB_0390f43c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_0390f458:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0390f464:
  puVar3 = StringLiteral_3369;
  iVar6 = *(int *)(lVar14 + 0x18);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    plVar7 = *(long **)(param_1 + 0x40);
    uVar15 = FUN_030f28e4(lVar14,iVar6,*(undefined8 *)puVar3);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar7 + 0x188))(plVar7,0,uVar15,param_3,*(undefined8 *)(*plVar7 + 400));
  }
  if (plVar9 != (long *)0x0) {
    lVar14 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0390f5ec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_0390f5ec:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *param_3;
  lVar14 = *(long *)puVar4;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar14) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
        goto LAB_0390f654;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(param_3,lVar14,0xd);
LAB_0390f654:
  (*(code *)*puVar8)(param_3,puVar8[1]);
  return;
}



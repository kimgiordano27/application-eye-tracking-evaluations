/*
FUNCTION_NAME: FUN_03fefa50
ENTRY_POINT: 03fefa50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 274
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03ff0424) */
/* WARNING: Removing unreachable block (ram,0x03feff50) */
/* WARNING: Removing unreachable block (ram,0x03ff0384) */

long FUN_03fefa50(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0483bbb6 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04584ff8);
    thunk_FUN_01efb3a4(PTR_DAT_04585000);
    thunk_FUN_01efb3a4(PTR_DAT_04585008);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_ExitParentElement__);
    thunk_FUN_01efb3a4(PTR_DAT_04585010);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__);
    thunk_FUN_01efb3a4(PTR_DAT_045814f8);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<Renderer>__);
    thunk_FUN_01efb3a4(PTR_DAT_04585018);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    thunk_FUN_01efb3a4(PTR_DAT_04585020);
    thunk_FUN_01efb3a4(PTR_DAT_04585028);
    thunk_FUN_01efb3a4(PTR_DAT_04585030);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    thunk_FUN_01efb3a4(PTR_DAT_04585038);
    thunk_FUN_01efb3a4(PTR_DAT_04585040);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    thunk_FUN_01efb3a4(PTR_DAT_04585048);
    thunk_FUN_01efb3a4(PTR_DAT_04585050);
    thunk_FUN_01efb3a4(PTR_DAT_04583e20);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_get_serializedObject__);
    thunk_FUN_01efb3a4(PTR_DAT_04585058);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__)
    ;
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnAllDecalPropertyChange__
                      );
    thunk_FUN_01efb3a4(Method_Shapes_ShapesMaterialUtils_GetLineMat__);
    thunk_FUN_01efb3a4(PTR_DAT_04585060);
    DAT_0483bbb6 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar8 = FUN_03ff0c70(param_1);
  puVar3 = PTR_DAT_04585050;
  if ((uVar8 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    thunk_FUN_01efb3a4(PTR_DAT_04585068);
    uVar21 = thunk_FUN_01f117cc();
    FUN_03fecc1c(uVar21,uVar13);
    uVar13 = thunk_FUN_01efb3a4(PTR_DAT_04585078);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar21,uVar13);
  }
  plVar16 = (long *)(param_1 + 0x48);
  if (*plVar16 == 0) {
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(uint *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04583e20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_03ff0db8(uVar21,uVar1 >> 2 & 1);
    *plVar16 = lVar9;
    thunk_FUN_01f51358();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_035ac8e8(lVar9,0);
  *(undefined8 *)(lVar9 + 0x20) = param_2;
  thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20),param_2);
  *(undefined4 *)(lVar9 + 0x28) = uVar2;
  FUN_03fecc70(lVar9,*(undefined8 *)(param_1 + 0x10));
  FUN_03fecda8(lVar9,*(undefined8 *)(param_1 + 0x18));
  uVar21 = FUN_03fef9cc(param_1);
  *(undefined8 *)(lVar9 + 0x38) = uVar21;
  thunk_FUN_01f51358();
  if ((*(byte *)(param_1 + 0x38) >> 3 & 1) == 0) {
    plVar16 = (long *)*plVar16;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x178))(plVar16,lVar9,*(undefined8 *)(*plVar16 + 0x180));
      return *(long *)(lVar9 + 0x30);
    }
  }
  else {
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04585018);
    FUN_02b6aa68(lVar10,*(undefined8 *)PTR_DAT_04585000);
    plVar22 = (long *)(param_1 + 0x28);
    *plVar22 = lVar10;
    thunk_FUN_01f51358(plVar22,lVar10);
    lVar10 = FUN_03fef9cc(param_1);
    if ((lVar10 != 0) &&
       (lVar10 = FUN_02b6b184(lVar10,*(undefined8 *)PTR_DAT_045814f8), lVar10 != 0)) {
      FUN_028699a4(&local_d8,lVar10,*(undefined8 *)PTR_DAT_04585060);
      puVar6 = PTR_DAT_04585030;
      puVar5 = 
      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
      ;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      uStack_78 = uStack_d0;
      local_80 = local_d8;
      local_70 = local_c8;
      iVar20 = -1;
LAB_03fefd88:
      while (iVar18 = iVar20, uVar8 = FUN_02ce9e60(&local_80,*(undefined8 *)puVar6),
            (uVar8 & 1) != 0) {
        plVar11 = (long *)thunk_FUN_01f116d0(local_70,*(undefined8 *)puVar5);
        iVar20 = iVar18;
        if (plVar11 != (long *)0x0) {
          lVar10 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03fefdf8;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_03fefdf8:
          plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar19 = 0;
          do {
            lVar10 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03fefe5c;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_03fefe5c:
            uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar8 & 1) == 0) goto LAB_03fefed0;
            lVar10 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_03fefebc;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,1);
LAB_03fefebc:
            (*(code *)*puVar12)(plVar11,puVar12[1]);
            iVar19 = iVar19 + 1;
          } while( true );
        }
      }
      FUN_02ce9e5c(&local_80,*(undefined8 *)PTR_DAT_04585028);
      lVar10 = FUN_03fef9cc(param_1);
      if ((lVar10 == 0) ||
         (lVar10 = FUN_02b6b114(lVar10,*(undefined8 *)
                                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                               ), lVar10 == 0)) goto LAB_03ff03bc;
      FUN_0300123c(&local_d8,lVar10,
                   *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_get_serializedObject__);
      puVar7 = PTR_DAT_04584ff8;
      puVar6 = Method_Unity_VisualScripting_GraphPointer_Initialize__;
      puVar3 = Method_Unity_VisualScripting_GraphPointer_ExitParentElement__;
      uStack_98 = uStack_d0;
      local_a0 = local_d8;
      local_90 = local_c8;
      while (uVar8 = FUN_02ce9cdc(&local_a0,*(undefined8 *)puVar6), uVar21 = local_90,
            (uVar8 & 1) != 0) {
        lVar10 = FUN_03fef9cc(param_1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = FUN_02b6b264(lVar10,uVar21,*(undefined8 *)puVar3);
        plVar11 = (long *)thunk_FUN_01f116d0(uVar13,*(undefined8 *)puVar5);
        if (plVar11 != (long *)0x0) {
          lVar10 = *plVar11;
          lVar14 = *plVar22;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03ff009c;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_03ff009c:
          uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2e4(lVar14,uVar21,uVar13,*(undefined8 *)puVar7);
        }
      }
      FUN_02ce9cd8(&local_a0,*(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__);
      lVar10 = thunk_FUN_01f117cc(*(undefined8 *)Method_Shapes_ShapesMaterialUtils_GetLineMat__);
      FUN_030f2380(lVar10,*(undefined8 *)
                           Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnAllDecalPropertyChange__
                  );
      puVar6 = PTR_DAT_04585038;
      puVar5 = PTR_DAT_04585008;
      puVar3 = Method_UnityEngine_GameObject_GetComponent<Renderer>__;
      if (iVar18 < 1) {
        return lVar10;
      }
      iVar20 = 0;
      while ((*plVar22 != 0 &&
             (lVar14 = FUN_02b6b114(*plVar22,*(undefined8 *)PTR_DAT_04585010), lVar14 != 0))) {
        FUN_0300123c(&local_d8,lVar14,*(undefined8 *)PTR_DAT_04585058);
        uStack_b8 = uStack_d0;
        local_c0 = local_d8;
        local_b0 = local_c8;
        while (uVar8 = FUN_02ce9cdc(&local_c0,*(undefined8 *)puVar6), uVar21 = local_b0,
              (uVar8 & 1) != 0) {
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar11 = (long *)FUN_02b6b264(*plVar22,local_b0,*(undefined8 *)puVar5);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03ff01e0;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_03ff01e0:
          (*(code *)*puVar12)(plVar11,puVar12[1]);
          lVar14 = FUN_03fef9cc(param_1);
          lVar15 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_03ff0248;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,1);
LAB_03ff0248:
          uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2d0(lVar14,uVar21,uVar13,*(undefined8 *)puVar3);
        }
        FUN_02ce9cd8(&local_c0,*(undefined8 *)PTR_DAT_04585020);
        plVar11 = (long *)*plVar16;
        if ((plVar11 == (long *)0x0) ||
           ((**(code **)(*plVar11 + 0x178))(plVar11,lVar9,*(undefined8 *)(*plVar11 + 0x180)),
           lVar10 == 0)) break;
        uVar21 = *(undefined8 *)(lVar9 + 0x30);
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)
                  Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar21;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar10,uVar21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        iVar20 = iVar20 + 1;
        if (iVar20 == iVar18) {
          return lVar10;
        }
      }
    }
  }
LAB_03ff03bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03fefed0:
  plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)puVar3);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    lVar10 = *(long *)puVar3;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar10) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03feff38;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar10,0);
LAB_03feff38:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  iVar20 = iVar19;
  if ((iVar18 != -1) && (iVar20 = iVar18, iVar19 != iVar18)) {
    thunk_FUN_01efb3a4(PTR_DAT_04585068);
    uVar21 = thunk_FUN_01f117cc();
    uVar13 = thunk_FUN_01efb3a4(PTR_DAT_04585070);
    FUN_034f78b0(uVar21,uVar13,0);
    uVar13 = thunk_FUN_01efb3a4(PTR_DAT_04585078);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar21,uVar13);
  }
  goto LAB_03fefd88;
}



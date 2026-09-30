/*
FUNCTION_NAME: FUN_0346e2a4
ENTRY_POINT: 0346e2a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 177
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0346e600) */
/* WARNING: Removing unreachable block (ram,0x0346e670) */
/* WARNING: Removing unreachable block (ram,0x0346e680) */

void FUN_0346e2a4(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  char local_44 [4];
  
  puVar4 = 
  Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnAllDecalPropertyChange__;
  puVar3 = Method_Shapes_ShapesMaterialUtils_GetLineMat__;
  puVar2 = Method_System_RuntimeMethodHandle_GetObjectData__;
  if ((DAT_048329d6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeMethodHandle_GetObjectData__);
    thunk_FUN_01efb3a4(Method_SPPquad_Release__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__)
    ;
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnAllDecalPropertyChange__
                      );
    thunk_FUN_01efb3a4(Method_Shapes_ShapesMaterialUtils_GetLineMat__);
    DAT_048329d6 = 1;
  }
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030f2380(lVar6,*(undefined8 *)puVar4);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *(long *)puVar2;
  }
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
    local_44[0] = '\0';
    FUN_035ce230(uVar9,local_44,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar2;
    }
    plVar8 = (long *)**(long **)(lVar7 + 0xb8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
    puVar5 = Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
    puVar4 = Method_SPPquad_Release__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar8;
      lVar7 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0346e444;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,0);
LAB_0346e444:
      uVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar2);
        if (plVar8 == (long *)0x0) goto LAB_0346e5f4;
        lVar13 = *plVar8;
        lVar7 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_0346e5cc;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_0346e5b4;
      }
      lVar13 = *plVar8;
      lVar7 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0346e4a4;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,1);
LAB_0346e4a4:
      uVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      plVar12 = (long *)thunk_FUN_01f116d0(uVar11,*(undefined8 *)puVar4);
      if (plVar12 != (long *)0x0) {
        lVar13 = *plVar12;
        lVar7 = *(long *)puVar4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0346e50c;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0346e50c:
        lVar7 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if (lVar7 != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = *(long *)(lVar6 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar6,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    } while( true );
  }
  goto LAB_0346e66c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_0346e5b4:
    if (*(long *)(piVar16 + -2) == lVar7) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0346e5e8;
    }
  }
LAB_0346e5cc:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,0);
LAB_0346e5e8:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
LAB_0346e5f4:
  if (local_44[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9,0);
  }
  if (lVar6 != 0) {
    FUN_030f4630(lVar6,*(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                );
    return;
  }
LAB_0346e66c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



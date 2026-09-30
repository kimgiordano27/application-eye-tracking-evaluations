/*
FUNCTION_NAME: FUN_03fd6ce0
ENTRY_POINT: 03fd6ce0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03fd720c) */

void FUN_03fd6ce0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  
  if ((DAT_0483ba7f & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04584320);
    thunk_FUN_01efb3a4(PTR_DAT_04584328);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<float>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugUpdater_AssignDefaultActions__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04584330);
    thunk_FUN_01efb3a4(PTR_DAT_04584338);
    thunk_FUN_01efb3a4(PTR_DAT_04584340);
    thunk_FUN_01efb3a4(PTR_DAT_04584348);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04584350);
    thunk_FUN_01efb3a4(PTR_DAT_04584358);
    DAT_0483ba7f = 1;
  }
  (**(code **)(*param_1 + 0x5c8))(param_1,1,*(undefined8 *)(*param_1 + 0x5d0));
  puVar1 = PTR_DAT_04584320;
  if (param_1[4] != 0) {
    uVar7 = FUN_03fb3098(param_1[4],0);
    plVar8 = (long *)FUN_022fba74(uVar7,*(undefined8 *)puVar1);
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04584338) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03fd6e34;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_04584338,0);
LAB_03fd6e34:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar6 = PTR_DAT_04584358;
      puVar5 = PTR_DAT_04584350;
      puVar4 = PTR_DAT_04584348;
      puVar3 = Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<float>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03fd6ec4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03fd6ec4:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_03fd6ff8;
          lVar10 = *plVar8;
          lVar12 = *(long *)puVar1;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 == 0) goto LAB_03fd6fd0;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03fd6fb8;
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03fd6f20;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03fd6f20:
        lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
        FUN_035ac8e8(lVar10,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar9 = (undefined8 *)(lVar10 + 0x10);
        *puVar9 = *(undefined8 *)(lVar12 + 0x10);
        thunk_FUN_01f51358(puVar9);
        uVar15 = *puVar9;
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_02e6c748(uVar7,lVar10,*(undefined8 *)puVar5,0);
        FUN_03fe4b9c(param_1,uVar15,uVar7,0);
      } while( true );
    }
  }
  goto LAB_03fd7208;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03fd719c:
    if (*(long *)(piVar14 + -2) == lVar12) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03fd71d0;
    }
  }
LAB_03fd71b4:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_03fd71d0:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03fd6fb8:
    if (*(long *)(piVar14 + -2) == lVar12) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03fd6fec;
    }
  }
LAB_03fd6fd0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_03fd6fec:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03fd6ff8:
  puVar2 = PTR_DAT_04584328;
  if (param_1[4] != 0) {
    uVar7 = FUN_03fb3098(param_1[4],0);
    plVar8 = (long *)FUN_022fba74(uVar7,*(undefined8 *)puVar2);
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04584330) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03fd7078;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_04584330,0);
LAB_03fd7078:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar3 = PTR_DAT_04584340;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03fd70e8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03fd70e8:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar8;
          lVar12 = *(long *)puVar1;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 == 0) goto LAB_03fd71b4;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03fd719c;
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03fd7144;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03fd7144:
        plVar11 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = plVar11[2];
        uVar7 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
        FUN_03fe4c98(param_1,uVar7,lVar12,0);
      } while( true );
    }
  }
LAB_03fd7208:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



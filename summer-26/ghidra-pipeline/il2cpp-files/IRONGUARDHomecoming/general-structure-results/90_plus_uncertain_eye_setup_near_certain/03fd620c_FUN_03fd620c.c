/*
FUNCTION_NAME: FUN_03fd620c
ENTRY_POINT: 03fd620c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x03fd6758) */

void FUN_03fd620c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  
                    /* try { // try from 03fd6228 to 040d622f has its CatchHandler @ 03fd62c0 */
  if ((DAT_0483ba7a & 1) == 0) {
                    /* try { // try from 03fd6238 to 040d624b has its CatchHandler @ 03fd62bc */
    thunk_FUN_01efb3a4(PTR_DAT_045842d8);
    thunk_FUN_01efb3a4(PTR_DAT_045842e0);
                    /* try { // try from 03fd624c to 040d627f has its CatchHandler @ 03fd6114 */
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugUpdater_AssignDefaultActions__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045842e8);
                    /* try { // try from 03fd6280 to 040d62b7 has its CatchHandler @ 03fd62b8 */
    thunk_FUN_01efb3a4(PTR_DAT_045842f0);
    thunk_FUN_01efb3a4(PTR_DAT_045842f8);
    thunk_FUN_01efb3a4(PTR_DAT_04584300);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04584308);
    thunk_FUN_01efb3a4(PTR_DAT_04584310);
    DAT_0483ba7a = 1;
  }
  (**(code **)(*param_1 + 0x5c8))(param_1,1,*(undefined8 *)(*param_1 + 0x5d0));
  puVar1 = PTR_DAT_045842d8;
  if (param_1[4] != 0) {
    uVar6 = FUN_03fb3098(param_1[4],0);
    plVar7 = (long *)FUN_022fba74(uVar6,*(undefined8 *)puVar1);
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_045842f0) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03fd6360;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045842f0,0);
LAB_03fd6360:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_045842f8;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fd63d8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03fd63d8:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03fd64b8;
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_03fd6490;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03fd6478;
        }
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fd6434;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03fd6434:
        lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03fe4d94(param_1,*(undefined8 *)(lVar10 + 0x10),0);
      } while( true );
    }
  }
  goto LAB_03fd6754;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03fd66e8:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03fd671c;
    }
  }
LAB_03fd6700:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03fd671c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03fd6478:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03fd64ac;
    }
  }
LAB_03fd6490:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03fd64ac:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03fd64b8:
  puVar1 = PTR_DAT_045842e0;
  if (param_1[4] != 0) {
    uVar6 = FUN_03fb3098(param_1[4],0);
    plVar7 = (long *)FUN_022fba74(uVar6,*(undefined8 *)puVar1);
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_045842e8) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03fd6538;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045842e8,0);
LAB_03fd6538:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar5 = PTR_DAT_04584310;
      puVar4 = PTR_DAT_04584308;
      puVar3 = PTR_DAT_04584300;
      puVar2 = Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fd65c0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03fd65c0:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_03fd6700;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03fd66e8;
        }
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fd661c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03fd661c:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
        FUN_035ac8e8(lVar10,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar14 = (long *)(lVar10 + 0x10);
        *plVar14 = plVar9[2];
        thunk_FUN_01f51358(plVar14);
        uVar6 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        puVar8 = (undefined8 *)(lVar10 + 0x18);
        *puVar8 = uVar6;
        thunk_FUN_01f51358(puVar8);
        uVar13 = *puVar8;
        lVar15 = *plVar14;
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02e6c748(uVar6,lVar10,*(undefined8 *)puVar4,0);
        FUN_03fe4e90(param_1,uVar13,lVar15,uVar6,0);
      } while( true );
    }
  }
LAB_03fd6754:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



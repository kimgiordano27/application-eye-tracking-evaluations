/*
FUNCTION_NAME: FUN_03fe4584
ENTRY_POINT: 03fe4584
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03fe4a8c) */

void FUN_03fe4584(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  if ((DAT_0483bb55 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04584a40);
    thunk_FUN_01efb3a4(PTR_DAT_04584a48);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<float>__);
    thunk_FUN_01efb3a4(PTR_DAT_04584a50);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04584a58);
    thunk_FUN_01efb3a4(PTR_DAT_04584a60);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04584a38);
    thunk_FUN_01efb3a4(PTR_DAT_04584a68);
    thunk_FUN_01efb3a4(PTR_DAT_04584a70);
    thunk_FUN_01efb3a4(PTR_DAT_04584a78);
    thunk_FUN_01efb3a4(PTR_DAT_04584a80);
    thunk_FUN_01efb3a4(PTR_DAT_04584a88);
    thunk_FUN_01efb3a4(PTR_DAT_04584a90);
    DAT_0483bb55 = 1;
  }
  (**(code **)(*param_1 + 0x5c8))(param_1,1,*(undefined8 *)(*param_1 + 0x5d0));
  if (((param_1[0x12] == 0) ||
      (lVar6 = FUN_02e9aab8(param_1[0x12],*(undefined8 *)PTR_DAT_04584a50), lVar6 == 0)) ||
     (plVar7 = (long *)FUN_03fb3098(lVar6,0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04584a58) {
        puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03fe470c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_04584a58,0);
LAB_03fe470c:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = PTR_DAT_04584a88;
  puVar4 = PTR_DAT_04584a60;
  puVar3 = PTR_DAT_04584a48;
  puVar2 = PTR_DAT_04584a40;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03fe4794;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03fe4794:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 == 0) goto LAB_03fe4a20;
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03fe47f0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03fe47f0:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      if (lVar6 == *(long *)puVar2) {
        lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04584a70);
        FUN_035ac8e8(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar6 + 0x18) = (long)param_1;
        thunk_FUN_01f51358((long *)(lVar6 + 0x18),param_1);
        if (*plVar9 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9);
        }
        plVar15 = (long *)(lVar6 + 0x10);
        *plVar15 = plVar9[2];
        thunk_FUN_01f51358(plVar15);
        lVar16 = *plVar15;
        uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<float>__
                                   );
        FUN_02e6c748(uVar10,lVar6,*(undefined8 *)PTR_DAT_04584a68,0);
        FUN_03fe4b9c(param_1,lVar16,uVar10);
      }
      else if (lVar6 == *(long *)puVar5) {
        lVar16 = plVar9[2];
        uVar10 = (**(code **)(lVar6 + 0x1e8))(plVar9,*(undefined8 *)(lVar6 + 0x1f0));
        lVar6 = plVar9[8];
        lVar14 = plVar9[7];
        lVar16 = FUN_03fe4c98(param_1,uVar10,lVar16);
        if ((char)lVar6 != '\0') {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03fe209c(lVar16,lVar14,0);
        }
      }
      else if (lVar6 == *(long *)puVar3) {
        FUN_03fe4d94(param_1,plVar9[2]);
      }
      else if (lVar6 == *(long *)PTR_DAT_04584a90) {
        lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04584a80);
        FUN_035ac8e8(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar6 + 0x18) = (long)param_1;
        thunk_FUN_01f51358((long *)(lVar6 + 0x18),param_1);
        if (*plVar9 != *(long *)PTR_DAT_04584a90) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9);
        }
        plVar15 = (long *)(lVar6 + 0x10);
        *plVar15 = plVar9[2];
        thunk_FUN_01f51358(plVar15);
        uVar10 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        lVar16 = *plVar15;
        uVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
        FUN_02e6c748(uVar11,lVar6,*(undefined8 *)PTR_DAT_04584a78,0);
        FUN_03fe4e90(param_1,uVar10,lVar16,uVar11);
      }
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03fe4a3c;
    }
  }
LAB_03fe4a20:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03fe4a3c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}



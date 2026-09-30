/*
FUNCTION_NAME: FUN_03cfa200
ENTRY_POINT: 03cfa200
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03cfa6ac) */

void FUN_03cfa200(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 local_58;
  
  if ((DAT_04839eda & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045718c8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_04572c78);
    thunk_FUN_01efb3a4(PTR_DAT_04572c80);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04572c88);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__);
    thunk_FUN_01efb3a4(PTR_DAT_04572c90);
    thunk_FUN_01efb3a4(PTR_DAT_04572c98);
    thunk_FUN_01efb3a4(PTR_DAT_04572c10);
    thunk_FUN_01efb3a4(PTR_DAT_04572a08);
    thunk_FUN_01efb3a4(PTR_DAT_045727e0);
    thunk_FUN_01efb3a4(PTR_DAT_04572ca0);
    DAT_04839eda = 1;
  }
  puVar5 = PTR_DAT_045727e0;
  if (param_2 == (long *)0x0) {
    return;
  }
  FUN_03cf9fd4(param_1);
  puVar3 = PTR_DAT_04572c10;
  puVar6 = PTR_DAT_04572a08;
  lVar12 = *param_2;
  lVar14 = *(long *)puVar5;
  bVar1 = *(byte *)(lVar12 + 0x130);
  bVar2 = *(byte *)(lVar14 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar14)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_04572a08 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04572a08)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_045718c8 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_045718c8))
      {
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ea2c(*(undefined8 *)PTR_DAT_04572ca0,0);
      }
      else {
        lVar14 = param_2[9];
        lVar12 = *(long *)PTR_DAT_04572c10;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar12 = *(long *)puVar3;
        }
        lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
        if (lVar16 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar12 = *(long *)puVar3;
          }
          uVar17 = **(undefined8 **)(lVar12 + 0xb8);
          lVar16 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04572c80);
          FUN_02e6c3f4(lVar16,uVar17,*(undefined8 *)PTR_DAT_04572c98,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar9 = lVar16;
          thunk_FUN_01f51358(plVar9,lVar16);
        }
        uVar8 = FUN_022fb9e0(lVar14,lVar16,*(undefined8 *)PTR_DAT_04572c78);
        if (param_2[9] == 0) goto LAB_03cfa6a4;
        plVar9 = (long *)FUN_025d9d24(param_2[9],*(undefined8 *)PTR_DAT_04572c90);
        puVar7 = PTR_DAT_04572c88;
        puVar4 = Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_03cfa454:
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03cfa4a0;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03cfa4a0:
        uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar13 & 1) != 0) {
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar7) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03cfa4fc;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar7,0);
LAB_03cfa4fc:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 != (long *)0x0) {
            lVar12 = *plVar11;
            lVar14 = *(long *)puVar5;
            bVar1 = *(byte *)(lVar14 + 0x130);
            if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
              bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
              goto LAB_03cfa454;
            }
            local_58 = 0;
            FUN_0332f050(&local_58,uVar8,*(undefined8 *)puVar4);
            FUN_03cfa200(param_1,plVar11,local_58);
          }
          goto LAB_03cfa454;
        }
        if (plVar9 != (long *)0x0) {
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03cfa648;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ecb238(plVar9,*(long *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                 ,0);
LAB_03cfa648:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
      }
      return;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      FUN_03d4f220(*(long *)(param_1 + 0x78),param_2,param_3,0);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x78) != 0) {
    FUN_03d4ef24(*(long *)(param_1 + 0x78),param_2,0,0);
    return;
  }
LAB_03cfa6a4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



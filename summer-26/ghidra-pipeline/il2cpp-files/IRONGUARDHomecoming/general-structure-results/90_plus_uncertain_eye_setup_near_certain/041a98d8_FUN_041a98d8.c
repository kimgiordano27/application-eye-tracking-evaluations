/*
FUNCTION_NAME: FUN_041a98d8
ENTRY_POINT: 041a98d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041a9c20) */

void FUN_041a98d8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  
  if ((DAT_04840d22 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e618);
    DAT_04840d22 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 != 0) {
    FUN_041ab944(lVar13);
    plVar14 = *(long **)(lVar13 + 0x20);
    if (plVar14 != (long *)0x0) {
      lVar13 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_041a99a8;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar14,*(long *)
                                     Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                            ,0);
LAB_041a99a8:
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar14 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
      puVar5 = PTR_DAT_0458e618;
      puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar13 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_041a9a28;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_041a9a28:
        uVar10 = (*(code *)*puVar6)(plVar14,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar14 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 == 0) goto LAB_041a9bc4;
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_041a9bac;
        }
        lVar13 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_041a9a84;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar4,0);
LAB_041a9a84:
        lVar13 = (*(code *)*puVar6)(plVar14,puVar6[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(char *)(lVar13 + 0x60) == '\0') {
          lVar7 = *(long *)(param_1 + 0x18);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar13;
            thunk_FUN_01f51358(plVar9,lVar13);
          }
          else {
            FUN_030f2bb4(lVar7,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar7 = *(long *)(param_1 + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar13;
            thunk_FUN_01f51358(plVar9,lVar13);
          }
          else {
            FUN_030f2bb4(lVar7,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(lVar13 + 0x54);
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + *(float *)(lVar13 + 0x4c);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_041a9bac:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_041a9be0;
    }
  }
LAB_041a9bc4:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar2,0);
LAB_041a9be0:
  (*(code *)*puVar6)(plVar14,puVar6[1]);
  return;
}



/*
FUNCTION_NAME: FUN_041ce42c
ENTRY_POINT: 041ce42c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041ce7d8) */
/* WARNING: Removing unreachable block (ram,0x041ce9d8) */

void FUN_041ce42c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_04840e5e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<Guid>__);
    thunk_FUN_01efb3a4(PTR_DAT_0458f440);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458f400);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<ISerializationDepender>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458f418);
    DAT_04840e5e = 1;
  }
  if ((param_2 & 1) != 0) {
    plVar11 = *(long **)(param_1 + 0x70);
    if (plVar11 == (long *)0x0) goto LAB_041ce9d0;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0458f400) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_041ce528;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)PTR_DAT_0458f400,4);
LAB_041ce528:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
  }
  lVar8 = FUN_041caff0(param_1);
  if (((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x3a0), plVar11 != (long *)0x0)) &&
     (plVar11 = (long *)(**(code **)(*plVar11 + 0x368))(plVar11,*(undefined8 *)(*plVar11 + 0x370)),
     plVar11 != (long *)0x0)) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0458f440) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_041ce5b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)PTR_DAT_0458f440,1);
LAB_041ce5b8:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    lVar8 = FUN_041caff0(param_1);
    if ((lVar8 != 0) && (plVar11 = (long *)FUN_04133c3c(lVar8,0), plVar11 != (long *)0x0)) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_041ce63c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_System_Linq_Enumerable_Any<ISerializationDepender>__,0);
LAB_041ce63c:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
      puVar4 = Method_System_Linq_Enumerable_Any<int>__;
      puVar3 = Method_System_Linq_Enumerable_Any<Guid>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041ce6bc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_041ce6bc:
        uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_041ce7cc;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_041ce7a4;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_041ce78c;
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041ce718;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_041ce718:
        plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422a94c(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50),0);
      } while( true );
    }
  }
  goto LAB_041ce9d0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_041ce78c:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_041ce7c0;
    }
  }
LAB_041ce7a4:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_041ce7c0:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_041ce7cc:
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar11 = (long *)FUN_04220be0(*(long *)(param_1 + 0x50),0);
    uVar7 = FUN_02766f28(1,*(undefined8 *)PTR_DAT_0458f418);
    if (plVar11 == (long *)0x0) goto LAB_041ce9d0;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
           ) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x34) * 0x10 + 0x138);
          goto LAB_041ce864;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                          ,0x34);
LAB_041ce864:
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar11 = (long *)FUN_04220be0(*(long *)(param_1 + 0x58),0);
    uVar7 = FUN_02766f28(1,*(undefined8 *)PTR_DAT_0458f418);
    if (plVar11 == (long *)0x0) goto LAB_041ce9d0;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
           ) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x34) * 0x10 + 0x138);
          goto LAB_041ce8fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 041ce8e4 to 042ce9ff has its CatchHandler @ 041ce8e4
                       catch() { ... } // from try @ 041ce8e4 with catch @ 041ce8e4
                       catch() { ... } // from try @ 041ceb28 with catch @ 041ce8e4
                       catch() { ... } // from try @ 041ceb60 with catch @ 041ce8e4
                       catch() { ... } // from try @ 041cebd4 with catch @ 041ce8e4
                       catch() { ... } // from try @ 041cec14 with catch @ 041ce8e4
                       catch() { ... } // from try @ 041cec54 with catch @ 041ce8e4 */
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                          ,0x34);
LAB_041ce8fc:
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  plVar11 = (long *)FUN_04220be0(*(long *)(param_1 + 0x60),0);
  uVar7 = FUN_02766f28(1,*(undefined8 *)PTR_DAT_0458f418);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
           ) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x34) * 0x10 + 0x138);
          goto LAB_041ce9a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                          ,0x34);
LAB_041ce9a8:
                    /* WARNING: Could not recover jumptable at 0x041ce9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
    return;
  }
LAB_041ce9d0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



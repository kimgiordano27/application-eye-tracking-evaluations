/*
FUNCTION_NAME: FUN_029d7028
ENTRY_POINT: 029d7028
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x029d74c0) */
/* WARNING: Removing unreachable block (ram,0x029d750c) */

void FUN_029d7028(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04830e07 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830e07 = 1;
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  plVar5 = (long *)thunk_FUN_01f116d0(param_2,lVar4);
  if (plVar5 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar8 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_029d7284;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar4,0);
LAB_029d7284:
    plVar5 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = 0;
    uVar2 = 0;
    do {
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029d72f8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_029d72f8:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_029d74c4;
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_029d748c;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_029d7474;
      }
      lVar8 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029d737c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_029d737c:
      uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar4 == 0) {
        lVar4 = *(long *)(param_3 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        lVar4 = FUN_01f08890(lVar4,4);
LAB_029d7424:
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
                    /* try { // try from 029d7394 to 02ad74db has its CatchHandler @ 029d7394
                       catch() { ... } // from try @ 029d7394 with catch @ 029d7394
                       catch() { ... } // from try @ 029d7500 with catch @ 029d7394
                       catch() { ... } // from try @ 029d758c with catch @ 029d7394
                       catch() { ... } // from try @ 029d762c with catch @ 029d7394 */
        if (uVar2 == *(uint *)(lVar4 + 0x18)) {
          if ((int)(uVar2 + 0x40000000) < 0) {
            uVar7 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar7,param_3);
          }
          lVar8 = *(long *)(param_3 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44();
          }
          lVar8 = FUN_01f08890(lVar8,uVar2 << 1);
          FUN_0358d498(lVar4,0,lVar8,0,uVar2,0);
          lVar4 = lVar8;
          goto LAB_029d7424;
        }
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar8 = (long)(int)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(lVar4 + lVar8 * 4 + 0x20) = uVar3;
    } while( true );
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar8 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_029d7190;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar4,0);
LAB_029d7190:
  uVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((int)uVar2 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = FUN_01f08890(lVar4,uVar2);
    lVar8 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_029d7260;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,5);
LAB_029d7260:
    (*(code *)*puVar6)(plVar5,lVar4,0,puVar6[1]);
  }
LAB_029d74c4:
  *param_1 = lVar4;
  thunk_FUN_01f51358(param_1,lVar4);
  *(uint *)(param_1 + 1) = uVar2;
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_029d7474:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_029d74a8;
    }
  }
LAB_029d748c:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d74a8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  goto LAB_029d74c4;
}



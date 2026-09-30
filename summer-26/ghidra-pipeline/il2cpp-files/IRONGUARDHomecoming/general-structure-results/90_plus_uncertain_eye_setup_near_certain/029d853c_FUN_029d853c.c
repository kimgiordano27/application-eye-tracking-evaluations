/*
FUNCTION_NAME: FUN_029d853c
ENTRY_POINT: 029d853c
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


/* WARNING: Removing unreachable block (ram,0x029d89ec) */
/* WARNING: Removing unreachable block (ram,0x029d8a3c) */

void FUN_029d853c(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_04830e0a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830e0a = 1;
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  plVar4 = (long *)thunk_FUN_01f116d0(param_2,lVar3);
  if (plVar4 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar8 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_029d879c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar3,0);
LAB_029d879c:
    plVar4 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = 0;
    uVar2 = 0;
    do {
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029d8810;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_029d8810:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_029d89f0;
        lVar8 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_029d89b8;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_029d89a0;
      }
      lVar8 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029d8894;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar8,0);
LAB_029d8894:
      auVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_3 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        lVar3 = FUN_01f08890(lVar3,4);
LAB_029d8940:
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else if (uVar2 == *(uint *)(lVar3 + 0x18)) {
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
        FUN_0358d498(lVar3,0,lVar8,0,uVar2,0);
        lVar3 = lVar8;
        goto LAB_029d8940;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      pauVar6 = (undefined1 (*) [16])(lVar3 + (long)(int)uVar2 * 0x10 + 0x20);
      *pauVar6 = auVar12;
      thunk_FUN_01f51358(pauVar6,0);
      uVar2 = uVar2 + 1;
    } while( true );
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar8 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto FUN_029d86a8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar3,0);
FUN_029d86a8:
  uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((int)uVar2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = FUN_01f08890(lVar3,uVar2);
    lVar8 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_029d8778;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar8,5);
LAB_029d8778:
    (*(code *)*puVar5)(plVar4,lVar3,0,puVar5[1]);
  }
LAB_029d89f0:
  *param_1 = lVar3;
  thunk_FUN_01f51358(param_1,lVar3);
  *(uint *)(param_1 + 1) = uVar2;
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_029d89a0:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_029d89d4;
    }
  }
LAB_029d89b8:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d89d4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_029d89f0;
}



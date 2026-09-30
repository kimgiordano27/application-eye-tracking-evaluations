/*
FUNCTION_NAME: FUN_027185a4
ENTRY_POINT: 027185a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02718b80) */
/* WARNING: Removing unreachable block (ram,0x02718c64) */
/* WARNING: Removing unreachable block (ram,0x02718c58) */

void FUN_027185a4(long param_1,undefined4 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  undefined4 uStack_6c;
  
  if ((DAT_0483024b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483024b = 1;
  }
  FUN_035ac8e8(param_1,0);
  if ((*(byte *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar4 = thunk_FUN_01f117cc();
  FUN_02b2f85c(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8));
  if (param_3 != (long *)0x0) {
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_027186ac;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_3,lVar9,0);
LAB_027186ac:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0271871c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0271871c:
      uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_0271886c;
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_02718844;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0271882c;
      }
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02718794;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_02718794:
      uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      uStack_6c = (undefined4)(uVar12 >> 0x20);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68) + 0x135) & 1) ==
          0) {
        FUN_01ecaf44();
      }
      uVar7 = thunk_FUN_01f117cc();
      FUN_03324060(uVar7,uStack_6c,uVar12 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b300e8(lVar4,uStack_6c,uVar7,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
    } while( true );
  }
  goto LAB_02718c50;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0271882c:
    if (*(long *)(piVar14 + -2) == lVar9) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02718860;
    }
  }
LAB_02718844:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_02718860:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_0271886c:
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  lVar10 = *param_3;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar9) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
        goto LAB_027188dc;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_3,lVar9,2);
LAB_027188dc:
  plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
  if (plVar6 != (long *)0x0) {
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02718958;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_02718958:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_027189c0;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_027189c0:
      uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_02718b74;
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_02718b4c;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_02718b34;
      }
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02718a38;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_02718a38:
      uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_02b3005c(lVar4,uVar12 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
      lVar10 = FUN_02b3005c(lVar4,uVar12 >> 0x20,
                            *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar15 = (long *)(lVar9 + 0x18);
      *plVar15 = lVar10;
      thunk_FUN_01f51358(plVar15);
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *(long *)(*plVar15 + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb8);
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        plVar15 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar15 = lVar9;
        thunk_FUN_01f51358(plVar15,lVar9);
      }
      else {
        FUN_030f2bb4(lVar10,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
    } while( true );
  }
  goto LAB_02718c50;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_02718b34:
    if (*(long *)(piVar14 + -2) == lVar9) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02718b68;
    }
  }
LAB_02718b4c:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_02718b68:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_02718b74:
  if (lVar4 != 0) {
    uVar7 = FUN_02b2ff7c(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0));
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb0);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    uVar8 = thunk_FUN_01f117cc(lVar9);
    FUN_030f24a8(uVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xd0));
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar8);
    uVar7 = FUN_02b3005c(lVar4,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x10),uVar7);
    return;
  }
LAB_02718c50:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



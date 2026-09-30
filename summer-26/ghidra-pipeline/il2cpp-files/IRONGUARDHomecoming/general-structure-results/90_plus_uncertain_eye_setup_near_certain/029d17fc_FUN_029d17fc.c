/*
FUNCTION_NAME: FUN_029d17fc
ENTRY_POINT: 029d17fc
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


/* WARNING: Removing unreachable block (ram,0x029d1d18) */
/* WARNING: Removing unreachable block (ram,0x029d1d6c) */

void FUN_029d17fc(long *param_1,long *param_2,long param_3)

{
  void *__dest;
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auStack_170 [88];
  undefined1 auStack_118 [88];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 029d180c to 02ad1813 has its CatchHandler @ 029d1a80 */
  if ((DAT_04830dfa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 029d184c to 02ad1877 has its CatchHandler @ 029d1a90 */
    DAT_04830dfa = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
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
    lVar7 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_029d1a74;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar3,0);
LAB_029d1a74:
    plVar4 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = 0;
    uVar2 = 0;
    do {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_029d1aec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_029d1aec:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_029d1d1c;
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_029d1ce4;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_029d1ccc;
      }
      lVar7 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_029d1b70;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
LAB_029d1b70:
      (*(code *)*puVar5)(auStack_118,plVar4,puVar5[1]);
      memcpy(&local_c0,auStack_118,0x58);
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
LAB_029d1c28:
        memcpy(auStack_118,&local_c0,0x58);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        if (uVar2 == *(uint *)(lVar3 + 0x18)) {
          if ((int)(uVar2 + 0x40000000) < 0) {
            uVar6 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,param_3);
          }
          lVar7 = *(long *)(param_3 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          lVar7 = FUN_01f08890(lVar7,uVar2 << 1);
          FUN_0358d498(lVar3,0,lVar7,0,uVar2,0);
          lVar3 = lVar7;
          goto LAB_029d1c28;
        }
        memcpy(auStack_118,&local_c0,0x58);
      }
      memcpy(auStack_170,auStack_118,0x58);
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      __dest = (void *)(lVar3 + (long)(int)uVar2 * 0x58 + 0x20);
      memcpy(__dest,auStack_170,0x58);
      thunk_FUN_01f51358(__dest,0);
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
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_029d1980;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar3,0);
LAB_029d1980:
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
    lVar7 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_029d1a50;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,5);
LAB_029d1a50:
    (*(code *)*puVar5)(plVar4,lVar3,0,puVar5[1]);
  }
LAB_029d1d1c:
  *param_1 = lVar3;
  thunk_FUN_01f51358(param_1,lVar3);
  *(uint *)(param_1 + 1) = uVar2;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_029d1ccc:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_029d1d00;
    }
  }
LAB_029d1ce4:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d1d00:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_029d1d1c;
}



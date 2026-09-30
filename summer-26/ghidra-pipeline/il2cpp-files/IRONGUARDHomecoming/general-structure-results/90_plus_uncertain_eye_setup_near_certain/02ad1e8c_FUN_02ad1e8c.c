/*
FUNCTION_NAME: FUN_02ad1e8c
ENTRY_POINT: 02ad1e8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02ad22f0) */

void FUN_02ad1e8c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_048310c7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048310c7 = 1;
  }
  uVar6 = 0;
  if (param_2 != (long *)0x0) {
    uVar6 = param_1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
    uVar6 = param_1;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02ad1f70;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_02ad1f70:
    uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  FUN_02ad1de0(uVar6,uVar4,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar6 = thunk_FUN_01ecaf38(param_2,0);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  uVar12 = FUN_03579868(uVar12,0);
  uVar10 = FUN_03582560(uVar6,uVar12,0);
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    puVar5 = (undefined8 *)param_2[3];
    if (puVar5 != (undefined8 *)0x0) {
      uVar10 = 0;
      puVar2 = puVar5;
      do {
        if (*(uint *)(puVar5 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(puVar2 + 4)) {
          uStack_a8 = puVar2[8];
          local_b0 = puVar2[7];
          uStack_98 = puVar2[10];
          local_a0 = puVar2[9];
          local_80 = local_b0;
          uStack_78 = uStack_a8;
          uStack_70 = local_a0;
          uStack_68 = uStack_98;
          FUN_02ad322c(param_1,puVar2[5],puVar2[6],&local_b0,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0xf8));
        }
        uVar10 = uVar10 + 1;
        puVar2 = puVar2 + 7;
      } while (uVar1 != uVar10);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *(long *)(lVar8 + 0x88);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02ad2118;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_02ad2118:
  plVar7 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02ad2188;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02ad2188:
    uVar10 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((uVar10 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02ad2200;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02ad2200:
    (*(code *)*puVar5)(&local_b0,plVar7,puVar5[1]);
    uVar12 = uStack_a8;
    uVar6 = local_b0;
    uStack_58 = uStack_98;
    local_60 = local_a0;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    uStack_a8 = uStack_98;
    local_b0 = local_a0;
    uStack_98 = uStack_88;
    local_a0 = uStack_90;
    FUN_02ad322c(param_1,uVar6,uVar12,&local_b0,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                                      + 0x20) + 0xc0) + 0xf8));
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02ad22a8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02ad22a8:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}



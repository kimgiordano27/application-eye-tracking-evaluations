/*
FUNCTION_NAME: FUN_02b212b4
ENTRY_POINT: 02b212b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02b2174c) */

void FUN_02b212b4(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_048311ba & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048311ba = 1;
  }
  uVar7 = 0;
  if (param_2 != (long *)0x0) {
    uVar7 = param_1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_2 == (long *)0x0) {
    uVar5 = 0;
    uVar7 = param_1;
  }
  else {
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02b213a8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02b213a8:
    uVar5 = (*(code *)*puVar6)(param_2,puVar6[1]);
  }
  FUN_02b21208(uVar7,uVar5,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar7 = thunk_FUN_01ecaf38(param_2,0);
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  uVar15 = FUN_03579868(uVar15,0);
  uVar12 = FUN_03582560(uVar7,uVar15,0);
  lVar10 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar12 & 1) == 0) {
    lVar10 = *(long *)(lVar10 + 0x88);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02b21550;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02b21550:
    plVar8 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar6 = (undefined8 *)((ulong)&local_c0 | 4);
    puVar14 = (ulong *)((ulong)&local_70 | 4);
    do {
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02b215c8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_02b215c8:
      uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar12 & 1) == 0) goto LAB_02b21698;
      lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02b21640;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,0);
LAB_02b21640:
      (*(code *)*puVar9)(&local_c0,plVar8,puVar9[1]);
      uStack_68 = puVar6[1];
      local_70 = *puVar6;
      uStack_58 = puVar6[3];
      uStack_60 = puVar6[2];
      local_50 = *(undefined4 *)(puVar6 + 4);
      uVar12 = local_c0 & 0xffffffff;
      uStack_b8 = puVar14[1];
      local_c0 = *puVar14;
      uStack_a8 = puVar14[3];
      uStack_b0 = puVar14[2];
      FUN_02b22648(param_1,uVar12,&local_c0,2,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                  0x80) + 0x20) + 0xc0) + 0xf8));
    } while( true );
  }
  lVar10 = *(long *)(lVar10 + 0x30);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_2);
  }
  uVar1 = *(uint *)(param_2 + 4);
  if (0 < (int)uVar1) {
    puVar14 = (ulong *)param_2[3];
    if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = 0;
    puVar3 = puVar14;
    do {
      if ((uint)puVar14[3] <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < (int)puVar3[4]) {
        uStack_b8 = puVar3[7];
        local_c0 = puVar3[6];
        uStack_a8 = puVar3[9];
        uStack_b0 = puVar3[8];
        local_90 = local_c0;
        uStack_88 = uStack_b8;
        uStack_80 = uStack_b0;
        uStack_78 = uStack_a8;
        FUN_02b22648(param_1,(int)puVar3[5],&local_c0,2,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                    0x80) + 0x20) + 0xc0) + 0xf8));
      }
      uVar12 = uVar12 + 1;
      puVar3 = puVar3 + 6;
    } while (uVar1 != uVar12);
  }
  goto LAB_02b21704;
LAB_02b21698:
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02b216f4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b216f4:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
LAB_02b21704:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



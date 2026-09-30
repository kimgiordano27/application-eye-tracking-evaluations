/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<NativeArray<CopyClosingMeshJobData>>$$MoveNext
ENTRY_POINT: 02b679e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02b67e68) */

void System_Collections_Generic_List_Enumerator<NativeArray<CopyClosingMeshJobData>>__MoveNext
               (undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  if ((DAT_04831295 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04831295 = 1;
  }
  uVar8 = 0;
  if (param_2 != (long *)0x0) {
    uVar8 = param_1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_2 == (long *)0x0) {
    uVar6 = 0;
    uVar8 = param_1;
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
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto 
          System_Collections_Generic_List_Enumerator<NativeArray<CopyClosingMeshJobData>>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);

    System_Collections_Generic_List_Enumerator<NativeArray<CopyClosingMeshJobData>>__System_Collections_IEnumerator_get_Current
    :
    uVar6 = (*(code *)*puVar7)(param_2,puVar7[1]);
  }
  FUN_02b67934(uVar8,uVar6,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar8 = thunk_FUN_01ecaf38(param_2,0);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar14 = FUN_03579868(uVar14,0);
  uVar12 = FUN_03582560(uVar8,uVar14,0);
  lVar10 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar12 & 1) != 0) {
    lVar10 = *(long *)(lVar10 + 0x30);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar10 = param_2[3];
    if (lVar10 != 0) {
      uVar12 = 0;
      puVar7 = (undefined8 *)(lVar10 + 0x30);
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(puVar7 + -2)) {
          uStack_e8 = puVar7[5];
          local_f0 = puVar7[4];
          uStack_d8 = puVar7[7];
          uStack_e0 = puVar7[6];
          uStack_108 = puVar7[1];
          local_110 = *puVar7;
          uStack_f8 = puVar7[3];
          uStack_100 = puVar7[2];
          local_c0 = local_110;
          uStack_b8 = uStack_108;
          uStack_b0 = uStack_100;
          uStack_a8 = uStack_f8;
          local_a0 = local_f0;
          uStack_98 = uStack_e8;
          uStack_90 = uStack_e0;
          uStack_88 = uStack_d8;
          FUN_02b68e1c(param_1,puVar7[-1],&local_110,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0xf8));
        }
        uVar12 = uVar12 + 1;
        puVar7 = puVar7 + 10;
      } while (uVar1 != uVar12);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
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
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02b67c7c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02b67c7c:
  plVar9 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02b67cec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_02b67cec:
    uVar12 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    if ((uVar12 & 1) == 0) break;
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02b67d64;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_02b67d64:
    (*(code *)*puVar7)(&local_110,plVar9,puVar7[1]);
    uVar5 = uStack_d8;
    uVar4 = uStack_e8;
    uVar3 = uStack_f8;
    uVar14 = uStack_108;
    uVar8 = local_110;
    uStack_58 = uStack_e0;
    local_60 = uStack_e8;
    uStack_48 = uStack_d0;
    uStack_50 = uStack_d8;
    uStack_78 = uStack_100;
    local_80 = uStack_108;
    uStack_68 = local_f0;
    uStack_70 = uStack_f8;
    uStack_108 = uStack_100;
    local_110 = uVar14;
    uStack_f8 = local_f0;
    uStack_100 = uVar3;
    uStack_e8 = uStack_e0;
    local_f0 = uVar4;
    uStack_d8 = uStack_d0;
    uStack_e0 = uVar5;
    FUN_02b68e1c(param_1,uVar8,&local_110,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                                      + 0x20) + 0xc0) + 0xf8));
  } while( true );
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02b67e20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b67e20:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}



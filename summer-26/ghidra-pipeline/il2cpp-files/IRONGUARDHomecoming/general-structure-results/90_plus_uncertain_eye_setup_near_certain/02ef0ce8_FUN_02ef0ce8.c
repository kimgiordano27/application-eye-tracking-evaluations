/*
FUNCTION_NAME: FUN_02ef0ce8
ENTRY_POINT: 02ef0ce8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ef10dc) */
/* WARNING: Removing unreachable block (ram,0x02ef118c) */

void FUN_02ef0ce8(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  undefined1 *__s;
  undefined1 *puVar18;
  undefined1 auStack_70 [4];
  int local_6c;
  long local_68;
  
  puVar18 = auStack_70;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_0483191a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_0483191a = 1;
  }
  puVar4 = Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__;
  local_6c = 0;
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = FUN_039dcc94((ulong)uVar1,0);
  puVar3 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  uVar17 = (ulong)uVar6;
  if ((int)uVar6 < 0x33) {
    uVar17 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
    if (uVar6 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      puVar18 = auStack_70 + -(uVar17 + 0xf & 0xfffffffffffffff0);
      __s = puVar18;
    }
    memset(__s,0,uVar17);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb20(lVar9,__s,uVar6,0);
    if (uVar6 == 0) {
      puVar18 = (undefined1 *)0x0;
    }
    else {
      puVar18 = puVar18 + -(uVar17 + 0xf & 0xfffffffffffffff0);
    }
    memset(puVar18,0,uVar17);
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb20(lVar10,puVar18,uVar6,0);
  }
  else {
    uVar8 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar17);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb58(lVar9,uVar8,uVar17,0);
    uVar8 = FUN_01f08890(*(undefined8 *)puVar3,uVar17);
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb58(lVar10,uVar8,uVar17,0);
  }
  if (param_2 != (long *)0x0) {
    lVar14 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44(lVar14);
    }
    lVar15 = *param_2;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02ef0f00;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(param_2,lVar14,0);
LAB_02ef0f00:
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar12 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar14 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02ef0f70;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar4,0);
LAB_02ef0f70:
      uVar17 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar17 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_02ef10d0;
        lVar10 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 == 0) goto LAB_02ef10a8;
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_02ef1090;
      }
      lVar14 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02ef0fe8;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar14,0);
LAB_02ef0fe8:
      uVar7 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      local_6c = 0;
      uVar17 = FUN_02ef1260(param_1,uVar7,&local_6c,
                            *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1e0));
      iVar5 = local_6c;
      if ((uVar17 & 1) == 0) {
        if (local_6c < (int)uVar1) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar17 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar10,local_6c,0);
          if ((uVar17 & 1) == 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94(lVar9,iVar5,0);
          }
        }
      }
      else {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar10,local_6c,0);
      }
    } while( true );
  }
LAB_02ef1178:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar16 = piVar16 + 4;
    if (uVar17 == 0) break;
LAB_02ef1090:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_02ef10c4;
    }
  }
LAB_02ef10a8:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_02ef10c4:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_02ef10d0:
  if (0 < (int)uVar1) {
    if (lVar9 == 0) goto LAB_02ef1178;
    uVar17 = 0;
    lVar10 = 0x28;
    do {
      uVar13 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar9,uVar17 & 0xffffffff,0);
      if ((uVar13 & 1) != 0) {
        lVar14 = *(long *)(param_1 + 0x18);
        if (lVar14 == 0) goto LAB_02ef1178;
        if (*(uint *)(lVar14 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        FUN_02eed588(param_1,*(undefined4 *)(lVar14 + lVar10),
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
      }
      uVar17 = uVar17 + 1;
      lVar10 = lVar10 + 0xc;
    } while (uVar1 != uVar17);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



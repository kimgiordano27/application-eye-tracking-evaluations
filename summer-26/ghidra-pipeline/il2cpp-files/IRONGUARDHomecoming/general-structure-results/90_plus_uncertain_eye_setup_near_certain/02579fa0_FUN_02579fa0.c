/*
FUNCTION_NAME: FUN_02579fa0
ENTRY_POINT: 02579fa0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_02579fa0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  long *local_e0;
  long *plStack_d8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  long local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  if ((DAT_0482fe1d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_IsLeapYear__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe1d = 1;
  }
  local_e0 = &local_28;
  plStack_d8 = &local_30;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_0257a0b0;
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50));
  uVar4 = 0;
  *(undefined4 *)(local_28 + 0x58) = 0;
  do {
    plVar3 = (long *)(local_28 + 0x50);
    lVar6 = *plVar3;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar4) {
      *plVar3 = 0;
      thunk_FUN_01f51358(plVar3,0);
      return 0;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    memmove(&local_90,(void *)(lVar6 + (long)(int)uVar4 * 0x58 + 0x20),0x58);
    uVar1 = FUN_02739c5c(&local_90,
                         *(undefined8 *)(*(long *)(*(long *)(local_30 + 0x20) + 0xc0) + 0x28));
    *(undefined8 *)(local_28 + 0x60) = uVar1;
    thunk_FUN_01f51358();
    param_1 = local_28;
LAB_0257a0b0:
    plVar3 = *(long **)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0257a114;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0257a114:
    uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      plVar3 = *(long **)(local_28 + 0x60);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 == 0) goto LAB_0257a1a8;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    FUN_0257a2a4();
    *(undefined8 *)(local_28 + 0x60) = 0;
    thunk_FUN_01f51358((undefined8 *)(local_28 + 0x60),0);
    uVar4 = *(int *)(local_28 + 0x58) + 1;
    *(uint *)(local_28 + 0x58) = uVar4;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0257a1c4;
    }
  }
LAB_0257a1a8:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)Method_System_DateTime_IsLeapYear__,0);
LAB_0257a1c4:
  (*(code *)*puVar2)(&local_120,plVar3,puVar2[1]);
  *(undefined4 *)(local_28 + 0x44) = local_f0;
  *(undefined8 *)(local_28 + 0x3c) = uStack_f8;
  *(undefined8 *)(local_28 + 0x34) = local_100;
  *(undefined8 *)(local_28 + 0x2c) = uStack_108;
  *(undefined8 *)(local_28 + 0x24) = uStack_110;
  *(undefined8 *)(local_28 + 0x1c) = uStack_118;
  *(undefined8 *)(local_28 + 0x14) = local_120;
  *(undefined4 *)(local_28 + 0x10) = 1;
  return 1;
}



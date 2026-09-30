/*
FUNCTION_NAME: FUN_0257a45c
ENTRY_POINT: 0257a45c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_0257a45c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long *local_70;
  undefined8 *puStack_68;
  undefined8 local_28;
  long local_18;
  
  local_28 = param_2;
  local_18 = param_1;
  if ((DAT_0482fe20 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_System_IConvertible_ToBoolean__);
    thunk_FUN_01efb3a4(Method_System_DateTime_IsLeapYear__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe20 = 1;
  }
  local_70 = &local_18;
  puStack_68 = &local_28;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_0257a5a0;
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
  *(undefined4 *)(local_18 + 0x58) = 0;
  do {
    plVar3 = (long *)(local_18 + 0x50);
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
    plVar3 = *(long **)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
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
            *(long *)Method_System_DateTime_System_IConvertible_ToBoolean__) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0257a580;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)Method_System_DateTime_System_IConvertible_ToBoolean__,0);
LAB_0257a580:
    uVar2 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    *(undefined8 *)(local_18 + 0x60) = uVar2;
    thunk_FUN_01f51358();
    param_1 = local_18;
LAB_0257a5a0:
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
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto FUN_0257a604;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
FUN_0257a604:
    uVar5 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    if ((uVar5 & 1) != 0) {
      plVar3 = *(long **)(local_18 + 0x60);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 == 0) goto LAB_0257a698;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    FUN_0257a798();
    *(undefined8 *)(local_18 + 0x60) = 0;
    thunk_FUN_01f51358((undefined8 *)(local_18 + 0x60),0);
    uVar4 = *(int *)(local_18 + 0x58) + 1;
    *(uint *)(local_18 + 0x58) = uVar4;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
      puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0257a6b4;
    }
  }
LAB_0257a698:
  puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)Method_System_DateTime_IsLeapYear__,0);
LAB_0257a6b4:
  (*(code *)*puVar1)(&local_b0,plVar3,puVar1[1]);
  *(undefined4 *)(local_18 + 0x44) = local_80;
  *(undefined8 *)(local_18 + 0x3c) = uStack_88;
  *(undefined8 *)(local_18 + 0x34) = local_90;
  *(undefined8 *)(local_18 + 0x2c) = uStack_98;
  *(undefined8 *)(local_18 + 0x24) = uStack_a0;
  *(undefined8 *)(local_18 + 0x1c) = uStack_a8;
  *(undefined8 *)(local_18 + 0x14) = local_b0;
  *(undefined4 *)(local_18 + 0x10) = 1;
  return 1;
}



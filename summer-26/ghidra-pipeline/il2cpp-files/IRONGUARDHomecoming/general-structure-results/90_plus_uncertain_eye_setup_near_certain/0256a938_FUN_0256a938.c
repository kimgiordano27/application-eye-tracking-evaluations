/*
FUNCTION_NAME: FUN_0256a938
ENTRY_POINT: 0256a938
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0256a938(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_0482fdee & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_DateTime_Add__);
    DAT_0482fdee = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_0256abec;
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  plVar2 = (long *)FUN_023856e8(*(undefined8 *)(param_1 + 0x28),
                                *(undefined8 *)Method_System_DateTime_Add__);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Method_System_DateTime__ctor__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0256aa30;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)Method_System_DateTime__ctor__,0);
LAB_0256aa30:
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  thunk_FUN_01f51358();
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  do {
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar2;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256aac4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,0);
LAB_0256aac4:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      FUN_0256add8();
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
      return 0;
    }
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_System_DateTime__ctor__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256ab38;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)Method_System_DateTime__ctor__,0);
LAB_0256ab38:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = (long *)FUN_022fba74(uVar4,*(undefined8 *)
                                         (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256abcc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,0);
LAB_0256abcc:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    thunk_FUN_01f51358();
LAB_0256abec:
    plVar2 = *(long **)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar2;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256ac48;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,0);
LAB_0256ac48:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x40);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0256acec;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    FUN_0256ae88();
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x40),0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == lVar5) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0256ad08;
    }
  }
LAB_0256acec:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,0);
LAB_0256ad08:
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_01f51358();
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



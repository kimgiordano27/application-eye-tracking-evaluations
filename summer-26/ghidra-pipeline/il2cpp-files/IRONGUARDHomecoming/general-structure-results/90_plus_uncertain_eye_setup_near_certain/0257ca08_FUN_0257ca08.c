/*
FUNCTION_NAME: FUN_0257ca08
ENTRY_POINT: 0257ca08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0257ccc8) */
/* WARNING: Removing unreachable block (ram,0x0257cef8) */

undefined8 FUN_0257ca08(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_0482fe2c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe2c = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) == 0)
    {
      FUN_01ecaf44();
    }
    uVar2 = thunk_FUN_01f117cc();
    FUN_02712524(uVar2,uVar8,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20));
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x58),uVar2);
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0257cb38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_0257cb38:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0257cba0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_0257cba0:
      uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_0257ccbc;
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_0257cc94;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_0257cc7c;
      }
      lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0257cc1c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_0257cc1c:
      uVar8 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,uVar8);
      }
      FUN_027125fc(*(long *)(param_1 + 0x58),uVar8,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
    } while( true );
  }
  goto LAB_0257cd64;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0257cc7c:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0257ccb0;
    }
  }
LAB_0257cc94:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0257ccb0:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
LAB_0257ccbc:
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0257cd44;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_0257cd44:
  uVar8 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  thunk_FUN_01f51358();
LAB_0257cd64:
  plVar9 = *(long **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0257cdc8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_0257cdc8:
    uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      FUN_0257d07c();
      *(undefined8 *)(param_1 + 0x60) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x60),0);
      return 0;
    }
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0257ce54;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_0257ce54:
    uVar8 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_02712624(*(long *)(param_1 + 0x58),uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58));
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar8);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    plVar9 = *(long **)(param_1 + 0x60);
  } while( true );
}



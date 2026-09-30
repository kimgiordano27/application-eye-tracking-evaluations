/*
FUNCTION_NAME: FUN_03fb1420
ENTRY_POINT: 03fb1420
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_03fb1420(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_0483b83d & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04582e08);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483b83d = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
  ;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plStack_40 = &local_38;
  local_48 = 0;
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x38);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar10 = (long *)FUN_03fdfefc(*(long *)(param_1 + 0x28),0);
    if (plVar10 == (long *)0x0) {
      return 0;
    }
    lVar5 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_03faea6c(&local_58,*(undefined8 *)(local_38 + 0x28),*(undefined8 *)(lVar9 + 0x10));
    *(undefined8 *)(local_38 + 0x48) = uStack_50;
    *(undefined8 *)(local_38 + 0x40) = local_58;
    thunk_FUN_01f51358(local_38 + 0x40,0);
    FUN_03faeab0(lVar9,*(undefined8 *)(local_38 + 0x28),*(undefined8 *)(local_38 + 0x40),
                 *(undefined8 *)(local_38 + 0x48));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_03fde198(lVar5,0);
    if ((uVar7 & 1) != 0) {
      plVar10 = (long *)FUN_03faf150(lVar9,lVar5);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03fb1600;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03fb1600:
      uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      *(undefined8 *)(local_38 + 0x50) = uVar4;
      thunk_FUN_01f51358();
      param_1 = local_38;
      goto switchD_03fb14ac_caseD_2;
    }
    lVar5 = FUN_03faee80(lVar9,lVar5);
    uVar4 = 0;
    if (lVar5 == 0) goto LAB_03fb1a08;
    plVar10 = (long *)FUN_03faf010(lVar9);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03fb1638;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03fb1638:
    uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    *(undefined8 *)(local_38 + 0x50) = uVar4;
    thunk_FUN_01f51358();
    param_1 = local_38;
    break;
  case 1:
    goto switchD_03fb14ac_caseD_1;
  case 2:
switchD_03fb14ac_caseD_2:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    do {
      plVar10 = *(long **)(param_1 + 0x50);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03fb1824;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03fb1824:
      uVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        FUN_03fb1c0c();
        *(undefined8 *)(local_38 + 0x50) = 0;
        thunk_FUN_01f51358((undefined8 *)(local_38 + 0x50),0);
        uVar4 = extraout_x1_00;
        goto LAB_03fb1a04;
      }
      plVar10 = *(long **)(local_38 + 0x50);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_03fb1894;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,1);
LAB_03fb1894:
      plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((plVar10 == (long *)0x0) || (*plVar10 != *(long *)PTR_DAT_04582e08)) {
        *(long **)(local_38 + 0x18) = plVar10;
        thunk_FUN_01f51358();
        uVar6 = 2;
        goto FUN_03fb19e4;
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar10 = (long *)FUN_03faf010(lVar9);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03fb1920;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03fb1920:
      uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      *(undefined8 *)(local_38 + 0x58) = uVar4;
      thunk_FUN_01f51358();
      param_1 = local_38;
switchD_03fb14ac_caseD_1:
      plVar10 = *(long **)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03fb199c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03fb199c:
      uVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar7 & 1) != 0) {
        plVar10 = *(long **)(local_38 + 0x58);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 == 0) goto LAB_03fb1a54;
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03fb1a3c;
      }
      FUN_03fb1b50();
      *(undefined8 *)(local_38 + 0x58) = 0;
      thunk_FUN_01f51358((undefined8 *)(local_38 + 0x58),0);
      param_1 = local_38;
    } while( true );
  }
  plVar10 = *(long **)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03fb16b4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03fb16b4:
  uVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((uVar7 & 1) != 0) {
    plVar10 = *(long **)(local_38 + 0x50);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03fb173c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,1);
LAB_03fb173c:
    uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    *(undefined8 *)(local_38 + 0x18) = uVar4;
    thunk_FUN_01f51358();
    uVar6 = 3;
FUN_03fb19e4:
    *(undefined4 *)(local_38 + 0x10) = uVar6;
    return 1;
  }
  FUN_03fb1cc8();
  *(undefined8 *)(local_38 + 0x50) = 0;
  thunk_FUN_01f51358((undefined8 *)(local_38 + 0x50),0);
  uVar4 = extraout_x1;
LAB_03fb1a04:
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03fb1a08:
  FUN_03faf0dc(lVar9,uVar4,*(undefined8 *)(local_38 + 0x40),*(undefined8 *)(local_38 + 0x48));
  return 0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03fb1a3c:
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
      goto LAB_03fb1a74;
    }
  }
LAB_03fb1a54:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,1);
LAB_03fb1a74:
  uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  *(undefined8 *)(local_38 + 0x18) = uVar4;
  thunk_FUN_01f51358();
  *(undefined4 *)(local_38 + 0x10) = 1;
  return 1;
}



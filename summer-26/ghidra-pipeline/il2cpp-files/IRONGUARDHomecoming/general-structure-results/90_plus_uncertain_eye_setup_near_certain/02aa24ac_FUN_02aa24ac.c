/*
FUNCTION_NAME: FUN_02aa24ac
ENTRY_POINT: 02aa24ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02aa2798) */

undefined8 FUN_02aa24ac(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_04831038 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831038 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    plVar9 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02aa2594;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02aa2594:
    uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    thunk_FUN_01f51358();
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    while (0 < iVar1) {
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02aa261c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02aa261c:
      uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (0 < *(int *)(param_1 + 0x38)) goto LAB_02aa2720;
        break;
      }
      iVar1 = *(int *)(param_1 + 0x38) + -1;
      *(int *)(param_1 + 0x38) = iVar1;
    }
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar9;
  lVar5 = *(long *)puVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02aa26a4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02aa26a4:
  uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if ((uVar7 & 1) == 0) {
LAB_02aa2720:
    FUN_02aa282c(param_1);
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x40),0);
    return 0;
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02aa2754;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02aa2754:
  uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_01f51358();
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



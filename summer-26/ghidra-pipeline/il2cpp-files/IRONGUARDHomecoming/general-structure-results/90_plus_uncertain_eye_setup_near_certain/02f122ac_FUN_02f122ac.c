/*
FUNCTION_NAME: FUN_02f122ac
ENTRY_POINT: 02f122ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f125b4) */

void FUN_02f122ac(int *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  
  if ((DAT_0483194a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483194a = 1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  iVar3 = FUN_022f2780(param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
  *param_1 = iVar3;
  if (iVar3 < 2) {
    param_1[4] = 0;
    param_1[5] = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    uVar7 = FUN_01f08890(lVar4,iVar3 + -1);
    *(undefined8 *)(param_1 + 4) = uVar7;
  }
  thunk_FUN_01f51358(param_1 + 4,uVar7);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar8 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02f123f0;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar4,0);
LAB_02f123f0:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar3 = 0;
  do {
    lVar4 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f12468;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02f12468:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 == 0) goto LAB_02f12564;
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_02f124ec;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar4,0);
FUN_02f124ec:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    piVar9 = param_1 + 2;
    if (iVar3 != 0) {
      lVar4 = *(long *)(param_1 + 4);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      piVar9 = (int *)(lVar4 + (long)(int)(iVar3 - 1U) * 8 + 0x20);
    }
    *(undefined8 *)piVar9 = uVar7;
    iVar3 = iVar3 + 1;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar9 = piVar9 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02f12580;
    }
  }
LAB_02f12564:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_02f12580:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}



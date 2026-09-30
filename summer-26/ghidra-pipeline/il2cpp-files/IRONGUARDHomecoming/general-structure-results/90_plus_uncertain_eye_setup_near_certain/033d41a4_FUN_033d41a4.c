/*
FUNCTION_NAME: FUN_033d41a4
ENTRY_POINT: 033d41a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033d4358) */

void FUN_033d41a4(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
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
  
  if ((DAT_04832505 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04832505 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar2 = FUN_033d32e0(param_2);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_033d442c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    uVar3 = FUN_033d485c(lVar2);
    if ((uVar3 & 1) == 0) {
      iVar8 = 5;
      goto LAB_033d428c;
    }
    plVar4 = (long *)FUN_033d4484(lVar2);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
  } while ((lVar5 == 0) || (plVar4 = (long *)FUN_033d4574(plVar4), plVar4 == (long *)0x0));
  *param_3 = 1;
  (**(code **)(*plVar4 + 0x1e8))(&local_c0,plVar4,0,*(undefined8 *)(*plVar4 + 0x1f0));
  iVar8 = 4;
  uStack_78 = uStack_b8;
  local_80 = local_c0;
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  local_60 = local_a0;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
LAB_033d428c:
  plVar4 = (long *)thunk_FUN_01f116d0(lVar2,*(undefined8 *)puVar1);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    lVar2 = *(long *)puVar1;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_033d42ec;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,lVar2,0);
LAB_033d42ec:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  if (iVar8 != 5) {
    if (iVar8 == 4) {
      param_1[5] = uStack_58;
      param_1[4] = local_60;
      param_1[7] = uStack_48;
      param_1[6] = uStack_50;
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[3] = uStack_68;
      param_1[2] = uStack_70;
      return;
    }
    if (iVar8 != 0) {
      return;
    }
  }
  *param_3 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



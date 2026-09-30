/*
FUNCTION_NAME: FUN_029a3118
ENTRY_POINT: 029a3118
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


undefined8
FUN_029a3118(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
            long param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((DAT_04830d99 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830d99 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_4 + 0x14) != 2) {
    if (*(int *)((long)param_4 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_4[7];
    if (plVar7 == (long *)0x0) goto LAB_029a3394;
    lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_029a31e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
FUN_029a31e4:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_4[10] = lVar3;
    thunk_FUN_01f51358(param_4 + 10,lVar3);
    *(undefined4 *)((long)param_4 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_4[10];
    if (plVar7 == (long *)0x0) goto LAB_029a3394;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          uVar9 = param_2;
          uVar10 = param_3;
          goto LAB_029a3260;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
    uVar9 = param_2;
    uVar10 = param_3;
LAB_029a3260:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_4 != (long *)0x0) {
        (**(code **)(*param_4 + 0x1f8))(param_4,*(undefined8 *)(*param_4 + 0x200));
        return 0;
      }
      goto LAB_029a3394;
    }
    plVar7 = (long *)param_4[10];
    if (plVar7 == (long *)0x0) goto LAB_029a3394;
    lVar3 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029a32e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_029a32e0:
    uVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = param_4[8];
  } while ((lVar3 != 0) &&
          (param_2 = uVar9, param_3 = uVar10,
          uVar5 = (**(code **)(lVar3 + 0x18))
                            (uVar8,uVar9,uVar10,*(undefined8 *)(lVar3 + 0x40),
                             *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = param_4[9];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))
              (&local_80,uVar8,uVar9,uVar10,*(undefined8 *)(lVar3 + 0x40),
               *(undefined8 *)(lVar3 + 0x28));
    param_4[6] = lStack_68;
    param_4[5] = lStack_70;
    param_4[4] = lStack_78;
    param_4[3] = local_80;
    return 1;
  }
LAB_029a3394:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



/*
FUNCTION_NAME: FUN_02aaa2ec
ENTRY_POINT: 02aaa2ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_02aaa2ec(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_58;
  long *plStack_50;
  long *local_48;
  long local_40;
  long local_38;
  
  local_40 = param_4;
  local_38 = param_3;
  if ((DAT_04831052 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831052 = 1;
  }
  plStack_50 = &local_38;
  local_48 = &local_40;
  local_58 = 0;
  if (*(int *)(param_3 + 0x10) != 1) {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    plVar9 = *(long **)(param_3 + 0x38);
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02aaa3c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aaa3c0:
    uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    *(undefined8 *)(local_38 + 0x68) = uVar3;
    thunk_FUN_01f51358();
    plVar9 = *(long **)(local_38 + 0x48);
    *(undefined4 *)(local_38 + 0x10) = 0xfffffffd;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(local_40 + 0x20) + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02aaa45c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aaa45c:
    uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    *(undefined8 *)(local_38 + 0x70) = uVar3;
    thunk_FUN_01f51358();
    param_3 = local_38;
  }
  plVar9 = *(long **)(param_3 + 0x68);
  *(undefined4 *)(param_3 + 0x10) = 0xfffffffc;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02aaa4e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02aaa4e0:
  uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if ((uVar7 & 1) != 0) {
    plVar9 = *(long **)(local_38 + 0x70);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02aaa548;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02aaa548:
    uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      plVar9 = *(long **)(local_38 + 0x68);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(local_38 + 0x58);
      lVar4 = *(long *)(*(long *)(*(long *)(local_40 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02aaa61c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aaa61c:
      uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      plVar9 = *(long **)(local_38 + 0x70);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(local_40 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02aaa6a8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aaa6a8:
      uVar10 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(lVar5 + 0x18))
                (&local_a0,uVar3,param_2,uVar10,*(undefined8 *)(lVar5 + 0x40),
                 *(undefined8 *)(lVar5 + 0x28));
      *(undefined8 *)(local_38 + 0x2c) = uStack_88;
      *(undefined8 *)(local_38 + 0x24) = uStack_90;
      *(undefined8 *)(local_38 + 0x1c) = uStack_98;
      *(undefined8 *)(local_38 + 0x14) = local_a0;
      *(undefined4 *)(local_38 + 0x10) = 1;
      return 1;
    }
  }
  FUN_02aaa850(local_38);
  *(undefined8 *)(local_38 + 0x70) = 0;
  thunk_FUN_01f51358((undefined8 *)(local_38 + 0x70),0);
  FUN_02aaa7a0(local_38);
  *(undefined8 *)(local_38 + 0x68) = 0;
  thunk_FUN_01f51358((undefined8 *)(local_38 + 0x68),0);
  return 0;
}



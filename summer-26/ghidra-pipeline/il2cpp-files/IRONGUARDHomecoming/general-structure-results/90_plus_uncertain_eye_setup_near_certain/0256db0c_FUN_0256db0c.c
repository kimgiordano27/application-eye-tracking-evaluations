/*
FUNCTION_NAME: FUN_0256db0c
ENTRY_POINT: 0256db0c
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


undefined8 FUN_0256db0c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((DAT_0482fdfc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fdfc = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) == 0)
    {
      FUN_01ecaf44();
    }
    uVar3 = thunk_FUN_01f117cc();
    FUN_02711d90(uVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20));
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x40),uVar3);
    plVar10 = *(long **)(param_1 + 0x30);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256dc30;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_0256dc30:
    uVar9 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    thunk_FUN_01f51358();
  }
  plVar10 = *(long **)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
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
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256dcb4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_0256dcb4:
    uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      FUN_0256de4c();
      *(undefined8 *)(param_1 + 0x48) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),0);
      return 0;
    }
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256dd40;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_0256dd40:
    uVar2 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_02711e68(*(long *)(param_1 + 0x40),uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      return 1;
    }
    plVar10 = *(long **)(param_1 + 0x48);
  } while( true );
}



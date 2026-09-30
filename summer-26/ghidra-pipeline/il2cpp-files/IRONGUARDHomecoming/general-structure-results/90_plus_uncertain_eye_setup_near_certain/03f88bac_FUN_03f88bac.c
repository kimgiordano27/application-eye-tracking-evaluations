/*
FUNCTION_NAME: FUN_03f88bac
ENTRY_POINT: 03f88bac
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


/* WARNING: Removing unreachable block (ram,0x03f88dcc) */

void FUN_03f88bac(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  
  if ((DAT_0483b6a2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Camera_GetAllCameras__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045819a8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483b6a2 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)FUN_03f87db4(param_4);
  puVar5 = PTR_DAT_045819a8;
  puVar4 = Method_UnityEngine_Camera_GetAllCameras__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f88c90;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03f88c90:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_03f88d74;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f88cec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar5,0);
LAB_03f88cec:
    lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *param_3;
    uVar1 = *(undefined8 *)(lVar9 + 0x10);
    uVar8 = *(undefined8 *)(lVar9 + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar8 = FUN_03ec81d8(uVar8,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03f88760(lVar12,uVar1,uVar8);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03f88d90;
    }
  }
LAB_03f88d74:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03f88d90:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}



/*
FUNCTION_NAME: FUN_03a7d730
ENTRY_POINT: 03a7d730
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a7d9a8) */
/* WARNING: Removing unreachable block (ram,0x03a7d9d0) */
/* WARNING: Removing unreachable block (ram,0x03a7d9d4) */
/* WARNING: Removing unreachable block (ram,0x03a7da08) */

void FUN_03a7d730(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  undefined1 local_50 [16];
  
  if ((DAT_04838e14 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_8023);
    thunk_FUN_01efb3a4(StringLiteral_8024);
    thunk_FUN_01efb3a4(StringLiteral_7972);
    thunk_FUN_01efb3a4(StringLiteral_8025);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
    DAT_04838e14 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  iVar7 = *param_1;
  if (iVar7 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    iVar7 = -1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    uVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
    FUN_034c776c(uVar1,0);
    piVar5 = param_1 + 10;
    *(undefined8 *)piVar5 = uVar1;
    thunk_FUN_01f51358(piVar5,uVar1);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(lVar6 + 0x188);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)piVar5,
                       *(undefined8 *)(lVar6 + 0x28));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_50 = FUN_035de610(lVar6,0,0);
    uVar2 = FUN_034a8104(local_50,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_01f51358(param_1 + 0xc,0);
      if (*(int *)(*(long *)StringLiteral_7972 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_02129c7c(param_1 + 2,local_50,param_1,*(undefined8 *)StringLiteral_8023);
      return;
    }
  }
  FUN_034a8148(local_50,0);
  plVar3 = *(long **)(param_1 + 10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_8025);
  FUN_03a5e130(uVar1,lVar6,0,*(undefined4 *)(lVar6 + 0x18),0,0);
  if ((iVar7 < 0) && (plVar3 = *(long **)(param_1 + 10), plVar3 != (long *)0x0)) {
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03a7d950;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03a7d950:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  *param_1 = -2;
  if (*(int *)(*(long *)StringLiteral_7972 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f6f9c(param_1 + 2,uVar1,*(undefined8 *)StringLiteral_8024);
  return;
}



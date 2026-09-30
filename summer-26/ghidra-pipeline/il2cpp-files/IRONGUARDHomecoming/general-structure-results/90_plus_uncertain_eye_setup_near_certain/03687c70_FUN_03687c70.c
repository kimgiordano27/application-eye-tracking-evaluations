/*
FUNCTION_NAME: FUN_03687c70
ENTRY_POINT: 03687c70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03688020) */

void FUN_03687c70(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((DAT_04833e8a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_36__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(Method_OVRNetwork_OVRNetworkTcpClient_OnReadDataCallback__);
    DAT_04833e8a = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_03687ad0(param_1);
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar7 = (long *)FUN_036794a0(*(long *)(param_1 + 0x20),0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03687d7c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__
                        ,0);
LAB_03687d7c:
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar6 = Method_OVRNetwork_OVRNetworkTcpClient_OnReadDataCallback__;
  puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__;
  puVar4 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03687e04;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03687e04:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_03687fb8;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03687e60;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_03687e60:
    lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar13;
    uVar1 = *(undefined4 *)(lVar9 + 0x14);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_03687ed8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,9);
LAB_03687ed8:
    uVar11 = (*(code *)*puVar8)(plVar13,uVar1,&local_80,puVar8[1]);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0x20) + 0x50);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03687f4c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar6,0);
LAB_03687f4c:
      uVar11 = (*(code *)*puVar8)(plVar13,lVar9,&local_90,puVar8[1]);
      if ((uVar11 & 1) != 0) {
        FUN_036880f0((undefined4)local_80,local_80._4_4_,(undefined4)local_78,(undefined4)local_90,
                     local_90._4_4_,(undefined4)local_88,local_88._4_4_,param_1);
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03687fd4;
    }
  }
LAB_03687fb8:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03687fd4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}



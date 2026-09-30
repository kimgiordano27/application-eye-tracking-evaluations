/*
FUNCTION_NAME: FUN_030ebfac
ENTRY_POINT: 030ebfac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_030ebfac(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_03ff1b94 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_13551);
    thunk_FUN_01ad9084(StringLiteral_13552);
    DAT_03ff1b94 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  local_60 = 0;
  if ((*(uint *)(param_1 + 0x30) & 0xfffffffe) == 100) {
    uVar4 = FUN_030ebe18(param_1);
    plVar1 = (long *)(param_1 + 0x68);
    if ((uVar4 & 1) == 0) {
      lVar9 = *plVar1;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03922f24(lVar9,0,0);
      if ((uVar4 & 1) == 0) {
        if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar9 = FUN_0391c2b8(*plVar1,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0391fb70(lVar9,1,0);
      }
      else {
        lVar9 = FUN_030ec63c(param_1,*(undefined8 *)StringLiteral_13552);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar9 = FUN_01ed7044(lVar9,*(undefined8 *)
                                    Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__);
        *plVar1 = lVar9;
        thunk_FUN_01b4f09c(plVar1);
        lVar9 = *plVar1;
        if (*(int *)(*(long *)
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        bVar3 = FUN_038eecc0(0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(byte *)(lVar9 + 0x100) = ~bVar3 & 1;
      }
      uVar4 = FUN_030ec328(param_1,(long)&uStack_48 + 4,&local_50,&local_60);
      if ((uVar4 & 1) == 0) {
        if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar9 = FUN_0391c2b8(*plVar1,0);
        if (lVar9 != 0) {
          FUN_0391fb70(lVar9,0,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar2 = *(int *)(param_1 + 0x30);
      lVar9 = *(long *)(param_1 + 0x68);
      plVar5 = (long *)FUN_01b47fd0(*(undefined8 *)StringLiteral_13551,1);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if ((param_2 != 0) &&
         (lVar6 = thunk_FUN_01afa9e0(param_2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar7,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar5[4] = param_2;
      thunk_FUN_01b4f09c(plVar5 + 4,param_2);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xf8);
        *plVar10 = (long)plVar5;
        thunk_FUN_01b4f09c(plVar10,plVar5);
        lVar9 = *plVar1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar8 = 1;
        if (iVar2 != 0x65) {
          uVar8 = 2;
        }
        *(bool *)(lVar9 + 0xe4) = iVar2 == 0x65;
        *(undefined4 *)(lVar9 + 0x20) = uVar8;
        *(undefined4 *)(lVar9 + 0xec) = uStack_48._4_4_;
        *(undefined1 *)(lVar9 + 0xd0) = *(undefined1 *)(param_1 + 100);
        lVar9 = FUN_0391c27c(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_039282dc((undefined4)local_50,local_50._4_4_,(undefined4)uStack_48,lVar9,0);
        if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar9 = FUN_0391c27c(*plVar1,0);
        if (lVar9 != 0) {
          FUN_039293f4((undefined4)local_60,local_60._4_4_,local_58,lVar9,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar9 = FUN_0391c2b8(*(long *)(param_1 + 0x68),0), lVar9 != 0)) {
    FUN_0391fb70(lVar9,0,0);
  }
  return;
}



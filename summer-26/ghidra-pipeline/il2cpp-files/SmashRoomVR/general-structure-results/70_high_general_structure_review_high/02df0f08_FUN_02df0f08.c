/*
FUNCTION_NAME: FUN_02df0f08
ENTRY_POINT: 02df0f08
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


undefined8 FUN_02df0f08(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((DAT_03ff001d & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
                      );
    thunk_FUN_01ad9084(StringLiteral_4283);
    thunk_FUN_01ad9084(StringLiteral_4284);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    DAT_03ff001d = 1;
  }
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) goto LAB_02df1348;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_02df10f0;
  }
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar5 = FUN_01e8a9f8(*(long *)(param_1 + 0x28),
                       *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(uVar5,0);
  if ((uVar6 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar5,uVar12,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar5 = FUN_01e8b2d4(*(long *)(param_1 + 0x28),
                       *(undefined8 *)
                        Field_<PrivateImplementationDetails>_2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
                      );
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_01b4f09c();
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  while( true ) {
    plVar11 = (long *)(param_1 + 0x50);
    lVar9 = *plVar11;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar8) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar9 = *(long *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar6 = FUN_0395b350(lVar9,0);
    if (((uVar6 & 1) != 0) &&
       ((uVar6 = FUN_0395b3d0(lVar9,0), (uVar6 & 1) == 0 ||
        (bVar4 = FUN_0395b3d0(lVar9,0), (bVar4 & *(byte *)(param_1 + 0x48) & 1) != 0)))) {
      *(long *)(param_1 + 0x18) = lVar9;
      thunk_FUN_01b4f09c((long *)(param_1 + 0x18),lVar9);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
LAB_02df10f0:
    uVar8 = *(int *)(param_1 + 0x58) + 1;
    *(uint *)(param_1 + 0x58) = uVar8;
  }
  *plVar11 = 0;
  thunk_FUN_01b4f09c(plVar11,0);
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar5 = FUN_0392a954(*(long *)(param_1 + 0x28),0);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_01b4f09c();
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  do {
    plVar11 = *(long **)(param_1 + 0x60);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02df1200;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar3,0);
LAB_02df1200:
    uVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if ((uVar6 & 1) == 0) {
      FUN_02df15cc();
      *(undefined8 *)(param_1 + 0x60) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x60),0);
      return 0;
    }
    plVar11 = *(long **)(param_1 + 0x60);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02df1270;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar3,1);
LAB_02df1270:
    plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
    if (plVar11 != (long *)0x0) {
      bVar4 = *(byte *)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__ + 0x130
                       );
      if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar11);
      }
    }
    plVar11 = (long *)FUN_02deec68(*(undefined8 *)(param_1 + 0x38),plVar11,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_4283) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02df1328;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_4283,0);
LAB_02df1328:
    uVar5 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    thunk_FUN_01b4f09c();
LAB_02df1348:
    plVar11 = *(long **)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02df13a4;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar3,0);
LAB_02df13a4:
    uVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if ((uVar6 & 1) != 0) {
      plVar11 = *(long **)(param_1 + 0x68);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar9 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 == 0) goto LAB_02df1418;
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    FUN_02df151c();
    *(undefined8 *)(param_1 + 0x68) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x68),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_4284) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02df144c;
    }
  }
LAB_02df1418:
  puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_4284,0);
LAB_02df144c:
  uVar5 = (*(code *)*puVar7)(plVar11,puVar7[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_01b4f09c();
  *(undefined4 *)(param_1 + 0x10) = 2;
  return 1;
}



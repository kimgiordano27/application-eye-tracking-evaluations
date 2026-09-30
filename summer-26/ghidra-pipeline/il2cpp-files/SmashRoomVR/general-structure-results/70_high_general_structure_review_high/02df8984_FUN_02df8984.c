/*
FUNCTION_NAME: FUN_02df8984
ENTRY_POINT: 02df8984
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


undefined8 FUN_02df8984(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  
  if ((DAT_03ff005a & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
                      );
    thunk_FUN_01ad9084(StringLiteral_4283);
    thunk_FUN_01ad9084(StringLiteral_4284);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    DAT_03ff005a = 1;
  }
  puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) goto LAB_02df8d5c;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar9 = *(int *)(param_1 + 0x50) + 1;
    *(uint *)(param_1 + 0x50) = uVar9;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = FUN_01e8a9f8(*(long *)(param_1 + 0x28),
                         *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__)
    ;
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03923030(uVar5,0);
    if ((uVar6 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
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
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    thunk_FUN_01b4f09c();
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  plVar8 = (long *)(param_1 + 0x48);
  lVar10 = *plVar8;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((int)uVar9 < (int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  *plVar8 = 0;
  thunk_FUN_01b4f09c(plVar8,0);
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar5 = FUN_0392a954(*(long *)(param_1 + 0x28),0);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_01b4f09c();
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  do {
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02df8c18;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar4,0);
LAB_02df8c18:
    uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar6 & 1) == 0) {
      FUN_02df8fe0();
      *(undefined8 *)(param_1 + 0x58) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x58),0);
      return 0;
    }
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_02df8c88;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar4,1);
LAB_02df8c88:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__ + 0x130
                       );
      if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar8);
      }
    }
    plVar8 = (long *)FUN_02df85b8(*(undefined8 *)(param_1 + 0x38),plVar8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_4283) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02df8d3c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)StringLiteral_4283,0);
LAB_02df8d3c:
    uVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    thunk_FUN_01b4f09c();
LAB_02df8d5c:
    plVar8 = *(long **)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02df8db8;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar4,0);
LAB_02df8db8:
    uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x60);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar10 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 == 0) goto LAB_02df8e2c;
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    FUN_02df8f30();
    *(undefined8 *)(param_1 + 0x60) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x60),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar11 = piVar11 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_4284) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02df8e60;
    }
  }
LAB_02df8e2c:
  puVar7 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)StringLiteral_4284,0);
LAB_02df8e60:
  uVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_01b4f09c();
  *(undefined4 *)(param_1 + 0x10) = 2;
  return 1;
}



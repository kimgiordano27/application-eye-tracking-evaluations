/*
FUNCTION_NAME: FUN_01f18754
ENTRY_POINT: 01f18754
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


long * FUN_01f18754(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar7;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_2362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ae9ed0(param_3);
    }
  }
  puVar7 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 != 0) {
      if (param_1 == 0) {
LAB_01f18a2c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = FUN_01ed712c(param_1,*(undefined8 *)
                                    Method_System_Collections_Stack_StackEnumerator_get_Current__);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar7);
      }
      uVar3 = FUN_0391f968(lVar4,0,0);
      lVar9 = 0;
      if ((uVar3 & 1) != 0) {
        if (lVar4 == 0) goto LAB_01f18a2c;
        lVar9 = FUN_03900d8c(lVar4,0);
      }
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(lVar9,0,0);
      plVar11 = (long *)0x0;
      if ((uVar3 & 1) == 0) {
        if (lVar9 == 0) goto LAB_01f18a2c;
        iVar1 = FUN_03901b0c(lVar9,0);
        lVar4 = FUN_01ed712c(param_1,*(undefined8 *)
                                      Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__
                            );
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar7);
        }
        uVar3 = FUN_0391f968(lVar4,0,0);
        uVar10 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar4 == 0) goto LAB_01f18a2c;
          uVar10 = FUN_039010c8(lVar4,0);
        }
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar10,0,0);
        if (((uVar3 & 1) != 0) &&
           (plVar11 = (long *)(**(code **)(param_2 + 0x18))
                                        (*(undefined8 *)(param_2 + 0x40),uVar10,
                                         *(undefined8 *)(param_2 + 0x28)), plVar11 != (long *)0x0))
        {
          lVar4 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2362) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_01f18970;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_2362,1);
LAB_01f18970:
          iVar2 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          if (iVar2 == iVar1) {
            return plVar11;
          }
        }
        plVar11 = (long *)(**(code **)(param_2 + 0x18))
                                    (*(undefined8 *)(param_2 + 0x40),lVar9,
                                     *(undefined8 *)(param_2 + 0x28));
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0x0;
        }
        else {
          lVar4 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2362) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_01f18a04;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_2362,1);
LAB_01f18a04:
          iVar2 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          if (iVar2 != iVar1) {
            plVar11 = (long *)0x0;
          }
        }
      }
      return plVar11;
    }
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar10 = thunk_FUN_01afaadc();
    puVar7 = StringLiteral_2622;
  }
  else {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar10 = thunk_FUN_01afaadc();
    puVar7 = StringLiteral_2621;
  }
  uVar6 = thunk_FUN_01ad9084(puVar7);
  FUN_02fd1220(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar10,param_3);
}



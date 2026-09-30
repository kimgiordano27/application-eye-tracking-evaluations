/*
FUNCTION_NAME: FUN_01cc4108
ENTRY_POINT: 01cc4108
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01cc4810) */
/* WARNING: Removing unreachable block (ram,0x01cc4658) */
/* WARNING: Removing unreachable block (ram,0x01cc47b4) */
/* WARNING: Removing unreachable block (ram,0x01cc43bc) */
/* WARNING: Removing unreachable block (ram,0x01cc4458) */

void FUN_01cc4108(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((DAT_03feda9e & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(StringLiteral_1208);
    thunk_FUN_01ad9084(StringLiteral_1209);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_1210);
    thunk_FUN_01ad9084(StringLiteral_1212);
    thunk_FUN_01ad9084(StringLiteral_1244);
    thunk_FUN_01ad9084(StringLiteral_1245);
    DAT_03feda9e = 1;
  }
  local_58 = 0;
  local_60 = 0;
  FUN_01cc1b64(param_1);
  puVar3 = StringLiteral_1208;
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 0x70) + 0x20), plVar13 != (long *)0x0)) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_1208) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto System_Array__InternalArray__get_Item<InputManager_StateChangeMonitorTimeout>;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)StringLiteral_1208,0);
System_Array__InternalArray__get_Item<InputManager_StateChangeMonitorTimeout>:
    puVar5 = StringLiteral_1245;
    puVar4 = StringLiteral_1209;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
    plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar10 = *plVar13;
      lVar9 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01cc428c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar9,0);
LAB_01cc428c:
      uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto LAB_01cc444c;
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_01cc4424;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_01cc440c;
      }
      lVar10 = *plVar13;
      lVar9 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01cc42e8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar9,0);
LAB_01cc42e8:
      (*(code *)*puVar6)(&local_b0,plVar13,puVar6[1]);
      local_60 = local_b0;
      local_58 = local_a8;
      plVar7 = (long *)FUN_01cc259c(param_1,&local_60);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)plVar7[5]) {
        iVar14 = 0;
        do {
          uVar8 = FUN_023fe5b4(plVar7,iVar14,*(undefined8 *)puVar5);
          FUN_01cc4998(param_1,uVar8);
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)plVar7[5]);
      }
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01cc43ac;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
LAB_01cc43ac:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
    } while( true );
  }
  goto System_Array__InternalArray__get_Item<JointRotationActiveState_JointRotationFeatureState>;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_01cc46ac:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01cc46e0;
    }
  }
LAB_01cc46c4:
  puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar1,0);
LAB_01cc46e0:
  (*(code *)*puVar6)(plVar13,puVar6[1]);
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_01cc440c:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto System_Array__InternalArray__get_Item<InputRemoting_RemoteSender>;
    }
  }
LAB_01cc4424:
  puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar1,0);
System_Array__InternalArray__get_Item<InputRemoting_RemoteSender>:
  (*(code *)*puVar6)(plVar13,puVar6[1]);
LAB_01cc444c:
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 0x78) + 0x20), plVar13 != (long *)0x0)) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01cc44b8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar3,0);
LAB_01cc44b8:
    plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar10 = *plVar13;
      lVar9 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01cc4518;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar9,0);
LAB_01cc4518:
      uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_01cc46c4;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_01cc46ac;
      }
      lVar10 = *plVar13;
      lVar9 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01cc4574;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar13,lVar9,0);
LAB_01cc4574:
      (*(code *)*puVar6)(&local_b0,plVar13,puVar6[1]);
      local_60 = local_b0;
      local_58 = local_a8;
      plVar7 = (long *)FUN_01cc259c(param_1,&local_60);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)plVar7[5]) {
        iVar14 = 0;
        do {
          uVar8 = FUN_023fe5b4(plVar7,iVar14,*(undefined8 *)puVar5);
          System_Array__InternalArray__get_Item<OVRPlugin_AppPerfFrameStats>(param_1,uVar8);
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)plVar7[5]);
      }
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01cc463c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
LAB_01cc463c:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
    } while( true );
  }
System_Array__InternalArray__get_Item<JointRotationActiveState_JointRotationFeatureState>:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



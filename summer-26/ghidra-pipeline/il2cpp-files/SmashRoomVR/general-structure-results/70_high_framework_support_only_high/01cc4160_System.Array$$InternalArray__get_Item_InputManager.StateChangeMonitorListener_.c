/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<InputManager.StateChangeMonitorListener>
ENTRY_POINT: 01cc4160
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01cc4810) */
/* WARNING: Removing unreachable block (ram,0x01cc4658) */
/* WARNING: Removing unreachable block (ram,0x01cc47b4) */
/* WARNING: Removing unreachable block (ram,0x01cc43bc) */
/* WARNING: Removing unreachable block (ram,0x01cc4458) */

void System_Array__InternalArray__get_Item<InputManager_StateChangeMonitorListener>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  int iVar13;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
  thunk_FUN_01ad9084(StringLiteral_1210);
  thunk_FUN_01ad9084(StringLiteral_1212);
  thunk_FUN_01ad9084(StringLiteral_1244);
  thunk_FUN_01ad9084(StringLiteral_1245);
  *(undefined1 *)(unaff_x20 + 0xa9e) = 1;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  FUN_01cc1b64();
  puVar3 = StringLiteral_1208;
  if ((*(long *)(unaff_x19 + 0x70) != 0) &&
     (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0x20), plVar12 != (long *)0x0)) {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_1208) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto System_Array__InternalArray__get_Item<InputManager_StateChangeMonitorTimeout>;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_1208,0);
System_Array__InternalArray__get_Item<InputManager_StateChangeMonitorTimeout>:
    puVar5 = StringLiteral_1245;
    puVar4 = StringLiteral_1209;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
    plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01cc428c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,lVar8,0);
LAB_01cc428c:
      uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_01cc444c;
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_01cc4424;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01cc440c;
      }
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01cc42e8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,lVar8,0);
LAB_01cc42e8:
      (*(code *)*puVar6)(&stack0x00000010,plVar12,puVar6[1]);
      in_stack_00000060 = in_stack_00000010;
      in_stack_00000068 = in_stack_00000018;
      plVar7 = (long *)FUN_01cc259c();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)plVar7[5]) {
        iVar13 = 0;
        do {
          FUN_023fe5b4(plVar7,iVar13,*(undefined8 *)puVar5);
          FUN_01cc4998();
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)plVar7[5]);
      }
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01cc43ac;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
LAB_01cc43ac:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
    } while( true );
  }
  goto System_Array__InternalArray__get_Item<JointRotationActiveState_JointRotationFeatureState>;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_01cc46ac:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01cc46e0;
    }
  }
LAB_01cc46c4:
  puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar1,0);
LAB_01cc46e0:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_01cc440c:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto System_Array__InternalArray__get_Item<InputRemoting_RemoteSender>;
    }
  }
LAB_01cc4424:
  puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar1,0);
System_Array__InternalArray__get_Item<InputRemoting_RemoteSender>:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
LAB_01cc444c:
  if ((*(long *)(unaff_x19 + 0x78) != 0) &&
     (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0x20), plVar12 != (long *)0x0)) {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01cc44b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar3,0);
LAB_01cc44b8:
    plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01cc4518;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,lVar8,0);
LAB_01cc4518:
      uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar12 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_01cc46c4;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01cc46ac;
      }
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01cc4574;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(plVar12,lVar8,0);
LAB_01cc4574:
      (*(code *)*puVar6)(&stack0x00000010,plVar12,puVar6[1]);
      in_stack_00000060 = in_stack_00000010;
      in_stack_00000068 = in_stack_00000018;
      plVar7 = (long *)FUN_01cc259c();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)plVar7[5]) {
        iVar13 = 0;
        do {
          FUN_023fe5b4(plVar7,iVar13,*(undefined8 *)puVar5);
          System_Array__InternalArray__get_Item<OVRPlugin_AppPerfFrameStats>();
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)plVar7[5]);
      }
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01cc463c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
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



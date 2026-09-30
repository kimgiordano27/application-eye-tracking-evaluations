/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<InputRemoting.RemoteInputDevice>
ENTRY_POINT: 01cc4388
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01cc4810) */
/* WARNING: Removing unreachable block (ram,0x01cc4658) */
/* WARNING: Removing unreachable block (ram,0x01cc47b4) */
/* WARNING: Removing unreachable block (ram,0x01cc4458) */

void System_Array__InternalArray__get_Item<InputRemoting_RemoteInputDevice>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x21;
  int iVar7;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
code_r0x01cc4388:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_01cc4378;
LAB_01cc4390:
  puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x21,param_3,0);
  do {
    (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    do {
      if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab0160(unaff_x22);
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01cc428c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01cc428c:
      uVar4 = (*(code *)*puVar1)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_01cc444c;
        lVar3 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_01cc4424;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_01cc440c;
      }
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01cc42e8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01cc42e8:
      (*(code *)*puVar1)(&stack0x00000010);
      in_stack_00000060 = in_stack_00000010;
      in_stack_00000068 = in_stack_00000018;
      unaff_x21 = (long *)FUN_01cc259c();
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)unaff_x21[5]) {
        iVar7 = 0;
        do {
          FUN_023fe5b4(unaff_x21,iVar7,*unaff_x26);
          FUN_01cc4998();
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)unaff_x21[5]);
      }
      unaff_x22 = 0;
    } while (unaff_x21 == (long *)0x0);
    param_1 = *unaff_x21;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_01cc4390;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01cc4378:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x01cc4388;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_01cc440c:
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto System_Array__InternalArray__get_Item<InputRemoting_RemoteSender>;
    }
  }
LAB_01cc4424:
  puVar1 = (undefined8 *)FUN_01ae9f78();
System_Array__InternalArray__get_Item<InputRemoting_RemoteSender>:
  (*(code *)*puVar1)();
LAB_01cc444c:
  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
     (plVar6 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0x20), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x27) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_01cc44b8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x27,0);
LAB_01cc44b8:
  plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01cc4518;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x24,0);
LAB_01cc4518:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_01cc46c4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01cc4574;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x25,0);
LAB_01cc4574:
    (*(code *)*puVar1)(&stack0x00000010,plVar6,puVar1[1]);
    in_stack_00000060 = in_stack_00000010;
    in_stack_00000068 = in_stack_00000018;
    plVar2 = (long *)FUN_01cc259c();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (0 < (int)plVar2[5]) {
      iVar7 = 0;
      do {
        FUN_023fe5b4(plVar2,iVar7,*unaff_x26);
        System_Array__InternalArray__get_Item<OVRPlugin_AppPerfFrameStats>();
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)plVar2[5]);
    }
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01cc463c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78(plVar2,*unaff_x23,0);
LAB_01cc463c:
      (*(code *)*puVar1)(plVar2,puVar1[1]);
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_01cc46e0;
    }
  }
LAB_01cc46c4:
  puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x23,0);
LAB_01cc46e0:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
  return;
}



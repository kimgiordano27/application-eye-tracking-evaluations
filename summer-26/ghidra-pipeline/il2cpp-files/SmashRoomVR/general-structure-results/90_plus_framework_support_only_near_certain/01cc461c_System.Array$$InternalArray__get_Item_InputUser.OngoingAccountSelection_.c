/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<InputUser.OngoingAccountSelection>
ENTRY_POINT: 01cc461c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01cc4810) */

void System_Array__InternalArray__get_Item<InputUser_OngoingAccountSelection>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  ulong uVar3;
  int *piVar4;
  int *in_x10;
  long *unaff_x20;
  long *unaff_x21;
  int iVar5;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  int unaff_w27;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
code_r0x01cc461c:
  if (!(bool)in_ZR) goto LAB_01cc4608;
LAB_01cc4620:
  puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x21,param_3,0);
  do {
    (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    do {
      if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab0160(unaff_x22);
      }
      if ((unaff_w27 != 0) && (unaff_w27 != 7)) {
LAB_01cc468c:
        if (unaff_x20 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_01cc46c4;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_01cc46ac;
      }
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_01cc4518;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01cc4518:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) goto LAB_01cc468c;
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_01cc4574;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01cc4574:
      (*(code *)*puVar1)(&stack0x00000010);
      in_stack_00000060 = in_stack_00000010;
      in_stack_00000068 = in_stack_00000018;
      unaff_x21 = (long *)FUN_01cc259c();
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (0 < (int)unaff_x21[5]) {
        iVar5 = 0;
        do {
          FUN_023fe5b4(unaff_x21,iVar5,*unaff_x26);
          System_Array__InternalArray__get_Item<OVRPlugin_AppPerfFrameStats>();
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)unaff_x21[5]);
      }
      unaff_x22 = 0;
      unaff_w27 = 7;
    } while (unaff_x21 == (long *)0x0);
    param_1 = *unaff_x21;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_01cc4620;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01cc4608:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x01cc461c;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_01cc46ac:
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_01cc46e0;
    }
  }
LAB_01cc46c4:
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01cc46e0:
  (*(code *)*puVar1)();
  return;
}



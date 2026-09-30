/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01cc535c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01cc5520) */

void System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  void *unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(unaff_x22);
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar3 = (long *)FUN_01d01ae8((long)unaff_x19 + 0x28,0);
  puVar2 = StringLiteral_1246;
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc53f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar3,*(long *)puVar1,0);
LAB_01cc53f8:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_01cc5514;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_01cc54ec;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc5454;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar3,*(long *)puVar2,0);
LAB_01cc5454:
    auVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    _in_stack_00000080 = auVar9;
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d041cc(*(long *)(unaff_x20 + 0x30),&stack0x00000080,&stack0x000000b0,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d047b8(*(long *)(unaff_x20 + 0x30),&stack0x00000080,&stack0x00000100,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d03de8(*(long *)(unaff_x20 + 0x30),&stack0x000000b0,&stack0x00000080,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01cc5508;
    }
  }
LAB_01cc54ec:
  puVar4 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x24,0);
LAB_01cc5508:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_01cc5514:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01cc5760();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_02396e54(*(long *)(unaff_x20 + 0x30),&stack0x00000100,*(undefined8 *)StringLiteral_1247);
    lVar5 = *(long *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000008,unaff_x19,0x78);
    if (lVar5 != 0) {
      uVar8 = *(undefined8 *)StringLiteral_1237;
      memcpy(&stack0x00000118,&stack0x00000008,0x78);
      FUN_024290c8(lVar5,&stack0x00000118,uVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Bone>
ENTRY_POINT: 01cc51f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01cc5520) */
/* WARNING: Removing unreachable block (ram,0x01cc55dc) */

void System_Array__InternalArray__get_Item<OVRPlugin_Bone>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  
  puVar2 = StringLiteral_1246;
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc5258;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01cc5258:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_01cc5370;
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_01cc5348;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc52b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01cc52b4:
    auVar9 = (*(code *)*puVar3)();
    _in_stack_00000090 = auVar9;
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d03de8(*(long *)(unaff_x20 + 0x30),&stack0x00000090,&stack0x000000b0,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    System_Array__InternalArray__set_Item<OVRRaycaster_RaycastHit>
              (*(long *)(unaff_x20 + 0x30),&stack0x00000090,&stack0x00000100,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d041cc(*(long *)(unaff_x20 + 0x30),&stack0x000000b0,&stack0x00000090,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01cc5364;
    }
  }
LAB_01cc5348:
  puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01cc5364:
  (*(code *)*puVar3)();
LAB_01cc5370:
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar4 = (long *)FUN_01d01ae8((long)unaff_x19 + 0x28,0);
  puVar2 = StringLiteral_1246;
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc53f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar1,0);
LAB_01cc53f8:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_01cc5514;
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_01cc54ec;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc5454;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar2,0);
LAB_01cc5454:
    auVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
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
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01cc5508;
    }
  }
LAB_01cc54ec:
  puVar3 = (undefined8 *)FUN_01ae9f78(plVar4,*unaff_x24,0);
LAB_01cc5508:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
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



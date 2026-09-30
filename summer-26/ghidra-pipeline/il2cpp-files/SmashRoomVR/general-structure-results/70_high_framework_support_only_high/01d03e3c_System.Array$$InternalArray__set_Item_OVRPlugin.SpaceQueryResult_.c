/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01d03e3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000170;
  
  thunk_FUN_01ad9084(StringLiteral_1235);
  thunk_FUN_01ad9084(StringLiteral_1166);
  thunk_FUN_01ad9084(StringLiteral_1248);
  thunk_FUN_01ad9084(StringLiteral_956);
  *(undefined1 *)(unaff_x24 + 0xd0e) = 1;
  lVar3 = *unaff_x23;
  in_stack_00000170 = 0;
  in_stack_000000f0 = 0;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  *(undefined8 *)(unaff_x22 + 200) = 0;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_01cacae0();
  if ((uVar4 & 1) != 0) {
    plVar7 = *(long **)(unaff_x20 + 0x20);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar3 = *plVar7;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_2107) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01d03f24;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_2107,0);
LAB_01d03f24:
    uVar4 = (*(code *)*puVar5)(plVar7,uVar1,uVar2,&stack0x00000100,puVar5[1]);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)StringLiteral_1248 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_01d01504(&stack0x00000128);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)StringLiteral_956 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01d023a0(&stack0x00000008,&stack0x00000100);
        memcpy(&stack0x00000080,&stack0x00000008,0x78);
        FUN_02396a4c();
        return 1;
      }
    }
  }
  return 0;
}



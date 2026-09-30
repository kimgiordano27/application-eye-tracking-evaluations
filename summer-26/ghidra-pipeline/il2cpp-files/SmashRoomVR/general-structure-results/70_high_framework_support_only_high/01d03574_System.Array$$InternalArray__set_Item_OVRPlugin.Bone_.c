/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Bone>
ENTRY_POINT: 01d03574
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d03770) */

void System_Array__InternalArray__set_Item<OVRPlugin_Bone>(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000040;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
code_r0x01d03574:
  puVar1 = (undefined8 *)FUN_01ae9f78();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_01d0371c;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_2104) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01d035f4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01d035f4:
    (*(code *)*puVar1)(&stack0x00000020);
    uVar6 = in_stack_00000028;
    uVar4 = in_stack_00000020;
    memcpy(&stack0x00000140,unaff_x21,0x78);
    in_stack_00000130 = uVar4;
    in_stack_00000138 = uVar6;
    memcpy(&stack0x000000b0,&stack0x00000140,0x78);
    if (*(int *)(*(long *)StringLiteral_956 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    unaff_x29[7] = 0;
    unaff_x29[6] = 0;
    unaff_x29[9] = 0;
    unaff_x29[8] = 0;
    unaff_x29[3] = 0;
    unaff_x29[2] = 0;
    unaff_x29[5] = 0;
    unaff_x29[4] = 0;
    unaff_x29[1] = 0;
    *unaff_x29 = 0;
    uVar7 = in_stack_00000018[1];
    uVar6 = *in_stack_00000018;
    uVar4 = unaff_x26[4];
    uVar9 = unaff_x26[1];
    uVar8 = *unaff_x26;
    uVar11 = unaff_x26[3];
    uVar10 = unaff_x26[2];
    unaff_x29[10] = 0;
    in_stack_00000028 = in_stack_000000b8;
    in_stack_00000020 = in_stack_000000b0;
    unaff_x21[1] = uVar7;
    *unaff_x21 = uVar6;
    unaff_x27[4] = uVar4;
    unaff_x27[1] = uVar9;
    *unaff_x27 = uVar8;
    unaff_x27[3] = uVar11;
    unaff_x27[2] = uVar10;
    thunk_FUN_01b4f09c();
    uVar8 = unaff_x28[1];
    uVar7 = *unaff_x28;
    uVar6 = unaff_x28[3];
    uVar4 = unaff_x28[2];
    unaff_x25[4] = unaff_x28[4];
    unaff_x25[1] = uVar8;
    *unaff_x25 = uVar7;
    unaff_x25[3] = uVar6;
    unaff_x25[2] = uVar4;
    thunk_FUN_01b4f09c();
    in_stack_00000040 = in_stack_000000d0;
    memcpy(&stack0x000000b0,&stack0x00000020,0x78);
    FUN_023969d0(in_stack_00000010,&stack0x00000130,&stack0x000000b0,
                 *(undefined8 *)StringLiteral_1240);
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 == 0) goto code_r0x01d03574;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) !=
           *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto code_r0x01d03574;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_01d03738;
    }
  }
LAB_01d0371c:
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01d03738:
  (*(code *)*puVar1)();
  return;
}



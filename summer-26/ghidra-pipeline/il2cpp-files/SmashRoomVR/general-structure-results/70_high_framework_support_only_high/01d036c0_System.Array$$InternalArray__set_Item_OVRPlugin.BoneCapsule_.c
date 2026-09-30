/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 01d036c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d03770) */

void System_Array__InternalArray__set_Item<OVRPlugin_BoneCapsule>(undefined **param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
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
  
  do {
    FUN_023969d0(in_stack_00000010,&stack0x00000130,&stack0x000000b0,*(undefined8 *)param_1[0x26]);
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01d03590;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01d03590:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_2104) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01d035f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01d035f4:
    (*(code *)*puVar1)(&stack0x00000020);
    uVar6 = in_stack_00000028;
    uVar3 = in_stack_00000020;
    memcpy(&stack0x00000140,unaff_x21,0x78);
    in_stack_00000130 = uVar3;
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
    uVar3 = unaff_x26[4];
    uVar9 = unaff_x26[1];
    uVar8 = *unaff_x26;
    uVar11 = unaff_x26[3];
    uVar10 = unaff_x26[2];
    unaff_x29[10] = 0;
    in_stack_00000028 = in_stack_000000b8;
    in_stack_00000020 = in_stack_000000b0;
    unaff_x21[1] = uVar7;
    *unaff_x21 = uVar6;
    unaff_x27[4] = uVar3;
    unaff_x27[1] = uVar9;
    *unaff_x27 = uVar8;
    unaff_x27[3] = uVar11;
    unaff_x27[2] = uVar10;
    thunk_FUN_01b4f09c();
    uVar8 = unaff_x28[1];
    uVar7 = *unaff_x28;
    uVar6 = unaff_x28[3];
    uVar3 = unaff_x28[2];
    unaff_x25[4] = unaff_x28[4];
    unaff_x25[1] = uVar8;
    *unaff_x25 = uVar7;
    unaff_x25[3] = uVar6;
    unaff_x25[2] = uVar3;
    thunk_FUN_01b4f09c();
    in_stack_00000040 = in_stack_000000d0;
    memcpy(&stack0x000000b0,&stack0x00000020,0x78);
    param_1 = &StringLiteral_1202;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01d03738;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01d03738:
    (*(code *)*puVar1)();
  }
  return;
}



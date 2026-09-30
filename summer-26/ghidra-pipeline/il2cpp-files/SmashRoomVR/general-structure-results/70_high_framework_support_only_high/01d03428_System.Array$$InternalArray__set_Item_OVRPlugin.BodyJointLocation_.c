/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 01d03428
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d03770) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Array__InternalArray__set_Item<OVRPlugin_BodyJointLocation>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xc38));
  thunk_FUN_01ad9084(StringLiteral_2106);
  thunk_FUN_01ad9084(StringLiteral_1240);
  thunk_FUN_01ad9084(StringLiteral_1166);
  thunk_FUN_01ad9084(StringLiteral_956);
  *(undefined1 *)(unaff_x21 + 0xd07) = 1;
  in_stack_000001b0 = 0;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000120 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  _uStack00000000000000d0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  if ((unaff_x19 == 0) || (plVar7 = *(long **)(unaff_x19 + 0x20), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_2103) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01d034f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_2103,0);
LAB_01d034f8:
  plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01d03590;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(plVar7,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__
                          ,0);
LAB_01d03590:
    uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((uVar5 & 1) == 0) break;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_2104) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01d035f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_2104,0);
LAB_01d035f4:
    (*(code *)*puVar3)(&stack0x00000020,plVar7,puVar3[1]);
    uVar2 = in_stack_00000028;
    uVar1 = in_stack_00000020;
    memcpy(&stack0x00000140,&stack0x00000030,0x78);
    in_stack_00000130 = uVar1;
    in_stack_00000138 = uVar2;
    memcpy(&stack0x000000b0,&stack0x00000140,0x78);
    if (*(int *)(*(long *)StringLiteral_956 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000040 = 0;
    in_stack_00000038 = in_stack_000000c8;
    in_stack_00000030 = in_stack_000000c0;
    in_stack_00000090 = 0;
    in_stack_00000028 = in_stack_000000b8;
    in_stack_00000020 = in_stack_000000b0;
    in_stack_00000068 = in_stack_000000f8;
    in_stack_00000050 = in_stack_000000e0;
    in_stack_00000048 = in_stack_000000d8;
    in_stack_00000060 = in_stack_000000f0;
    in_stack_00000058 = in_stack_000000e8;
    thunk_FUN_01b4f09c(&stack0x00000068,0);
    in_stack_00000090 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000108;
    in_stack_00000070 = in_stack_00000100;
    in_stack_00000088 = in_stack_00000118;
    in_stack_00000080 = in_stack_00000110;
    thunk_FUN_01b4f09c(&stack0x00000090,0);
    in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uStack00000000000000d0);
    memcpy(&stack0x000000b0,&stack0x00000020,0x78);
    FUN_023969d0(in_stack_00000010,&stack0x00000130,&stack0x000000b0,
                 *(undefined8 *)StringLiteral_1240);
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01d03738;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(plVar7,*(long *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_01d03738:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  return;
}



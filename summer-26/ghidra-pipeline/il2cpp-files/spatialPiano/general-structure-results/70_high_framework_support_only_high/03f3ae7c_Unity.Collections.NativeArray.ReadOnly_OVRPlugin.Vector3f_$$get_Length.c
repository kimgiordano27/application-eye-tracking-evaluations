/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$get_Length
ENTRY_POINT: 03f3ae7c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f3b018) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__get_Length
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 unaff_w25;
  long unaff_x26;
  long in_stack_00000030;
  long in_stack_00000048;
  
  do {
    FUN_049b692c(param_1,param_2,unaff_x20,param_4);
    do {
      if (*(long *)(unaff_x26 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar4 = FUN_049b688c(*(long *)(unaff_x26 + 0x10),*(undefined4 *)(unaff_x26 + 0x30),
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xc0));
      uVar6 = *(undefined8 *)(unaff_x26 + 0x20);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_060f078c(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        if (*(long *)(unaff_x26 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar2 = FUN_060ecf4c(*(long *)(unaff_x26 + 0x20),0);
      }
      uVar6 = *(undefined8 *)(unaff_x26 + 0x28);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_060f078c(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        if (*(long *)(unaff_x26 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar3 = FUN_061653c4(*(long *)(unaff_x26 + 0x28),0);
      }
      if (*(char *)(unaff_x26 + 0x35) == '\0' && ((uVar2 & 1) == 0 && (uVar3 & 1) == 0)) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(char *)(lVar4 + 0x18) == '\0') {
          uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0604cfc8(uVar6,unaff_x19,0);
          goto LAB_03f3af74;
        }
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_0604cfc8(uVar6,unaff_x19,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
LAB_03f3af74:
        *(undefined1 *)(lVar4 + 0x18) = unaff_w25;
      }
      do {
        uVar5 = FUN_04b9f834(&stack0x00000020,
                             *(undefined8 *)
                              (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 200));
        unaff_x26 = in_stack_00000030;
        if ((uVar5 & 1) == 0) {
          FUN_04b9f830(&stack0x00000020,
                       *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xd0)
                      );
          return;
        }
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      } while (*(char *)(in_stack_00000030 + 0x34) == '\0');
      uVar1 = *(undefined4 *)(in_stack_00000030 + 0x30);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      unaff_x19 = FUN_0604cc64(uVar1,0);
      if (*(long *)(unaff_x26 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar5 = FUN_049b6b20(*(long *)(unaff_x26 + 0x10),*(undefined4 *)(unaff_x26 + 0x30),
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xa0));
    } while ((uVar5 & 1) != 0);
    if ((*(ushort *)
          (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1) ==
        0) {
      FUN_02f41e9c();
    }
    unaff_x20 = thunk_FUN_02f45270();
    FUN_042fae70(unaff_x20,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb0));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
    *(undefined1 *)(unaff_x20 + 0x18) = 0;
    param_1 = *(long *)(unaff_x26 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_2 = (ulong)*(uint *)(unaff_x26 + 0x30);
    param_4 = *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb8);
  } while( true );
}



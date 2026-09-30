/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03f3ad74
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

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000048;
  
  FUN_04510e60(&stack0x00000008,param_2,*(undefined8 *)(param_1 + 0x70));
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = (long)in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000048;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000010 = &stack0x00000020;
LAB_03f3ada4:
  do {
    uVar5 = FUN_04b9f834(&stack0x00000020,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 200));
    lVar2 = in_stack_00000030;
    if ((uVar5 & 1) == 0) {
      FUN_04b9f830(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xd0));
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
  uVar6 = FUN_0604cc64(uVar1,0);
  if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_049b6b20(*(long *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x30),
                       *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xa0)
                      );
  if ((uVar5 & 1) == 0) {
    if ((*(ushort *)
          (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1) ==
        0) {
      FUN_02f41e9c();
    }
    lVar7 = thunk_FUN_02f45270();
    FUN_042fae70(lVar7,*(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb0)
                );
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
    *(undefined1 *)(lVar7 + 0x18) = 0;
    if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_049b692c(*(long *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x30),lVar7,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb8));
  }
  if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar7 = FUN_049b688c(*(long *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x30),
                       *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xc0)
                      );
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_060f078c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (*(long *)(lVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = FUN_060ecf4c(*(long *)(lVar2 + 0x20),0);
  }
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_060f078c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (*(long *)(lVar2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = FUN_061653c4(*(long *)(lVar2 + 0x28),0);
  }
  if (*(char *)(lVar2 + 0x35) == '\0' && ((uVar3 & 1) == 0 && (uVar4 & 1) == 0)) goto LAB_03f3af7c;
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0604cfc8(uVar8,uVar6,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_03f3af74;
LAB_03f3af7c:
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(char *)(lVar7 + 0x18) == '\0') {
    uVar8 = *(undefined8 *)(lVar2 + 0x18);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0604cfc8(uVar8,uVar6,0);
LAB_03f3af74:
    *(undefined1 *)(lVar7 + 0x18) = 1;
  }
  goto LAB_03f3ada4;
}



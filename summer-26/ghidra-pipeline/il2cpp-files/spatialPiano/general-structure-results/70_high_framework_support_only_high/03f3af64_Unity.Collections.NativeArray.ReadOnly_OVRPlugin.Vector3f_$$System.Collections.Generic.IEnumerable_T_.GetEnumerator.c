/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03f3af64
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

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  char *pcVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long *unaff_x24;
  char unaff_w25;
  long in_stack_00000030;
  long in_stack_00000048;
  
code_r0x03f3af64:
  FUN_0604cfc8(param_1,param_2,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  pcVar7 = (char *)(unaff_x20 + 0x18);
  do {
    *pcVar7 = unaff_w25;
    do {
      do {
        uVar5 = FUN_04b9f834(&stack0x00000020,
                             *(undefined8 *)
                              (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 200));
        lVar2 = in_stack_00000030;
        if ((uVar5 & 1) == 0) {
          FUN_04b9f830(&stack0x00000020,
                       *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xd0)
                      );
                    /* try { // try from 03f3afd4 to 0403affb has its CatchHandler @ 03f3b15c */
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
      param_2 = FUN_0604cc64(uVar1,0);
      if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar5 = FUN_049b6b20(*(long *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x30),
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xa0));
      if ((uVar5 & 1) == 0) {
        if ((*(ushort *)
              (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1)
            == 0) {
          FUN_02f41e9c();
        }
        lVar6 = thunk_FUN_02f45270();
        FUN_042fae70(lVar6,*(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb0));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        *(undefined8 *)(lVar6 + 0x10) = param_2;
        *(undefined1 *)(lVar6 + 0x18) = 0;
        if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_049b692c(*(long *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x30),lVar6,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb8));
      }
      if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      unaff_x20 = FUN_049b688c(*(long *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x30),
                               *(undefined8 *)
                                (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xc0));
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
      if (*(char *)(lVar2 + 0x35) != '\0' || ((uVar3 & 1) != 0 || (uVar4 & 1) != 0)) {
        param_1 = *(undefined8 *)(lVar2 + 0x18);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        goto code_r0x03f3af64;
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      pcVar7 = (char *)(unaff_x20 + 0x18);
    } while (*pcVar7 != '\0');
    uVar8 = *(undefined8 *)(lVar2 + 0x18);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0604cfc8(uVar8,param_2,0);
  } while( true );
}



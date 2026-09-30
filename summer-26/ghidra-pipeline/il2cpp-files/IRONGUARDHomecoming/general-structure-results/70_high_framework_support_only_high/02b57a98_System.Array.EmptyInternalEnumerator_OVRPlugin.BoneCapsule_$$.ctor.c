/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 02b57a98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___ctor(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000018;
  
                    /* catch() { ... } // from try @ 02b57a6c with catch @ 02b57a98 */
  FUN_01ecaf44();
  if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_01f116d0(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  thunk_FUN_01f51358();
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_02b57364();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03579868(uVar4,0);
    if (in_stack_00000018 == 0) goto LAB_02b57c70;
    lVar1 = FUN_03489498(in_stack_00000018,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                         uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    if (lVar1 == 0) {
      FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar2 = (long *)thunk_FUN_01f116d0(lVar1,lVar5);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar1,lVar5);
    }
    if (0 < (int)plVar2[3]) {
      uVar6 = 0;
      plVar7 = plVar2;
      do {
        plVar7 = plVar7 + 4;
        uVar3 = (ulong)*(uint *)(plVar2 + 3);
        if (uVar3 <= uVar6) {
LAB_02b57c6c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*plVar7 == 0) {
          FUN_0358b70c(0x11,0);
          uVar3 = (ulong)*(uint *)(plVar2 + 3);
        }
        if (uVar3 <= uVar6) goto LAB_02b57c6c;
        FUN_02b57444();
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)plVar2[3]);
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = FUN_0353ca4c(0);
  if (lVar1 != 0) {
    FUN_02a64cc0();
    return;
  }
LAB_02b57c70:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



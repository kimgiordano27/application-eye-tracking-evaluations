/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 02b57a2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000018;
  
  lVar1 = FUN_03489498();
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_01f116d0(lVar1,lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar1,lVar7);
    }
  }
  *(long *)(unaff_x19 + 0x30) = lVar2;
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_01f116d0(lVar1,lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar1,lVar7);
    }
  }
  thunk_FUN_01f51358((long *)(unaff_x19 + 0x30),lVar2);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_02b57364();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03579868(uVar5,0);
    if (in_stack_00000018 == 0) goto LAB_02b57c70;
    lVar1 = FUN_03489498(in_stack_00000018,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                         uVar5,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if (lVar1 == 0) {
      FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar3 = (long *)thunk_FUN_01f116d0(lVar1,lVar7);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar1,lVar7);
    }
    if (0 < (int)plVar3[3]) {
      uVar6 = 0;
      plVar8 = plVar3;
      do {
        plVar8 = plVar8 + 4;
        uVar4 = (ulong)*(uint *)(plVar3 + 3);
        if (uVar4 <= uVar6) {
LAB_02b57c6c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*plVar8 == 0) {
          FUN_0358b70c(0x11,0);
          uVar4 = (ulong)*(uint *)(plVar3 + 3);
        }
        if (uVar4 <= uVar6) goto LAB_02b57c6c;
        FUN_02b57444();
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)plVar3[3]);
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



/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 013e0c00
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000018;
  
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_0103ffe0(param_1,lVar5);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(param_1,lVar5);
    }
  }
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_0103ffe0(param_1,lVar5);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(param_1,lVar5);
    }
  }
  thunk_FUN_0106e12c((long *)(unaff_x19 + 0x30),lVar1);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_013e04c8();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = FUN_01d5e86c(uVar3,0);
    if (in_stack_00000018 == 0) goto LAB_013e0e24;
    lVar5 = FUN_01c9f7dc(in_stack_00000018,*(undefined8 *)PTR_DAT_0234cd90,uVar3,0);
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244(lVar1);
    }
    if (lVar5 == 0) {
      FUN_01d69098(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar2 = thunk_FUN_0103ffe0(lVar5,lVar1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(lVar5,lVar1);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar4 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        FUN_013e05a8();
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar5 = FUN_01d2c6a4(0);
  if (lVar5 != 0) {
    FUN_01367508();
    return;
  }
LAB_013e0e24:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}



/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$.cctor
ENTRY_POINT: 015e5b4c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___cctor(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w8;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  void *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (param_1 == (long *)0x0) {
    if (-1 < in_w8) {
      unaff_x25 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x19,unaff_x25,unaff_x21);
    plVar4 = (long *)thunk_FUN_0124b7d8(**(undefined8 **)(unaff_x27 + 0xc0));
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    uVar2 = thunk_FUN_0124b7d8(**(undefined8 **)(lVar3 + 0xc0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    bVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x140));
  }
  else {
    if (-1 < in_w8) {
      unaff_x22 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    plVar4 = *(long **)(unaff_x27 + 0xc0);
    lVar3 = plVar4[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0122e748(lVar3);
      plVar4 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(*plVar4 + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_015e5c94;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_0122ea3c(param_1,lVar3,0);
LAB_015e5c94:
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,param_1,unaff_x29 + -0x18,unaff_x29 + -0xc);
    bVar1 = *(char *)(unaff_x29 + -0xc) != '\0';
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 015e5b2c
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


byte System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
               (void)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  void *unaff_x25;
  long unaff_x26;
  long lVar9;
  long unaff_x29;
  
  FUN_0122e748();
  plVar3 = (long *)thunk_FUN_0124baac();
  lVar9 = *(long *)(unaff_x20 + 0x20);
  iVar1 = *(int *)(**(long **)(lVar9 + 0xc0) + 0x28);
  if (plVar3 == (long *)0x0) {
    if (-1 < iVar1) {
      unaff_x25 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x19,unaff_x25,unaff_x21);
    plVar3 = (long *)thunk_FUN_0124b7d8(**(undefined8 **)(lVar9 + 0xc0));
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if (-1 < *(int *)(**(long **)(lVar9 + 0xc0) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    uVar4 = thunk_FUN_0124b7d8(**(undefined8 **)(lVar9 + 0xc0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    bVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x140));
  }
  else {
    if (-1 < iVar1) {
      unaff_x22 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    plVar5 = *(long **)(lVar9 + 0xc0);
    lVar9 = plVar5[1];
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
      plVar5 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(*plVar5 + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          lVar9 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_015e5c94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar9 = FUN_0122ea3c(plVar3,lVar9,0);
LAB_015e5c94:
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))
              (*(undefined8 *)(lVar9 + 8),lVar9,plVar3,unaff_x29 + -0x18,unaff_x29 + -0xc);
    bVar2 = *(char *)(unaff_x29 + -0xc) != '\0';
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



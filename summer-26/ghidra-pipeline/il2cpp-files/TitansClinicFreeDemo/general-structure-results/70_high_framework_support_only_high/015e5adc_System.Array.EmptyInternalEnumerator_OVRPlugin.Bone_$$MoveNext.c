/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$MoveNext
ENTRY_POINT: 015e5adc
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


byte System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__MoveNext(ulong param_1)

{
  void *__src;
  int iVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  bVar2 = -1 < *(int *)(**(long **)(unaff_x24 + 0xc0) + 0x28);
  if ((param_1 & 1) == 0) {
    if (bVar2) {
      unaff_x22 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    bVar3 = FUN_01230c60(**(undefined8 **)(unaff_x24 + 0xc0));
    bVar3 = bVar3 ^ 1;
  }
  else {
    __src = unaff_x25;
    if (bVar2) {
      __src = unaff_x27;
    }
    memcpy(unaff_x19,__src,unaff_x21);
    uVar4 = thunk_FUN_0124b7d8(**(undefined8 **)(unaff_x24 + 0xc0));
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748(lVar6);
    }
    plVar5 = (long *)thunk_FUN_0124baac(uVar4,lVar6);
    lVar6 = *(long *)(unaff_x20 + 0x20);
    iVar1 = *(int *)(**(long **)(lVar6 + 0xc0) + 0x28);
    if (plVar5 == (long *)0x0) {
      if (-1 < iVar1) {
        unaff_x25 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x19,unaff_x25,unaff_x21);
      plVar5 = (long *)thunk_FUN_0124b7d8(**(undefined8 **)(lVar6 + 0xc0));
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if (-1 < *(int *)(**(long **)(lVar6 + 0xc0) + 0x28)) {
        unaff_x22 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      uVar4 = thunk_FUN_0124b7d8(**(undefined8 **)(lVar6 + 0xc0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      bVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x140));
    }
    else {
      if (-1 < iVar1) {
        unaff_x22 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x19,unaff_x22,unaff_x21);
      plVar7 = *(long **)(lVar6 + 0xc0);
      lVar6 = plVar7[1];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748(lVar6);
        plVar7 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      if (-1 < *(int *)(*plVar7 + 0x28)) {
        unaff_x19 = (undefined8 *)*unaff_x19;
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            lVar6 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_015e5c94;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_0122ea3c(plVar5,lVar6,0);
LAB_015e5c94:
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
      lVar6 = *(long *)(lVar6 + 8);
      (**(code **)(lVar6 + 0x10))
                (*(undefined8 *)(lVar6 + 8),lVar6,plVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
      bVar3 = *(char *)(unaff_x29 + -0xc) != '\0';
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



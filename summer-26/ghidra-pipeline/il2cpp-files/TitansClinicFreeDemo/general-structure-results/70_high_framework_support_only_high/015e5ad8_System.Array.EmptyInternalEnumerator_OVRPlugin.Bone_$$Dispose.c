/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 015e5ad8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__Dispose(ulong param_1)

{
  void *__src;
  int iVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long lVar10;
  void *unaff_x25;
  long unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  lVar10 = *(long *)(unaff_x20 + 0x20);
  bVar2 = -1 < *(int *)(**(long **)(lVar10 + 0xc0) + 0x28);
  if ((param_1 & 1) == 0) {
    if (bVar2) {
      unaff_x22 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    bVar3 = FUN_01230c60(**(undefined8 **)(lVar10 + 0xc0));
    bVar3 = bVar3 ^ 1;
  }
  else {
    __src = unaff_x25;
    if (bVar2) {
      __src = unaff_x27;
    }
    memcpy(unaff_x19,__src,unaff_x21);
    uVar4 = thunk_FUN_0124b7d8(**(undefined8 **)(lVar10 + 0xc0));
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748(lVar10);
    }
    plVar5 = (long *)thunk_FUN_0124baac(uVar4,lVar10);
    lVar10 = *(long *)(unaff_x20 + 0x20);
    iVar1 = *(int *)(**(long **)(lVar10 + 0xc0) + 0x28);
    if (plVar5 == (long *)0x0) {
      if (-1 < iVar1) {
        unaff_x25 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x19,unaff_x25,unaff_x21);
      plVar5 = (long *)thunk_FUN_0124b7d8(**(undefined8 **)(lVar10 + 0xc0));
      lVar10 = *(long *)(unaff_x20 + 0x20);
      if (-1 < *(int *)(**(long **)(lVar10 + 0xc0) + 0x28)) {
        unaff_x22 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      uVar4 = thunk_FUN_0124b7d8(**(undefined8 **)(lVar10 + 0xc0));
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
      plVar6 = *(long **)(lVar10 + 0xc0);
      lVar10 = plVar6[1];
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748(lVar10);
        plVar6 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      if (-1 < *(int *)(*plVar6 + 0x28)) {
        unaff_x19 = (undefined8 *)*unaff_x19;
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar10) {
            lVar10 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_015e5c94;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar10 = FUN_0122ea3c(plVar5,lVar10,0);
LAB_015e5c94:
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
      lVar10 = *(long *)(lVar10 + 8);
      (**(code **)(lVar10 + 0x10))
                (*(undefined8 *)(lVar10 + 8),lVar10,plVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
      bVar3 = *(char *)(unaff_x29 + -0xc) != '\0';
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



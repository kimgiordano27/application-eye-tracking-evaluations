/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 05830f84
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long lVar5;
  long unaff_x26;
  long unaff_x29;
  
  FUN_04077674(param_1,1);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc(*(long *)(unaff_x20 + 0x20));
  }
  FUN_03b2820c();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  plVar2 = (long *)thunk_FUN_040d6b00();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *plVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
    unaff_x23 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x21,unaff_x23,unaff_x22);
  if (lVar5 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    if (*(int *)(lVar5 + 0x18) != 0) {
      memmove((void *)(lVar5 + 0x20),unaff_x23,unaff_x22);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        FUN_04077538(lVar3,lVar5 + 0x20);
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        puVar4 = (undefined4 *)thunk_FUN_040d6b00();
        uVar1 = *puVar4;
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        thunk_FUN_040d6b00();
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        FUN_03b2ebac();
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return uVar1;
        }
        goto LAB_05831370;
      }
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
LAB_05831370:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



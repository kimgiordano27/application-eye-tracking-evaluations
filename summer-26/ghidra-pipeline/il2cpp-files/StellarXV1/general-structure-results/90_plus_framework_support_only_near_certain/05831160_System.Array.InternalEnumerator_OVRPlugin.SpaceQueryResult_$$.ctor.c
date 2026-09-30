/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05831160
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor(int *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  iVar1 = *param_1;
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0x28)) {
    unaff_x23 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x21,unaff_x23,unaff_x22);
  if (unaff_x24 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    uVar3 = iVar1 - 1;
    if (uVar3 < *(uint *)(unaff_x24 + 3)) {
      memmove((void *)((long)unaff_x24 +
                      (ulong)*(uint *)(*unaff_x24 + 0x104) * (long)(int)uVar3 + 0x20),unaff_x23,
              unaff_x22);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (uVar3 < *(uint *)(unaff_x24 + 3)) {
        FUN_04077538(lVar4,(long)unaff_x24 +
                           (ulong)*(uint *)(*unaff_x24 + 0x104) * (long)(int)uVar3 + 0x20);
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        puVar5 = (undefined4 *)thunk_FUN_040d6b00();
        uVar2 = *puVar5;
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        thunk_FUN_040d6b00();
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        FUN_03b2ebac();
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return uVar2;
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



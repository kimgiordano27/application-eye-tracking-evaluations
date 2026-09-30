/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 058310dc
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
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
          (undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined4 *puVar7;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long *plVar8;
  long unaff_x26;
  code *unaff_x27;
  long unaff_x29;
  
  FUN_040b1acc(param_1);
                    /* try { // try from 058310e4 to 0593114b has its CatchHandler @ 058311b0 */
  (*unaff_x27)();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  puVar4 = (undefined8 *)thunk_FUN_040d6b00();
  plVar8 = (long *)*puVar4;
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  piVar5 = (int *)thunk_FUN_040d6b00();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  iVar1 = *piVar5;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
    unaff_x23 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x21,unaff_x23,unaff_x22);
  if (plVar8 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    uVar3 = iVar1 - 1;
    if (uVar3 < *(uint *)(plVar8 + 3)) {
      memmove((void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar3 + 0x20),
              unaff_x23,unaff_x22);
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      if (uVar3 < *(uint *)(plVar8 + 3)) {
        FUN_04077538(lVar6,(long)plVar8 +
                           (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar3 + 0x20);
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        puVar7 = (undefined4 *)thunk_FUN_040d6b00();
        uVar2 = *puVar7;
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



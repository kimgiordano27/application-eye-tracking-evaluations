/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.BoneCapsule>
ENTRY_POINT: 01c8fe64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_BoneCapsule>(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar10;
  long lVar11;
  
                    /* try { // try from 01c8fe64 to 01d8fe6b has its CatchHandler @ 01c8fe74 */
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xe40));
                    /* try { // try from 01c8fe6c to 01d8fe77 has its CatchHandler @ 01c8fba8 */
  *(undefined1 *)(unaff_x20 + 0x840) = 1;
                    /* catch() { ... } // from try @ 01c8fe64 with catch @ 01c8fe74 */
  iVar1 = *(int *)(unaff_x19 + 0x10);
                    /* catch() { ... } // from try @ 01c8fec8 with catch @ 01c8fe78 */
  lVar11 = *(long *)(unaff_x19 + 0x20);
  if ((iVar1 == 2) || (iVar1 == 1)) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if ((lVar11 == 0) || (plVar5 = *(long **)(lVar11 + 0x20), plVar5 == (long *)0x0))
    goto LAB_01c900d8;
    (**(code **)(*plVar5 + 0x7d8))(plVar5,0,0,*(undefined8 *)(*plVar5 + 0x7e0));
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_01c900d8;
                    /* try { // try from 01c8fec4 to 01d8fec7 has its CatchHandler @ 01c8fed8 */
                    /* try { // try from 01c8fec8 to 01d8ff0b has its CatchHandler @ 01c8fe78 */
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x368);
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x28));
                    /* catch() { ... } // from try @ 01c8fec4 with catch @ 01c8fed8 */
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
    plVar5 = *(long **)(lVar11 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_01c900d8;
    (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
    FUN_01bd7168(0);
  }
  lVar9 = *(long *)(unaff_x19 + 0x28);
  if (lVar9 == 0) {
LAB_01c900d8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar1 = *(int *)(lVar9 + 0x18);
  if (iVar1 == 0) {
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(0x3e800000,uVar6,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
    uVar10 = 1;
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) goto LAB_01c900d8;
    uVar7 = *(uint *)(unaff_x19 + 0x30);
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01c900dc;
    lVar9 = *(long *)(lVar9 + 0x60);
    if (lVar9 == 0) goto LAB_01c900d8;
    uVar2 = *(uint *)(lVar8 + (long)(int)uVar7 * 0x178 + 0x58);
    if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01c900dc;
    lVar8 = lVar8 + (long)(int)uVar7 * 0x178;
    if (*(char *)(lVar8 + 0x194) != '\0') {
      lVar9 = *(long *)(lVar9 + (long)(int)uVar2 * 0x50 + 0x58);
      uVar7 = *(uint *)(lVar8 + 0x6c);
      uVar2 = FUN_0391a128(0,0xff,0);
      uVar3 = FUN_0391a128(0,0xff,0);
                    /* catch() { ... } // from try @ 01c90114 with catch @ 01c8ffa0 */
      iVar4 = FUN_0391a128(0,0xff,0);
      if (lVar9 == 0) goto LAB_01c900d8;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_01c900dc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar2 = uVar2 & 0xff | (uVar3 & 0xff) << 8 | iVar4 << 0x10 | 0xff000000;
      *(uint *)(lVar9 + (long)(int)uVar7 * 4 + 0x20) = uVar2;
      if (*(uint *)(lVar9 + 0x18) <= uVar7 + 1) goto LAB_01c900dc;
      *(uint *)(lVar9 + (long)(int)(uVar7 + 1) * 4 + 0x20) = uVar2;
      if (*(uint *)(lVar9 + 0x18) <= uVar7 + 2) goto LAB_01c900dc;
      *(uint *)(lVar9 + (long)(int)(uVar7 + 2) * 4 + 0x20) = uVar2;
      if (*(uint *)(lVar9 + 0x18) <= uVar7 + 3) goto LAB_01c900dc;
      *(uint *)(lVar9 + (long)(int)(uVar7 + 3) * 4 + 0x20) = uVar2;
      if ((lVar11 == 0) || (plVar5 = *(long **)(lVar11 + 0x20), plVar5 == (long *)0x0))
      goto LAB_01c900d8;
      (**(code **)(*plVar5 + 0x7f8))(plVar5,0x10,*(undefined8 *)(*plVar5 + 0x800));
      uVar7 = *(uint *)(unaff_x19 + 0x30);
    }
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = (int)(uVar7 + 1) / iVar1;
    }
    *(uint *)(unaff_x19 + 0x30) = (uVar7 + 1) - iVar4 * iVar1;
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(DAT_00b55428,uVar6,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
    uVar10 = 2;
  }
  thunk_FUN_01b4f09c(unaff_x19 + 0x18,uVar6);
  *(undefined4 *)(unaff_x19 + 0x10) = uVar10;
  return 1;
}



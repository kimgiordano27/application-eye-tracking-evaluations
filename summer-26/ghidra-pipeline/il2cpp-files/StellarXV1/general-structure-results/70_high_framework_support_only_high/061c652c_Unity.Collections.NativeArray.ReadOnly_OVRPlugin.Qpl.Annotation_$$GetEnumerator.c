/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 061c652c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__GetEnumerator(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  uint uVar9;
  int iVar10;
  
  *(undefined1 *)(unaff_x21 + 0x68) = 1;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  iVar4 = FUN_074e2fd8(0);
  if (lVar8 == 0) {
LAB_061c661c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar2 = *(uint *)(lVar8 + 0x18);
  if (0 < (int)uVar2) {
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = iVar4 / (int)uVar2;
    }
    iVar10 = 0;
    uVar9 = iVar4 - iVar3 * uVar2;
    do {
      if (uVar2 <= uVar9) {
LAB_061c6620:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_061c661c;
      thunk_FUN_040853fc(lVar7,0);
      if (*(int *)(lVar7 + 0x18) < 1) {
        thunk_FUN_0408541c(lVar7,0);
      }
      else {
        lVar6 = *(long *)(lVar7 + 0x10);
        uVar2 = *(int *)(lVar7 + 0x18) - 1;
        *(uint *)(lVar7 + 0x18) = uVar2;
        if (lVar6 == 0) goto LAB_061c661c;
        if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_061c6620;
        plVar5 = (long *)(lVar6 + (ulong)uVar2 * 8 + 0x20);
        lVar6 = *plVar5;
        *plVar5 = 0;
        thunk_FUN_040ec700(plVar5,0);
        thunk_FUN_0408541c(lVar7,0);
        if (lVar6 != 0) {
          return lVar6;
        }
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      iVar10 = iVar10 + 1;
      uVar1 = 0;
      if (uVar9 + 1 != uVar2) {
        uVar1 = uVar9 + 1;
      }
      uVar9 = uVar1;
    } while (iVar10 < (int)uVar2);
  }
  return 0;
}



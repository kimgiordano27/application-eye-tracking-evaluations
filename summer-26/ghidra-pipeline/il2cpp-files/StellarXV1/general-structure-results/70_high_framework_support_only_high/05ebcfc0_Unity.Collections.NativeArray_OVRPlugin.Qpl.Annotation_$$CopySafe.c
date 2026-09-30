/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 05ebcfc0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long *plVar9;
  
  puVar1 = PTR_DAT_092ba6e8;
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x10) = unaff_x21;
    thunk_FUN_040ec700();
    *(undefined8 *)(unaff_x20 + 0x18) = unaff_x22;
    thunk_FUN_040ec700();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0988ba6c == '\0') {
      FUN_04077588(PTR_DAT_092ba6e8);
      DAT_0988ba6c = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar3 = *(long *)puVar1;
    }
    if ((unaff_x21 != 0) && (plVar9 = *(long **)(unaff_x21 + 0x30), plVar9 != (long *)0x0)) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092ba698) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05ebd098;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092ba698,0);
LAB_05ebd098:
      uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      uVar5 = FUN_08ce5d04(uVar5,0);
      puVar2 = PTR_DAT_092b92f0;
      puVar1 = PTR_DAT_09285e40;
      if (lVar3 != 0) {
        FUN_08ce64b0(lVar3,uVar5,1,0);
        uVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
        FUN_075d444c();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_07303384(uVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



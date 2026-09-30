/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 04ec621c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_ReadOnlySpan<OVRPlugin_Vector2f>__ToArray(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x19 + 0x90a) = 1;
  puVar1 = PTR_DAT_0759c160;
  plVar8 = (long *)(unaff_x20 + 0x18);
  if (*plVar8 == 0) {
    plVar2 = (long *)thunk_FUN_0322f04c(*(undefined8 *)(unaff_x20 + 0x10),
                                        *(undefined8 *)PTR_DAT_0759c160);
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 04ec629c to 04fc638b has its CatchHandler @ 04ec6398 */
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759f770);
      FUN_05e44034(uVar4,0);
      FUN_0322b90c(plVar8,uVar4,0);
    }
    else {
                    /* catch() { ... } // from try @ 04ec638c with catch @ 04ec624c
                       catch() { ... } // from try @ 04ec63c8 with catch @ 04ec624c
                       catch() { ... } // from try @ 04ec6404 with catch @ 04ec624c
                       catch() { ... } // from try @ 04ec6430 with catch @ 04ec624c
                       catch() { ... } // from try @ 04ec64a4 with catch @ 04ec624c */
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_04ec62d0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 04ec6280 to 04fc6283 has its CatchHandler @ 04ec638c */
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar2,*(long *)puVar1,2);
LAB_04ec62d0:
      lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      *plVar8 = lVar5;
      thunk_FUN_0329bf60(plVar8,lVar5);
    }
  }
  return *plVar8;
}



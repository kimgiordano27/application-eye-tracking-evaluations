/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch7radiusx
ENTRY_POINT: 05669088
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch7radiusx
               (undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x19;
  long lVar11;
  
                    /* try { // try from 05669088 to 0576908f has its CatchHandler @ 056693f0 */
  *(undefined8 *)(unaff_x19 + 0x28) = param_1;
  lVar6 = thunk_FUN_02b79548();
  if (lVar6 == 0) {
LAB_05669298:
                    /* try { // try from 05669298 to 0576935b has its CatchHandler @ 05668cbc */
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),lVar6);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    bVar4 = FUN_04c8cef8(*(long *)(unaff_x19 + 0x40),
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_TypeInfo
                         ,0);
                    /* try { // try from 056690e8 to 057690ef has its CatchHandler @ 0566941c */
    *(byte *)(unaff_x19 + 0x30) = bVar4 & 1;
    puVar3 = PTR_DAT_06321760;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* try { // try from 056690fc to 05769103 has its CatchHandler @ 05669414 */
      uVar5 = FUN_04c8d044(*(long *)(unaff_x19 + 0x40),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                           ,0);
      uVar10 = *(undefined8 *)puVar3;
      lVar6 = *(long *)(unaff_x19 + 0x40);
                    /* try { // try from 05669114 to 0576911b has its CatchHandler @ 056693e4 */
      *(undefined4 *)(unaff_x19 + 0x20) = uVar5;
      uVar10 = FUN_04d8a7b0(uVar10,0);
      if (lVar6 != 0) {
                    /* try { // try from 05669128 to 0576912f has its CatchHandler @ 056693e8 */
                    /* try { // try from 0566913c to 05769143 has its CatchHandler @ 056693d0 */
        lVar6 = FUN_04c8ae78(lVar6,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                             ,uVar10,0);
        if (lVar6 != 0) {
                    /* try { // try from 05669150 to 05769157 has its CatchHandler @ 056693cc */
          lVar6 = thunk_FUN_02b79548(lVar6,*(undefined8 *)PTR_DAT_06313048);
          puVar3 = PTR_DAT_06322660;
          if (lVar6 == 0) goto LAB_05669298;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (0 < (int)uVar2) {
                    /* try { // try from 05669174 to 0576917b has its CatchHandler @ 05669404 */
            lVar11 = 0;
            do {
                    /* try { // try from 05669188 to 0576918f has its CatchHandler @ 05669400 */
              if (uVar2 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar7 = *(long **)(lVar6 + 0x20 + lVar11 * 8);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05669240 to 0576925f has its CatchHandler @ 0566943c */
                FUN_02b3cac4();
              }
                    /* try { // try from 056691a0 to 057691a7 has its CatchHandler @ 056693d4 */
              if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44();
              }
              puVar8 = (undefined8 *)thunk_FUN_02b7978c();
              uVar10 = *puVar8;
              uVar1 = puVar8[1];
                    /* try { // try from 056691b4 to 057691bb has its CatchHandler @ 056693dc */
              plVar7 = (long *)FUN_05668164();
                    /* try { // try from 056691c8 to 057691cf has its CatchHandler @ 056693c8 */
              uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar3);
              if (plVar7 == (long *)0x0) goto LAB_0566923c;
                    /* try { // try from 056691e4 to 057691eb has its CatchHandler @ 0566940c */
              (**(code **)(*plVar7 + 0x308))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x310));
              plVar7 = (long *)FUN_056682bc();
              if (plVar7 == (long *)0x0) goto LAB_0566923c;
                    /* try { // try from 056691fc to 0576921f has its CatchHandler @ 05669440 */
              (**(code **)(*plVar7 + 0x2a8))(plVar7,uVar10,uVar1,*(undefined8 *)(*plVar7 + 0x2b0));
              uVar2 = *(uint *)(lVar6 + 0x18);
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < (int)uVar2);
          }
        }
                    /* try { // try from 0566922c to 05769233 has its CatchHandler @ 05669410 */
        return;
      }
    }
  }
LAB_0566923c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



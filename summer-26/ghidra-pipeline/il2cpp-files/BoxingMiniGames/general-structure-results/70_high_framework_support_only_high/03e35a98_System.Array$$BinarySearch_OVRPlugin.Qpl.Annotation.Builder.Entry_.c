/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03e35a98
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__BinarySearch<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000178;
  
  puVar1 = (undefined8 *)FUN_0367cd30(param_1,param_2,0);
  uVar2 = (*(code *)*puVar1)();
  plVar4 = in_stack_00000178;
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
    lVar3 = thunk_FUN_0367fd24(in_stack_00000178,DAT_07b68d08);
    lVar5 = DAT_07b68d08;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar4 = (long *)thunk_FUN_0367fd24(plVar4,DAT_07b68d08);
                    /* try { // try from 03e35afc to 03f35b03 has its CatchHandler @ 03e35ca4 */
    uVar7 = thunk_FUN_0367fd24(uVar7,DAT_07b68d08);
    lVar3 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 03e35b24 to 03f35b2f has its CatchHandler @ 03e35ca8 */
        if (*(long *)(piVar6 + -2) == lVar5) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_03e35da8;
        }
                    /* try { // try from 03e35b30 to 03f35b67 has its CatchHandler @ 03e35958 */
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar4,lVar5,4);
LAB_03e35da8:
    _in_stack_00000060 = (*(code *)*puVar1)(plVar4,uVar7,puVar1[1]);
    plVar4 = in_stack_00000178;
    if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar3 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar5) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e35e58;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar4,lVar5,0);
LAB_03e35e58:
    (*(code *)*puVar1)(plVar4);
    FUN_07253298(&stack0x00000060,0);
  }
  return;
}



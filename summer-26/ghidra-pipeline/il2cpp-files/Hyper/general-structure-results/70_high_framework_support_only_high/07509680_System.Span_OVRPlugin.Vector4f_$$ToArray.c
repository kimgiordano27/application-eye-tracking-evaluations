/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 07509680
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector4f>__ToArray(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 1) * 0x10 + 0x138);
      goto LAB_075096f4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_075096f4:
  iVar1 = (*(code *)*puVar2)();
  FUN_075091ec();
  lVar3 = *unaff_x22;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 07509740 to 07609a67 has its CatchHandler @ 07509740
                       catch() { ... } // from try @ 07509740 with catch @ 07509740
                       catch() { ... } // from try @ 07509ad0 with catch @ 07509740
                       catch() { ... } // from try @ 07509b78 with catch @ 07509740
                       catch() { ... } // from try @ 07509bc4 with catch @ 07509740
                       catch() { ... } // from try @ 07509c1c with catch @ 07509740 */
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_07509774;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_07509774:
  (*(code *)*puVar2)();
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + iVar1;
  return;
}



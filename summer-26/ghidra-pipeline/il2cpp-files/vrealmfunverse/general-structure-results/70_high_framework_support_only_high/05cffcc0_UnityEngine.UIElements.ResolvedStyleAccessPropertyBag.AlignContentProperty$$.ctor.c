/*
FUNCTION_NAME: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag.AlignContentProperty$$.ctor
ENTRY_POINT: 05cffcc0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__;
                    /* try { // try from 05cffcd4 to 05dffcfb has its CatchHandler @ 05cfffa8 */
  uVar3 = FUN_05c96dc4(0);
  uVar7 = _UNK_01035b58;
  uVar6 = _DAT_01035b50;
  uVar9 = _UNK_010357e8;
  uVar8 = _DAT_010357e0;
  uVar11 = _UNK_01035188;
  uVar10 = _DAT_01035180;
  uVar13 = _UNK_01033b88;
  uVar12 = _DAT_01033b80;
  lVar5 = 0;
  *(undefined4 *)(unaff_x22 + 0x18) = uVar3;
  do {
    if (uVar12 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x1c) = 0;
    }
    if (uVar13 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x1d) = 0;
    }
    if (uVar10 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x1e) = 0;
    }
    if (uVar11 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x1f) = 0;
    }
    if (uVar8 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x20) = 0;
    }
    if (uVar9 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x21) = 0;
    }
    if (uVar6 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x22) = 0;
    }
    if (uVar7 < 0x28) {
      *(undefined1 *)(unaff_x22 + lVar5 + 0x23) = 0;
    }
    uVar8 = uVar8 + 8;
    uVar9 = uVar9 + 8;
    uVar10 = uVar10 + 8;
    uVar11 = uVar11 + 8;
    lVar5 = lVar5 + 8;
    uVar12 = uVar12 + 8;
    uVar13 = uVar13 + 8;
    uVar6 = uVar6 + 8;
    uVar7 = uVar7 + 8;
  } while (lVar5 != 0x28);
  lVar5 = *unaff_x20;
  *(undefined4 *)(unaff_x22 + 0x44) = 0;
  if (lVar5 != 0) {
    lVar4 = *(long *)puVar1;
    *(undefined1 *)(lVar5 + 0x48) = 1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cffebc(unaff_x19 + 0x70);
    *(undefined2 *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0x9c) = 0;
    FUN_05cffebc(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    *(undefined8 *)(unaff_x19 + 0xd8) = 0;
    *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 *)(unaff_x19 + 0xe0) = 0;
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      FUN_0444eb38(*(long *)(unaff_x19 + 0xf8),*(undefined8 *)puVar2);
      *(undefined4 *)(unaff_x19 + 0x100) = 0;
      FUN_05cffebc(unaff_x19 + 0x108);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



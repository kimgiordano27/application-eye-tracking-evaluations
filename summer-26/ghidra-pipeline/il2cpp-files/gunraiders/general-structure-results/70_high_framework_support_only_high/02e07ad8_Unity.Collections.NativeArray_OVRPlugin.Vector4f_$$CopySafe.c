/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 02e07ad8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  iVar1 = (*(code *)*param_1)();
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 02e07b88 to 02f07baf has its CatchHandler @ 02e07bc4 */
      thunk_FUN_01c1d1e8();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar4 + 0xb8);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x18);
                    /* try { // try from 02e07af8 to 02f07afb has its CatchHandler @ 02e07b24 */
                    /* try { // try from 02e07afc to 02f07aff has its CatchHandler @ 02e07b1c */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 02e07b00 to 02f07b03 has its CatchHandler @ 02e07b24 */
      lVar4 = FUN_01c72394();
    }
                    /* try { // try from 02e07b04 to 02f07b07 has its CatchHandler @ 02e07814 */
                    /* try { // try from 02e07b08 to 02f07b0b has its CatchHandler @ 02e07b14 */
    uVar2 = FUN_01c5d2fc(lVar4,iVar1);
                    /* try { // try from 02e07b0c to 02f07b3f has its CatchHandler @ 02e07814 */
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e07b08 with catch @ 02e07b14
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e07a18 with catch @ 02e07b18
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e07afc with catch @ 02e07b1c
                        */
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e0793c with catch @ 02e07b20
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e07af8 with catch @ 02e07b24
                       catch(type#1 @ 04025298) { ... } // from try @ 02e07b00 with catch @ 02e07b24
                        */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e0797c with catch @ 02e07b28
                        */
      lVar4 = FUN_01c72394(lVar4);
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 02e07b40 to 02f07b43 has its CatchHandler @ 02e07b50 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 02e07b40 with catch @ 02e07b50 */
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_02e07bc4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_02e07bc4:
    (*(code *)*puVar3)();
    *(int *)(unaff_x19 + 0x18) = iVar1;
  }
  return;
}



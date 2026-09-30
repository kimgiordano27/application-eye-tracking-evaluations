/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin$$SerializeSkeletonAndFace
ENTRY_POINT: 06dac75c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_Movement_NativeUtilityPlugin__SerializeSkeletonAndFace(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0xf70);
  if ((*(byte *)(unaff_x20 + 0xaf5) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e68ce0);
    FUN_03c8f898(PTR_DAT_08e8ff70);
    *(undefined1 *)(unaff_x20 + 0xaf5) = 1;
  }
  lVar6 = thunk_FUN_03cf5234(*puVar9);
  FUN_06dae34c(lVar6,0);
  puVar2 = PTR_DAT_08e68ce0;
  if (lVar6 == 0) {
LAB_06dac980:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar3 = 1;
                    /* try { // try from 06dac7b8 to 06eac863 has its CatchHandler @ 06dac7b8
                       catch() { ... } // from try @ 06dac7b8 with catch @ 06dac7b8
                       catch() { ... } // from try @ 06dac888 with catch @ 06dac7b8
                       catch() { ... } // from try @ 06dac8bc with catch @ 06dac7b8
                       catch() { ... } // from try @ 06dac8e4 with catch @ 06dac7b8
                       catch() { ... } // from try @ 06dac924 with catch @ 06dac7b8 */
  if (((*(uint *)(param_1 + 0x3c) ^ 0xffffffff) & 0xc0) != 0) {
    uVar3 = 2;
  }
  *(undefined4 *)(lVar6 + 0x18) = uVar3;
  uVar3 = FUN_06dac09c(param_1);
  *(undefined4 *)(lVar6 + 0x14) = uVar3;
  uVar3 = FUN_06dac99c(param_1);
  *(undefined4 *)(lVar6 + 0x10) = uVar3;
  lVar7 = FUN_03c8f97c(*(undefined8 *)puVar2,0x1a);
  iVar4 = Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_0__<ProcessType>b__0
                    (param_1,0x24,lVar7);
  if (iVar4 == 0x1a) {
    if (lVar7 == 0) goto LAB_06dac980;
    uVar1 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 06dac864 to 06eac86b has its CatchHandler @ 06dac8c8 */
                    /* try { // try from 06dac880 to 06eac887 has its CatchHandler @ 06dac8c4 */
                    /* try { // try from 06dac888 to 06eac8b7 has its CatchHandler @ 06dac7b8 */
                    /* try { // try from 06dac8b8 to 06eac8bb has its CatchHandler @ 06dac8c0 */
                    /* try { // try from 06dac8bc to 06eac8df has its CatchHandler @ 06dac7b8 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06dac8b8 with catch @ 06dac8c0
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06dac880 with catch @ 06dac8c4
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06dac864 with catch @ 06dac8c8
                        */
                    /* try { // try from 06dac8e0 to 06eac8e3 has its CatchHandler @ 06dac90c */
                    /* try { // try from 06dac8e4 to 06eac91b has its CatchHandler @ 06dac7b8 */
                    /* catch() { ... } // from try @ 06dac8e0 with catch @ 06dac90c */
                    /* try { // try from 06dac91c to 06eac923 has its CatchHandler @ 06dac938 */
    if (((((((uVar1 < 5) || (uVar1 == 5)) || (uVar1 < 7)) ||
          (((uVar1 == 7 ||
            (*(uint *)(lVar6 + 0x28) =
                  ((*(ushort *)(lVar7 + 0x26) & 0xff00) << 8 |
                  (uint)*(ushort *)(lVar7 + 0x26) << 0x18) >> 0x10, uVar1 < 9)) ||
           ((uVar1 == 9 ||
            ((*(uint *)(lVar6 + 0x24) =
                   ((*(ushort *)(lVar7 + 0x28) & 0xff00) << 8 |
                   (uint)*(ushort *)(lVar7 + 0x28) << 0x18) >> 0x10, uVar1 < 0xb || (uVar1 == 0xb)))
            ))))) ||
         ((uVar1 < 0xd ||
          (((uVar1 == 0xd ||
            (*(uint *)(lVar6 + 0x20) =
                  (uint)*(byte *)(lVar7 + 0x2a) << 0x18 | (uint)*(byte *)(lVar7 + 0x2b) << 0x10 |
                  (uint)*(byte *)(lVar7 + 0x2c) << 8 | (uint)*(byte *)(lVar7 + 0x2d), uVar1 < 0xf))
           || (uVar1 == 0xf)))))) ||
        (((uVar1 < 0x11 || (uVar1 == 0x11)) ||
         (((*(uint *)(lVar6 + 0x1c) =
                 (uint)*(byte *)(lVar7 + 0x2e) << 0x18 | (uint)*(byte *)(lVar7 + 0x2f) << 0x10 |
                 (uint)*(byte *)(lVar7 + 0x30) << 8 | (uint)*(byte *)(lVar7 + 0x31), uVar1 < 0x13 ||
           ((uVar1 == 0x13 || (uVar1 < 0x15)))) || (uVar1 == 0x15)))))) ||
       ((((uVar1 < 0x17 || (uVar1 == 0x17)) || (uVar1 < 0x19)) || (uVar1 == 0x19)))) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
                    /* try { // try from 06dac924 to 06eac92f has its CatchHandler @ 06dac7b8 */
                    /* try { // try from 06dac930 to 06eac937 has its CatchHandler @ 06dac938 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06dac91c with catch @ 06dac938
                       catch(type#2 @ 00000000) { ... } // from try @ 06dac930 with catch @ 06dac938
                        */
    iVar4 = (uint)CONCAT11(*(undefined1 *)(lVar7 + 0x36),*(undefined1 *)(lVar7 + 0x37)) *
            (uint)CONCAT11(*(undefined1 *)(lVar7 + 0x32),*(undefined1 *)(lVar7 + 0x33));
    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,iVar4);
    iVar5 = Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_0__<ProcessType>b__0
                      (param_1,0x3e,uVar8);
    if (iVar5 != iVar4) {
      lVar6 = 0;
    }
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}



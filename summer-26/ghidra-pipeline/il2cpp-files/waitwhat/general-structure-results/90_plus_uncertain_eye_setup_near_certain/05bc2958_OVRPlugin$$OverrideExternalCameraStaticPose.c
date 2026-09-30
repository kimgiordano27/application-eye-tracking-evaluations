/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 05bc2958
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar1 = PTR_DAT_07112228;
                    /* try { // try from 05bc295c to 05cc2967 has its CatchHandler @ 05bc2b50 */
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 05bc2978 to 05cc297f has its CatchHandler @ 05bc2b44 */
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07112228) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05bc29ac;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08();
LAB_05bc29ac:
  plVar7 = (long *)(*(code *)*puVar6)();
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 05bc29c0 to 05cc29c7 has its CatchHandler @ 05bc2b64 */
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_071122b8) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05bc2a14;
        }
                    /* try { // try from 05bc29ec to 05cc29f3 has its CatchHandler @ 05bc2b68 */
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 05bc2a00 to 05cc2a03 has its CatchHandler @ 05bc2b7c */
    puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)PTR_DAT_071122b8,0);
                    /* try { // try from 05bc2a04 to 05cc2a0b has its CatchHandler @ 05bc2b6c */
LAB_05bc2a14:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar2 = PTR_DAT_07112248;
    if (unaff_x19 != (long *)0x0) {
                    /* try { // try from 05bc2a24 to 05cc2a2b has its CatchHandler @ 05bc2b90 */
      lVar8 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07112248) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_05bc2a80;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08();
LAB_05bc2a80:
      uVar9 = (*(code *)*puVar6)();
      if ((uVar9 & 1) == 0) {
        bVar3 = false;
      }
      else {
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_05bc2aec;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08();
LAB_05bc2aec:
        uVar4 = (*(code *)*puVar6)();
        lVar8 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto LAB_05bc2b4c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08();
LAB_05bc2b4c:
        uVar5 = (*(code *)*puVar6)();
        bVar3 = (uVar5 & uVar4) != 0;
      }
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05bc2924 with catch @ 05bc2b70
                       catch() { ... } // from try @ 05bc2b04 with catch @ 05bc2b70 */
  FUN_03188cd8();
}



/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 076df698
PROGRAM: m3ar-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x076df998) */

void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
                    /* try { // try from 076df69c to 077df6ab has its CatchHandler @ 076deca0 */
                    /* catch() { ... } // from try @ 076df68c with catch @ 076df6a4 */
                    /* catch() { ... } // from try @ 076df488 with catch @ 076df6a8 */
                    /* try { // try from 076df6ac to 077df6af has its CatchHandler @ 076df70c */
                    /* try { // try from 076df6b0 to 077df6d7 has its CatchHandler @ 076deca0 */
  if ((DAT_0954828c & 1) == 0) {
                    /* catch() { ... } // from try @ 076df580 with catch @ 076df6b8 */
                    /* catch() { ... } // from try @ 076df56c with catch @ 076df6bc */
    FUN_0403162c(PTR_DAT_08fae258);
    FUN_0403162c(PTR_DAT_08f65868);
                    /* try { // try from 076df6d8 to 077df6db has its CatchHandler @ 076df6fc */
    FUN_0403162c(PTR_DAT_08fae260);
                    /* try { // try from 076df6dc to 077df6ff has its CatchHandler @ 076deca0 */
    FUN_0403162c(PTR_DAT_08fae268);
    FUN_0403162c(PTR_DAT_08f65880);
                    /* catch() { ... } // from try @ 076df6d8 with catch @ 076df6fc */
    FUN_0403162c(PTR_DAT_08fae270);
                    /* try { // try from 076df700 to 077df707 has its CatchHandler @ 076df70c */
    DAT_0954828c = 1;
  }
                    /* catch() { ... } // from try @ 076df6ac with catch @ 076df70c
                       catch() { ... } // from try @ 076df700 with catch @ 076df70c */
  if ((char)param_1[8] == '\0') {
    return;
  }
  plVar11 = (long *)param_1[5];
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fae260) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_076df770;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fae260,0);
LAB_076df770:
  puVar4 = PTR_DAT_08fae270;
  puVar3 = PTR_DAT_08fae268;
  puVar2 = PTR_DAT_08fae258;
  puVar1 = PTR_DAT_08f65880;
  plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
  do {
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076df7fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar1,0);
LAB_076df7fc:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_076df944;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076df860;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar3,0);
LAB_076df860:
    plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
    if ((param_1 == (long *)0x0) ||
       (FUN_0532a918(uVar7,param_1,*(undefined8 *)(*param_1 + 0x180),0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_076df8e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar4,1);
LAB_076df8e8:
    (*(code *)*puVar5)(plVar6,uVar7,puVar5[1]);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076df960;
    }
  }
LAB_076df944:
  puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f65868,0);
LAB_076df960:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
  return;
}



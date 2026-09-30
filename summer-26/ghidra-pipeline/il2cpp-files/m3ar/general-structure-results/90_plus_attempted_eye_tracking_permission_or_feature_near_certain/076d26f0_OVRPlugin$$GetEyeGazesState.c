/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 076d26f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  long in_x9;
  ulong uVar12;
  undefined4 *puVar13;
  long in_x10;
  long lVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar18;
  undefined8 uVar19;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  piVar15 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar15 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar15 + 2) * 0x10 + 0x138);
      goto LAB_076d27b8;
    }
                    /* try { // try from 076d2700 to 077d2703 has its CatchHandler @ 076d2ba0 */
    in_x9 = in_x9 + -1;
                    /* try { // try from 076d2704 to 077d271b has its CatchHandler @ 076d2bfc */
    piVar15 = piVar15 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_0406ae20();
LAB_076d27b8:
  uVar7 = (*(code *)*puVar6)();
  lVar14 = *(long *)(unaff_x19 + 0x68);
  in_stack_00000018 = uVar7;
  if ((lVar14 != 0) && (plVar18 = *(long **)(unaff_x19 + 0x50), plVar18 != (long *)0x0)) {
                    /* try { // try from 076d27e0 to 077d27e3 has its CatchHandler @ 076d2bb0 */
    lVar10 = *plVar18;
                    /* try { // try from 076d27e4 to 077d27ef has its CatchHandler @ 076d2bf0 */
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar14 + 0x10);
    uVar19 = *(undefined8 *)(lVar14 + 0x18);
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 076d2808 to 077d280b has its CatchHandler @ 076d2bc8 */
                    /* try { // try from 076d280c to 077d2823 has its CatchHandler @ 076d2c14 */
        if (*(long *)(piVar15 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_076d2840;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar18,*unaff_x26,1);
LAB_076d2840:
                    /* try { // try from 076d2840 to 077d2857 has its CatchHandler @ 076d2bc0 */
    bVar5 = (*(code *)*puVar6)(plVar18,uVar2,unaff_w20,uVar3,uVar19,puVar6[1]);
                    /* try { // try from 076d2860 to 077d28cb has its CatchHandler @ 076d2be8 */
    if ((uVar7 & 0xff) == 0) {
      uVar19 = *(undefined8 *)PTR_DAT_08f90e98;
    }
    else {
      uStack0000000000000014 = FUN_05b9d5b8(&stack0x00000018,*(undefined8 *)PTR_DAT_08f678c0);
      uVar19 = FUN_074f79d4((long)&stack0x00000010 + 4,*(undefined8 *)PTR_DAT_08f66350,0);
    }
    plVar18 = *(long **)(unaff_x19 + 0x48);
    lVar14 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f65db8,5);
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar8 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf08,&stack0x00000010);
                    /* try { // try from 076d28f0 to 077d28f3 has its CatchHandler @ 076d2b98 */
                    /* try { // try from 076d28f4 to 077d28ff has its CatchHandler @ 076d2bd4 */
    uVar9 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf00,&stack0x0000000c);
                    /* try { // try from 076d2918 to 077d291b has its CatchHandler @ 076d2b90 */
                    /* try { // try from 076d291c to 077d2933 has its CatchHandler @ 076d2bdc */
    uVar8 = FUN_0736a294(*(undefined8 *)PTR_DAT_08f6df48,uVar8,uVar9,0);
    if (lVar14 != 0) {
      uVar4 = *(uint *)(lVar14 + 0x18);
      if ((((uVar4 == 0) || (*(undefined8 *)(lVar14 + 0x20) = uVar8, uVar4 == 1)) ||
          (*(undefined8 *)(lVar14 + 0x28) = in_stack_00000028, uVar4 < 3)) ||
         ((*(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_08f8ef88, uVar4 == 3 ||
          (*(undefined8 *)(lVar14 + 0x38) = uVar19, uVar4 < 5)))) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_08f6f888;
      uVar19 = FUN_07369f9c(lVar14,0);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x558))(plVar18,uVar19,*(undefined8 *)(*plVar18 + 0x560));
        if (*(byte *)(unaff_x19 + 0x60) != (bVar5 & 1)) {
          bVar1 = (bVar5 & 1) == 0;
          if (bVar1) {
            puVar11 = (undefined4 *)(unaff_x19 + 0x28);
            puVar13 = (undefined4 *)(unaff_x19 + 0x2c);
            puVar16 = (undefined4 *)(unaff_x19 + 0x30);
            puVar17 = (undefined4 *)(unaff_x19 + 0x34);
          }
          else {
            puVar11 = (undefined4 *)(unaff_x19 + 0x38);
            puVar13 = (undefined4 *)(unaff_x19 + 0x3c);
            puVar16 = (undefined4 *)(unaff_x19 + 0x40);
            puVar17 = (undefined4 *)(unaff_x19 + 0x44);
          }
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_076d2a28;
          FUN_085503b8(*puVar11,*puVar13,*puVar16,*puVar17,*(long *)(unaff_x19 + 0x58),0);
          *(byte *)(unaff_x19 + 0x60) = !bVar1;
        }
        return;
      }
    }
  }
LAB_076d2a28:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



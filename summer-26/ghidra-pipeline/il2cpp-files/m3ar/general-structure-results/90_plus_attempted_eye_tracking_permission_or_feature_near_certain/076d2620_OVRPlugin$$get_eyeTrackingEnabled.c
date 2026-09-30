/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 076d2620
PROGRAM: m3ar-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long unaff_x19;
  long unaff_x20;
  undefined1 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_0403162c(PTR_DAT_08f8ef88);
                    /* try { // try from 076d2630 to 077d2647 has its CatchHandler @ 076d2b8c */
  *(undefined1 *)(unaff_x20 + 0x236) = 1;
  puVar5 = PTR_DAT_08fad0e8;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  uStack0000000000000014 = 0;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    return;
  }
                    /* try { // try from 076d2650 to 077d26bb has its CatchHandler @ 076d2ba4 */
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (plVar20 = *(long **)(unaff_x19 + 0x50), plVar20 == (long *)0x0)) goto LAB_076d2a28;
  lVar10 = *plVar20;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x14);
  uVar2 = *(undefined4 *)(unaff_x19 + 100);
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08fad0e8) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_076d26b4;
      }
      uVar13 = uVar13 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_0406ae20(plVar20,*(long *)PTR_DAT_08fad0e8,0);
LAB_076d26b4:
  uVar13 = (*(code *)*puVar7)(plVar20,uVar2,uVar1,&stack0x00000028,puVar7[1]);
  if ((uVar13 & 1) == 0) {
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    plVar20 = *(long **)(unaff_x19 + 0x48);
    uVar21 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf08,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar8 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf00,(long)&stack0x00000008 + 4);
    uVar21 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadf10,uVar21,uVar8,0);
    if (plVar20 == (long *)0x0) goto LAB_076d2a28;
    (**(code **)(*plVar20 + 0x558))(plVar20,uVar21,*(undefined8 *)(*plVar20 + 0x560));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar10 = *(long *)(unaff_x19 + 0x58);
LAB_076d29d8:
    uVar19 = 0;
    puVar12 = (undefined4 *)(unaff_x19 + 0x28);
    puVar15 = (undefined4 *)(unaff_x19 + 0x2c);
    puVar17 = (undefined4 *)(unaff_x19 + 0x30);
    puVar18 = (undefined4 *)(unaff_x19 + 0x34);
  }
  else {
    plVar20 = *(long **)(unaff_x19 + 0x50);
    if (plVar20 == (long *)0x0) goto LAB_076d2a28;
                    /* try { // try from 076d26d8 to 077d26db has its CatchHandler @ 076d2ba8 */
    lVar11 = *plVar20;
                    /* try { // try from 076d26dc to 077d26e7 has its CatchHandler @ 076d2c0c */
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    lVar10 = *(long *)puVar5;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_076d27b8;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar20,lVar10,2);
LAB_076d27b8:
    uVar13 = (*(code *)*puVar7)(plVar20,uVar2,uVar1,puVar7[1]);
    lVar10 = *(long *)(unaff_x19 + 0x68);
    in_stack_00000018 = uVar13;
    if ((lVar10 == 0) || (plVar20 = *(long **)(unaff_x19 + 0x50), plVar20 == (long *)0x0))
    goto LAB_076d2a28;
    lVar11 = *plVar20;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar10 + 0x10);
    uVar21 = *(undefined8 *)(lVar10 + 0x18);
    lVar10 = *(long *)puVar5;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_076d2840;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar20,lVar10,1);
LAB_076d2840:
    bVar6 = (*(code *)*puVar7)(plVar20,uVar2,uVar1,uVar3,uVar21,puVar7[1]);
    if ((uVar13 & 0xff) == 0) {
      uVar21 = *(undefined8 *)PTR_DAT_08f90e98;
    }
    else {
      uStack0000000000000014 = FUN_05b9d5b8(&stack0x00000018,*(undefined8 *)PTR_DAT_08f678c0);
      uVar21 = FUN_074f79d4(&stack0x00000014,*(undefined8 *)PTR_DAT_08f66350,0);
    }
    plVar20 = *(long **)(unaff_x19 + 0x48);
    lVar10 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f65db8,5);
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar8 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf08,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar9 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf00,(long)&stack0x00000008 + 4);
    uVar8 = FUN_0736a294(*(undefined8 *)PTR_DAT_08f6df48,uVar8,uVar9,0);
    if (lVar10 == 0) goto LAB_076d2a28;
    uVar4 = *(uint *)(lVar10 + 0x18);
    if ((((uVar4 == 0) || (*(undefined8 *)(lVar10 + 0x20) = uVar8, uVar4 == 1)) ||
        (*(undefined8 *)(lVar10 + 0x28) = in_stack_00000028, uVar4 < 3)) ||
       ((*(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_08f8ef88, uVar4 == 3 ||
        (*(undefined8 *)(lVar10 + 0x38) = uVar21, uVar4 < 5)))) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_08f6f888;
    uVar21 = FUN_07369f9c(lVar10,0);
    if (plVar20 == (long *)0x0) goto LAB_076d2a28;
    (**(code **)(*plVar20 + 0x558))(plVar20,uVar21,*(undefined8 *)(*plVar20 + 0x560));
    if (*(byte *)(unaff_x19 + 0x60) == (bVar6 & 1)) {
      return;
    }
    lVar10 = *(long *)(unaff_x19 + 0x58);
    if ((bVar6 & 1) == 0) goto LAB_076d29d8;
    puVar12 = (undefined4 *)(unaff_x19 + 0x38);
    puVar15 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar17 = (undefined4 *)(unaff_x19 + 0x40);
    puVar18 = (undefined4 *)(unaff_x19 + 0x44);
    uVar19 = 1;
  }
  if (lVar10 != 0) {
    FUN_085503b8(*puVar12,*puVar15,*puVar17,*puVar18,lVar10,0);
    *(undefined1 *)(unaff_x19 + 0x60) = uVar19;
    return;
  }
LAB_076d2a28:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



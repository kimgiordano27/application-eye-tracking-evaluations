/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 063ab350
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__EncodeMrcFrame(ulong param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6e20);
    FUN_0373b518(PTR_DAT_07db6c00);
    FUN_0373b518(PTR_DAT_07db2190);
    FUN_0373b518(PTR_DAT_07db6dc8);
    FUN_0373b518(PTR_DAT_07db6dd8);
    FUN_0373b518(PTR_DAT_07db6de8);
    FUN_0373b518(PTR_DAT_07db6eb0);
    FUN_0373b518(PTR_DAT_07db6e00);
    *(undefined1 *)(unaff_x25 + 0x6ac) = 1;
  }
  if (*(char *)(param_2 + 0x1a) == '\0') {
    uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
    if ((uVar2 & 1) == 0) {
      uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 063ab56c to 064ab56f has its CatchHandler @ 063ab720 */
        uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
        if ((uVar2 & 1) == 0) {
          uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
          if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 063ab5a4 with catch @ 063ab748 */
                    /* catch() { ... } // from try @ 063ab5bc with catch @ 063ab74c */
            uVar2 = FUN_063349dc();
            if ((uVar2 & 1) == 0) {
              if (unaff_x22 == 0) goto LAB_063ab8dc;
                    /* try { // try from 063ab764 to 064ab767 has its CatchHandler @ 063ab774 */
              uVar3 = FUN_060bb390();
              if (((uint)uVar3 & 0xffff) == 0x3f) {
                    /* catch() { ... } // from try @ 063ab764 with catch @ 063ab774 */
                    /* try { // try from 063ab780 to 064ab787 has its CatchHandler @ 063ab79c */
                    /* try { // try from 063ab788 to 064ab793 has its CatchHandler @ 063ab4bc */
                    /* try { // try from 063ab794 to 064ab79b has its CatchHandler @ 063ab79c */
                FUN_063abf90(uVar3,param_3,param_4);
                return;
              }
            }
                    /* catch() { ... } // from try @ 063ab780 with catch @ 063ab79c
                       catch() { ... } // from try @ 063ab794 with catch @ 063ab79c */
            uVar2 = FUN_060bf6bc();
            if ((uVar2 & 1) != 0) {
              FUN_063ac458(uVar2,param_3,param_4);
              return;
            }
            goto LAB_063ab3d4;
          }
          if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar3 = FUN_063ab8e0(param_3);
          if (param_4 == (long *)0x0) goto LAB_063ab8dc;
          lVar5 = *param_4;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6e20) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_063ab84c;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_0377596c(param_4,*(long *)PTR_DAT_07db6e20,4);
LAB_063ab84c:
          (*(code *)*puVar4)(param_4,uVar3,puVar4[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_063ab8dc;
          lVar5 = *unaff_x19;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ab8ac;
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar3 = FUN_063ab8e0(param_3);
          if (param_4 == (long *)0x0) goto LAB_063ab8dc;
                    /* try { // try from 063ab5a4 to 064ab5af has its CatchHandler @ 063ab748 */
          lVar5 = *param_4;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 063ab5bc to 064ab5d3 has its CatchHandler @ 063ab74c */
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6e20) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_063ab7e8;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
                    /* try { // try from 063ab5dc to 064ab5df has its CatchHandler @ 063ab72c */
            } while (uVar2 != 0);
          }
                    /* try { // try from 063ab5e8 to 064ab5eb has its CatchHandler @ 063ab728 */
          puVar4 = (undefined8 *)FUN_0377596c(param_4,*(long *)PTR_DAT_07db6e20,3);
LAB_063ab7e8:
          (*(code *)*puVar4)(param_4,uVar3,puVar4[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_063ab8dc;
          lVar5 = *unaff_x19;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ab8ac;
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar3 = FUN_063ab8e0(param_3);
                    /* try { // try from 063ab514 to 064ab51f has its CatchHandler @ 063ab73c */
        if (param_4 == (long *)0x0) goto LAB_063ab8dc;
        lVar5 = *param_4;
                    /* try { // try from 063ab524 to 064ab527 has its CatchHandler @ 063ab738 */
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* try { // try from 063ab53c to 064ab53f has its CatchHandler @ 063ab730 */
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6e20) {
                    /* try { // try from 063ab6e4 to 064ab713 has its CatchHandler @ 063ab734 */
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_063ab6f0;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(param_4,*(long *)PTR_DAT_07db6e20,2);
                    /* try { // try from 063ab560 to 064ab563 has its CatchHandler @ 063ab718 */
LAB_063ab6f0:
        (*(code *)*puVar4)(param_4,uVar3,puVar4[1]);
        if (unaff_x19 == (long *)0x0) goto LAB_063ab8dc;
        lVar5 = *unaff_x19;
                    /* try { // try from 063ab714 to 064ab717 has its CatchHandler @ 063ab724 */
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 063ab560 with catch @ 063ab718
                       try { // try from 063ab718 to 064ab763 has its CatchHandler @ 063ab4bc */
                    /* catch() { ... } // from try @ 063ab60c with catch @ 063ab71c */
        if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 063ab56c with catch @ 063ab720 */
                    /* catch() { ... } // from try @ 063ab604 with catch @ 063ab724
                       catch() { ... } // from try @ 063ab714 with catch @ 063ab724 */
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 063ab5e8 with catch @ 063ab728 */
                    /* catch() { ... } // from try @ 063ab5dc with catch @ 063ab72c */
                    /* catch() { ... } // from try @ 063ab53c with catch @ 063ab730 */
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ab8ac;
                    /* catch() { ... } // from try @ 063ab6e4 with catch @ 063ab734 */
            uVar2 = uVar2 - 1;
                    /* catch() { ... } // from try @ 063ab524 with catch @ 063ab738 */
            piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 063ab514 with catch @ 063ab73c */
          } while (uVar2 != 0);
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar3 = FUN_063ab8e0(param_3);
      if (param_4 == (long *)0x0) goto LAB_063ab8dc;
      lVar5 = *param_4;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6e20) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_063ab600;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(param_4,*(long *)PTR_DAT_07db6e20,1);
LAB_063ab600:
                    /* try { // try from 063ab604 to 064ab607 has its CatchHandler @ 063ab724 */
                    /* try { // try from 063ab60c to 064ab613 has its CatchHandler @ 063ab71c */
      (*(code *)*puVar4)(param_4,uVar3,puVar4[1]);
      if (unaff_x19 == (long *)0x0) goto LAB_063ab8dc;
                    /* try { // try from 063ab614 to 064ab6e3 has its CatchHandler @ 063ab4bc */
      lVar5 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ab8ac;
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ab8bc:
                    /* WARNING: Could not recover jumptable at 0x063ab8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)();
    return;
  }
LAB_063ab3d4:
  if (param_3 != (long *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
    if (iVar1 != 2) {
                    /* try { // try from 063ab4bc to 064ab513 has its CatchHandler @ 063ab4bc
                       catch() { ... } // from try @ 063ab4bc with catch @ 063ab4bc
                       catch() { ... } // from try @ 063ab614 with catch @ 063ab4bc
                       catch() { ... } // from try @ 063ab718 with catch @ 063ab4bc
                       catch() { ... } // from try @ 063ab788 with catch @ 063ab4bc */
      OVRPlugin_Media__SetMrcAudioSampleRate(param_2,param_3,param_4);
      return;
    }
    FUN_063ac864(param_2,param_3,param_4);
    return;
  }
LAB_063ab8dc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_063ab8ac:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 7) * 0x10 + 0x138);
  goto LAB_063ab8bc;
}



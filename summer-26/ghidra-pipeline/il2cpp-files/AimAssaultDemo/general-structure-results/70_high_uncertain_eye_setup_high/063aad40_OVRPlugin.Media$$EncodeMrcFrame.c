/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 063aad40
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_Media__EncodeMrcFrame(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    pcVar10 = *(code **)(*unaff_x19 + 0x288);
    while ((uVar6 = (*pcVar10)(), (uVar6 & 1) != 0 &&
           (iVar1 = (**(code **)(*unaff_x19 + 0x238))(), iVar1 != 0xf))) {
      FUN_063ab330();
      pcVar10 = *(code **)(*unaff_x19 + 0x288);
    }
    while( true ) {
      uVar6 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar6 & 1) == 0) {
        return;
      }
      iVar1 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar1 == 3) break;
      if (iVar1 == 4) {
        if (unaff_x20 == (long *)0x0) goto LAB_063ab244;
        lVar9 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_063aadbc;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aadbc:
        iVar1 = (*(code *)*puVar5)();
        if (iVar1 == 9) {
          if (unaff_x22 == (long *)0x0) goto LAB_063ab244;
          lVar9 = *unaff_x22;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
                    /* try { // try from 063aaeac to 064aaeaf has its CatchHandler @ 063aafd4 */
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
                goto LAB_063aaeb4;
              }
                    /* try { // try from 063aae00 to 064aae0b has its CatchHandler @ 063aafe4 */
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
                    /* try { // try from 063aae10 to 064aae13 has its CatchHandler @ 063aafe0 */
          puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aaeb4:
                    /* try { // try from 063aaeb4 to 064aaec7 has its CatchHandler @ 063aafc8 */
          lVar9 = (*(code *)*puVar5)();
          if (lVar9 != 0) {
            thunk_FUN_037a15ac(PTR_DAT_07db6e98);
            goto LAB_063ab260;
          }
        }
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar4 == (long *)0x0) goto LAB_063ab244;
        uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                    /* try { // try from 063aaee8 to 064aaeeb has its CatchHandler @ 063aafd4 */
                    /* try { // try from 063aaeec to 064aafbf has its CatchHandler @ 063aad1c */
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
        iVar1 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar1 == 2) {
          uVar6 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar6 & 1) != 0) {
            iVar1 = 0;
            do {
              iVar2 = (**(code **)(*unaff_x19 + 0x238))();
              if (iVar2 == 0xe) break;
              FUN_063ab330();
              iVar1 = iVar1 + 1;
              uVar6 = (**(code **)(*unaff_x19 + 0x288))();
            } while ((uVar6 & 1) != 0);
            if ((iVar1 == 1) && (*(char *)(unaff_x23 + 0x18) != '\0')) {
              FUN_0632ed64(uVar7,&stack0x00000048,&stack0x00000040,0);
              uVar6 = FUN_063349dc(in_stack_00000048,0);
              if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 063aae4c with catch @ 063aafd0
                       catch() { ... } // from try @ 063aafc0 with catch @ 063aafd0 */
                if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
                    /* catch() { ... } // from try @ 063aae70 with catch @ 063aafd4
                       catch() { ... } // from try @ 063aaeac with catch @ 063aafd4
                       catch() { ... } // from try @ 063aaee8 with catch @ 063aafd4 */
                    /* catch() { ... } // from try @ 063aae40 with catch @ 063aafd8 */
                    /* catch() { ... } // from try @ 063aae34 with catch @ 063aafdc */
                    /* catch() { ... } // from try @ 063aae10 with catch @ 063aafe0 */
                    /* catch() { ... } // from try @ 063aae00 with catch @ 063aafe4 */
                    /* catch() { ... } // from try @ 063aae20 with catch @ 063aafe8 */
                uVar7 = (**(code **)(*unaff_x21 + 0x238))();
              }
              else {
                if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
                    /* try { // try from 063aafc0 to 064aafc3 has its CatchHandler @ 063aafd0 */
                    /* catch() { ... } // from try @ 063aae54 with catch @ 063aafc4
                       try { // try from 063aafc4 to 064aafff has its CatchHandler @ 063aad1c */
                    /* catch() { ... } // from try @ 063aaeb4 with catch @ 063aafc8 */
                uVar7 = (**(code **)(*unaff_x21 + 0x1c8))();
                    /* catch() { ... } // from try @ 063aae8c with catch @ 063aafcc */
              }
              lVar9 = *unaff_x20;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 != 0) {
                    /* try { // try from 063ab000 to 064ab003 has its CatchHandler @ 063ab014 */
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x28) {
                    /* try { // try from 063ab034 to 064ab03b has its CatchHandler @ 063ab03c */
                    /* catch() { ... } // from try @ 063ab020 with catch @ 063ab03c
                       catch() { ... } // from try @ 063ab034 with catch @ 063ab03c */
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime;
                  }
                    /* catch() { ... } // from try @ 063ab000 with catch @ 063ab014 */
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
                    /* try { // try from 063ab020 to 064ab027 has its CatchHandler @ 063ab03c */
                    /* try { // try from 063ab028 to 064ab033 has its CatchHandler @ 063aad1c */
              puVar5 = (undefined8 *)FUN_0377596c();
OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime:
              lVar9 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_063ab244;
              FUN_049cf910(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_07db6d30);
              in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              do {
                do {
                  do {
                    uVar6 = FUN_05d64e98(&stack0x00000020,*unaff_x27);
                    if ((uVar6 & 1) == 0) goto LAB_063ab17c;
                    plVar4 = (long *)thunk_FUN_037787d0(in_stack_00000030,*unaff_x29);
                  } while (plVar4 == (long *)0x0);
                  lVar9 = *plVar4;
                  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar6 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *unaff_x28) {
                        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_063ab0e8;
                      }
                      uVar6 = uVar6 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x28,1);
LAB_063ab0e8:
                  uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                    (uVar8,in_stack_00000040,0);
                } while ((uVar6 & 1) == 0);
                lVar9 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar6 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *unaff_x28) {
                      puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                      goto LAB_063ab154;
                    }
                    uVar6 = uVar6 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar6 != 0);
                }
                puVar5 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x28,8);
LAB_063ab154:
                uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar8,uVar7,0);
              } while ((uVar6 & 1) == 0);
              FUN_063ade08(uVar6,plVar4);
LAB_063ab17c:
              FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
            }
          }
        }
        else {
          FUN_063ab330();
        }
      }
      else {
        if (iVar1 != 5) {
          if (iVar1 - 0xdU < 2) {
            return;
          }
          FUN_031a5e18();
          uVar3 = (**(code **)(*unaff_x19 + 0x238))();
          in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
          in_stack_00000010 = 0xffffffffffffffff;
          uStack0000000000000018 = uVar3;
          uVar7 = FUN_06278b80(&stack0x00000008,0);
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6ea8);
          System_Convert__ToInt32(uVar8,uVar7,0);
LAB_063ab260:
          uVar7 = FUN_062d5fcc();
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6ea0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar7,uVar8);
        }
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (unaff_x22 == (long *)0x0) goto LAB_063ab244;
        if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)(PTR_DAT_07d86548 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar4,*(long *)(PTR_DAT_07d86548 + 0x90));
        }
        lVar9 = *unaff_x22;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_063aae28;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aae28:
                    /* try { // try from 063aae34 to 064aae37 has its CatchHandler @ 063aafdc */
        (*(code *)*puVar5)();
        if (unaff_x20 == (long *)0x0) goto LAB_063ab244;
        lVar9 = *unaff_x20;
                    /* try { // try from 063aae40 to 064aae43 has its CatchHandler @ 063aafd8 */
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 063aae4c to 064aae4f has its CatchHandler @ 063aafd0 */
        if (uVar6 != 0) {
                    /* try { // try from 063aae54 to 064aae5b has its CatchHandler @ 063aafc4 */
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x28) {
                    /* try { // try from 063aae8c to 064aae93 has its CatchHandler @ 063aafcc */
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_063aae90;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
                    /* try { // try from 063aae70 to 064aae73 has its CatchHandler @ 063aafd4 */
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aae90:
        (*(code *)*puVar5)();
      }
    }
    param_1 = (long *)(**(code **)(*unaff_x19 + 0x248))();
  } while (param_1 != (long *)0x0);
LAB_063ab244:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



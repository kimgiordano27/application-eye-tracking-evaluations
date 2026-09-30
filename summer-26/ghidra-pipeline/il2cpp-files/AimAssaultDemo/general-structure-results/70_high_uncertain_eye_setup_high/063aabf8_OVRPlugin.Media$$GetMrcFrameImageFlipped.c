/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameImageFlipped
ENTRY_POINT: 063aabf8
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


void OVRPlugin_Media__GetMrcFrameImageFlipped(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
                    /* catch() { ... } // from try @ 063aa958 with catch @ 063aabf8 */
  FUN_0373b518();
                    /* catch() { ... } // from try @ 063aa9a0 with catch @ 063aabfc */
  FUN_0373b518(PTR_DAT_07db6d30);
                    /* catch() { ... } // from try @ 063aa934 with catch @ 063aac0c */
  *(undefined1 *)(unaff_x24 + 0x6b7) = 1;
  puVar3 = PTR_DAT_07db6d50;
  puVar2 = PTR_DAT_07db6d20;
  puVar1 = PTR_DAT_07db6c00;
                    /* catch() { ... } // from try @ 063aa908 with catch @ 063aac10 */
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
                    /* catch() { ... } // from try @ 063aa8dc with catch @ 063aac14 */
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
                    /* catch() { ... } // from try @ 063aa8c4 with catch @ 063aac18 */
  in_stack_00000030 = 0;
                    /* catch() { ... } // from try @ 063aa8d8 with catch @ 063aac1c
                       catch() { ... } // from try @ 063aa8f4 with catch @ 063aac1c */
  if (unaff_x19 != (long *)0x0) {
    do {
                    /* try { // try from 063aac3c to 064aac3f has its CatchHandler @ 063aac54 */
      iVar4 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar4 == 3) {
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar7 == (long *)0x0) break;
        (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        pcVar13 = *(code **)(*unaff_x19 + 0x288);
        while ((uVar12 = (*pcVar13)(), (uVar12 & 1) != 0 &&
               (iVar4 = (**(code **)(*unaff_x19 + 0x238))(), iVar4 != 0xf))) {
          FUN_063ab330();
          pcVar13 = *(code **)(*unaff_x19 + 0x288);
        }
      }
      else {
                    /* catch() { ... } // from try @ 063aac3c with catch @ 063aac54 */
        if (iVar4 == 4) {
          if (unaff_x20 == (long *)0x0) break;
          lVar11 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_063aadbc;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0377596c();
LAB_063aadbc:
          iVar4 = (*(code *)*puVar8)();
          if (iVar4 == 9) {
            if (unaff_x22 == (long *)0x0) break;
            lVar11 = *unaff_x22;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db6e20) {
                  puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
                  goto LAB_063aaeb4;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_0377596c();
LAB_063aaeb4:
            lVar11 = (*(code *)*puVar8)();
            if (lVar11 != 0) {
              thunk_FUN_037a15ac(PTR_DAT_07db6e98);
              goto LAB_063ab260;
            }
          }
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar7 == (long *)0x0) break;
          uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
          iVar4 = (**(code **)(*unaff_x19 + 0x238))();
          if (iVar4 == 2) {
            uVar12 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar12 & 1) != 0) {
              iVar4 = 0;
              do {
                iVar5 = (**(code **)(*unaff_x19 + 0x238))();
                if (iVar5 == 0xe) break;
                FUN_063ab330();
                iVar4 = iVar4 + 1;
                uVar12 = (**(code **)(*unaff_x19 + 0x288))();
              } while ((uVar12 & 1) != 0);
              if ((iVar4 == 1) && (*(char *)(unaff_x23 + 0x18) != '\0')) {
                FUN_0632ed64(uVar9,&stack0x00000048,&stack0x00000040,0);
                uVar12 = FUN_063349dc(in_stack_00000048,0);
                if ((uVar12 & 1) == 0) {
                  if (unaff_x21 == (long *)0x0) break;
                  uVar9 = (**(code **)(*unaff_x21 + 0x238))();
                }
                else {
                  if (unaff_x21 == (long *)0x0) break;
                  uVar9 = (**(code **)(*unaff_x21 + 0x1c8))();
                }
                lVar11 = *unaff_x20;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                      goto OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime;
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar12 != 0);
                }
                puVar8 = (undefined8 *)FUN_0377596c();
OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime:
                lVar11 = (*(code *)*puVar8)();
                if (lVar11 == 0) break;
                FUN_049cf910(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_07db6d30);
                in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                in_stack_00000028 = in_stack_00000010;
                in_stack_00000020 = in_stack_00000008;
                do {
                  do {
                    do {
                      uVar12 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar2);
                      if ((uVar12 & 1) == 0) goto LAB_063ab17c;
                      plVar7 = (long *)thunk_FUN_037787d0(in_stack_00000030,*(undefined8 *)puVar3);
                    } while (plVar7 == (long *)0x0);
                    lVar11 = *plVar7;
                    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar12 != 0) {
                      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                          goto LAB_063ab0e8;
                        }
                        uVar12 = uVar12 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,1);
LAB_063ab0e8:
                    uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                    uVar12 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                       (uVar10,in_stack_00000040,0);
                  } while ((uVar12 & 1) == 0);
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                        goto LAB_063ab154;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,8);
LAB_063ab154:
                  uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  uVar12 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                     (uVar10,uVar9,0);
                } while ((uVar12 & 1) == 0);
                FUN_063ade08(uVar12,plVar7);
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
                    /* try { // try from 063aac60 to 064aac67 has its CatchHandler @ 063aac9c */
          if (iVar4 != 5) {
            if (iVar4 - 0xdU < 2) {
              return;
            }
            FUN_031a5e18();
            uVar6 = (**(code **)(*unaff_x19 + 0x238))();
            in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
            in_stack_00000010 = 0xffffffffffffffff;
            uStack0000000000000018 = uVar6;
            uVar9 = FUN_06278b80(&stack0x00000008,0);
            uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6ea8);
            System_Convert__ToInt32(uVar10,uVar9,0);
LAB_063ab260:
            uVar9 = FUN_062d5fcc();
            uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6ea0);
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar9,uVar10);
          }
                    /* try { // try from 063aac68 to 064aac77 has its CatchHandler @ 063aa77c */
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
                    /* try { // try from 063aac78 to 064aac9b has its CatchHandler @ 063aac9c */
          if (unaff_x22 == (long *)0x0) break;
                    /* catch() { ... } // from try @ 063aabcc with catch @ 063aac9c
                       catch() { ... } // from try @ 063aac60 with catch @ 063aac9c
                       catch() { ... } // from try @ 063aac78 with catch @ 063aac9c */
          if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(PTR_DAT_07d86548 + 0x90))) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar7,*(long *)(PTR_DAT_07d86548 + 0x90));
          }
          lVar11 = *unaff_x22;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db6e20) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_063aae28;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0377596c();
LAB_063aae28:
          (*(code *)*puVar8)();
          if (unaff_x20 == (long *)0x0) break;
          lVar11 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 7) * 0x10 + 0x138);
                goto LAB_063aae90;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0377596c();
LAB_063aae90:
          (*(code *)*puVar8)();
        }
      }
      uVar12 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar12 & 1) == 0) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



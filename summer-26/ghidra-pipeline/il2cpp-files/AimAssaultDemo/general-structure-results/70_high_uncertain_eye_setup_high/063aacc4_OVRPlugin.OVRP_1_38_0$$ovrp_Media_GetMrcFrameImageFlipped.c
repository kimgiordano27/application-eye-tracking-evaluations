/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameImageFlipped
ENTRY_POINT: 063aacc4
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameImageFlipped
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong in_x9;
  code *pcVar9;
  ulong uVar10;
  int *in_x10;
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
    if ((bool)in_ZR) {
      puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_063aae28;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aae28:
        (*(code *)*puVar5)();
        if (unaff_x20 == (long *)0x0) {
LAB_063ab244:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar8 = *unaff_x20;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_063aae90;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aae90:
        (*(code *)*puVar5)();
        while( true ) {
          while( true ) {
            uVar10 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar10 & 1) == 0) {
              return;
            }
            iVar1 = (**(code **)(*unaff_x19 + 0x238))();
            if (iVar1 != 3) break;
            plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
            if (plVar4 == (long *)0x0) goto LAB_063ab244;
            (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            pcVar9 = *(code **)(*unaff_x19 + 0x288);
            while ((uVar10 = (*pcVar9)(), (uVar10 & 1) != 0 &&
                   (iVar1 = (**(code **)(*unaff_x19 + 0x238))(), iVar1 != 0xf))) {
              FUN_063ab330();
              pcVar9 = *(code **)(*unaff_x19 + 0x288);
            }
          }
          if (iVar1 != 4) break;
          if (unaff_x20 == (long *)0x0) goto LAB_063ab244;
          lVar8 = *unaff_x20;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x28) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_063aadbc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
                    /* try { // try from 063aad1c to 064aadff has its CatchHandler @ 063aad1c
                       catch() { ... } // from try @ 063aad1c with catch @ 063aad1c
                       catch() { ... } // from try @ 063aaeec with catch @ 063aad1c
                       catch() { ... } // from try @ 063aafc4 with catch @ 063aad1c
                       catch() { ... } // from try @ 063ab028 with catch @ 063aad1c */
          puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aadbc:
          iVar1 = (*(code *)*puVar5)();
          if (iVar1 == 9) {
            if (unaff_x22 == (long *)0x0) goto LAB_063ab244;
            lVar8 = *unaff_x22;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
                  goto LAB_063aaeb4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aaeb4:
            lVar8 = (*(code *)*puVar5)();
            if (lVar8 != 0) {
              thunk_FUN_037a15ac(PTR_DAT_07db6e98);
              goto LAB_063ab260;
            }
          }
          plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar4 == (long *)0x0) goto LAB_063ab244;
          uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
          iVar1 = (**(code **)(*unaff_x19 + 0x238))();
          if (iVar1 == 2) {
            uVar10 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar10 & 1) != 0) {
              iVar1 = 0;
              do {
                iVar2 = (**(code **)(*unaff_x19 + 0x238))();
                if (iVar2 == 0xe) break;
                FUN_063ab330();
                iVar1 = iVar1 + 1;
                uVar10 = (**(code **)(*unaff_x19 + 0x288))();
              } while ((uVar10 & 1) != 0);
              if ((iVar1 == 1) && (*(char *)(unaff_x23 + 0x18) != '\0')) {
                FUN_0632ed64(uVar6,&stack0x00000048,&stack0x00000040,0);
                uVar10 = FUN_063349dc(in_stack_00000048,0);
                if ((uVar10 & 1) == 0) {
                  if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
                  uVar6 = (**(code **)(*unaff_x21 + 0x238))();
                }
                else {
                  if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
                  uVar6 = (**(code **)(*unaff_x21 + 0x1c8))();
                }
                lVar8 = *unaff_x20;
                uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *unaff_x28) {
                      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                      goto OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar5 = (undefined8 *)FUN_0377596c();
OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime:
                lVar8 = (*(code *)*puVar5)();
                if (lVar8 == 0) goto LAB_063ab244;
                FUN_049cf910(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_07db6d30);
                in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                in_stack_00000028 = in_stack_00000010;
                in_stack_00000020 = in_stack_00000008;
                do {
                  do {
                    do {
                      uVar10 = FUN_05d64e98(&stack0x00000020,*unaff_x27);
                      if ((uVar10 & 1) == 0) goto LAB_063ab17c;
                      plVar4 = (long *)thunk_FUN_037787d0(in_stack_00000030,*unaff_x29);
                    } while (plVar4 == (long *)0x0);
                    lVar8 = *plVar4;
                    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *unaff_x28) {
                          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                          goto LAB_063ab0e8;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x28,1);
LAB_063ab0e8:
                    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    uVar10 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                       (uVar7,in_stack_00000040,0);
                  } while ((uVar10 & 1) == 0);
                  lVar8 = *plVar4;
                  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *unaff_x28) {
                        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                        goto LAB_063ab154;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x28,8);
LAB_063ab154:
                  uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  uVar10 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                     (uVar7,uVar6,0);
                } while ((uVar10 & 1) == 0);
                FUN_063ade08(uVar10,plVar4);
LAB_063ab17c:
                FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
              }
            }
          }
          else {
            FUN_063ab330();
          }
        }
        if (iVar1 != 5) {
          if (iVar1 - 0xdU < 2) {
            return;
          }
          FUN_031a5e18();
          uVar3 = (**(code **)(*unaff_x19 + 0x238))();
          in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
          in_stack_00000010 = 0xffffffffffffffff;
          uStack0000000000000018 = uVar3;
          uVar6 = FUN_06278b80(&stack0x00000008,0);
          uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6ea8);
          System_Convert__ToInt32(uVar7,uVar6,0);
LAB_063ab260:
          uVar6 = FUN_062d5fcc();
          uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6ea0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar6,uVar7);
        }
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (unaff_x22 == (long *)0x0) goto LAB_063ab244;
        param_3 = *(long *)PTR_DAT_07db6e20;
        if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)(PTR_DAT_07d86548 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar4,*(long *)(PTR_DAT_07d86548 + 0x90));
        }
        param_1 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}



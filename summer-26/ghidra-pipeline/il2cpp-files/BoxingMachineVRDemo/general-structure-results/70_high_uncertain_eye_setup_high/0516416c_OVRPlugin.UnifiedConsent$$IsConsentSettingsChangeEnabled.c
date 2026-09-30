/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$IsConsentSettingsChangeEnabled
ENTRY_POINT: 0516416c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__IsConsentSettingsChangeEnabled(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x26;
  
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_051641bc;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051641bc:
  lVar5 = (*(code *)*puVar3)();
  puVar1 = PTR_DAT_06782408;
  if (lVar5 != 0) {
    plVar4 = (long *)FUN_03aac1c4(lVar5,0,*(undefined8 *)PTR_DAT_06782408);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05164234;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*unaff_x26,0);
LAB_05164234:
      iVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (iVar2 == 3) {
        lVar5 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_05164554;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164554:
        lVar5 = (*(code *)*puVar3)();
        if ((lVar5 != 0) &&
           (plVar4 = (long *)FUN_03aac1c4(lVar5,0,*(undefined8 *)puVar1), plVar4 != (long *)0x0)) {
          lVar5 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                goto LAB_051645c8;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*unaff_x26,5);
LAB_051645c8:
          (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (unaff_x19 != (long *)0x0) {
            (**(code **)(*unaff_x19 + 0x698))();
            goto LAB_051644a0;
          }
        }
      }
      else {
        lVar5 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_051642d8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051642d8:
        lVar5 = (*(code *)*puVar3)();
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) {
            lVar5 = *unaff_x21;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x26) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                  goto LAB_05164340;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164340:
            lVar5 = (*(code *)*puVar3)();
            puVar1 = PTR_DAT_06782540;
            if (lVar5 == 0) goto LAB_05164658;
            if (*(int *)(lVar5 + 0x18) == 0) {
              lVar5 = thunk_FUN_02d9d438();
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88();
              }
              lVar5 = *(long *)puVar1;
              plVar4 = (long *)thunk_FUN_02d9d438();
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88();
              }
              lVar6 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                    goto LAB_05164604;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,lVar5,2);
LAB_05164604:
              uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if ((uVar7 & 1) == 0) {
                if (unaff_x19 == (long *)0x0) goto LAB_05164658;
                (**(code **)(*unaff_x19 + 0x698))();
              }
              else {
                if (unaff_x19 == (long *)0x0) goto LAB_05164658;
                pcVar8 = *(code **)(*unaff_x19 + 0x658);
LAB_05164498:
                (*pcVar8)();
              }
LAB_051644a0:
              (**(code **)(*unaff_x20 + 0x1e8))();
              return;
            }
          }
          if (unaff_x19 != (long *)0x0) {
            (**(code **)(*unaff_x19 + 0x578))();
            puVar1 = PTR_DAT_06782408;
            iVar2 = 0;
            do {
              lVar5 = *unaff_x21;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x26) {
                    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                    goto LAB_051643cc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
              lVar5 = (*(code *)*puVar3)();
              if (lVar5 == 0) break;
              if (*(int *)(lVar5 + 0x18) <= iVar2) {
                FUN_051652f4();
                pcVar8 = *(code **)(*unaff_x19 + 0x588);
                goto LAB_05164498;
              }
              lVar5 = *unaff_x21;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x26) {
                    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                    goto LAB_05164438;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
              lVar5 = (*(code *)*puVar3)();
              if (lVar5 == 0) break;
              FUN_03aac1c4(lVar5,iVar2,*(undefined8 *)puVar1);
              FUN_05163090();
              iVar2 = iVar2 + 1;
            } while( true );
          }
        }
      }
    }
  }
LAB_05164658:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_SetDesiredEyeTextureFormat
ENTRY_POINT: 0516783c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_11_0__ovrp_SetDesiredEyeTextureFormat(ulong param_1)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782640);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_0677d900);
    FUN_02d6084c(PTR_DAT_067825b8);
    FUN_02d6084c(PTR_DAT_067825c8);
    FUN_02d6084c(PTR_DAT_067825d8);
    FUN_02d6084c(PTR_DAT_067826d0);
    FUN_02d6084c(PTR_DAT_067825f0);
    *(undefined1 *)(unaff_x25 + 0xe6e) = 1;
  }
  if (*(char *)(unaff_x24 + 0x1a) == '\0') {
    uVar3 = thunk_FUN_04e8bd3c();
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_04e8bd3c();
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_04e8bd3c();
        if ((uVar3 & 1) == 0) {
          uVar3 = thunk_FUN_04e8bd3c();
          if ((uVar3 & 1) == 0) {
            uVar3 = FUN_050f0eb8();
            if ((uVar3 & 1) == 0) {
              if (unaff_x22 == 0) goto LAB_05167db8;
              sVar1 = FUN_04e87a5c();
              if (sVar1 == 0x3f) {
                FUN_0516846c();
                return;
              }
            }
            uVar3 = FUN_04e8bd88();
            if ((uVar3 & 1) != 0) {
              FUN_05168934();
              return;
            }
            goto LAB_051678b0;
          }
          if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05167dbc();
          if (unaff_x20 == (long *)0x0) goto LAB_05167db8;
          lVar5 = *unaff_x20;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06782640) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_05167d28;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05167d28:
          (*(code *)*puVar4)();
          if (unaff_x19 == (long *)0x0) goto LAB_05167db8;
          lVar5 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) goto LAB_05167d88;
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05167dbc();
          if (unaff_x20 == (long *)0x0) goto LAB_05167db8;
          lVar5 = *unaff_x20;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06782640) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_05167cc4;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05167cc4:
          (*(code *)*puVar4)();
          if (unaff_x19 == (long *)0x0) goto LAB_05167db8;
          lVar5 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) goto LAB_05167d88;
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05167dbc();
        if (unaff_x20 == (long *)0x0) goto LAB_05167db8;
        lVar5 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06782640) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_05167bcc;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05167bcc:
        (*(code *)*puVar4)();
        if (unaff_x19 == (long *)0x0) goto LAB_05167db8;
        lVar5 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) goto LAB_05167d88;
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05167dbc();
      if (unaff_x20 == (long *)0x0) goto LAB_05167db8;
      lVar5 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06782640) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_05167adc;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05167adc:
      (*(code *)*puVar4)();
      if (unaff_x19 == (long *)0x0) goto LAB_05167db8;
      lVar5 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) goto LAB_05167d88;
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05167d98:
                    /* WARNING: Could not recover jumptable at 0x05167db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)();
    return;
  }
LAB_051678b0:
  if (unaff_x21 != (long *)0x0) {
    iVar2 = (**(code **)(*unaff_x21 + 0x238))();
    if (iVar2 != 2) {
      FUN_05166d0c();
      return;
    }
    FUN_05168d40();
    return;
  }
LAB_05167db8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_05167d88:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 7) * 0x10 + 0x138);
  goto LAB_05167d98;
}



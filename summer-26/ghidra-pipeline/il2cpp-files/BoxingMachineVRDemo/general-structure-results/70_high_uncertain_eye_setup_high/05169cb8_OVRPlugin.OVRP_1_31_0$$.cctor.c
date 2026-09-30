/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$.cctor
ENTRY_POINT: 05169cb8
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


void OVRPlugin_OVRP_1_31_0___cctor(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0566d8ec(unaff_x26,0);
    uVar3 = FUN_050eb21c(unaff_x26,0);
    uVar4 = FUN_050f0eb8(uVar3,0);
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*unaff_x21 + 0x238))();
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
            goto LAB_05169de8;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05169de8:
      (*(code *)*puVar5)();
    }
    else {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 10) * 0x10 + 0x138);
            goto LAB_05169dc0;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05169dc0:
      (*(code *)*puVar5)();
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05169ca0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05169ca0:
    (*(code *)*puVar5)();
    uVar4 = FUN_04b3a824(&stack0x00000030,*unaff_x29);
    if ((uVar4 & 1) == 0) break;
    param_1 = *unaff_x27;
    unaff_x26 = in_stack_00000040;
  } while( true );
  FUN_04b3a944(&stack0x00000030,*(undefined8 *)PTR_DAT_06782748);
  puVar1 = PTR_DAT_067823f0;
  if (unaff_x22 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar2 < 0x12) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar6 = FUN_05167dbc();
        if (lVar6 == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          lVar6 = *unaff_x19;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x28) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_05169f50;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05169f50:
          (*(code *)*puVar5)();
          if (unaff_x20 != (long *)0x0) {
            lVar6 = *unaff_x20;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                  goto LAB_05169fb8;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05169fb8:
            (*(code *)*puVar5)();
            return;
          }
        }
        goto LAB_0516a078;
      }
      if (uVar2 == 0xb) {
        return;
      }
      if (uVar2 == 0xd) {
        if (unaff_x21 == (long *)0x0) goto LAB_0516a078;
        goto LAB_0516a008;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 0x1d8))();
      FUN_05167054(in_stack_00000000);
      (**(code **)(*unaff_x21 + 0x1e8))();
LAB_0516a008:
      (**(code **)(*unaff_x21 + 0x1c8))();
      (**(code **)(*unaff_x21 + 0x208))();
      return;
    }
  }
LAB_0516a078:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



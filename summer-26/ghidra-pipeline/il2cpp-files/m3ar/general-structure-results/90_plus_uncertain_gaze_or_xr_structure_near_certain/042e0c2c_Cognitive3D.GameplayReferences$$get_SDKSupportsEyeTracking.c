/*
FUNCTION_NAME: Cognitive3D.GameplayReferences$$get_SDKSupportsEyeTracking
ENTRY_POINT: 042e0c2c
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_6
*/


void Cognitive3D_GameplayReferences__get_SDKSupportsEyeTracking(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x23;
  undefined8 uVar13;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  _in_stack_00000010 = FUN_07de72e8(2,8);
  uVar8 = in_stack_00000010._8_8_;
  plVar10 = in_stack_00000010;
  if (DAT_09539e0c == '\0') {
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09539e0c = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e0d == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0d = '\x01';
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_042e0d24;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f67c08,0);
LAB_042e0d24:
    iVar4 = (*(code *)*puVar5)(plVar10,uVar8 & 0xffffffff,puVar5[1]);
    if (iVar4 == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
      FUN_042eb1ac(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  if (DAT_09539e0e == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0e = '\x01';
  }
  plVar10 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar7 = *in_stack_00000010;
    uVar11 = in_stack_00000018 & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_042e0dbc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,2);
LAB_042e0dbc:
    (*(code *)*puVar5)(plVar10,uVar11,puVar5[1]);
  }
  puVar1 = PTR_DAT_08f678f0;
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(int *)(*(long *)(unaff_x19 + 8) + 0x1c) == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar10 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f678f0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
          goto Cognitive3D_Cognitive3D_Manager__SetSessionProperties;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f678f0,10);
Cognitive3D_Cognitive3D_Manager__SetSessionProperties:
    uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    puVar2 = PTR_DAT_08f71fe8;
    lVar7 = *(long *)PTR_DAT_08f71fe8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar7 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar7 + 0xb8);
    lVar12 = puVar5[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar13 = *puVar5;
      lVar12 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f72000);
      FUN_053442e0(lVar12,uVar13,*(undefined8 *)PTR_DAT_08f72008,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar12;
    }
    uVar8 = FUN_04ac633c(uVar6,lVar12,*(undefined8 *)PTR_DAT_08f71ff8);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar10 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x20);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_08f6a6f0;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x26) * 0x10 + 0x138);
            goto LAB_042e0f84;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar1,0x26);
LAB_042e0f84:
      (*(code *)*puVar5)(plVar10,uVar6,puVar5[1]);
    }
  }
  cVar3 = DAT_09539e13;
  *unaff_x19 = 0xfffffffe;
  if (cVar3 == '\0') {
    FUN_0403162c(PTR_DAT_08f67a78);
    DAT_09539e13 = '\x01';
  }
  plVar10 = *(long **)(unaff_x19 + 2);
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f67a78) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_042e101c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f67a78,2);
LAB_042e101c:
                    /* WARNING: Could not recover jumptable at 0x042e1038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar10,puVar5[1]);
  return;
}



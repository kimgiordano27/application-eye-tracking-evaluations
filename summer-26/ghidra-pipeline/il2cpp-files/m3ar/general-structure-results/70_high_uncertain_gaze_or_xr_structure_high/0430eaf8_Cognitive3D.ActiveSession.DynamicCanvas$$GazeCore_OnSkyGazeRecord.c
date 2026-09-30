/*
FUNCTION_NAME: Cognitive3D.ActiveSession.DynamicCanvas$$GazeCore_OnSkyGazeRecord
ENTRY_POINT: 0430eaf8
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_DynamicCanvas__GazeCore_OnSkyGazeRecord(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int unaff_w19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long lVar12;
  int iVar13;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    FUN_057d5e44(&stack0x00000008,*(long *)(unaff_x22 + 0x50),*(undefined8 *)PTR_DAT_08f73568);
    puVar4 = PTR_DAT_08f73540;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar7 = FUN_072066f4(&stack0x00000020,*(undefined8 *)puVar4), lVar9 = in_stack_00000030,
          (uVar7 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar7 = FUN_0858816c(lVar9,0,0);
      if ((uVar7 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar8 = FUN_08584ab0(lVar9,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_0858f094(uVar8,0);
      }
    }
    FUN_072066f0(&stack0x00000020,*(undefined8 *)PTR_DAT_08f73538);
    lVar9 = *(long *)(unaff_x22 + 0x50);
    if (lVar9 != 0) {
      iVar13 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (0 < iVar13) {
        FUN_075082e0(*(undefined8 *)(lVar9 + 0x10),0,iVar13,0);
      }
      puVar6 = PTR_DAT_08f73558;
      puVar5 = PTR_DAT_08f73550;
      puVar4 = PTR_DAT_08f6a2b0;
      if (0 < unaff_w19) {
        iVar13 = 0;
        do {
          lVar9 = *(long *)(unaff_x22 + 0x28);
          if (lVar9 == 0) goto LAB_0430ed28;
          iVar1 = *(int *)(lVar9 + 0x18);
          iVar3 = 0;
          if (iVar1 != 0) {
            iVar3 = iVar13 / iVar1;
          }
          FUN_057d50ec(lVar9,iVar13 - iVar3 * iVar1,*(undefined8 *)puVar4);
          if (unaff_x21 == (long *)0x0) goto LAB_0430ed28;
          lVar9 = *unaff_x21;
          lVar12 = *(long *)puVar5;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)(lVar12 + 0x20)) {
                lVar9 = lVar9 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_0430ec7c;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          lVar9 = FUN_0406ae20();
LAB_0430ec7c:
          lVar9 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF
                            (*(undefined8 *)(lVar9 + 8),lVar12);
          uVar8 = (**(code **)(lVar9 + 8))();
          lVar9 = *(long *)(unaff_x22 + 0x50);
          if (lVar9 == 0) goto LAB_0430ed28;
          lVar12 = *(long *)(lVar9 + 0x10);
          lVar11 = *(long *)puVar6;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0430ed28;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_057d53ac(lVar9,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != unaff_w19);
      }
      return;
    }
  }
LAB_0430ed28:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerAxisTypeNameFromEnum$$.ctor
ENTRY_POINT: 04318ea0
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerAxisTypeNameFromEnum___ctor
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_0403162c(PTR_DAT_08f73918);
  FUN_0403162c(PTR_DAT_08f73920);
  FUN_0403162c(PTR_DAT_08f6b248);
  FUN_0403162c(PTR_DAT_08f73928);
  FUN_0403162c(PTR_DAT_08f73930);
  FUN_0403162c(PTR_DAT_08f73938);
  FUN_0403162c(PTR_DAT_08f73940);
  FUN_0403162c(PTR_DAT_08f73948);
  *(undefined1 *)(unaff_x20 + 0xe12) = 1;
  plVar12 = *(long **)(unaff_x19 + 0x30);
  in_stack_00000050 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f6b248) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
          goto LAB_04318f74;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)PTR_DAT_08f6b248,0xc);
LAB_04318f74:
    iVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    puVar4 = PTR_DAT_08f73948;
    puVar3 = PTR_DAT_08f73938;
    puVar2 = PTR_DAT_08f73918;
    puVar1 = PTR_DAT_08f73910;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_06ff01a8(&stack0x00000008,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73908);
      in_stack_00000050 = in_stack_00000028;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000030;
      while (uVar10 = FUN_04fcfce0(&stack0x00000030,*(undefined8 *)puVar2),
            lVar7 = in_stack_00000048, (uVar10 & 1) != 0) {
        if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar8 = *(long *)(in_stack_00000040 + 0x30);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        if (iVar5 < *(int *)(lVar8 + 0x24)) {
          if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          if (0 < (int)*(ulong *)(in_stack_00000048 + 0x18)) {
            uVar10 = 0;
            uVar9 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
            lVar8 = in_stack_00000048 + 0x20;
            do {
              if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              FUN_042a550c(*(undefined8 *)(lVar8 + uVar10 * 8),0);
              uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
        }
      }
      FUN_04fcfdf4(&stack0x00000030,*(undefined8 *)puVar1);
      lVar7 = *(long *)puVar4;
      lVar8 = *(long *)(unaff_x19 + 0x28);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar7 = *(long *)puVar4;
      }
      puVar6 = *(undefined8 **)(lVar7 + 0xb8);
      lVar13 = puVar6[1];
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar6 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar14 = *puVar6;
        lVar13 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73900);
        FUN_0532c238(lVar13,uVar14,*(undefined8 *)PTR_DAT_08f73940,0);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar13;
      }
      if (lVar8 != 0) {
        FUN_057d5d8c(lVar8,lVar13,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



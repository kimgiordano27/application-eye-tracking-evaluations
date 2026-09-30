/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$CalculateQuadPoints
ENTRY_POINT: 043145a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__CalculateQuadPoints(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 *unaff_x22;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f73740);
  FUN_0403162c(PTR_DAT_08f73758);
  FUN_0403162c(PTR_DAT_08f729a8);
  FUN_0403162c(PTR_DAT_08f73760);
  FUN_0403162c(PTR_DAT_08f73768);
  FUN_0403162c(PTR_DAT_08f73748);
  FUN_0403162c(PTR_DAT_08f73770);
  FUN_0403162c(PTR_DAT_08f73778);
  FUN_0403162c(PTR_DAT_08f6d100);
  *(undefined1 *)(unaff_x20 + 0xde4) = 1;
  plVar12 = *(long **)(unaff_x19 + 0x98);
  uVar6 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_0533c120();
  puVar4 = PTR_DAT_08f73760;
  puVar2 = PTR_DAT_08f73750;
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f73760) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_043146ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)PTR_DAT_08f73760,1);
LAB_043146ac:
    (*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
    plVar12 = *(long **)(unaff_x19 + 0xc0);
    uVar6 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
    FUN_05329970();
    puVar3 = PTR_DAT_08f73758;
    puVar2 = PTR_DAT_08f6d100;
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f729a8) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0431474c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)PTR_DAT_08f729a8,0);
LAB_0431474c:
      (*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
      uVar6 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
      FUN_0545306c();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04342208(uVar6,0);
      lVar8 = *(long *)(unaff_x19 + 0x28);
      uVar6 = FUN_043148e8();
      puVar2 = PTR_DAT_08f68b90;
      if (lVar8 != 0) {
        FUN_08528cec(lVar8,uVar6,0);
        lVar8 = *(long *)(unaff_x19 + 0x20);
        uVar6 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
        FUN_051cfa40();
        if ((lVar8 != 0) && (FUN_0430f828(lVar8,uVar6), *(long *)(unaff_x19 + 0x20) != 0)) {
          FUN_0430f8d8();
          FUN_04314968();
          if (*(long *)(unaff_x19 + 0x90) != 0) {
            uVar5 = FUN_04349df4(*(long *)(unaff_x19 + 0x90),0);
            lVar8 = FUN_04426cb4(0);
            if ((lVar8 != 0) && (plVar12 = *(long **)(unaff_x19 + 0x98), plVar12 != (long *)0x0)) {
              lVar9 = *plVar12;
              lVar8 = *(long *)(lVar8 + 0x30);
              uVar1 = *(undefined4 *)(unaff_x19 + 0x88);
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                    puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                    goto LAB_0431488c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)puVar4,5);
LAB_0431488c:
              (*(code *)*puVar7)(plVar12,uVar1,puVar7[1]);
              if (lVar8 != 0) {
                FUN_044b2f64(lVar8,*(undefined4 *)(unaff_x19 + 0x88),uVar5,0);
                FUN_04314b14();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



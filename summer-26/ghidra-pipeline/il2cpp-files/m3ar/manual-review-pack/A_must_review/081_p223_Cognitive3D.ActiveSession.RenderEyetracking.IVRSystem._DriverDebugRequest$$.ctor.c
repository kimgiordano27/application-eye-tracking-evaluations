/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._DriverDebugRequest$$.ctor
ENTRY_POINT: 04319270
PROGRAM: m3ar-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__DriverDebugRequest___ctor(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  
  FUN_0403162c(PTR_DAT_08f73950);
  *(undefined1 *)(unaff_x20 + 0xe14) = 1;
  plVar9 = *(long **)(unaff_x19 + 0x30);
  if (plVar9 == (long *)0x0) goto LAB_043194bc;
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f69220) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_043192e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f69220,0);
LAB_043192e0:
  uVar3 = (*(code *)*puVar2)(plVar9,0,puVar2[1]);
  puVar1 = PTR_DAT_08f73950;
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_043194bc;
  plVar9 = (long *)FUN_05583e24(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73950);
  if (plVar9 == (long *)0x0) goto LAB_043194bc;
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f73260) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04319370;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f73260,1);
LAB_04319370:
  uVar4 = (*(code *)*puVar2)(plVar9,uVar3,puVar2[1]);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_043194bc;
  uVar5 = FUN_05583e24(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar1);
  uVar7 = FUN_0437181c(uVar5,uVar3,0);
  if ((uVar7 & 1) == 0) {
LAB_04319428:
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar7 = FUN_0852f904(0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar7 = FUN_074c70a4(uVar3,uVar4,0);
      if ((uVar7 & 1) != 0) goto LAB_04319478;
    }
    lVar6 = FUN_08584ab0();
    if (lVar6 != 0) {
      FUN_08588638(lVar6,0,0);
      return;
    }
  }
  else {
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (plVar9 = *(long **)(unaff_x19 + 0x38), plVar9 == (long *)0x0)) goto LAB_043194bc;
    lVar6 = *plVar9;
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_04319414;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f69238,9);
LAB_04319414:
    uVar7 = (*(code *)*puVar2)(plVar9,uVar5,puVar2[1]);
    if ((uVar7 & 1) != 0) goto LAB_04319428;
LAB_04319478:
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_04308fec(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x20));
      return;
    }
  }
LAB_043194bc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._DriverDebugRequest$$Invoke
ENTRY_POINT: 043192fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 138
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__DriverDebugRequest__Invoke
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x22;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x950);
  plVar1 = (long *)FUN_05583e24(param_1,*puVar8);
  if (plVar1 == (long *)0x0) goto LAB_043194bc;
  lVar5 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f73260) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04319370;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar1,*(long *)PTR_DAT_08f73260,1);
LAB_04319370:
  uVar3 = (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_043194bc;
  uVar4 = FUN_05583e24(*(long *)(unaff_x19 + 0x20),*puVar8);
  uVar6 = FUN_0437181c(uVar4,param_2,0);
  if ((uVar6 & 1) == 0) {
LAB_04319428:
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar6 = FUN_0852f904(0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar6 = FUN_074c70a4(param_2,uVar3,0);
      if ((uVar6 & 1) != 0) goto LAB_04319478;
    }
    lVar5 = FUN_08584ab0();
    if (lVar5 != 0) {
      FUN_08588638(lVar5,0,0);
      return;
    }
  }
  else {
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (plVar1 = *(long **)(unaff_x19 + 0x38), plVar1 == (long *)0x0)) goto LAB_043194bc;
    lVar5 = *plVar1;
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_04319414;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar1,*(long *)PTR_DAT_08f69238,9);
LAB_04319414:
    uVar6 = (*(code *)*puVar8)(plVar1,uVar4,puVar8[1]);
    if ((uVar6 & 1) != 0) goto LAB_04319428;
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



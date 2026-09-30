/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetFloatTrackedDeviceProperty$$Invoke
ENTRY_POINT: 04317904
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetFloatTrackedDeviceProperty__Invoke
               (undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  
  plVar2 = (long *)FUN_054b8ffc(param_1,*unaff_x24);
  if (plVar2 == (long *)0x0) goto LAB_04317b80;
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04317964;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x25,1);
LAB_04317964:
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar2 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24), plVar2 == (long *)0x0))
  goto LAB_04317b80;
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_043179dc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x25,0);
LAB_043179dc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  uVar6 = FUN_0437181c();
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = *(long **)(unaff_x19 + 0x40);
    if (plVar2 == (long *)0x0) goto LAB_04317b80;
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_04317a60;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*(long *)PTR_DAT_08f69238,9);
LAB_04317a60:
    uVar6 = (*(code *)*puVar3)(plVar2,uVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_04317b84();
      uVar1 = uVar1 & 1;
    }
  }
  if ((uVar1 & unaff_w26) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar6 = FUN_0852f904(0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar6 = FUN_074c70a4();
      if (((uVar6 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) != '\0')) goto LAB_04317a94;
    }
    lVar5 = FUN_08584ab0();
    if (lVar5 != 0) {
      FUN_08588638(lVar5,0,0);
      return;
    }
  }
  else {
LAB_04317a94:
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      uVar4 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24);
      if (lVar5 != 0) {
        FUN_04308fec(lVar5,uVar4);
        return;
      }
    }
  }
LAB_04317b80:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



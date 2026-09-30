/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 03230704
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  thunk_FUN_016466fc(param_1);
  uVar3 = FUN_051d94d4();
  puVar1 = PTR_DAT_06d9a9b0;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar4 = FUN_01d67120(*(undefined8 *)puVar1);
    lVar7 = *unaff_x22;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar7);
      lVar7 = *unaff_x22;
    }
    **(undefined8 **)(lVar7 + 0xb8) = uVar4;
    thunk_FUN_01656ef8(*(undefined8 *)(*unaff_x22 + 0xb8),uVar4);
  }
  lVar7 = *unaff_x22;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar7 = *unaff_x22;
  }
  uVar4 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x21);
  }
  uVar3 = FUN_051d94d4(uVar4,0,0);
  puVar2 = PTR_DAT_06e12238;
  puVar1 = PTR_DAT_06dc26f0;
  if ((uVar3 & 1) == 0) {
LAB_032308b4:
    lVar7 = *unaff_x22;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar7 = *unaff_x22;
    }
    *unaff_x19 = **(undefined8 **)(lVar7 + 0xb8);
    thunk_FUN_01656ef8();
    return;
  }
  plVar5 = (long *)FUN_0160edfc(*(undefined8 *)PTR_DAT_06dba180,1);
  uVar4 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  lVar7 = FUN_031c8668(uVar4,0);
  if (plVar5 != (long *)0x0) {
    if ((lVar7 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar4,0);
    }
    puVar1 = PTR_DAT_06e01990;
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    plVar5[4] = lVar7;
    thunk_FUN_01656ef8(plVar5 + 4,lVar7);
    lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_06e1a1a8;
    if (lVar7 != 0) {
      FUN_051dfeec(lVar7,*(undefined8 *)PTR_DAT_06e42d90,plVar5,0);
      uVar4 = FUN_01a257e8(lVar7,*(undefined8 *)puVar1);
      lVar7 = *unaff_x22;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar7);
        lVar7 = *unaff_x22;
      }
      **(undefined8 **)(lVar7 + 0xb8) = uVar4;
      thunk_FUN_01656ef8(*(undefined8 *)(*unaff_x22 + 0xb8),uVar4);
      goto LAB_032308b4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}



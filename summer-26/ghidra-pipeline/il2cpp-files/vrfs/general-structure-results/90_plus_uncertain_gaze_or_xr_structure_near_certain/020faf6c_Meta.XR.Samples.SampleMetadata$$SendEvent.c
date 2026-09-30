/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 020faf6c
PROGRAM: vrfs-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long lVar10;
  
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x18) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_1 = *unaff_x24;
    }
    uVar7 = **(undefined8 **)(param_1 + 0xb8);
    lVar4 = thunk_FUN_015d056c(*unaff_x23);
    if (lVar4 == 0) goto LAB_020fb198;
    FUN_022e6dcc(lVar4,uVar7,*(undefined8 *)PTR_DAT_06e51f70,0);
    plVar5 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
    *plVar5 = lVar4;
    thunk_FUN_01656ef8(plVar5,lVar4);
    param_1 = *unaff_x24;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    param_1 = *unaff_x24;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x20) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_1 = *unaff_x24;
    }
    uVar7 = **(undefined8 **)(param_1 + 0xb8);
    lVar4 = thunk_FUN_015d056c(*unaff_x25);
    if (lVar4 == 0) goto LAB_020fb198;
    FUN_022e6dcc(lVar4,uVar7,*(undefined8 *)PTR_DAT_06d8ac58,0);
    plVar5 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20);
    *plVar5 = lVar4;
    thunk_FUN_01656ef8(plVar5,lVar4);
  }
  lVar4 = FUN_01b6daf4();
  puVar2 = PTR_DAT_06d8cbb8;
  plVar5 = (long *)(unaff_x19 + 0x10);
  lVar8 = *plVar5;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar10 == 0) || (lVar4 == 0)) goto LAB_020fb198;
        uVar3 = FUN_04278a08(lVar4,*(undefined4 *)(lVar10 + 0x14),*(undefined8 *)puVar2);
        *(undefined4 *)(lVar10 + 0x10) = uVar3;
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    lVar4 = *unaff_x24;
    lVar8 = *plVar5;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar4 = *unaff_x24;
    }
    puVar2 = PTR_DAT_06e24698;
    lVar10 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (lVar10 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar4 = *unaff_x24;
      }
      uVar7 = **(undefined8 **)(lVar4 + 0xb8);
      lVar10 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
      if (lVar10 == 0) goto LAB_020fb198;
      FUN_020d36bc(lVar10,uVar7,*(undefined8 *)PTR_DAT_06e61c20,0);
      plVar6 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x28);
      *plVar6 = lVar10;
      thunk_FUN_01656ef8(plVar6,lVar10);
    }
    puVar2 = PTR_DAT_06d976d8;
    uVar7 = FUN_01b60bcc(lVar8,lVar10,*(undefined8 *)PTR_DAT_06e12410);
    uVar7 = FUN_01b6d874(uVar7,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar7;
    thunk_FUN_01656ef8(plVar5,uVar7);
    *(undefined1 *)(unaff_x19 + 0x1b) = 1;
    return;
  }
LAB_020fb198:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}



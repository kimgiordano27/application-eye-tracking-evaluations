/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 020fa760
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionEnd(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 *puVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar9;
  long unaff_x23;
  
  puVar7 = *(undefined8 **)(unaff_x19 + 0x418);
  plVar8 = *(long **)(unaff_x20 + 0x4c8);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x50);
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06da34c8);
    thunk_FUN_0159f088(PTR_DAT_06e28e10);
    thunk_FUN_0159f088(PTR_DAT_06dca700);
    thunk_FUN_0159f088(PTR_DAT_06e12050);
    thunk_FUN_0159f088(PTR_DAT_06e2e508);
    thunk_FUN_0159f088(PTR_DAT_06d925b0);
    thunk_FUN_0159f088(PTR_DAT_06dd6418);
    thunk_FUN_0159f088(PTR_DAT_06e5a038);
    *(undefined1 *)(unaff_x23 + 0x1a3) = 1;
  }
  uVar4 = FUN_0160edfc(*unaff_x21,0x34);
  FUN_02df8d44(uVar4,*puVar7,0);
  **(undefined8 **)(*plVar8 + 0xb8) = uVar4;
  thunk_FUN_01656ef8(*(undefined8 *)(*plVar8 + 0xb8),uVar4);
  lVar5 = thunk_FUN_015d056c(*puVar9);
  puVar3 = PTR_DAT_06e5a038;
  puVar2 = PTR_DAT_06e28e10;
  puVar1 = PTR_DAT_06d925b0;
  if (lVar5 != 0) {
    FUN_04277c5c(lVar5,*(undefined8 *)PTR_DAT_06dca700);
    FUN_04278ab8(lVar5,10,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x15,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x16,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x17,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x13,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x14,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x11,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x12,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x1a,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x1d,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x20,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x23,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x26,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x29,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x2c,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x2f,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x32,0x37,*(undefined8 *)puVar2);
    FUN_04278ab8(lVar5,0x35,0x37,*(undefined8 *)puVar2);
    plVar6 = (long *)(*(long *)(*plVar8 + 0xb8) + 8);
    *plVar6 = lVar5;
    thunk_FUN_01656ef8(plVar6,lVar5);
    uVar4 = FUN_0160edfc(*unaff_x21,3);
    FUN_02df8d44(uVar4,*(undefined8 *)puVar3,0);
    puVar7 = (undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x10);
    *puVar7 = uVar4;
    thunk_FUN_01656ef8(puVar7,uVar4);
    uVar4 = FUN_0160edfc(*unaff_x21,5);
    FUN_02df8d44(uVar4,*(undefined8 *)puVar1,0);
    puVar7 = (undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x18);
    *puVar7 = uVar4;
    thunk_FUN_01656ef8(puVar7,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<>c$$<LoadAssembliesAsync>b__19_0
ENTRY_POINT: 072807d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<>c__<LoadAssembliesAsync>b__19_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x25;
  long *plVar16;
  
  plVar16 = *(long **)(unaff_x25 + 0x918);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
  thunk_FUN_040ec700();
  lVar7 = *plVar16;
  uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar7 = *plVar16;
  }
  puVar3 = PTR_DAT_092c1888;
  puVar2 = PTR_DAT_092c1880;
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar12 = puVar9[1];
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar9 = *(undefined8 **)(*plVar16 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18c0);
    FUN_05691a08(lVar12,uVar13,*(undefined8 *)PTR_DAT_092c18e8,0);
    plVar8 = (long *)(*(long *)(*plVar16 + 0xb8) + 8);
    *plVar8 = lVar12;
    thunk_FUN_040ec700(plVar8,lVar12);
  }
  uVar11 = FUN_04fb0ee4(uVar11,lVar12,*(undefined8 *)puVar3);
  uVar11 = FUN_04f94604(uVar11,*(undefined8 *)puVar2);
  lVar7 = *plVar16;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar7);
    lVar7 = *plVar16;
  }
  puVar2 = PTR_DAT_092c18a0;
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar12 = puVar9[2];
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar7);
      puVar9 = *(undefined8 **)(*plVar16 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18d8);
    FUN_05697628(lVar12,uVar13,*(undefined8 *)PTR_DAT_092c18f0,0);
    plVar8 = (long *)(*(long *)(*plVar16 + 0xb8) + 0x10);
    *plVar8 = lVar12;
    thunk_FUN_040ec700(plVar8,lVar12);
  }
  uVar11 = FUN_04fb03f4(uVar11,lVar12,*(undefined8 *)puVar2);
  lVar7 = *plVar16;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar7);
    lVar7 = *plVar16;
  }
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar12 = puVar9[3];
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar7);
      puVar9 = *(undefined8 **)(*plVar16 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18d0);
    FUN_0568bbc4(lVar12,uVar13,*(undefined8 *)PTR_DAT_092c18f8,0);
    plVar8 = (long *)(*(long *)(*plVar16 + 0xb8) + 0x18);
    *plVar8 = lVar12;
    thunk_FUN_040ec700(plVar8,lVar12);
    lVar7 = *plVar16;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar7);
    lVar7 = *plVar16;
  }
  puVar2 = PTR_DAT_092c18a8;
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar14 = puVar9[4];
  if (lVar14 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar7);
      puVar9 = *(undefined8 **)(*plVar16 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18c8);
    FUN_0568a6b0(lVar14,uVar13,*(undefined8 *)PTR_DAT_092c1900,0);
    plVar8 = (long *)(*(long *)(*plVar16 + 0xb8) + 0x20);
    *plVar8 = lVar14;
    thunk_FUN_040ec700(plVar8,lVar14);
  }
  uVar11 = FUN_04fbafec(uVar11,lVar12,lVar14,*(undefined8 *)puVar2);
  puVar9 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar9 = uVar11;
  thunk_FUN_040ec700(puVar9,uVar11);
  lVar7 = *plVar16;
  uVar11 = *puVar9;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar7 = *plVar16;
  }
  puVar5 = PTR_DAT_092c18b0;
  puVar4 = PTR_DAT_092c1898;
  puVar3 = PTR_DAT_092c1890;
  puVar2 = PTR_DAT_092c1728;
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar12 = puVar9[5];
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar9 = *(undefined8 **)(*plVar16 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18b8);
    FUN_0567cbc4(lVar12,uVar13,*(undefined8 *)PTR_DAT_092c1908,0);
    plVar16 = (long *)(*(long *)(*plVar16 + 0xb8) + 0x28);
    *plVar16 = lVar12;
    thunk_FUN_040ec700(plVar16,lVar12);
  }
  puVar6 = PTR_DAT_092c18e0;
  puVar1 = PTR_DAT_09287040;
  uVar11 = FUN_04fa7f2c(uVar11,lVar12,*(undefined8 *)puVar3);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
  FUN_05691a08();
  uVar13 = FUN_04fb00d0(uVar10,uVar13,*(undefined8 *)puVar4);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_092c1408;
  uVar10 = **(undefined8 **)(lVar7 + 0xb8);
  plVar16 = (long *)FUN_04077674(*(undefined8 *)puVar1,2);
  lVar7 = *(long *)puVar6;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar7);
    lVar7 = *(long *)puVar6;
  }
  uVar15 = **(undefined8 **)(lVar7 + 0xb8);
  lVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  System_Xml_XmlReader__Close(lVar7,uVar15,uVar11,0);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar7 != 0) &&
     (lVar12 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)) {
LAB_07280ca8:
    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar11,0);
  }
  if ((int)plVar16[3] != 0) {
    plVar16[4] = lVar7;
    thunk_FUN_040ec700(plVar16 + 4,lVar7);
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    System_Xml_XmlReader__Close(lVar7,uVar11,uVar13,0);
    if ((lVar7 != 0) &&
       (lVar12 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_07280ca8;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
      plVar16[5] = lVar7;
      thunk_FUN_040ec700(plVar16 + 5,lVar7);
      uVar11 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_07df868c(uVar11,uVar10,plVar16,0);
      return uVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



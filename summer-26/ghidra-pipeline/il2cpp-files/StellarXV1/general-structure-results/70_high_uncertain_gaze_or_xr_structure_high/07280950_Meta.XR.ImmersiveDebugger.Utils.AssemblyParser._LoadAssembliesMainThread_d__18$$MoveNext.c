/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<LoadAssembliesMainThread>d__18$$MoveNext
ENTRY_POINT: 07280950
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<LoadAssembliesMainThread>d__18__MoveNext
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *in_x9;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x20;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x25;
  
  if (unaff_x22 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8(param_1);
      in_x9 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar13 = *in_x9;
    uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18d0);
    FUN_0568bbc4(uVar7,uVar13,*(undefined8 *)PTR_DAT_092c18f8,0);
    puVar8 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
    *puVar8 = uVar7;
    thunk_FUN_040ec700(puVar8,uVar7);
    param_1 = *unaff_x25;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(param_1);
    param_1 = *unaff_x25;
  }
  puVar8 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar8[4] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8(param_1);
      puVar8 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar13 = *puVar8;
    uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18c8);
    FUN_0568a6b0(uVar7,uVar13,*(undefined8 *)PTR_DAT_092c1900,0);
    puVar8 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x20);
    *puVar8 = uVar7;
    thunk_FUN_040ec700(puVar8,uVar7);
  }
  uVar7 = FUN_04fbafec();
  puVar8 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_040ec700(puVar8,uVar7);
  lVar9 = *unaff_x25;
  uVar7 = *puVar8;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar9 = *unaff_x25;
  }
  puVar5 = PTR_DAT_092c18b0;
  puVar4 = PTR_DAT_092c1898;
  puVar3 = PTR_DAT_092c1890;
  puVar2 = PTR_DAT_092c1728;
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar12 = puVar8[5];
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar8 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar13 = *puVar8;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18b8);
    FUN_0567cbc4(lVar12,uVar13,*(undefined8 *)PTR_DAT_092c1908,0);
    plVar10 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x28);
    *plVar10 = lVar12;
    thunk_FUN_040ec700(plVar10,lVar12);
  }
  puVar6 = PTR_DAT_092c18e0;
  puVar1 = PTR_DAT_09287040;
  uVar7 = FUN_04fa7f2c(uVar7,lVar12,*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
  FUN_05691a08();
  uVar13 = FUN_04fb00d0(uVar11,uVar13,*(undefined8 *)puVar4);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar9);
    lVar9 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_092c1408;
  uVar11 = **(undefined8 **)(lVar9 + 0xb8);
  plVar10 = (long *)FUN_04077674(*(undefined8 *)puVar1,2);
  lVar9 = *(long *)puVar6;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar9);
    lVar9 = *(long *)puVar6;
  }
  uVar14 = **(undefined8 **)(lVar9 + 0xb8);
  lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  System_Xml_XmlReader__Close(lVar9,uVar14,uVar7,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar9 != 0) &&
     (lVar12 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
LAB_07280ca8:
    uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar7,0);
  }
  if ((int)plVar10[3] != 0) {
    plVar10[4] = lVar9;
    thunk_FUN_040ec700(plVar10 + 4,lVar9);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    System_Xml_XmlReader__Close(lVar9,uVar7,uVar13,0);
    if ((lVar9 != 0) &&
       (lVar12 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_07280ca8;
    if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
      plVar10[5] = lVar9;
      thunk_FUN_040ec700(plVar10 + 5,lVar9);
      uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_07df868c(uVar7,uVar11,plVar10,0);
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



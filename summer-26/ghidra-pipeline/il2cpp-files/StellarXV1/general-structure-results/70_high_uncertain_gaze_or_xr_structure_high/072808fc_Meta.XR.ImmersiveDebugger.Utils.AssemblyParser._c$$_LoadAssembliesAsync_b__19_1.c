/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<>c$$<LoadAssembliesAsync>b__19_1
ENTRY_POINT: 072808fc
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
Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<>c__<LoadAssembliesAsync>b__19_1
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x25;
  
  FUN_05697628(param_2,param_3,*param_1);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
  *puVar7 = param_2;
  thunk_FUN_040ec700(puVar7,param_2);
  uVar8 = FUN_04fb03f4();
  lVar10 = *unaff_x25;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar10);
    lVar10 = *unaff_x25;
  }
  puVar7 = *(undefined8 **)(lVar10 + 0xb8);
  lVar12 = puVar7[3];
  if (lVar12 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar10);
      puVar7 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar13 = *puVar7;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18d0);
    FUN_0568bbc4(lVar12,uVar13,*(undefined8 *)PTR_DAT_092c18f8,0);
    plVar9 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
    *plVar9 = lVar12;
    thunk_FUN_040ec700(plVar9,lVar12);
    lVar10 = *unaff_x25;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar10);
    lVar10 = *unaff_x25;
  }
  puVar2 = PTR_DAT_092c18a8;
  puVar7 = *(undefined8 **)(lVar10 + 0xb8);
  lVar14 = puVar7[4];
  if (lVar14 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar10);
      puVar7 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar13 = *puVar7;
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18c8);
    FUN_0568a6b0(lVar14,uVar13,*(undefined8 *)PTR_DAT_092c1900,0);
    plVar9 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x20);
    *plVar9 = lVar14;
    thunk_FUN_040ec700(plVar9,lVar14);
  }
  uVar8 = FUN_04fbafec(uVar8,lVar12,lVar14,*(undefined8 *)puVar2);
  puVar7 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar7 = uVar8;
  thunk_FUN_040ec700(puVar7,uVar8);
  lVar10 = *unaff_x25;
  uVar8 = *puVar7;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar10 = *unaff_x25;
  }
  puVar5 = PTR_DAT_092c18b0;
  puVar4 = PTR_DAT_092c1898;
  puVar3 = PTR_DAT_092c1890;
  puVar2 = PTR_DAT_092c1728;
  puVar7 = *(undefined8 **)(lVar10 + 0xb8);
  lVar12 = puVar7[5];
  if (lVar12 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar7 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar13 = *puVar7;
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18b8);
    FUN_0567cbc4(lVar12,uVar13,*(undefined8 *)PTR_DAT_092c1908,0);
    plVar9 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x28);
    *plVar9 = lVar12;
    thunk_FUN_040ec700(plVar9,lVar12);
  }
  puVar6 = PTR_DAT_092c18e0;
  puVar1 = PTR_DAT_09287040;
  uVar8 = FUN_04fa7f2c(uVar8,lVar12,*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
  FUN_05691a08();
  uVar13 = FUN_04fb00d0(uVar11,uVar13,*(undefined8 *)puVar4);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_092c1408;
  uVar11 = **(undefined8 **)(lVar10 + 0xb8);
  plVar9 = (long *)FUN_04077674(*(undefined8 *)puVar1,2);
  lVar10 = *(long *)puVar6;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar10);
    lVar10 = *(long *)puVar6;
  }
  uVar15 = **(undefined8 **)(lVar10 + 0xb8);
  lVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  System_Xml_XmlReader__Close(lVar10,uVar15,uVar8,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar10 != 0) &&
     (lVar12 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
LAB_07280ca8:
    uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar8,0);
  }
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar10;
    thunk_FUN_040ec700(plVar9 + 4,lVar10);
    uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    System_Xml_XmlReader__Close(lVar10,uVar8,uVar13,0);
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
    goto LAB_07280ca8;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
      plVar9[5] = lVar10;
      thunk_FUN_040ec700(plVar9 + 5,lVar10);
      uVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_07df868c(uVar8,uVar11,plVar9,0);
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



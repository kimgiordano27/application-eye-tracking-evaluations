/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<>c$$.cctor
ENTRY_POINT: 07280768
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<>c___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined8 *unaff_x22;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092c1900);
  FUN_04077588(PTR_DAT_092c1908);
  FUN_04077588(PTR_DAT_092c1910);
  FUN_04077588(PTR_DAT_092c1878);
  FUN_04077588(PTR_DAT_092c1918);
  FUN_04077588(PTR_DAT_092c1408);
  *(undefined1 *)(unaff_x20 + 0x77b) = 1;
  lVar8 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_076bca34(lVar8,0);
  puVar1 = PTR_DAT_092c1918;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x18) = unaff_x21;
    thunk_FUN_040ec700();
    lVar9 = *(long *)puVar1;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar1;
    }
    puVar3 = PTR_DAT_092c1888;
    puVar2 = PTR_DAT_092c1880;
    puVar11 = *(undefined8 **)(lVar9 + 0xb8);
    lVar14 = puVar11[1];
    if (lVar14 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18c0);
      FUN_05691a08(lVar14,uVar15,*(undefined8 *)PTR_DAT_092c18e8,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar10 = lVar14;
      thunk_FUN_040ec700(plVar10,lVar14);
    }
    uVar13 = FUN_04fb0ee4(uVar13,lVar14,*(undefined8 *)puVar3);
    uVar13 = FUN_04f94604(uVar13,*(undefined8 *)puVar2);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar9);
      lVar9 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_092c18a0;
    puVar11 = *(undefined8 **)(lVar9 + 0xb8);
    lVar14 = puVar11[2];
    if (lVar14 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar9);
        puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18d8);
      FUN_05697628(lVar14,uVar15,*(undefined8 *)PTR_DAT_092c18f0,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar10 = lVar14;
      thunk_FUN_040ec700(plVar10,lVar14);
    }
    uVar13 = FUN_04fb03f4(uVar13,lVar14,*(undefined8 *)puVar2);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar9);
      lVar9 = *(long *)puVar1;
    }
    puVar11 = *(undefined8 **)(lVar9 + 0xb8);
    lVar14 = puVar11[3];
    if (lVar14 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar9);
        puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18d0);
      FUN_0568bbc4(lVar14,uVar15,*(undefined8 *)PTR_DAT_092c18f8,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar10 = lVar14;
      thunk_FUN_040ec700(plVar10,lVar14);
      lVar9 = *(long *)puVar1;
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar9);
      lVar9 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_092c18a8;
    puVar11 = *(undefined8 **)(lVar9 + 0xb8);
    lVar16 = puVar11[4];
    if (lVar16 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar9);
        puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18c8);
      FUN_0568a6b0(lVar16,uVar15,*(undefined8 *)PTR_DAT_092c1900,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar10 = lVar16;
      thunk_FUN_040ec700(plVar10,lVar16);
    }
    uVar13 = FUN_04fbafec(uVar13,lVar14,lVar16,*(undefined8 *)puVar2);
    puVar11 = (undefined8 *)(lVar8 + 0x10);
    *puVar11 = uVar13;
    thunk_FUN_040ec700(puVar11,uVar13);
    lVar9 = *(long *)puVar1;
    uVar13 = *puVar11;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar1;
    }
    puVar7 = PTR_DAT_092c1910;
    puVar5 = PTR_DAT_092c18b0;
    puVar4 = PTR_DAT_092c1898;
    puVar3 = PTR_DAT_092c1890;
    puVar2 = PTR_DAT_092c1728;
    puVar11 = *(undefined8 **)(lVar9 + 0xb8);
    lVar14 = puVar11[5];
    if (lVar14 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar15 = *puVar11;
      lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c18b8);
      FUN_0567cbc4(lVar14,uVar15,*(undefined8 *)PTR_DAT_092c1908,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *plVar10 = lVar14;
      thunk_FUN_040ec700(plVar10,lVar14);
    }
    puVar6 = PTR_DAT_092c18e0;
    puVar1 = PTR_DAT_09287040;
    uVar13 = FUN_04fa7f2c(uVar13,lVar14,*(undefined8 *)puVar3);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
    FUN_05691a08(uVar15,lVar8,*(undefined8 *)puVar7,0);
    uVar15 = FUN_04fb00d0(uVar12,uVar15,*(undefined8 *)puVar4);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar8);
      lVar8 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_092c1408;
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    plVar10 = (long *)FUN_04077674(*(undefined8 *)puVar1,2);
    lVar8 = *(long *)puVar6;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar17 = **(undefined8 **)(lVar8 + 0xb8);
    lVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    System_Xml_XmlReader__Close(lVar8,uVar17,uVar13,0);
    if (plVar10 != (long *)0x0) {
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
LAB_07280ca8:
        uVar13 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar13,0);
      }
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar8;
        thunk_FUN_040ec700(plVar10 + 4,lVar8);
        uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
        lVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
        System_Xml_XmlReader__Close(lVar8,uVar13,uVar15,0);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
        goto LAB_07280ca8;
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
          plVar10[5] = lVar8;
          thunk_FUN_040ec700(plVar10 + 5,lVar8);
          uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
          FUN_07df868c(uVar13,uVar12,plVar10,0);
          return uVar13;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



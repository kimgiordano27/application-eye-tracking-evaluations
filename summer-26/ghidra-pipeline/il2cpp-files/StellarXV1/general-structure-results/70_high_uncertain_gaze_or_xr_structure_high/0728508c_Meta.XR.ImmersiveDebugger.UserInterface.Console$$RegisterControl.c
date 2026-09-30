/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$RegisterControl
ENTRY_POINT: 0728508c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterControl(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  uVar14 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar6 = thunk_FUN_040b4efc(*unaff_x29);
  FUN_07df1964(lVar6,param_1,uVar14,0);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar7 == 0)) {
LAB_07285254:
    uVar14 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar14,0);
  }
  if (5 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[9] = lVar6;
    thunk_FUN_040ec700(unaff_x22 + 9,lVar6);
    if (*(long *)(unaff_x19 + 0x48) == 0) {
LAB_072852c4:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = FUN_07280660(*(long *)(unaff_x19 + 0x48),*unaff_x23);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar7 == 0))
    goto LAB_07285254;
    if (6 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[10] = lVar6;
      thunk_FUN_040ec700(unaff_x22 + 10,lVar6);
      plVar12 = *(long **)(unaff_x19 + 0x58);
      if (plVar12 == (long *)0x0) goto LAB_072852c4;
      lVar6 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c1b68) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07285194;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092c1b68,0);
LAB_07285194:
      puVar1 = PTR_DAT_092c1408;
      iVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      puVar4 = PTR_DAT_092c1b60;
      puVar3 = PTR_DAT_092c1b58;
      puVar2 = PTR_DAT_092c1728;
      if (iVar5 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)PTR_DAT_092c1728;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar6 = *(long *)puVar2;
        }
        uVar11 = *(undefined8 *)(unaff_x19 + 0x58);
        uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
        uVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
        FUN_0568af90();
        uVar14 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                           (uVar11,uVar14,*(undefined8 *)puVar3);
        lVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
        System_Xml_XmlReader__Close(lVar6,uVar13,uVar14,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar7 == 0))
        goto LAB_07285254;
      }
      if ((*(uint *)(unaff_x22 + 3) & 0xfffffff8) != 0) {
        unaff_x22[0xb] = lVar6;
        thunk_FUN_040ec700(unaff_x22 + 0xb,lVar6);
        uVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
        FUN_07df868c(uVar14,in_stack_00000008);
        return uVar14;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



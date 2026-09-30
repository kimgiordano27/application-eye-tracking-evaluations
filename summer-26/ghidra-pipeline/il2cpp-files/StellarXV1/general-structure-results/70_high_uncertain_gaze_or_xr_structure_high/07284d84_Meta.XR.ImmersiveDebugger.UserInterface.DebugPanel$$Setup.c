/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugPanel$$Setup
ENTRY_POINT: 07284d84
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_DebugPanel__Setup(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar15;
  long unaff_x24;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  FUN_07df1964();
  if ((param_1 != 0) &&
     (lVar6 = thunk_FUN_040b4e00(param_1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar6 == 0))
  goto LAB_07285254;
  if ((*(uint *)(unaff_x22 + 3) & 0xfffffffe) == 0) goto LAB_072852c0;
  unaff_x22[5] = param_1;
  thunk_FUN_040ec700(unaff_x22 + 5,param_1);
  puVar1 = PTR_DAT_092c1990;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_092c19d8,2);
    uVar8 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    if (*unaff_x23 == 0) goto LAB_072852c4;
    plVar12 = *(long **)(unaff_x19 + 0x18);
    if (plVar12 != (long *)0x0) {
      lVar6 = *unaff_x28;
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
      {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar12,lVar6);
      }
    }
    in_stack_00000010 = FUN_06eef5a0(*unaff_x23,plVar12,*(undefined8 *)PTR_DAT_092c1548);
    uVar9 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x21 + 0x48),&stack0x00000010);
    lVar6 = thunk_FUN_040b4efc(*unaff_x29);
    FUN_07df1964(lVar6,uVar8,uVar9,0);
    if (plVar7 == (long *)0x0) goto LAB_072852c4;
    if ((lVar6 != 0) &&
       (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_07285254;
    puVar1 = PTR_DAT_092c1b88;
    if ((int)plVar7[3] == 0) goto LAB_072852c0;
    plVar7[4] = lVar6;
    thunk_FUN_040ec700(plVar7 + 4,lVar6);
    uVar8 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    in_stack_00000028._4_4_ = *(undefined4 *)(unaff_x19 + 0x20);
    uVar9 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x21 + 0x48),(long)&stack0x00000028 + 4);
    lVar6 = thunk_FUN_040b4efc(*unaff_x29);
    FUN_07df1964(lVar6,uVar8,uVar9,0);
    if ((lVar6 != 0) &&
       (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_07285254;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_072852c0;
    plVar7[5] = lVar6;
    thunk_FUN_040ec700(plVar7 + 5,lVar6);
    lVar6 = thunk_FUN_040b4e00(plVar7,*(undefined8 *)(*unaff_x22 + 0x40));
    if (lVar6 == 0) goto LAB_07285254;
  }
  if (2 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[6] = (long)plVar7;
    thunk_FUN_040ec700(unaff_x22 + 6,plVar7);
    if (unaff_x24 == 0) {
      lVar6 = 0;
    }
    else {
      uVar8 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1b80,0);
      lVar6 = thunk_FUN_040b4efc(*unaff_x29);
      FUN_07df1964(lVar6,uVar8);
      if ((lVar6 != 0) &&
         (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar10 == 0))
      goto LAB_07285254;
    }
    if ((*(uint *)(unaff_x22 + 3) & 0xfffffffc) == 0) goto LAB_072852c0;
    unaff_x22[7] = lVar6;
    thunk_FUN_040ec700(unaff_x22 + 7,lVar6);
    if (*(long *)(unaff_x19 + 0x28) == 0) {
      lVar6 = 0;
    }
    else {
      uVar8 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1af8,0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
      lVar6 = thunk_FUN_040b4efc(*unaff_x29);
      FUN_07df1964(lVar6,uVar8,uVar9,0);
      if ((lVar6 != 0) &&
         (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar10 == 0))
      goto LAB_07285254;
    }
    if (*(uint *)(unaff_x22 + 3) < 5) goto LAB_072852c0;
    unaff_x22[8] = lVar6;
    thunk_FUN_040ec700(unaff_x22 + 8,lVar6);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      lVar6 = 0;
    }
    else {
      uVar8 = FUN_07dfb290(*(undefined8 *)PTR_DAT_0928bfe0,0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
      lVar6 = thunk_FUN_040b4efc(*unaff_x29);
      FUN_07df1964(lVar6,uVar8,uVar9,0);
      if ((lVar6 != 0) &&
         (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar10 == 0))
      goto LAB_07285254;
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
         (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar10 == 0)) {
LAB_07285254:
        uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar8,0);
      }
      if (6 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[10] = lVar6;
        thunk_FUN_040ec700(unaff_x22 + 10,lVar6);
        plVar7 = *(long **)(unaff_x19 + 0x58);
        if (plVar7 == (long *)0x0) goto LAB_072852c4;
        lVar6 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092c1b68) {
              puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_07285194;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092c1b68,0);
LAB_07285194:
        puVar1 = PTR_DAT_092c1408;
        iVar5 = (*(code *)*puVar11)(plVar7,puVar11[1]);
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
          uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
          uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
          uVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
          FUN_0568af90();
          uVar8 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                            (uVar9,uVar8,*(undefined8 *)puVar3);
          lVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
          System_Xml_XmlReader__Close(lVar6,uVar15,uVar8,0);
          if ((lVar6 != 0) &&
             (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*unaff_x22 + 0x40)), lVar10 == 0))
          goto LAB_07285254;
        }
        if ((*(uint *)(unaff_x22 + 3) & 0xfffffff8) != 0) {
          unaff_x22[0xb] = lVar6;
          thunk_FUN_040ec700(unaff_x22 + 0xb,lVar6);
          uVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
          FUN_07df868c(uVar8,in_stack_00000008);
          return uVar8;
        }
      }
    }
  }
LAB_072852c0:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



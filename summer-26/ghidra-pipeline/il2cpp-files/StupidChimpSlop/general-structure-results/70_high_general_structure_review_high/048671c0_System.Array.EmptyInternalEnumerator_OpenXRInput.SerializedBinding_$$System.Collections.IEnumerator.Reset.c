/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 048671c0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>__System_Collections_IEnumerator_Reset
               (void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  undefined8 uVar11;
  long unaff_x20;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar15;
  
  cVar2 = *(char *)(unaff_x24 + 0x63a);
  *(long **)(unaff_x29 + -0x80) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x22;
  if (cVar2 == '\0') {
    FUN_02d4dc40(PTR_DAT_06648868);
    *(undefined1 *)(unaff_x24 + 0x63a) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a4963b == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963b = '\x01';
  }
  if (unaff_x21 == (long *)0x0) {
System_Array_EmptyInternalEnumerator<JsonParser_JsonValue>__Dispose:
    if (DAT_06a4963c == '\0') {
      FUN_02d4dc40(PTR_DAT_06648890);
      DAT_06a4963c = '\x01';
    }
    plVar13 = *(long **)(unaff_x29 + -0x80);
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      uVar4 = *(undefined2 *)(unaff_x29 + -0x78);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06648890) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_04866590;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d87540(plVar13,*(long *)PTR_DAT_06648890,2);
LAB_04866590:
      (*(code *)*puVar6)(plVar13,uVar4,puVar6[1]);
    }
    plVar14 = (long *)(unaff_x19 + 0x12);
    plVar13 = (long *)*plVar14;
    if (plVar13 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06647b18)
         ) {
        *(long *)(unaff_x29 + -0xb8) = unaff_x25;
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac();
        }
        goto LAB_04867554;
      }
      lVar8 = FUN_04f2e80c(plVar13,0);
      if (lVar8 == 0) {
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_04867554;
      }
      FUN_04f2e8cc(lVar8,0);
    }
    *plVar14 = 0;
    thunk_FUN_02dc1ef0(plVar14,0);
    uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x10,0);
    plVar13 = *(long **)(unaff_x19 + 2);
    if (plVar13 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 6) = uVar11;
    }
    else {
      lVar8 = *(long *)(*(long *)PTR_DAT_0664e240 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
      }
      lVar7 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_04867130;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d87540(plVar13,lVar8,2);
LAB_04867130:
      (*(code *)*puVar6)(plVar13,uVar11,puVar6[1]);
    }
  }
  else {
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06648890) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04867268;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d87540();
LAB_04867268:
    iVar5 = (*(code *)*puVar6)();
    if (iVar5 != 0) goto System_Array_EmptyInternalEnumerator<JsonParser_JsonValue>__Dispose;
    uVar15 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x80);
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x22) = uVar15;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar11;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x20,0);
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar8 + 0x135);
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_02d8720c();
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
    if ((uVar3 & 1) == 0) {
      FUN_02d8720c();
    }
    (*pcVar12)(unaff_x19 + 2,unaff_x29 + -0x80);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
LAB_04867554:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



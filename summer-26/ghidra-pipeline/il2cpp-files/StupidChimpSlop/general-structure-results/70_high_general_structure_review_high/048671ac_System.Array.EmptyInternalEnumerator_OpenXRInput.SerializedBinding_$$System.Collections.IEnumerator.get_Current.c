/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 048671ac
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


void System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>__System_Collections_IEnumerator_get_Current
               (void)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  code *pcVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar16;
  
                    /* try { // try from 048671b0 to 049671cb has its CatchHandler @ 04867494 */
  thunk_FUN_02dc1ef0(unaff_x29 + -0xb0,0);
  cVar4 = DAT_06a4963a;
  plVar14 = *(long **)(unaff_x29 + -0xb0);
  uVar9 = *(ulong *)(unaff_x29 + -0xa8);
  *(long **)(unaff_x29 + -0x80) = plVar14;
  *(ulong *)(unaff_x29 + -0x78) = uVar9;
  if (cVar4 == '\0') {
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4963a = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a4963b == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963b = '\x01';
  }
  if (plVar14 == (long *)0x0) {
System_Array_EmptyInternalEnumerator<JsonParser_JsonValue>__Dispose:
    if (DAT_06a4963c == '\0') {
      FUN_02d4dc40(PTR_DAT_06648890);
      DAT_06a4963c = '\x01';
    }
    plVar14 = *(long **)(unaff_x29 + -0x80);
    if (plVar14 != (long *)0x0) {
      lVar8 = *plVar14;
      uVar3 = *(undefined2 *)(unaff_x29 + -0x78);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06648890) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_04866590;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d87540(plVar14,*(long *)PTR_DAT_06648890,2);
LAB_04866590:
      (*(code *)*puVar6)(plVar14,uVar3,puVar6[1]);
    }
    plVar15 = (long *)(unaff_x19 + 0x12);
    plVar14 = (long *)*plVar15;
    if (plVar14 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06647b18)
         ) {
        *(long *)(unaff_x29 + -0xb8) = unaff_x25;
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac();
        }
        goto LAB_04867554;
      }
      lVar8 = FUN_04f2e80c(plVar14,0);
      if (lVar8 == 0) {
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_04867554;
      }
      FUN_04f2e8cc(lVar8,0);
    }
    *plVar15 = 0;
    thunk_FUN_02dc1ef0(plVar15,0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xe);
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x10,0);
    plVar14 = *(long **)(unaff_x19 + 2);
    if (plVar14 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 6) = uVar12;
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
      lVar7 = *plVar14;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_04867130;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d87540(plVar14,lVar8,2);
LAB_04867130:
      (*(code *)*puVar6)(plVar14,uVar12,puVar6[1]);
    }
  }
  else {
    lVar8 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06648890) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04867268;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d87540(plVar14,*(long *)PTR_DAT_06648890,0);
LAB_04867268:
    iVar5 = (*(code *)*puVar6)(plVar14,uVar9 & 0xffffffff,puVar6[1]);
    if (iVar5 != 0) goto System_Array_EmptyInternalEnumerator<JsonParser_JsonValue>__Dispose;
    uVar16 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x80);
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x22) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar12;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x20,0);
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02d8720c();
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_02d8720c();
    }
    (*pcVar13)(unaff_x19 + 2,unaff_x29 + -0x80);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
LAB_04867554:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



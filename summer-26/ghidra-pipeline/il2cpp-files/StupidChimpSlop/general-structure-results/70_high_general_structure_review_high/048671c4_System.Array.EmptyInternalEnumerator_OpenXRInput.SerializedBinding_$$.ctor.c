/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$.ctor
ENTRY_POINT: 048671c4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___ctor(void)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int in_w8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 uVar10;
  long unaff_x20;
  code *pcVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar14;
  
  *(long **)(unaff_x29 + -0x80) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x22;
  if (in_w8 == 0) {
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
    plVar12 = *(long **)(unaff_x29 + -0x80);
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      uVar3 = *(undefined2 *)(unaff_x29 + -0x78);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06648890) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_04866590;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d87540(plVar12,*(long *)PTR_DAT_06648890,2);
LAB_04866590:
      (*(code *)*puVar5)(plVar12,uVar3,puVar5[1]);
    }
    plVar13 = (long *)(unaff_x19 + 0x12);
    plVar12 = (long *)*plVar13;
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06647b18)
         ) {
        *(long *)(unaff_x29 + -0xb8) = unaff_x25;
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac();
        }
        goto LAB_04867554;
      }
      lVar7 = FUN_04f2e80c(plVar12,0);
      if (lVar7 == 0) {
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_04867554;
      }
      FUN_04f2e8cc(lVar7,0);
    }
    *plVar13 = 0;
    thunk_FUN_02dc1ef0(plVar13,0);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xe);
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x10,0);
    plVar12 = *(long **)(unaff_x19 + 2);
    if (plVar12 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 6) = uVar10;
    }
    else {
      lVar7 = *(long *)(*(long *)PTR_DAT_0664e240 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02d8720c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02d8720c(lVar7);
      }
      lVar6 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_04867130;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d87540(plVar12,lVar7,2);
LAB_04867130:
      (*(code *)*puVar5)(plVar12,uVar10,puVar5[1]);
    }
  }
  else {
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06648890) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04867268;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d87540();
LAB_04867268:
    iVar4 = (*(code *)*puVar5)();
    if (iVar4 != 0) goto System_Array_EmptyInternalEnumerator<JsonParser_JsonValue>__Dispose;
    uVar14 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x80);
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x22) = uVar14;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar10;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x20,0);
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02d8720c();
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_02d8720c();
    }
    (*pcVar11)(unaff_x19 + 2,unaff_x29 + -0x80);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
LAB_04867554:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



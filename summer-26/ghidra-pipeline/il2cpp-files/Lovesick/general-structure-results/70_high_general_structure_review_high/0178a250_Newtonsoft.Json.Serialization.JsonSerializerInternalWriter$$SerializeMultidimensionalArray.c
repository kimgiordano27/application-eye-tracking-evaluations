/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 0178a250
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  ulong uVar13;
  uint uVar14;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long lVar15;
  long unaff_x27;
  ulong uVar16;
  ulong uVar17;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  do {
    plVar4 = *(long **)(unaff_x27 + unaff_x20 * 8);
    if ((plVar4 == (long *)0x0) ||
       (lVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0)),
       unaff_x22 == (long *)0x0)) goto LAB_0178a518;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar6 == 0))
    goto LAB_0178a51c;
    uVar14 = (uint)unaff_x20;
    if ((*(uint *)(unaff_x22 + 3) <= uVar14) ||
       (*(long *)(unaff_x26 + unaff_x20 * 8) = lVar5, *(uint *)(unaff_x23 + 0x18) <= uVar14)) break;
    plVar4 = *(long **)(unaff_x27 + unaff_x20 * 8);
    if ((plVar4 == (long *)0x0) ||
       (lVar5 = (**(code **)(*plVar4 + 0x338))(plVar4,*(undefined8 *)(*plVar4 + 0x340)),
       unaff_x21 == (long *)0x0)) goto LAB_0178a518;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x21 + 0x40)), lVar6 == 0))
    goto LAB_0178a51c;
    if (*(uint *)(unaff_x21 + 3) <= uVar14) break;
    *(long *)(unaff_x25 + unaff_x20 * 8) = lVar5;
    unaff_x20 = unaff_x20 + 1;
    if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)(uint)unaff_x20) {
      plVar4 = (long *)FUN_012674ac(*unaff_x19);
      puVar2 = StringLiteral_5687;
      if ((int)unaff_x21[3] < 2) goto LAB_0178a4e4;
      uVar10 = unaff_x21[3] & 0xffffffff;
      uVar13 = 1;
      goto LAB_0178a330;
    }
  } while ((uint)unaff_x20 < *(uint *)(unaff_x23 + 0x18));
LAB_0178a514:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
LAB_0178a330:
  if (unaff_x22 == (long *)0x0) {
LAB_0178a518:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(uint *)(unaff_x22 + 3) <= uVar13) || (uVar10 <= uVar13)) goto LAB_0178a514;
  lVar5 = unaff_x22[uVar13 + 4];
  lVar6 = unaff_x21[uVar13 + 4];
  bVar1 = false;
  uVar16 = uVar13;
  do {
    uVar17 = uVar16 - 1;
    uVar14 = (uint)uVar17;
    if ((uint)uVar10 <= uVar14) goto LAB_0178a514;
    lVar15 = unaff_x21[uVar16 + 3];
    if (plVar4 == (long *)0x0) goto LAB_0178a518;
    lVar11 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0178a3c8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar2,0);
LAB_0178a3c8:
    iVar3 = (*(code *)*puVar7)(plVar4,lVar15,lVar6,puVar7[1]);
    if (iVar3 < 1) {
      uVar17 = uVar16;
      if (!bVar1) goto LAB_0178a4d4;
      break;
    }
    uVar9 = *(uint *)(unaff_x22 + 3);
    if (uVar9 <= uVar14) goto LAB_0178a514;
    lVar15 = unaff_x22[uVar16 + 3];
    if (lVar15 != 0) {
      lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar11 == 0) goto LAB_0178a51c;
      uVar9 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar9 <= (uint)uVar16) goto LAB_0178a514;
    unaff_x22[uVar16 + 4] = lVar15;
    uVar10 = unaff_x21[3];
    if ((uint)uVar10 <= uVar14) goto LAB_0178a514;
    lVar15 = unaff_x21[uVar16 + 3];
    if (lVar15 != 0) {
      lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar11 == 0) goto LAB_0178a51c;
      uVar10 = unaff_x21[3];
    }
    if ((uint)uVar10 <= (uint)uVar16) goto LAB_0178a514;
    bVar1 = true;
    unaff_x21[uVar16 + 4] = lVar15;
    uVar16 = uVar17;
  } while (uVar17 != 0);
  if ((lVar5 != 0) &&
     (lVar15 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar15 == 0)) {
LAB_0178a51c:
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  uVar14 = (uint)uVar17;
  if (*(uint *)(unaff_x22 + 3) <= uVar14) goto LAB_0178a514;
  unaff_x22[(long)(int)uVar14 + 4] = lVar5;
  if ((lVar6 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
  goto LAB_0178a51c;
  if (*(uint *)(unaff_x21 + 3) <= uVar14) goto LAB_0178a514;
  unaff_x21[(long)(int)uVar14 + 4] = lVar6;
LAB_0178a4d4:
  uVar10 = (ulong)*(uint *)(unaff_x21 + 3);
  uVar13 = uVar13 + 1;
  if ((long)(int)*(uint *)(unaff_x21 + 3) <= (long)uVar13) {
LAB_0178a4e4:
    *in_stack_00000008 = unaff_x22;
    *in_stack_00000010 = unaff_x21;
    return;
  }
  goto LAB_0178a330;
}



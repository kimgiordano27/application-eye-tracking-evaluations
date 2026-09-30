/*
FUNCTION_NAME: OVRTelemetry.NullTelemetryClient$$.ctor
ENTRY_POINT: 01a7ad8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void OVRTelemetry_NullTelemetryClient___ctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  long *unaff_x28;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  puVar7 = (undefined8 *)FUN_00d59724();
  puVar5 = StringLiteral_3033;
  puVar4 = StringLiteral_302;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  uVar6 = (*(code *)*puVar7)();
  if ((int)uVar6 < (int)unaff_w22) {
    if (*(char *)(*(long *)(*(long *)
                             Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__
                           + 0xb8) + 4) == '\0') {
      return;
    }
    plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,2);
    uStack000000000000000c = unaff_w22;
    lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
    if (plVar8 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_01a7b150:
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar9;
        uStack0000000000000008 = uVar6;
        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000008);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_01a7b150;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = lVar9;
          puVar3 = Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_15__;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660fcc(*(undefined8 *)puVar3,plVar8,0);
          return;
        }
      }
LAB_01a7b084:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
  else if ((*(long *)(unaff_x19 + 0x18) != 0) &&
          (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x30), plVar8 != (long *)0x0)) {
    lVar9 = *plVar8;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x28) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01a7af00;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x28,0);
LAB_01a7af00:
    uVar6 = (*(code *)*puVar7)(plVar8,uVar11,unaff_w22,puVar7[1]);
    if ((int)uVar6 < (int)unaff_w22) {
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,2);
      uStack000000000000000c = uVar6;
      lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
      if (plVar8 != (long *)0x0) {
        if ((lVar9 == 0) ||
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 != 0)) {
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar9;
            uStack0000000000000008 = unaff_w22;
            lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000008);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_01a7b150;
            if (1 < *(uint *)(plVar8 + 3)) {
              plVar8[5] = lVar9;
              puVar3 = StringLiteral_797;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02661974(*(undefined8 *)puVar3,plVar8,0);
              return;
            }
          }
          goto LAB_01a7b084;
        }
        goto LAB_01a7b150;
      }
    }
    else {
      if ((int)unaff_w22 < 1) {
        fVar16 = -1.0;
      }
      else {
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if (lVar9 == 0) goto LAB_01a7b088;
        uVar6 = *(uint *)(lVar9 + 0x18);
        iVar12 = 0;
        uVar13 = 0;
        fVar16 = -1.0;
        do {
          if (uVar6 <= uVar13) goto LAB_01a7b084;
          if (0 < (int)unaff_w21) {
            fVar18 = *(float *)(lVar9 + uVar13 * 4 + 0x20);
            uVar2 = *(uint *)(unaff_x20 + 0x18);
            uVar15 = 0;
            fVar17 = fVar16;
            do {
              uVar1 = iVar12 + uVar15;
              if (uVar2 <= uVar1) goto LAB_01a7b084;
              uVar15 = uVar15 + 1;
              fVar16 = fVar18;
              if (fVar18 <= fVar17) {
                fVar16 = fVar17;
              }
              *(float *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20) = fVar18;
              fVar17 = fVar16;
            } while (unaff_w21 != uVar15);
          }
          uVar13 = uVar13 + 1;
          iVar12 = iVar12 + (unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU));
        } while (uVar13 != unaff_w22);
      }
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        *(float *)(*(long *)(unaff_x19 + 0x18) + 0x28) = fVar16;
        return;
      }
    }
  }
LAB_01a7b088:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



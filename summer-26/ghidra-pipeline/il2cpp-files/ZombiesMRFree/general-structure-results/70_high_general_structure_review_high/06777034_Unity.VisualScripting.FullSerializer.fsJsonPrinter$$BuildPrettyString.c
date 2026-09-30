/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonPrinter$$BuildPrettyString
ENTRY_POINT: 06777034
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsJsonPrinter__BuildPrettyString(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long unaff_x21;
  long lVar13;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *in_stack_00000008;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  long in_stack_00000038;
  
  lVar6 = thunk_FUN_03010710();
  if (lVar6 == 0) {
LAB_06777528:
    uVar7 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                      ();
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar7,0);
  }
  if ((int)unaff_x26[3] != 0) {
    plVar14 = unaff_x26 + 4;
    *plVar14 = unaff_x23;
    thunk_FUN_03048534(plVar14);
    lVar6 = thunk_FUN_03010710();
    if (lVar6 == 0) goto LAB_06777528;
    if (1 < *(uint *)(unaff_x26 + 3)) {
      plVar10 = unaff_x26 + 5;
      *plVar10 = unaff_x23;
      thunk_FUN_03048534(plVar10);
      lVar6 = thunk_FUN_03010710();
      if (lVar6 == 0) goto LAB_06777528;
      if (2 < *(uint *)(unaff_x26 + 3)) {
        plVar11 = unaff_x26 + 6;
        *plVar11 = unaff_x23;
        thunk_FUN_03048534(plVar11);
        lVar6 = *(long *)(in_stack_00000038 + 0x10);
        plVar4 = (long *)
                 Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo;
        while (Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo =
                    (undefined *)plVar4, lVar6 != 0) {
          if (unaff_x23 == *(long *)(lVar6 + 0x10)) {
            uVar8 = *(uint *)(unaff_x24 + 0x18);
            if (((((uVar8 < 2) || (uVar3 = *(uint *)(unaff_x21 + 0x18), uVar3 < 2)) || (uVar8 < 3))
                || ((uVar3 < 3 ||
                    (uVar1 = -(uint)((float)*(undefined8 *)(unaff_x24 + 0x20) -
                                     (float)*(undefined8 *)(unaff_x21 + 0x20) <
                                    (float)((ulong)*(undefined8 *)(unaff_x24 + 0x20) >> 0x20) -
                                    (float)((ulong)*(undefined8 *)(unaff_x21 + 0x20) >> 0x20)) & 1,
                    uVar8 <= uVar1)))) || (uVar3 <= uVar1)) goto LAB_06777524;
            uVar2 = 2;
            if (*(float *)(unaff_x24 + 0x28) - *(float *)(unaff_x21 + 0x28) <=
                *(float *)(unaff_x24 + (ulong)uVar1 * 4 + 0x20) -
                *(float *)(unaff_x21 + (ulong)uVar1 * 4 + 0x20)) {
              uVar2 = uVar1;
            }
            uVar9 = (ulong)uVar2;
            if ((uVar3 <= uVar2) || (uVar8 <= uVar2)) goto LAB_06777524;
            if (*(float *)(unaff_x24 + uVar9 * 4 + 0x20) <= *(float *)(unaff_x21 + uVar9 * 4 + 0x20)
               ) {
              in_stack_00000008[0] = 0.0;
              in_stack_00000008[1] = 0.0;
              in_stack_00000008[2] = 1.0;
              return;
            }
            if ((*(uint *)(unaff_x22 + 3) <= uVar2) || (*(uint *)(unaff_x26 + 3) <= uVar2))
            goto LAB_06777524;
            lVar13 = unaff_x22[uVar9 + 4];
            if ((lVar13 != 0) && (lVar12 = unaff_x26[uVar9 + 4], lVar12 != 0)) {
              if (*(int *)(*plVar4 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar6 = *(long *)(in_stack_00000038 + 0x10);
              }
              fVar19 = (float)*(undefined8 *)(lVar13 + 0x28) - (float)*(undefined8 *)(lVar12 + 0x28)
              ;
              fVar20 = (float)((ulong)*(undefined8 *)(lVar13 + 0x28) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar12 + 0x28) >> 0x20);
              in_stack_00000020 = CONCAT44(fVar20,fVar19);
              fVar21 = *(float *)(lVar13 + 0x30) - *(float *)(lVar12 + 0x30);
              in_stack_00000028 = fVar21;
              if ((lVar6 != 0) && (lVar13 = *(long *)(lVar6 + 0x10), lVar13 != 0)) {
                fVar22 = 0.0;
                goto LAB_06777400;
              }
            }
            break;
          }
          if (unaff_x23 == 0) break;
          uVar8 = *(uint *)(unaff_x21 + 0x18);
          if (uVar8 == 0) goto LAB_06777524;
          if (*(float *)(unaff_x23 + 0x28) < *(float *)(unaff_x21 + 0x20)) {
            *(float *)(unaff_x21 + 0x20) = *(float *)(unaff_x23 + 0x28);
            lVar6 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*unaff_x22 + 0x40));
            if (lVar6 == 0) goto LAB_06777528;
            if ((int)unaff_x22[3] == 0) goto LAB_06777524;
            *unaff_x25 = unaff_x23;
            thunk_FUN_03048534();
            uVar8 = *(uint *)(unaff_x21 + 0x18);
          }
          if (uVar8 < 2) goto LAB_06777524;
          if (*(float *)(unaff_x23 + 0x2c) < *(float *)(unaff_x21 + 0x24)) {
            *(float *)(unaff_x21 + 0x24) = *(float *)(unaff_x23 + 0x2c);
            lVar6 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*unaff_x22 + 0x40));
            if (lVar6 == 0) goto LAB_06777528;
            if (*(uint *)(unaff_x22 + 3) < 2) goto LAB_06777524;
            *unaff_x27 = unaff_x23;
            thunk_FUN_03048534();
            uVar8 = *(uint *)(unaff_x21 + 0x18);
          }
          if (uVar8 < 3) goto LAB_06777524;
          if (*(float *)(unaff_x23 + 0x30) < *(float *)(unaff_x21 + 0x28)) {
            *(float *)(unaff_x21 + 0x28) = *(float *)(unaff_x23 + 0x30);
            lVar6 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*unaff_x22 + 0x40));
            if (lVar6 == 0) goto LAB_06777528;
            if (*(uint *)(unaff_x22 + 3) < 3) goto LAB_06777524;
            *unaff_x28 = unaff_x23;
            thunk_FUN_03048534();
          }
          uVar8 = *(uint *)(unaff_x24 + 0x18);
          if (uVar8 == 0) goto LAB_06777524;
          if (*(float *)(unaff_x24 + 0x20) < *(float *)(unaff_x23 + 0x28)) {
            *(float *)(unaff_x24 + 0x20) = *(float *)(unaff_x23 + 0x28);
            lVar6 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*unaff_x26 + 0x40));
            if (lVar6 == 0) goto LAB_06777528;
            if ((int)unaff_x26[3] == 0) goto LAB_06777524;
            *plVar14 = unaff_x23;
            thunk_FUN_03048534(plVar14,unaff_x23);
            uVar8 = *(uint *)(unaff_x24 + 0x18);
          }
          if (uVar8 < 2) goto LAB_06777524;
          if (*(float *)(unaff_x24 + 0x24) < *(float *)(unaff_x23 + 0x2c)) {
            *(float *)(unaff_x24 + 0x24) = *(float *)(unaff_x23 + 0x2c);
            lVar6 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*unaff_x26 + 0x40));
            if (lVar6 == 0) goto LAB_06777528;
            if (*(uint *)(unaff_x26 + 3) < 2) goto LAB_06777524;
            *plVar10 = unaff_x23;
            thunk_FUN_03048534(plVar10,unaff_x23);
            uVar8 = *(uint *)(unaff_x24 + 0x18);
          }
          if (uVar8 < 3) goto LAB_06777524;
          if (*(float *)(unaff_x24 + 0x28) < *(float *)(unaff_x23 + 0x30)) {
            *(float *)(unaff_x24 + 0x28) = *(float *)(unaff_x23 + 0x30);
            lVar6 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*unaff_x26 + 0x40));
            if (lVar6 == 0) goto LAB_06777528;
            if (*(uint *)(unaff_x26 + 3) < 3) goto LAB_06777524;
            *plVar11 = unaff_x23;
            thunk_FUN_03048534(plVar11,unaff_x23);
          }
          unaff_x23 = *(long *)(unaff_x23 + 0x18);
          plVar4 = (long *)
                   Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo
          ;
          lVar6 = *(long *)(in_stack_00000038 + 0x10);
        }
        goto LAB_0677749c;
      }
    }
  }
LAB_06777524:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
  while( true ) {
    if (*(int *)(*plVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar16 = *(float *)(lVar13 + 0x2c) - *(float *)(lVar12 + 0x2c);
    fVar17 = *(float *)(lVar13 + 0x28) - *(float *)(lVar12 + 0x28);
    fVar18 = *(float *)(lVar13 + 0x30) - *(float *)(lVar12 + 0x30);
    fVar15 = fVar20 * fVar18 - fVar21 * fVar16;
    fVar18 = fVar21 * fVar17 - fVar19 * fVar18;
    fVar16 = fVar19 * fVar16 - fVar20 * fVar17;
    fVar17 = fVar16 * fVar16 + fVar15 * fVar15 + fVar18 * fVar18;
    if (fVar22 < fVar17) {
      *in_stack_00000008 = fVar15;
      in_stack_00000008[1] = fVar18;
      in_stack_00000008[2] = fVar16;
      fVar22 = fVar17;
    }
    lVar6 = *(long *)(in_stack_00000038 + 0x10);
    if (lVar6 == 0) break;
LAB_06777400:
    lVar13 = *(long *)(lVar13 + 0x18);
    if (lVar13 == *(long *)(lVar6 + 0x10)) {
      if (fVar22 <= 0.0) {
        lVar6 = *plVar4;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar6 = *plVar4;
        }
        uVar7 = **(undefined8 **)(lVar6 + 0xb8);
        in_stack_00000008[2] = *(float *)(*(undefined8 **)(lVar6 + 0xb8) + 1);
        *(undefined8 *)in_stack_00000008 = uVar7;
        uVar5 = FUN_06774394(&stack0x00000020);
        FUN_06774228(0x3f800000,in_stack_00000008,uVar5);
      }
      return;
    }
    if (lVar13 == 0) break;
  }
LAB_0677749c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



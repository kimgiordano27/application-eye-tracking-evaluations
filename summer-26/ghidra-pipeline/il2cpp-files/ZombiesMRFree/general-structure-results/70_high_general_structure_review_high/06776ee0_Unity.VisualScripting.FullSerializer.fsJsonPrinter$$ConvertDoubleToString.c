/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonPrinter$$ConvertDoubleToString
ENTRY_POINT: 06776ee0
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


void Unity_VisualScripting_FullSerializer_fsJsonPrinter__ConvertDoubleToString(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  long *plVar15;
  long *plVar16;
  long unaff_x23;
  long *plVar17;
  float *unaff_x26;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  long in_stack_00000038;
  
  lVar7 = FUN_02fe9340();
  if ((unaff_x23 != 0) && (lVar7 != 0)) {
    uVar13 = *(uint *)(lVar7 + 0x18);
    if ((uVar13 == 0) ||
       ((*(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(unaff_x23 + 0x28), uVar13 == 1 ||
        (*(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(unaff_x23 + 0x2c),
        puVar5 = Unity_Properties_TypeConverter<bool,_short>_TypeInfo, uVar13 < 3))))
    goto LAB_06777524;
    *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(unaff_x23 + 0x30);
    plVar8 = (long *)FUN_02fe9340(*(undefined8 *)puVar5,3);
    if (plVar8 != (long *)0x0) {
      lVar9 = thunk_FUN_03010710();
      if (lVar9 != 0) {
        if ((int)plVar8[3] != 0) {
          plVar17 = plVar8 + 4;
          *plVar17 = unaff_x23;
          thunk_FUN_03048534(plVar17);
          lVar9 = thunk_FUN_03010710();
          if (lVar9 == 0) goto LAB_06777528;
          if (1 < *(uint *)(plVar8 + 3)) {
            plVar18 = plVar8 + 5;
            *plVar18 = unaff_x23;
            thunk_FUN_03048534(plVar18);
            lVar9 = thunk_FUN_03010710();
            if (lVar9 == 0) goto LAB_06777528;
            if (2 < *(uint *)(plVar8 + 3)) {
              plVar19 = plVar8 + 6;
              *plVar19 = unaff_x23;
              thunk_FUN_03048534(plVar19);
              lVar9 = FUN_02fe9340(*unaff_x19,3);
              if (lVar9 == 0) goto LAB_0677749c;
              uVar13 = *(uint *)(lVar9 + 0x18);
              if (((uVar13 != 0) &&
                  (*(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(unaff_x23 + 0x28), uVar13 != 1))
                 && (*(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(unaff_x23 + 0x2c), 2 < uVar13))
              {
                *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(unaff_x23 + 0x30);
                plVar10 = (long *)FUN_02fe9340(*(undefined8 *)puVar5,3);
                if (plVar10 == (long *)0x0) goto LAB_0677749c;
                lVar11 = thunk_FUN_03010710();
                if (lVar11 == 0) goto LAB_06777528;
                if ((int)plVar10[3] != 0) {
                  plVar20 = plVar10 + 4;
                  *plVar20 = unaff_x23;
                  thunk_FUN_03048534(plVar20);
                  lVar11 = thunk_FUN_03010710();
                  if (lVar11 == 0) goto LAB_06777528;
                  if (1 < *(uint *)(plVar10 + 3)) {
                    plVar15 = plVar10 + 5;
                    *plVar15 = unaff_x23;
                    thunk_FUN_03048534(plVar15);
                    lVar11 = thunk_FUN_03010710();
                    if (lVar11 == 0) goto LAB_06777528;
                    if (2 < *(uint *)(plVar10 + 3)) {
                      plVar16 = plVar10 + 6;
                      *plVar16 = unaff_x23;
                      thunk_FUN_03048534(plVar16);
                      lVar11 = *(long *)(in_stack_00000038 + 0x10);
                      plVar4 = (long *)
                               Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo
                      ;
                      while (Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo
                                  = (undefined *)plVar4, lVar11 != 0) {
                        if (unaff_x23 == *(long *)(lVar11 + 0x10)) {
                          uVar13 = *(uint *)(lVar9 + 0x18);
                          if ((((uVar13 < 2) || (uVar3 = *(uint *)(lVar7 + 0x18), uVar3 < 2)) ||
                              ((uVar13 < 3 ||
                               ((uVar3 < 3 ||
                                (uVar1 = -(uint)((float)*(undefined8 *)(lVar9 + 0x20) -
                                                 (float)*(undefined8 *)(lVar7 + 0x20) <
                                                (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20
                                                       ) -
                                                (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20
                                                       )) & 1, uVar13 <= uVar1)))))) ||
                             (uVar3 <= uVar1)) goto LAB_06777524;
                          uVar2 = 2;
                          if (*(float *)(lVar9 + 0x28) - *(float *)(lVar7 + 0x28) <=
                              *(float *)(lVar9 + (ulong)uVar1 * 4 + 0x20) -
                              *(float *)(lVar7 + (ulong)uVar1 * 4 + 0x20)) {
                            uVar2 = uVar1;
                          }
                          uVar14 = (ulong)uVar2;
                          if ((uVar3 <= uVar2) || (uVar13 <= uVar2)) goto LAB_06777524;
                          if (*(float *)(lVar9 + uVar14 * 4 + 0x20) <=
                              *(float *)(lVar7 + uVar14 * 4 + 0x20)) {
                            unaff_x26[0] = 0.0;
                            unaff_x26[1] = 0.0;
                            unaff_x26[2] = 1.0;
                            return;
                          }
                          if ((*(uint *)(plVar8 + 3) <= uVar2) || (*(uint *)(plVar10 + 3) <= uVar2))
                          goto LAB_06777524;
                          lVar7 = plVar8[uVar14 + 4];
                          if ((lVar7 != 0) && (lVar9 = plVar10[uVar14 + 4], lVar9 != 0)) {
                            if (*(int *)(*plVar4 + 0xe0) == 0) {
                              thunk_FUN_02fdcff0();
                              lVar11 = *(long *)(in_stack_00000038 + 0x10);
                            }
                            fVar25 = (float)*(undefined8 *)(lVar7 + 0x28) -
                                     (float)*(undefined8 *)(lVar9 + 0x28);
                            fVar26 = (float)((ulong)*(undefined8 *)(lVar7 + 0x28) >> 0x20) -
                                     (float)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
                            in_stack_00000020 = CONCAT44(fVar26,fVar25);
                            fVar27 = *(float *)(lVar7 + 0x30) - *(float *)(lVar9 + 0x30);
                            in_stack_00000028 = fVar27;
                            if ((lVar11 != 0) && (lVar7 = *(long *)(lVar11 + 0x10), lVar7 != 0)) {
                              fVar28 = 0.0;
                              goto LAB_06777400;
                            }
                          }
                          break;
                        }
                        if (unaff_x23 == 0) break;
                        uVar13 = *(uint *)(lVar7 + 0x18);
                        if (uVar13 == 0) goto LAB_06777524;
                        if (*(float *)(unaff_x23 + 0x28) < *(float *)(lVar7 + 0x20)) {
                          *(float *)(lVar7 + 0x20) = *(float *)(unaff_x23 + 0x28);
                          lVar11 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*plVar8 + 0x40));
                          if (lVar11 == 0) goto LAB_06777528;
                          if ((int)plVar8[3] == 0) goto LAB_06777524;
                          *plVar17 = unaff_x23;
                          thunk_FUN_03048534(plVar17,unaff_x23);
                          uVar13 = *(uint *)(lVar7 + 0x18);
                        }
                        if (uVar13 < 2) goto LAB_06777524;
                        if (*(float *)(unaff_x23 + 0x2c) < *(float *)(lVar7 + 0x24)) {
                          *(float *)(lVar7 + 0x24) = *(float *)(unaff_x23 + 0x2c);
                          lVar11 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*plVar8 + 0x40));
                          if (lVar11 == 0) goto LAB_06777528;
                          if (*(uint *)(plVar8 + 3) < 2) goto LAB_06777524;
                          *plVar18 = unaff_x23;
                          thunk_FUN_03048534(plVar18,unaff_x23);
                          uVar13 = *(uint *)(lVar7 + 0x18);
                        }
                        if (uVar13 < 3) goto LAB_06777524;
                        if (*(float *)(unaff_x23 + 0x30) < *(float *)(lVar7 + 0x28)) {
                          *(float *)(lVar7 + 0x28) = *(float *)(unaff_x23 + 0x30);
                          lVar11 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*plVar8 + 0x40));
                          if (lVar11 == 0) goto LAB_06777528;
                          if (*(uint *)(plVar8 + 3) < 3) goto LAB_06777524;
                          *plVar19 = unaff_x23;
                          thunk_FUN_03048534(plVar19,unaff_x23);
                        }
                        uVar13 = *(uint *)(lVar9 + 0x18);
                        if (uVar13 == 0) goto LAB_06777524;
                        if (*(float *)(lVar9 + 0x20) < *(float *)(unaff_x23 + 0x28)) {
                          *(float *)(lVar9 + 0x20) = *(float *)(unaff_x23 + 0x28);
                          lVar11 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*plVar10 + 0x40));
                          if (lVar11 == 0) goto LAB_06777528;
                          if ((int)plVar10[3] == 0) goto LAB_06777524;
                          *plVar20 = unaff_x23;
                          thunk_FUN_03048534(plVar20,unaff_x23);
                          uVar13 = *(uint *)(lVar9 + 0x18);
                        }
                        if (uVar13 < 2) goto LAB_06777524;
                        if (*(float *)(lVar9 + 0x24) < *(float *)(unaff_x23 + 0x2c)) {
                          *(float *)(lVar9 + 0x24) = *(float *)(unaff_x23 + 0x2c);
                          lVar11 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*plVar10 + 0x40));
                          if (lVar11 == 0) goto LAB_06777528;
                          if (*(uint *)(plVar10 + 3) < 2) goto LAB_06777524;
                          *plVar15 = unaff_x23;
                          thunk_FUN_03048534(plVar15,unaff_x23);
                          uVar13 = *(uint *)(lVar9 + 0x18);
                        }
                        if (uVar13 < 3) goto LAB_06777524;
                        if (*(float *)(lVar9 + 0x28) < *(float *)(unaff_x23 + 0x30)) {
                          *(float *)(lVar9 + 0x28) = *(float *)(unaff_x23 + 0x30);
                          lVar11 = thunk_FUN_03010710(unaff_x23,*(undefined8 *)(*plVar10 + 0x40));
                          if (lVar11 == 0) goto LAB_06777528;
                          if (*(uint *)(plVar10 + 3) < 3) goto LAB_06777524;
                          *plVar16 = unaff_x23;
                          thunk_FUN_03048534(plVar16,unaff_x23);
                        }
                        unaff_x23 = *(long *)(unaff_x23 + 0x18);
                        plVar4 = (long *)
                                 Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo
                        ;
                        lVar11 = *(long *)(in_stack_00000038 + 0x10);
                      }
                      goto LAB_0677749c;
                    }
                  }
                }
              }
            }
          }
        }
LAB_06777524:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
LAB_06777528:
      uVar12 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                         ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar12,0);
    }
  }
  goto LAB_0677749c;
  while( true ) {
    if (*(int *)(*plVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar22 = *(float *)(lVar7 + 0x2c) - *(float *)(lVar9 + 0x2c);
    fVar23 = *(float *)(lVar7 + 0x28) - *(float *)(lVar9 + 0x28);
    fVar24 = *(float *)(lVar7 + 0x30) - *(float *)(lVar9 + 0x30);
    fVar21 = fVar26 * fVar24 - fVar27 * fVar22;
    fVar24 = fVar27 * fVar23 - fVar25 * fVar24;
    fVar22 = fVar25 * fVar22 - fVar26 * fVar23;
    fVar23 = fVar22 * fVar22 + fVar21 * fVar21 + fVar24 * fVar24;
    if (fVar28 < fVar23) {
      *unaff_x26 = fVar21;
      unaff_x26[1] = fVar24;
      unaff_x26[2] = fVar22;
      fVar28 = fVar23;
    }
    lVar11 = *(long *)(in_stack_00000038 + 0x10);
    if (lVar11 == 0) break;
LAB_06777400:
    lVar7 = *(long *)(lVar7 + 0x18);
    if (lVar7 == *(long *)(lVar11 + 0x10)) {
      if (fVar28 <= 0.0) {
        lVar7 = *plVar4;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar7 = *plVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        unaff_x26[2] = *(float *)(*(undefined8 **)(lVar7 + 0xb8) + 1);
        *(undefined8 *)unaff_x26 = uVar12;
        uVar6 = FUN_06774394(&stack0x00000020);
        FUN_06774228(0x3f800000,unaff_x26,uVar6);
      }
      return;
    }
    if (lVar7 == 0) break;
  }
LAB_0677749c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



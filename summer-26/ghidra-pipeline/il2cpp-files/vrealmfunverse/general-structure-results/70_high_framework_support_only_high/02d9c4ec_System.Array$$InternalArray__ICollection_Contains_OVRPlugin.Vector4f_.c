/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4f>
ENTRY_POINT: 02d9c4ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4f>
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s9;
  float unaff_s10;
  float fVar28;
  float fVar29;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  long in_stack_00000048;
  
  uStack0000000000000020 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  uStack0000000000000028 = 0;
  lVar12 = FUN_05c89340(param_4,0);
  if (lVar12 != 0) {
    FUN_05c9e358(lVar12,0);
    if ((unaff_x19[5] != 0) && (lVar12 = FUN_05c89340(unaff_x19[5],0), lVar12 != 0)) {
      FUN_05c9e358(lVar12,0);
      if ((unaff_x19[5] != 0) &&
         (fVar22 = param_3, lVar12 = FUN_05c89340(unaff_x19[5],0), lVar12 != 0)) {
        fVar21 = (float)FUN_05c9e358(lVar12,0);
        lVar12 = unaff_x19[5];
        if (fVar21 < param_3) {
          if ((lVar12 == 0) || (lVar12 = FUN_05c89340(lVar12,0), lVar12 == 0)) goto LAB_02d9cb6c;
          FUN_05c9e358(lVar12,0);
        }
        else {
          if ((lVar12 == 0) || (lVar12 = FUN_05c89340(lVar12,0), lVar12 == 0)) goto LAB_02d9cb6c;
          fVar22 = (float)FUN_05c9e358(lVar12,0);
        }
        fVar22 = unaff_s10 * fVar22;
        fVar21 = unaff_s9 * param_2 * 0.5;
        fVar27 = 0.0;
        fVar25 = fVar21 - fVar22;
        if (fVar21 <= fVar22) {
          fVar25 = 0.0;
        }
        if (unaff_x19[5] != 0) {
          FUN_05d0db28(&stack0x00000030,unaff_x19[5],0);
          fVar29 = in_stack_00000038;
          fVar28 = fStack0000000000000034;
          fVar21 = fStack0000000000000030;
          if ((unaff_x19[5] != 0) &&
             (fVar26 = fStack0000000000000034, lVar12 = FUN_05c89340(unaff_x19[5],0), lVar12 != 0))
          {
            FUN_05c9a10c(lVar12,0);
            fVar23 = (float)FUN_05c7bd38(0);
            if (unaff_x19[5] != 0) {
              FUN_05d0db28(&stack0x00000030,unaff_x19[5],0);
              fVar9 = in_stack_00000038;
              fVar8 = fStack0000000000000030;
              if ((unaff_x19[5] != 0) &&
                 (lVar12 = FUN_05c89340(unaff_x19[5],0), puVar4 = PTR_DAT_06319c00,
                 puVar3 = PTR_DAT_06319bf8, puVar2 = PTR_DAT_06312cd0, lVar12 != 0)) {
                fVar26 = fVar25 * fVar26;
                fVar27 = fVar25 * fVar27;
                fVar28 = fVar28 + fVar26;
                fVar29 = fVar29 + fVar27;
                FUN_05c9a10c(lVar12,0);
                fVar24 = (float)FUN_05c7bd38(0);
                lVar12 = unaff_x19[0x1d];
                uVar10 = FUN_05c8db90((int)unaff_x19[6],0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)puVar2);
                }
                FUN_05d16f5c(fVar21 + fVar25 * fVar23,fVar28,fVar29,fVar8 - fVar25 * fVar24,
                             fStack0000000000000034 - fVar25 * fVar26,fVar9 - fVar25 * fVar27,fVar22
                             ,lVar12,uVar10,1,0);
                lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                puVar7 = PTR_DAT_06319c48;
                puVar6 = PTR_DAT_06319c38;
                puVar5 = PTR_DAT_06319c20;
                puVar4 = PTR_DAT_06319c10;
                puVar3 = PTR_DAT_06319bd0;
                puVar2 = PTR_DAT_06312520;
                lVar16 = unaff_x19[0x1d];
                if (lVar16 != 0) {
                  lVar20 = 4;
                  do {
                    uVar19 = lVar20 - 4;
                    if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar19) {
                      lVar16 = unaff_x19[0x12];
                      if (lVar16 != 0) {
                        iVar11 = *(int *)(lVar16 + 0x18);
                        if (-1 < iVar11 + -1) goto LAB_02d9c9fc;
                        if ((int)unaff_x19[7] <= *(int *)(lVar16 + 0x18)) goto LAB_02d9cb24;
                        if (lVar12 != 0) goto LAB_02d9ca8c;
                      }
                      break;
                    }
                    if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_02d9ccc8;
                    uVar18 = *(undefined8 *)(lVar16 + lVar20 * 8);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar13 = FUN_05c8c45c(uVar18,0,0);
                    if ((uVar13 & 1) != 0) {
                      lVar16 = unaff_x19[0x1d];
                      if (lVar16 == 0) break;
                      if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_02d9ccc8;
                      uVar19 = FUN_03162688(*(undefined8 *)(lVar16 + lVar20 * 8),&stack0x00000048,
                                            *(undefined8 *)puVar4);
                      if ((uVar19 & 1) != 0) {
                        if (in_stack_00000048 == 0) break;
                        uVar18 = FUN_05c89410(in_stack_00000048,0);
                        uVar14 = FUN_05c89410();
                        lVar16 = *(long *)puVar2;
                        if (*(int *)(lVar16 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44(lVar16);
                        }
                        uVar19 = FUN_05c8c45c(uVar18,uVar14,0);
                        if ((uVar19 & 1) != 0) {
                          if (lVar12 == 0) break;
                          lVar16 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)puVar6;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar16 == 0) break;
                          uVar1 = *(uint *)(lVar12 + 0x18);
                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                            *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000048;
                            thunk_FUN_02bb0e9c();
                          }
                          else {
                            FUN_037a6538(lVar12,in_stack_00000048,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                    }
                    lVar16 = unaff_x19[0x1d];
                    lVar20 = lVar20 + 1;
                  } while (lVar16 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_02d9cb6c;
  while( true ) {
    iVar11 = iVar11 + -1;
    uVar18 = FUN_037a6268(unaff_x19[0x12],iVar11,*(undefined8 *)puVar3);
    if (lVar12 == 0) goto LAB_02d9cb6c;
    uVar19 = FUN_037a68d4(lVar12,uVar18,*(undefined8 *)puVar7);
    if ((uVar19 & 1) == 0) {
      if (unaff_x19[0x12] == 0) goto LAB_02d9cb6c;
      FUN_037a6268(unaff_x19[0x12],iVar11,*(undefined8 *)puVar3);
      (**(code **)(*unaff_x19 + 0x198))();
    }
    if (iVar11 < 1) break;
LAB_02d9c9fc:
    if (unaff_x19[0x12] == 0) goto LAB_02d9cb6c;
  }
  if (unaff_x19[0x12] != 0) {
    if (*(int *)(unaff_x19[0x12] + 0x18) < (int)unaff_x19[7]) {
LAB_02d9ca8c:
      if (0 < *(int *)(lVar12 + 0x18)) {
        iVar11 = 0;
        do {
          lVar16 = unaff_x19[0x12];
          uVar18 = FUN_037a6268(lVar12,iVar11,*(undefined8 *)puVar3);
          if (lVar16 == 0) goto LAB_02d9cb6c;
          uVar19 = FUN_037a68d4(lVar16,uVar18,*(undefined8 *)puVar7);
          if ((uVar19 & 1) == 0) {
            plVar15 = (long *)FUN_037a6268(lVar12,iVar11,*(undefined8 *)puVar3);
            if (plVar15 == (long *)0x0) goto LAB_02d9cb6c;
            uVar19 = (**(code **)(*plVar15 + 0x198))();
            if ((uVar19 & 1) != 0) {
              FUN_037a6268(lVar12,iVar11,*(undefined8 *)puVar3);
              (**(code **)(*unaff_x19 + 0x188))();
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar12 + 0x18));
      }
    }
LAB_02d9cb24:
    lVar16 = unaff_x19[0x1d];
    if (lVar16 != 0) {
      uVar19 = 0;
      lVar20 = 0x20;
      do {
        if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar19) {
          if (unaff_x19[0x14] != 0) {
            iVar11 = FUN_0451be40(unaff_x19[0x14],*(undefined8 *)puVar5);
            if (iVar11 < 1) goto LAB_02d9cc70;
            if (unaff_x19[0x14] != 0) {
              uVar10 = FUN_0451be40(unaff_x19[0x14],*(undefined8 *)puVar5);
              lVar16 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06319c50,uVar10);
              if (((unaff_x19[0x14] != 0) &&
                  (lVar20 = FUN_0451be50(unaff_x19[0x14],*(undefined8 *)PTR_DAT_06319c28),
                  lVar20 != 0)) &&
                 (FUN_035f0474(lVar20,lVar16,0,*(undefined8 *)PTR_DAT_06319c30),
                 puVar2 = PTR_DAT_06319c18, lVar16 != 0)) {
                if ((int)*(ulong *)(lVar16 + 0x18) < 1) goto LAB_02d9cc70;
                uVar19 = 0;
                uVar13 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                goto LAB_02d9cc10;
              }
            }
          }
          break;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_02d9ccc8;
        *(undefined8 *)(lVar16 + uVar19 * 8 + 0x20) = 0;
        thunk_FUN_02bb0e9c(lVar16 + lVar20,0);
        lVar16 = unaff_x19[0x1d];
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 8;
      } while (lVar16 != 0);
    }
  }
  goto LAB_02d9cb6c;
  while( true ) {
    uVar13 = (ulong)*(uint *)(lVar16 + 0x18);
    uVar19 = uVar19 + 1;
    if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar19) break;
LAB_02d9cc10:
    if (uVar13 <= uVar19) {
LAB_02d9ccc8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x19[0x12] == 0) goto LAB_02d9cb6c;
    uVar18 = *(undefined8 *)(lVar16 + 0x20 + uVar19 * 8);
    uVar13 = FUN_037a68d4(unaff_x19[0x12],uVar18,*(undefined8 *)puVar7);
    if ((uVar13 & 1) == 0) {
      if (lVar12 == 0) goto LAB_02d9cb6c;
      uVar13 = FUN_037a68d4(lVar12,uVar18,*(undefined8 *)puVar7);
      if ((uVar13 & 1) == 0) {
        if (unaff_x19[0x14] == 0) goto LAB_02d9cb6c;
        FUN_0451d670(unaff_x19[0x14],uVar18,*(undefined8 *)puVar2);
      }
    }
  }
LAB_02d9cc70:
  if (lVar12 != 0) {
    iVar11 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar11) {
      FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar11,0);
    }
    return;
  }
LAB_02d9cb6c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



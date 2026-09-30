/*
FUNCTION_NAME: GameAnalyticsSDK.Utilities.GA_MiniJSON.Serializer$$SerializeArray
ENTRY_POINT: 012456fc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 GameAnalyticsSDK_Utilities_GA_MiniJSON_Serializer__SerializeArray(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  size_t sVar15;
  uint uVar16;
  ulong in_stack_00000020;
  byte in_stack_00000040;
  void *in_stack_00000050;
  byte in_stack_00000070;
  void *in_stack_00000080;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if ((*(uint *)(*(long *)(unaff_x20 + 0x10) + 8) >> 0x1d & 1) == 0) {
    in_stack_00000090 = (undefined8 *)0x0;
    in_stack_00000098 = (undefined8 *)0x0;
    in_stack_000000a0 = (undefined8 *)0x0;
    lVar5 = FUN_012748b4(*(long *)(unaff_x20 + 0x10),1);
    in_stack_000000a8 = 0;
    puVar6 = (undefined8 *)FUN_01274f00(lVar5,&stack0x000000a8);
    if (puVar6 != (undefined8 *)0x0) {
      do {
        uVar10 = 0x10;
        if ((*(uint *)(puVar6[1] + 8) & 7) != 6) {
          uVar10 = 0x20;
        }
        if ((uVar10 & in_stack_00000020._4_4_) != 0) {
          if ((*(uint *)(puVar6[1] + 8) >> 4 & 1) == 0) {
            uVar10 = in_stack_00000020._4_4_ >> 2;
          }
          else {
            uVar10 = in_stack_00000020._4_4_ >> 3;
          }
          if (((uVar10 & 1) != 0) &&
             (uVar14 = FUN_011e1e08(&stack0x00000088,&stack0x00000070,*puVar6),
             puVar3 = in_stack_00000090, (uVar14 & 1) != 0)) {
            if (in_stack_00000098 == in_stack_000000a0) {
              sVar15 = (long)in_stack_00000098 - (long)in_stack_00000090;
              uVar9 = (long)sVar15 >> 3;
              uVar14 = uVar9 + 1;
              if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar14 <= (ulong)((long)sVar15 >> 2)) {
                uVar14 = (long)sVar15 >> 2;
              }
              if (0xffffffffffffffe < uVar9) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 == 0) {
                puVar7 = (undefined8 *)0x0;
              }
              else {
                if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_011e21ec(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                puVar7 = operator_new(uVar14 << 3);
              }
              puVar1 = puVar7 + uVar9;
              *puVar1 = puVar6;
              if (0 < (long)sVar15) {
                memcpy(puVar7,puVar3,sVar15);
              }
              in_stack_000000a0 = puVar7 + uVar14;
              in_stack_00000090 = puVar7;
              in_stack_00000098 = puVar1 + 1;
              if (puVar3 != (undefined8 *)0x0) {
                operator_delete(puVar3);
              }
            }
            else {
              *in_stack_00000098 = puVar6;
              in_stack_00000098 = in_stack_00000098 + 1;
            }
          }
        }
        puVar6 = (undefined8 *)FUN_01274f00(lVar5,&stack0x000000a8);
      } while (puVar6 != (undefined8 *)0x0);
    }
    if (((in_stack_00000020._4_4_ >> 1 & 1) == 0) && (lVar12 = *(long *)(lVar5 + 0x58), lVar12 != 0)
       ) {
      do {
        in_stack_000000a8 = 0;
        puVar6 = (undefined8 *)FUN_01274f00(lVar12,&stack0x000000a8);
        if (puVar6 != (undefined8 *)0x0) {
          do {
            uVar10 = *(uint *)(puVar6[1] + 8) & 7;
            uVar16 = 0x10;
            if (uVar10 != 6) {
              uVar16 = 0x20;
            }
            if ((uVar10 != 1 || lVar12 == lVar5) && ((uVar16 & in_stack_00000020._4_4_) != 0)) {
              if ((*(uint *)(puVar6[1] + 8) >> 4 & 1) == 0) {
                if ((in_stack_00000020._4_4_ >> 2 & 1) != 0) {
LAB_012458fc:
                  uVar14 = FUN_011e1e08(&stack0x00000088,&stack0x00000070,*puVar6);
                  puVar3 = in_stack_00000090;
                  if ((uVar14 & 1) != 0) {
                    if (in_stack_00000098 == in_stack_000000a0) {
                      sVar15 = (long)in_stack_00000098 - (long)in_stack_00000090;
                      uVar9 = (long)sVar15 >> 3;
                      uVar14 = uVar9 + 1;
                      if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      if (uVar14 <= (ulong)((long)sVar15 >> 2)) {
                        uVar14 = (long)sVar15 >> 2;
                      }
                      if (0xffffffffffffffe < uVar9) {
                        uVar14 = 0x1fffffffffffffff;
                      }
                      if (uVar14 == 0) {
                        puVar7 = (undefined8 *)0x0;
                      }
                      else {
                        if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_011e21ec(
                                      "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                      );
                        }
                        puVar7 = operator_new(uVar14 << 3);
                      }
                      puVar1 = puVar7 + uVar9;
                      *puVar1 = puVar6;
                      if (0 < (long)sVar15) {
                        memcpy(puVar7,puVar3,sVar15);
                      }
                      in_stack_000000a0 = puVar7 + uVar14;
                      in_stack_00000090 = puVar7;
                      in_stack_00000098 = puVar1 + 1;
                      if (puVar3 != (undefined8 *)0x0) {
                        operator_delete(puVar3);
                      }
                    }
                    else {
                      *in_stack_00000098 = puVar6;
                      in_stack_00000098 = in_stack_00000098 + 1;
                    }
                  }
                }
              }
              else if ((in_stack_00000020 & 0x800000000) != 0 &&
                       ((in_stack_00000020 & 0x4000000000) != 0 || lVar12 == lVar5))
              goto LAB_012458fc;
            }
            puVar6 = (undefined8 *)FUN_01274f00(lVar12,&stack0x000000a8);
          } while (puVar6 != (undefined8 *)0x0);
        }
        lVar12 = *(long *)(lVar12 + 0x58);
      } while (lVar12 != 0);
    }
    puVar3 = in_stack_00000098;
    puVar6 = in_stack_00000090;
    uVar14 = (long)in_stack_00000098 - (long)in_stack_00000090;
    lVar12 = FUN_0124b308(*(undefined8 *)(PTR_DAT_027e6580 + 0x128),(long)uVar14 >> 3);
    if (uVar14 != 0) {
      uVar9 = uVar14;
      if ((long)uVar14 < 0) {
        uVar9 = 0xffffffffffffffff;
      }
      if (0 < (long)uVar9) {
        uVar9 = 1;
      }
      uVar2 = (long)puVar6 - (long)puVar3;
      if ((long)puVar6 - (long)puVar3 <= (long)uVar14) {
        uVar2 = uVar14;
      }
      uVar9 = uVar9 * (uVar2 >> 3);
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      lVar11 = 0;
      lVar13 = -uVar9;
      do {
        uVar8 = FUN_0124d2a0(lVar5,*(undefined8 *)((long)in_stack_00000090 + lVar11));
        puVar6 = (undefined8 *)(lVar12 + 0x20 + lVar11);
        *puVar6 = uVar8;
        thunk_FUN_01286abc(puVar6);
        bVar4 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 8;
      } while (bVar4);
    }
    if (in_stack_00000090 != (undefined8 *)0x0) {
      in_stack_00000098 = in_stack_00000090;
      operator_delete(in_stack_00000090);
    }
  }
  else {
    lVar12 = FUN_0124b308(*(undefined8 *)(PTR_DAT_027e6580 + 0x128),0);
  }
  if ((in_stack_00000070 & 1) != 0) {
    operator_delete(in_stack_00000080);
  }
  if ((in_stack_00000040 & 1) != 0) {
    operator_delete(in_stack_00000050);
  }
  for (lVar5 = 4; uVar14 = FUN_0121a448(lVar12), lVar5 - 4U < (uVar14 & 0xffffffff);
      lVar5 = lVar5 + 1) {
    uVar8 = *(undefined8 *)(*(long *)(lVar12 + lVar5 * 8) + 0x18);
    puVar6 = (undefined8 *)FUN_0122d9fc(&stack0x00000028);
    *puVar6 = uVar8;
  }
  uVar8 = FUN_01223d68(&stack0x00000028);
  FUN_01223598(&stack0x00000028);
  return uVar8;
}



/*
FUNCTION_NAME: Unity.Properties.TypeConverter<short,-int>$$Invoke
ENTRY_POINT: 061bf98c
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<short,_int>__Invoke
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,
               undefined8 *param_5)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  iVar4 = (*(code *)*param_5)();
  if (iVar4 < 1) {
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_061bf9f0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20();
LAB_061bf9f0:
    iVar4 = (*(code *)*puVar5)();
    if (iVar4 < 1) {
      uVar15 = *(undefined8 *)(unaff_x19 + 0x2ec);
      if (DAT_09539c0b == '\0') {
        FUN_0403162c(PTR_DAT_08f65578);
        DAT_09539c0b = '\x01';
      }
      fVar10 = (float)uVar15 - (float)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8);
      fVar13 = (float)((ulong)uVar15 >> 0x20) -
               (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8) >> 0x20);
      param_2 = DAT_01a2e7f0;
      if (fVar10 * fVar10 + fVar13 * fVar13 < DAT_01a2e7f0) {
        return;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x2d8) == 0) {
    if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
       (plVar6 = (long *)FUN_086ef654(*(long *)(unaff_x19 + 0x2d0),0), puVar1 = PTR_DAT_08f8bda8,
       plVar6 != (long *)0x0)) {
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8bda8) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x3a) * 0x10 + 0x138);
            goto LAB_061bfb84;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f8bda8,0x3a);
LAB_061bfb84:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      uVar11 = *(undefined4 *)(unaff_x19 + 0x2ec);
      fVar13 = *(float *)(unaff_x19 + 0x2f0);
      fVar10 = param_3;
      FUN_086f65a8();
      uVar11 = FUN_061bfd80(uVar11);
      *(undefined4 *)(unaff_x19 + 0x2ec) = uVar11;
      *(float *)(unaff_x19 + 0x2f0) = fVar13;
      if (*(long *)(unaff_x19 + 0x2d0) != 0) {
        fVar14 = fVar13;
        FUN_086f65a8(*(long *)(unaff_x19 + 0x2d0),0);
        fVar16 = param_4;
        FUN_086f65a8();
        if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (ABS(param_4 - fVar16) <= fVar13) {
          fVar13 = ABS(param_4 - fVar16);
        }
        if (*(long *)(unaff_x19 + 0x2d0) != 0) {
          fVar16 = *(float *)(unaff_x19 + 0x2ec);
          plVar6 = (long *)FUN_086ef654(*(long *)(unaff_x19 + 0x2d0),0);
          if (plVar6 != (long *)0x0) {
            lVar7 = *plVar6;
            fVar13 = -fVar13;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x3a) * 0x10 + 0x138);
                  goto LAB_061bfc88;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar1,0x3a);
LAB_061bfc88:
            fVar12 = (float)(*(code *)*puVar5)(plVar6,puVar5[1]);
            bVar2 = false;
            if ((fVar12 == -fVar16) && (bVar2 = false, !NAN(fVar14) && !NAN(fVar13))) {
              bVar2 = fVar14 == fVar13;
            }
            bVar3 = false;
            if ((bVar2) && (bVar3 = false, !NAN(param_3) && !NAN(fVar10))) {
              bVar3 = param_3 == fVar10;
            }
            if (bVar3) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x2d0) != 0) {
              plVar6 = (long *)FUN_086f5f80(*(long *)(unaff_x19 + 0x2d0),0);
              FUN_08715a40(&stack0x00000020 + 4,-fVar16,fVar13,param_3,0);
              if (plVar6 != (long *)0x0) {
                lVar7 = *plVar6;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                uStack0000000000000014 = in_stack_00000038;
                uStack000000000000000c = in_stack_00000030;
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8bdb0) {
                      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x7b) * 0x10 + 0x138);
                      goto LAB_061bfd3c;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f8bdb0,0x7b);
LAB_061bfd3c:
                in_stack_00000040 = in_stack_00000020._4_8_;
                uStack0000000000000054 = uStack0000000000000014;
                uStack000000000000004c = uStack000000000000000c;
                (*(code *)*puVar5)(plVar6,&stack0x00000040,puVar5[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar11 = Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                       (*(long *)(unaff_x19 + 0x2d8),0);
    if (*(long *)(unaff_x19 + 0x2d8) != 0) {
      Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                (*(long *)(unaff_x19 + 0x2d8),0);
      if ((*(long *)(unaff_x19 + 0x2d8) != 0) &&
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x328), lVar7 != 0)) {
        FUN_086f574c(lVar7,0);
        uVar11 = FUN_061bfd80(uVar11);
        *(undefined4 *)(unaff_x19 + 0x2ec) = uVar11;
        *(float *)(unaff_x19 + 0x2f0) = param_2;
        if (*(long *)(unaff_x19 + 0x2d8) != 0) {
          FUN_087ebfd8(*(long *)(unaff_x19 + 0x2d8),0);
          if (*(long *)(unaff_x19 + 0x2d8) != 0) {
            fVar13 = *(float *)(unaff_x19 + 0x2ec);
            fVar10 = (float)Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                                      (*(long *)(unaff_x19 + 0x2d8),0);
            if (fVar13 <= fVar10) {
              if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_061bfd7c;
              fVar10 = *(float *)(unaff_x19 + 0x2f0);
              Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                        (*(long *)(unaff_x19 + 0x2d8),0);
              bVar2 = param_2 < fVar10;
            }
            else {
              bVar2 = true;
            }
            *(bool *)(unaff_x19 + 0x2f4) = bVar2;
            return;
          }
        }
      }
    }
  }
LAB_061bfd7c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



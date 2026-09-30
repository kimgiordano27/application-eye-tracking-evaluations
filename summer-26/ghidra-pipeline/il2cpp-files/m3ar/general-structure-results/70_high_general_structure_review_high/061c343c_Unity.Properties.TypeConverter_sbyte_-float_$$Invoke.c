/*
FUNCTION_NAME: Unity.Properties.TypeConverter<sbyte,-float>$$Invoke
ENTRY_POINT: 061c343c
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<sbyte,_float>__Invoke
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
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
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f65580);
  *(undefined1 *)(unaff_x21 + 0xd29) = 1;
  if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
     (plVar5 = (long *)FUN_0872a1a0(*(long *)(unaff_x19 + 0x2d0),0), puVar1 = PTR_DAT_08f8f670,
     plVar5 != (long *)0x0)) {
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8f670) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_061c34c4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8f670,2);
LAB_061c34c4:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 < 0) {
      return;
    }
    lVar8 = *plVar5;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_061c3524;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar7,2);
LAB_061c3524:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 < 1) {
      lVar8 = *plVar5;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 6) * 0x10 + 0x138);
            goto LAB_061c3588;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar7,6);
LAB_061c3588:
      iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar4 < 1) {
        uVar16 = *(undefined8 *)(unaff_x19 + 0x2ec);
        if (DAT_09539c0b == '\0') {
          FUN_0403162c(PTR_DAT_08f65578);
          DAT_09539c0b = '\x01';
        }
        fVar11 = (float)uVar16 - (float)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8);
        fVar14 = (float)((ulong)uVar16 >> 0x20) -
                 (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8) >> 0x20);
        param_2 = DAT_01a2e7f0;
        if (fVar11 * fVar11 + fVar14 * fVar14 < DAT_01a2e7f0) {
          return;
        }
      }
    }
    if (*(long *)(unaff_x19 + 0x2d8) == 0) {
      if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
         (plVar5 = (long *)FUN_086ef654(*(long *)(unaff_x19 + 0x2d0),0), puVar1 = PTR_DAT_08f8bda8,
         plVar5 != (long *)0x0)) {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8bda8) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x3a) * 0x10 + 0x138);
              goto LAB_061c371c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8bda8,0x3a);
LAB_061c371c:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        uVar12 = *(undefined4 *)(unaff_x19 + 0x2ec);
        fVar14 = *(float *)(unaff_x19 + 0x2f0);
        fVar11 = param_3;
        FUN_086f65a8();
        uVar12 = FUN_061c3918(uVar12);
        *(undefined4 *)(unaff_x19 + 0x2ec) = uVar12;
        *(float *)(unaff_x19 + 0x2f0) = fVar14;
        if (*(long *)(unaff_x19 + 0x2d0) != 0) {
          fVar15 = fVar14;
          FUN_086f65a8(*(long *)(unaff_x19 + 0x2d0),0);
          fVar17 = param_4;
          FUN_086f65a8();
          if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (ABS(param_4 - fVar17) <= fVar14) {
            fVar14 = ABS(param_4 - fVar17);
          }
          if (*(long *)(unaff_x19 + 0x2d0) != 0) {
            fVar17 = *(float *)(unaff_x19 + 0x2ec);
            plVar5 = (long *)FUN_086ef654(*(long *)(unaff_x19 + 0x2d0),0);
            if (plVar5 != (long *)0x0) {
              lVar7 = *plVar5;
              fVar14 = -fVar14;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x3a) * 0x10 + 0x138);
                    goto LAB_061c3820;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)puVar1,0x3a);
LAB_061c3820:
              fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
              bVar2 = false;
              if ((fVar13 == -fVar17) && (bVar2 = false, !NAN(fVar15) && !NAN(fVar14))) {
                bVar2 = fVar15 == fVar14;
              }
              bVar3 = false;
              if ((bVar2) && (bVar3 = false, !NAN(param_3) && !NAN(fVar11))) {
                bVar3 = param_3 == fVar11;
              }
              if (bVar3) {
                return;
              }
              if (*(long *)(unaff_x19 + 0x2d0) != 0) {
                plVar5 = (long *)FUN_086f5f80(*(long *)(unaff_x19 + 0x2d0),0);
                FUN_08715a40(&stack0x00000020 + 4,-fVar17,fVar14,param_3,0);
                if (plVar5 != (long *)0x0) {
                  lVar7 = *plVar5;
                  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  uStack0000000000000014 = in_stack_00000038;
                  uStack000000000000000c = in_stack_00000030;
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8bdb0) {
                        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x7b) * 0x10 + 0x138);
                        goto LAB_061c38d4;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8bdb0,0x7b);
LAB_061c38d4:
                  in_stack_00000040 = in_stack_00000020._4_8_;
                  uStack0000000000000054 = uStack0000000000000014;
                  uStack000000000000004c = uStack000000000000000c;
                  (*(code *)*puVar6)(plVar5,&stack0x00000040,puVar6[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar12 = Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                         (*(long *)(unaff_x19 + 0x2d8),0);
      if (*(long *)(unaff_x19 + 0x2d8) != 0) {
        Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                  (*(long *)(unaff_x19 + 0x2d8),0);
        if ((*(long *)(unaff_x19 + 0x2d8) != 0) &&
           (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x328), lVar7 != 0)) {
          FUN_086f574c(lVar7,0);
          uVar12 = FUN_061c3918(uVar12);
          *(undefined4 *)(unaff_x19 + 0x2ec) = uVar12;
          *(float *)(unaff_x19 + 0x2f0) = param_2;
          if (*(long *)(unaff_x19 + 0x2d8) != 0) {
            FUN_087ebfd8(*(long *)(unaff_x19 + 0x2d8),0);
            if (*(long *)(unaff_x19 + 0x2d8) != 0) {
              fVar14 = *(float *)(unaff_x19 + 0x2ec);
              fVar11 = (float)Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                                        (*(long *)(unaff_x19 + 0x2d8),0);
              if (fVar14 <= fVar11) {
                if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_061c3914;
                fVar11 = *(float *)(unaff_x19 + 0x2f0);
                Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                          (*(long *)(unaff_x19 + 0x2d8),0);
                bVar2 = param_2 < fVar11;
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
  }
LAB_061c3914:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



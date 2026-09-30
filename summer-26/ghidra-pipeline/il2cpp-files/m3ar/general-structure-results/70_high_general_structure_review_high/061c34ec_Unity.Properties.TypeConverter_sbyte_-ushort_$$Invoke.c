/*
FUNCTION_NAME: Unity.Properties.TypeConverter<sbyte,-ushort>$$Invoke
ENTRY_POINT: 061c34ec
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


void Unity_Properties_TypeConverter<sbyte,_ushort>__Invoke
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               undefined8 param_6,long param_7)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
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
  
  do {
    if (*(long *)(in_x10 + -2) == param_7) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_061c3524;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_0406ae20();
LAB_061c3524:
  iVar4 = (*(code *)*puVar5)();
  if (iVar4 < 1) {
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_061c3588;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20();
LAB_061c3588:
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
      param_3 = DAT_01a2e7f0;
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
            goto LAB_061c371c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f8bda8,0x3a);
LAB_061c371c:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      uVar11 = *(undefined4 *)(unaff_x19 + 0x2ec);
      fVar13 = *(float *)(unaff_x19 + 0x2f0);
      fVar10 = param_4;
      FUN_086f65a8();
      uVar11 = FUN_061c3918(uVar11);
      *(undefined4 *)(unaff_x19 + 0x2ec) = uVar11;
      *(float *)(unaff_x19 + 0x2f0) = fVar13;
      if (*(long *)(unaff_x19 + 0x2d0) != 0) {
        fVar14 = fVar13;
        FUN_086f65a8(*(long *)(unaff_x19 + 0x2d0),0);
        fVar16 = param_5;
        FUN_086f65a8();
        if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (ABS(param_5 - fVar16) <= fVar13) {
          fVar13 = ABS(param_5 - fVar16);
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
                  goto LAB_061c3820;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar1,0x3a);
LAB_061c3820:
            fVar12 = (float)(*(code *)*puVar5)(plVar6,puVar5[1]);
            bVar2 = false;
            if ((fVar12 == -fVar16) && (bVar2 = false, !NAN(fVar14) && !NAN(fVar13))) {
              bVar2 = fVar14 == fVar13;
            }
            bVar3 = false;
            if ((bVar2) && (bVar3 = false, !NAN(param_4) && !NAN(fVar10))) {
              bVar3 = param_4 == fVar10;
            }
            if (bVar3) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x2d0) != 0) {
              plVar6 = (long *)FUN_086f5f80(*(long *)(unaff_x19 + 0x2d0),0);
              FUN_08715a40(&stack0x00000020 + 4,-fVar16,fVar13,param_4,0);
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
                      goto LAB_061c38d4;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f8bdb0,0x7b);
LAB_061c38d4:
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
        uVar11 = FUN_061c3918(uVar11);
        *(undefined4 *)(unaff_x19 + 0x2ec) = uVar11;
        *(float *)(unaff_x19 + 0x2f0) = param_3;
        if (*(long *)(unaff_x19 + 0x2d8) != 0) {
          FUN_087ebfd8(*(long *)(unaff_x19 + 0x2d8),0);
          if (*(long *)(unaff_x19 + 0x2d8) != 0) {
            fVar13 = *(float *)(unaff_x19 + 0x2ec);
            fVar10 = (float)Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                                      (*(long *)(unaff_x19 + 0x2d8),0);
            if (fVar13 <= fVar10) {
              if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_061c3914;
              fVar10 = *(float *)(unaff_x19 + 0x2f0);
              Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                        (*(long *)(unaff_x19 + 0x2d8),0);
              bVar2 = param_3 < fVar10;
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
LAB_061c3914:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



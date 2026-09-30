/*
FUNCTION_NAME: Unity.Properties.TypeConverter<sbyte,-uint>$$Invoke
ENTRY_POINT: 061c359c
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<sbyte,_uint>__Invoke
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
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
  
  uVar15 = *(undefined8 *)(unaff_x19 + 0x2ec);
  if (DAT_09539c0b == '\0') {
    FUN_0403162c(PTR_DAT_08f65578);
    DAT_09539c0b = '\x01';
  }
  fVar9 = (float)uVar15 - (float)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8);
  fVar12 = (float)((ulong)uVar15 >> 0x20) -
           (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8) >> 0x20);
  if (fVar9 * fVar9 + fVar12 * fVar12 < DAT_01a2e7f0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x2d8) == 0) {
    if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
       (plVar5 = (long *)FUN_086ef654(*(long *)(unaff_x19 + 0x2d0),0), puVar1 = PTR_DAT_08f8bda8,
       plVar5 != (long *)0x0)) {
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f8bda8) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x3a) * 0x10 + 0x138);
            goto LAB_061c371c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8bda8,0x3a);
LAB_061c371c:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x2ec);
      fVar12 = *(float *)(unaff_x19 + 0x2f0);
      fVar9 = param_3;
      FUN_086f65a8();
      uVar10 = FUN_061c3918(uVar10);
      *(undefined4 *)(unaff_x19 + 0x2ec) = uVar10;
      *(float *)(unaff_x19 + 0x2f0) = fVar12;
      if (*(long *)(unaff_x19 + 0x2d0) != 0) {
        fVar13 = fVar12;
        FUN_086f65a8(*(long *)(unaff_x19 + 0x2d0),0);
        fVar14 = param_4;
        FUN_086f65a8();
        if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (ABS(param_4 - fVar14) <= fVar12) {
          fVar12 = ABS(param_4 - fVar14);
        }
        if (*(long *)(unaff_x19 + 0x2d0) != 0) {
          fVar14 = *(float *)(unaff_x19 + 0x2ec);
          plVar5 = (long *)FUN_086ef654(*(long *)(unaff_x19 + 0x2d0),0);
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            fVar12 = -fVar12;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x3a) * 0x10 + 0x138);
                  goto LAB_061c3820;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)puVar1,0x3a);
LAB_061c3820:
            fVar11 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
            bVar2 = false;
            if ((fVar11 == -fVar14) && (bVar2 = false, !NAN(fVar13) && !NAN(fVar12))) {
              bVar2 = fVar13 == fVar12;
            }
            bVar3 = false;
            if ((bVar2) && (bVar3 = false, !NAN(param_3) && !NAN(fVar9))) {
              bVar3 = param_3 == fVar9;
            }
            if (bVar3) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x2d0) != 0) {
              plVar5 = (long *)FUN_086f5f80(*(long *)(unaff_x19 + 0x2d0),0);
              FUN_08715a40(&stack0x00000020 + 4,-fVar14,fVar12,param_3,0);
              if (plVar5 != (long *)0x0) {
                lVar4 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                uStack0000000000000014 = in_stack_00000038;
                uStack000000000000000c = in_stack_00000030;
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f8bdb0) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x7b) * 0x10 + 0x138);
                      goto LAB_061c38d4;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
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
    fVar9 = DAT_01a2e7f0;
    uVar10 = Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                       (*(long *)(unaff_x19 + 0x2d8),0);
    if (*(long *)(unaff_x19 + 0x2d8) != 0) {
      Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                (*(long *)(unaff_x19 + 0x2d8),0);
      if ((*(long *)(unaff_x19 + 0x2d8) != 0) &&
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x328), lVar4 != 0)) {
        FUN_086f574c(lVar4,0);
        uVar10 = FUN_061c3918(uVar10);
        *(undefined4 *)(unaff_x19 + 0x2ec) = uVar10;
        *(float *)(unaff_x19 + 0x2f0) = fVar9;
        if (*(long *)(unaff_x19 + 0x2d8) != 0) {
          FUN_087ebfd8(*(long *)(unaff_x19 + 0x2d8),0);
          if (*(long *)(unaff_x19 + 0x2d8) != 0) {
            fVar14 = *(float *)(unaff_x19 + 0x2ec);
            fVar12 = (float)Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                                      (*(long *)(unaff_x19 + 0x2d8),0);
            if (fVar14 <= fVar12) {
              if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_061c3914;
              fVar12 = *(float *)(unaff_x19 + 0x2f0);
              Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                        (*(long *)(unaff_x19 + 0x2d8),0);
              bVar2 = fVar9 < fVar12;
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



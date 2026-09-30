/*
FUNCTION_NAME: Unity.Properties.TypeConverter<BackgroundPosition,-StyleBackgroundPosition>$$Invoke
ENTRY_POINT: 061bcf8c
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<BackgroundPosition,_StyleBackgroundPosition>__Invoke
               (ulong param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0406aaec();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
                    /* try { // try from 061bcf9c to 062bcfb3 has its CatchHandler @ 061bd04c */
    thunk_FUN_0408f364();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x135) & 1) ==
      0) {
    FUN_0406aaec();
  }
  if (unaff_x21 != 0) {
    FUN_086fac94();
    lVar9 = *(long *)(unaff_x19 + 0x2d0);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
    }
    if (lVar9 != 0) {
      FUN_086fac94(lVar9,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28),0);
      lVar9 = *(long *)(unaff_x19 + 0x2d0);
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0406aaec();
      }
      if (lVar9 != 0) {
        FUN_086fac94(lVar9,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18),0);
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) &
            1) == 0) {
          FUN_0406aaec();
        }
        FUN_086fac94();
        lVar9 = *(long *)(unaff_x19 + 0x2d0);
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        if (lVar9 != 0) {
          FUN_086fac94(lVar9,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10),0);
          if (*(long *)(unaff_x19 + 0x2e0) == 0) {
            return;
          }
          if (*(long *)(unaff_x19 + 0x2d0) != 0) {
            plVar3 = (long *)FUN_086f5f80(*(long *)(unaff_x19 + 0x2d0),0);
            if (DAT_09539c10 == '\0') {
              FUN_0403162c(PTR_DAT_08f65568);
              DAT_09539c10 = '\x01';
            }
            puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
            FUN_08715a40(&stack0x00000020 + 4,*puVar6,puVar6[1],puVar6[2],0);
            uVar5 = in_stack_00000038;
            uVar1 = uStack0000000000000030;
            if (plVar3 != (long *)0x0) {
              lVar2 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f8bdb0) {
                    puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 0x7b) * 0x10 + 0x138);
                    goto LAB_061bd1a0;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_0406ae20(plVar3,*(long *)PTR_DAT_08f8bdb0,0x7b);
LAB_061bd1a0:
              uStack0000000000000048 = in_stack_00000020._12_4_;
              in_stack_00000040 = in_stack_00000020._4_8_;
              uStack0000000000000054 = uVar5;
              uStack000000000000004c = uVar1;
              uStack0000000000000050 = uStack0000000000000034;
              (*(code *)*puVar4)(plVar3,&stack0x00000040,puVar4[1]);
              if (*(long *)(unaff_x19 + 0x2e0) != 0) {
                FUN_08700e10(*(long *)(unaff_x19 + 0x2e0),0);
                lVar2 = *(long *)(unaff_x19 + 0x2d0);
                uVar5 = thunk_FUN_0406deb8(*unaff_x24);
                FUN_052499f0();
                if (lVar2 != 0) {
                  FUN_04a66ca4(lVar2,uVar5,0,*unaff_x23);
                  lVar2 = *(long *)(unaff_x20 + 0x20);
                  *(undefined8 *)(unaff_x19 + 0x2e0) = 0;
                  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
                  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    lVar2 = FUN_0406aaec();
                  }
                  if (*(int *)(lVar2 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  if ((*(ushort *)
                        (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) &
                      1) == 0) {
                    FUN_0406aaec();
                  }
                  FUN_086fac94();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



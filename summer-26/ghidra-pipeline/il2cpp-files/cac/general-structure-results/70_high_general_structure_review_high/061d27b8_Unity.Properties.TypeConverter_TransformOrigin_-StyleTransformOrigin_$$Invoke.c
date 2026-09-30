/*
FUNCTION_NAME: Unity.Properties.TypeConverter<TransformOrigin,-StyleTransformOrigin>$$Invoke
ENTRY_POINT: 061d27b8
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<TransformOrigin,_StyleTransformOrigin>__Invoke(void)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_0896c30c();
  lVar10 = *(long *)(unaff_x19 + 0x2d0);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f4b260();
  }
  if (lVar10 != 0) {
    FUN_0896c30c(lVar10,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28),0);
    lVar10 = *(long *)(unaff_x19 + 0x2d0);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f4b260();
    }
    if (lVar10 != 0) {
      FUN_0896c30c(lVar10,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18),0);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f4b260();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
          == 0) {
        FUN_03f4b260();
      }
      FUN_0896c30c();
      lVar10 = *(long *)(unaff_x19 + 0x2d0);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f4b260();
      }
      if (lVar10 != 0) {
        FUN_0896c30c(lVar10,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),0);
        if (*(long *)(unaff_x19 + 0x2e0) == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x2d0) != 0) {
          plVar4 = (long *)FUN_08967520(*(long *)(unaff_x19 + 0x2d0),0);
          if (DAT_096847b5 == '\0') {
            FUN_03f13384(PTR_DAT_0910c4c8);
            DAT_096847b5 = '\x01';
          }
          puVar7 = *(undefined4 **)(*(long *)PTR_DAT_0910c4c8 + 0xb8);
          FUN_08987bb8(&stack0x00000020 + 4,*puVar7,puVar7[1],puVar7[2],0);
          uVar6 = in_stack_00000038;
          uVar2 = uStack0000000000000030;
          if (plVar4 != (long *)0x0) {
            lVar3 = *plVar4;
            plVar1 = (long *)(unaff_x19 + 0x2e0);
            uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09121b90) {
                  puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0x7b) * 0x10 + 0x138);
                  goto LAB_061d299c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f4b594(plVar4,*(long *)PTR_DAT_09121b90,0x7b);
LAB_061d299c:
            uStack0000000000000048 = in_stack_00000020._12_4_;
            in_stack_00000040 = in_stack_00000020._4_8_;
            uStack0000000000000054 = uVar6;
            uStack000000000000004c = uVar2;
            uStack0000000000000050 = uStack0000000000000034;
            (*(code *)*puVar5)(plVar4,&stack0x00000040,puVar5[1]);
            if (*plVar1 != 0) {
              FUN_08972650(*plVar1,0);
              lVar3 = *(long *)(unaff_x19 + 0x2d0);
              uVar6 = thunk_FUN_03f4e68c(*unaff_x25);
              FUN_04fafe60();
              if (lVar3 != 0) {
                FUN_04892118(lVar3,uVar6,0,*unaff_x24);
                *plVar1 = 0;
                thunk_FUN_03f86000(plVar1,0);
                lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_03f4b260();
                }
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_03f6fea8();
                }
                if ((*(ushort *)
                      (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
                    == 0) {
                  FUN_03f4b260();
                }
                FUN_0896c30c();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}



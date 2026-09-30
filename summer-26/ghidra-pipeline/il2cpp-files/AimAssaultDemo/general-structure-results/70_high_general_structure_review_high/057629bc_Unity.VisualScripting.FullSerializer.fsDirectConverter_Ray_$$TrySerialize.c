/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TrySerialize
ENTRY_POINT: 057629bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TrySerialize(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar9;
  long *unaff_x25;
  long lVar10;
  long unaff_x26;
  int unaff_w27;
  int *piVar11;
  long unaff_x29;
  undefined4 uVar12;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  do {
    if (unaff_x20 < param_1) {
      *(undefined4 *)(unaff_x24 + unaff_x26 * unaff_x29 + 0x38) = 0;
    }
    else {
      piVar11 = (int *)(unaff_x24 + unaff_x26 * unaff_x29 + 0x28);
      if (unaff_x20 < param_1 + *piVar11) {
        pcVar4 = (char *)(unaff_x24 + unaff_x26 * unaff_x29 + 0x40);
        if (*pcVar4 == '\0') {
          *pcVar4 = '\x01';
          if (*in_stack_00000008 == 0) goto LAB_05762d8c;
          if (*(uint *)(*in_stack_00000008 + 0x18) <= unaff_w22) goto LAB_05762d90;
          FUN_05760100();
        }
        lVar5 = *(long *)(unaff_x24 + unaff_x26 * unaff_x29 + 0x30);
        if (lVar5 == 0) goto LAB_05762d8c;
        uVar12 = (**(code **)(lVar5 + 0x18))
                           ((float)(unaff_x20 - *unaff_x25) / (float)*piVar11,
                            *(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        *(undefined4 *)(unaff_x24 + unaff_x26 * unaff_x29 + 0x38) = uVar12;
      }
      else {
        lVar5 = unaff_x21[8];
        if (lVar5 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w22) {
LAB_05762d90:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar7 = *in_stack_00000008;
        if (lVar7 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto LAB_05762d90;
        lVar5 = lVar5 + unaff_x26 * 0x70;
        *(undefined8 *)(lVar5 + 0x7c) = *(undefined8 *)(lVar5 + 0x44);
        *(undefined8 *)(lVar5 + 0x74) = *(undefined8 *)(lVar5 + 0x3c);
        *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar5 + 0x50);
        *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar5 + 0x48);
        (**(code **)(*unaff_x21 + 0x1f8))();
        plVar9 = (long *)(lVar7 + unaff_x26 * 8 + 0x20);
        lVar10 = *plVar9;
        lVar7 = unaff_x21[6];
        if (lVar7 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto LAB_05762d90;
        uVar12 = *(undefined4 *)(lVar7 + unaff_x26 * 4 + 0x20);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1a8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar7 = *(long *)(lVar6 + 0x1a8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        uStack0000000000000044 = *(undefined8 *)(lVar5 + 0x50);
        in_stack_00000030 = *(undefined8 *)(lVar5 + 0x3c);
        uStack0000000000000020 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x48) >> 0x20);
        uStack0000000000000018 = (undefined4)*(undefined8 *)(lVar5 + 0x44);
        uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x44) >> 0x20);
        uStack000000000000003c = uStack000000000000001c;
        uStack0000000000000040 = uStack0000000000000020;
        uStack0000000000000038 = uStack0000000000000018;
        FUN_05b821bc(in_stack_00000000,lVar10,uVar12,**(undefined1 **)(lVar7 + 0xb8),
                     &stack0x00000030,*(undefined8 *)(lVar6 + 0x1b0));
        if ((*plVar9 == 0) || (plVar2 = (long *)FUN_0770ff80(*plVar9,0), plVar2 == (long *)0x0))
        goto LAB_05762d8c;
        lVar5 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
              goto LAB_05762bdc;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x14);
LAB_05762bdc:
        iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        lVar5 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0x15) * 0x10 + 0x138);
              goto LAB_05762c3c;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x15);
LAB_05762c3c:
        (*(code *)*puVar3)(plVar2,iVar1 + -1,puVar3[1]);
        if ((*plVar9 == 0) || (plVar9 = (long *)FUN_0770ff80(*plVar9,0), plVar9 == (long *)0x0))
        goto LAB_05762d8c;
        lVar5 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0x16) * 0x10 + 0x138);
              goto LAB_05762cb4;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x23,0x16);
LAB_05762cb4:
        iVar1 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        lVar5 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
              goto LAB_05762d14;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x23,0x17);
LAB_05762d14:
        (*(code *)*puVar3)(plVar9,iVar1 + 1,puVar3[1]);
        FUN_0576031c();
        FUN_05b8d6d8(in_stack_00000008,unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0));
        unaff_w22 = unaff_w22 - 1;
        unaff_w27 = unaff_w27 + -1;
      }
    }
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w27 <= (int)unaff_w22) {
      return;
    }
    unaff_x24 = unaff_x21[7];
    if (unaff_x24 == 0) {
LAB_05762d8c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w22) goto LAB_05762d90;
    unaff_x26 = (long)(int)unaff_w22;
    unaff_x25 = (long *)(unaff_x24 + unaff_x26 * unaff_x29 + 0x20);
    param_1 = *unaff_x25;
  } while( true );
}



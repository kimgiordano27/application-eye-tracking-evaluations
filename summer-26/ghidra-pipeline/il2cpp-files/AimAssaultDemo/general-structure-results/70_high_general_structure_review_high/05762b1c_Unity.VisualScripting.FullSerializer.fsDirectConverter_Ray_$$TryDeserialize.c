/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 05762b1c
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


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize
               (long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined4 unaff_w26;
  long lVar8;
  int unaff_w27;
  int *piVar9;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar10;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_03775678();
      param_1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    uStack0000000000000044 = *(undefined8 *)(unaff_x28 + 0x50);
    in_stack_00000030 = *(undefined8 *)(unaff_x28 + 0x3c);
    uStack0000000000000020 = (undefined4)((ulong)*(undefined8 *)(unaff_x28 + 0x48) >> 0x20);
    uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)(unaff_x28 + 0x44) >> 0x20);
    uStack0000000000000038 = (undefined4)*(undefined8 *)(unaff_x28 + 0x44);
    uStack000000000000003c = uStack000000000000001c;
    uStack0000000000000040 = uStack0000000000000020;
    FUN_05b821bc(in_stack_00000000,unaff_x25,unaff_w26,**(undefined1 **)(param_2 + 0xb8),
                 &stack0x00000030,*(undefined8 *)(param_1 + 0x1b0));
    if ((*unaff_x24 == 0) || (plVar2 = (long *)FUN_0770ff80(*unaff_x24,0), plVar2 == (long *)0x0)) {
LAB_05762d8c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
          goto LAB_05762bdc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x14);
LAB_05762bdc:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x15) * 0x10 + 0x138);
          goto LAB_05762c3c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x15);
LAB_05762c3c:
    (*(code *)*puVar3)(plVar2,iVar1 + -1,puVar3[1]);
    if ((*unaff_x24 == 0) || (plVar2 = (long *)FUN_0770ff80(*unaff_x24,0), plVar2 == (long *)0x0))
    goto LAB_05762d8c;
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x16) * 0x10 + 0x138);
          goto LAB_05762cb4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x16);
LAB_05762cb4:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x17) * 0x10 + 0x138);
          goto LAB_05762d14;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x17);
LAB_05762d14:
    (*(code *)*puVar3)(plVar2,iVar1 + 1,puVar3[1]);
    FUN_0576031c();
    FUN_05b8d6d8(in_stack_00000008,unaff_w22,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0));
    unaff_w22 = unaff_w22 - 1;
    unaff_w27 = unaff_w27 + -1;
    while( true ) {
      while( true ) {
        unaff_w22 = unaff_w22 + 1;
        if (unaff_w27 <= (int)unaff_w22) {
          return;
        }
        lVar6 = unaff_x21[7];
        if (lVar6 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w22) goto LAB_05762d90;
        lVar8 = (long)(int)unaff_w22;
        plVar2 = (long *)(lVar6 + lVar8 * unaff_x29 + 0x20);
        lVar4 = *plVar2;
        if (lVar4 <= unaff_x20) break;
        *(undefined4 *)(lVar6 + lVar8 * unaff_x29 + 0x38) = 0;
      }
      piVar9 = (int *)(lVar6 + lVar8 * unaff_x29 + 0x28);
      if (lVar4 + *piVar9 <= unaff_x20) break;
      pcVar5 = (char *)(lVar6 + lVar8 * unaff_x29 + 0x40);
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
        if (*in_stack_00000008 == 0) goto LAB_05762d8c;
        if (*(uint *)(*in_stack_00000008 + 0x18) <= unaff_w22) goto LAB_05762d90;
        FUN_05760100();
      }
      lVar4 = *(long *)(lVar6 + lVar8 * unaff_x29 + 0x30);
      if (lVar4 == 0) goto LAB_05762d8c;
      uVar10 = (**(code **)(lVar4 + 0x18))
                         ((float)(unaff_x20 - *plVar2) / (float)*piVar9,
                          *(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      *(undefined4 *)(lVar6 + lVar8 * unaff_x29 + 0x38) = uVar10;
    }
    lVar6 = unaff_x21[8];
    if (lVar6 == 0) goto LAB_05762d8c;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w22) {
LAB_05762d90:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar4 = *in_stack_00000008;
    if (lVar4 == 0) goto LAB_05762d8c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_05762d90;
    unaff_x28 = lVar6 + lVar8 * 0x70;
    *(undefined8 *)(unaff_x28 + 0x7c) = *(undefined8 *)(unaff_x28 + 0x44);
    *(undefined8 *)(unaff_x28 + 0x74) = *(undefined8 *)(unaff_x28 + 0x3c);
    *(undefined8 *)(unaff_x28 + 0x88) = *(undefined8 *)(unaff_x28 + 0x50);
    *(undefined8 *)(unaff_x28 + 0x80) = *(undefined8 *)(unaff_x28 + 0x48);
    (**(code **)(*unaff_x21 + 0x1f8))();
    unaff_x24 = (long *)(lVar4 + lVar8 * 8 + 0x20);
    unaff_x25 = *unaff_x24;
    lVar6 = unaff_x21[6];
    if (lVar6 == 0) goto LAB_05762d8c;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w22) goto LAB_05762d90;
    unaff_w26 = *(undefined4 *)(lVar6 + lVar8 * 4 + 0x20);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1a8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    param_2 = *(long *)(param_1 + 0x1a8);
  } while( true );
}



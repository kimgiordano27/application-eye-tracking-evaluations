/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$.ctor
ENTRY_POINT: 05762cf4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>___ctor
               (undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x25;
  int unaff_w26;
  long lVar10;
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
  
code_r0x05762cf4:
                    /* try { // try from 05762cf8 to 05862ea7 has its CatchHandler @ 05762cf8
                       catch() { ... } // from try @ 05762cf8 with catch @ 05762cf8
                       catch() { ... } // from try @ 05762f30 with catch @ 05762cf8
                       catch() { ... } // from try @ 05762f44 with catch @ 05762cf8
                       catch() { ... } // from try @ 05762f80 with catch @ 05762cf8
                       catch() { ... } // from try @ 05762fbc with catch @ 05762cf8 */
  puVar3 = (undefined8 *)FUN_0377596c(unaff_x25,param_2,0x17);
  do {
    (*(code *)*puVar3)(unaff_x25,unaff_w26 + 1,puVar3[1]);
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
        lVar7 = unaff_x21[7];
        if (lVar7 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto LAB_05762d90;
        lVar10 = (long)(int)unaff_w22;
        plVar8 = (long *)(lVar7 + lVar10 * unaff_x29 + 0x20);
        lVar4 = *plVar8;
        if (lVar4 <= unaff_x20) break;
        *(undefined4 *)(lVar7 + lVar10 * unaff_x29 + 0x38) = 0;
      }
      piVar11 = (int *)(lVar7 + lVar10 * unaff_x29 + 0x28);
      if (lVar4 + *piVar11 <= unaff_x20) break;
      pcVar5 = (char *)(lVar7 + lVar10 * unaff_x29 + 0x40);
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
        if (*in_stack_00000008 == 0) goto LAB_05762d8c;
        if (*(uint *)(*in_stack_00000008 + 0x18) <= unaff_w22) goto LAB_05762d90;
        FUN_05760100();
      }
      lVar4 = *(long *)(lVar7 + lVar10 * unaff_x29 + 0x30);
      if (lVar4 == 0) goto LAB_05762d8c;
      uVar12 = (**(code **)(lVar4 + 0x18))
                         ((float)(unaff_x20 - *plVar8) / (float)*piVar11,
                          *(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      *(undefined4 *)(lVar7 + lVar10 * unaff_x29 + 0x38) = uVar12;
    }
    lVar7 = unaff_x21[8];
    if (lVar7 == 0) goto LAB_05762d8c;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w22) {
LAB_05762d90:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar4 = *in_stack_00000008;
    if (lVar4 == 0) goto LAB_05762d8c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_05762d90;
    lVar7 = lVar7 + lVar10 * 0x70;
    *(undefined8 *)(lVar7 + 0x7c) = *(undefined8 *)(lVar7 + 0x44);
    *(undefined8 *)(lVar7 + 0x74) = *(undefined8 *)(lVar7 + 0x3c);
    *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(lVar7 + 0x48);
    (**(code **)(*unaff_x21 + 0x1f8))();
    plVar8 = (long *)(lVar4 + lVar10 * 8 + 0x20);
    lVar9 = *plVar8;
    lVar4 = unaff_x21[6];
    if (lVar4 == 0) goto LAB_05762d8c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_05762d90;
    uVar12 = *(undefined4 *)(lVar4 + lVar10 * 4 + 0x20);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1a8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar10 + 0x1a8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    uStack0000000000000044 = *(undefined8 *)(lVar7 + 0x50);
    in_stack_00000030 = *(undefined8 *)(lVar7 + 0x3c);
    uStack0000000000000020 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x48) >> 0x20);
    uStack0000000000000018 = (undefined4)*(undefined8 *)(lVar7 + 0x44);
    uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x44) >> 0x20);
    uStack000000000000003c = uStack000000000000001c;
    uStack0000000000000040 = uStack0000000000000020;
    uStack0000000000000038 = uStack0000000000000018;
    FUN_05b821bc(in_stack_00000000,lVar9,uVar12,**(undefined1 **)(lVar4 + 0xb8),&stack0x00000030,
                 *(undefined8 *)(lVar10 + 0x1b0));
    if ((*plVar8 == 0) || (plVar2 = (long *)FUN_0770ff80(*plVar8,0), plVar2 == (long *)0x0)) {
LAB_05762d8c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
          goto LAB_05762bdc;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x14);
LAB_05762bdc:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar7 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x15) * 0x10 + 0x138);
          goto LAB_05762c3c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x23,0x15);
LAB_05762c3c:
    (*(code *)*puVar3)(plVar2,iVar1 + -1,puVar3[1]);
    if ((*plVar8 == 0) || (unaff_x25 = (long *)FUN_0770ff80(*plVar8,0), unaff_x25 == (long *)0x0))
    goto LAB_05762d8c;
    lVar7 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x16) * 0x10 + 0x138);
          goto LAB_05762cb4;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(unaff_x25,*unaff_x23,0x16);
LAB_05762cb4:
    unaff_w26 = (*(code *)*puVar3)(unaff_x25,puVar3[1]);
    lVar7 = *unaff_x25;
    param_2 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 == 0) goto code_r0x05762cf4;
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar11 + -2) != param_2) {
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
      if (uVar6 == 0) goto code_r0x05762cf4;
    }
    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
  } while( true );
}



/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$get_ModelType
ENTRY_POINT: 05762984
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__get_ModelType(void)

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
  uint uVar7;
  long unaff_x23;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int unaff_w27;
  int *piVar13;
  undefined4 uVar14;
  long *plStack0000000000000000;
  long *plStack0000000000000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  plVar8 = *(long **)(unaff_x23 + 0xe28);
                    /* try { // try from 05762988 to 05862997 has its CatchHandler @ 05762998 */
  uVar7 = 0;
  plStack0000000000000008 = unaff_x21 + 5;
  plStack0000000000000000 = unaff_x21 + 0xb;
                    /* catch() { ... } // from try @ 0576294c with catch @ 05762998
                       catch() { ... } // from try @ 05762988 with catch @ 05762998 */
  do {
                    /* try { // try from 0576299c to 0586299f has its CatchHandler @ 057629a8 */
    lVar9 = unaff_x21[7];
                    /* try { // try from 057629a0 to 058629ab has its CatchHandler @ 057626d0 */
    if (lVar9 == 0) goto LAB_05762d8c;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0576299c with catch @ 057629a8
                        */
    if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_05762d90;
    lVar12 = (long)(int)uVar7;
    plVar10 = (long *)(lVar9 + lVar12 * 0x28 + 0x20);
    lVar4 = *plVar10;
    if (unaff_x20 < lVar4) {
      *(undefined4 *)(lVar9 + lVar12 * 0x28 + 0x38) = 0;
    }
    else {
      piVar13 = (int *)(lVar9 + lVar12 * 0x28 + 0x28);
      if (unaff_x20 < lVar4 + *piVar13) {
        pcVar5 = (char *)(lVar9 + lVar12 * 0x28 + 0x40);
        if (*pcVar5 == '\0') {
          *pcVar5 = '\x01';
          if (*plStack0000000000000008 == 0) goto LAB_05762d8c;
          if (*(uint *)(*plStack0000000000000008 + 0x18) <= uVar7) goto LAB_05762d90;
          FUN_05760100();
        }
        lVar4 = *(long *)(lVar9 + lVar12 * 0x28 + 0x30);
        if (lVar4 == 0) goto LAB_05762d8c;
        uVar14 = (**(code **)(lVar4 + 0x18))
                           ((float)(unaff_x20 - *plVar10) / (float)*piVar13,
                            *(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        *(undefined4 *)(lVar9 + lVar12 * 0x28 + 0x38) = uVar14;
      }
      else {
        lVar9 = unaff_x21[8];
        if (lVar9 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_05762d90:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar4 = *plStack0000000000000008;
        if (lVar4 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_05762d90;
        lVar9 = lVar9 + lVar12 * 0x70;
        *(undefined8 *)(lVar9 + 0x7c) = *(undefined8 *)(lVar9 + 0x44);
        *(undefined8 *)(lVar9 + 0x74) = *(undefined8 *)(lVar9 + 0x3c);
        *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(lVar9 + 0x50);
        *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)(lVar9 + 0x48);
        (**(code **)(*unaff_x21 + 0x1f8))();
        plVar10 = (long *)(lVar4 + lVar12 * 8 + 0x20);
        lVar11 = *plVar10;
        lVar4 = unaff_x21[6];
        if (lVar4 == 0) goto LAB_05762d8c;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_05762d90;
        uVar14 = *(undefined4 *)(lVar4 + lVar12 * 4 + 0x20);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1a8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03775678();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar12 + 0x1a8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03775678();
          lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        uStack0000000000000044 = *(undefined8 *)(lVar9 + 0x50);
        in_stack_00000030 = *(undefined8 *)(lVar9 + 0x3c);
        uStack0000000000000020 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20);
        uStack0000000000000018 = (undefined4)*(undefined8 *)(lVar9 + 0x44);
        uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x44) >> 0x20);
        uStack000000000000003c = uStack000000000000001c;
        uStack0000000000000040 = uStack0000000000000020;
        uStack0000000000000038 = uStack0000000000000018;
        FUN_05b821bc(plStack0000000000000000,lVar11,uVar14,**(undefined1 **)(lVar4 + 0xb8),
                     &stack0x00000030,*(undefined8 *)(lVar12 + 0x1b0));
        if ((*plVar10 == 0) || (plVar2 = (long *)FUN_0770ff80(*plVar10,0), plVar2 == (long *)0x0)) {
LAB_05762d8c:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar8) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
              goto LAB_05762bdc;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar2,*plVar8,0x14);
LAB_05762bdc:
        iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        lVar9 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar8) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x15) * 0x10 + 0x138);
              goto LAB_05762c3c;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar2,*plVar8,0x15);
LAB_05762c3c:
        (*(code *)*puVar3)(plVar2,iVar1 + -1,puVar3[1]);
        if ((*plVar10 == 0) || (plVar10 = (long *)FUN_0770ff80(*plVar10,0), plVar10 == (long *)0x0))
        goto LAB_05762d8c;
        lVar9 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar8) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x16) * 0x10 + 0x138);
              goto LAB_05762cb4;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar10,*plVar8,0x16);
LAB_05762cb4:
        iVar1 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        lVar9 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar8) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x17) * 0x10 + 0x138);
              goto LAB_05762d14;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar10,*plVar8,0x17);
LAB_05762d14:
        (*(code *)*puVar3)(plVar10,iVar1 + 1,puVar3[1]);
        FUN_0576031c();
        FUN_05b8d6d8(plStack0000000000000008,uVar7,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0));
        uVar7 = uVar7 - 1;
        unaff_w27 = unaff_w27 + -1;
      }
    }
    uVar7 = uVar7 + 1;
    if (unaff_w27 <= (int)uVar7) {
      return;
    }
  } while( true );
}



/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 06ac1e50
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeFrustum2(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x25;
  long *plVar15;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  float unaff_s10;
  undefined4 uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  long in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  do {
    if ((param_1 != 0) &&
       (lVar7 = FUN_0339898c(param_1,*(undefined8 *)(*unaff_x25 + 0x40)), lVar7 == 0)) {
      uVar16 = FUN_033d1d78();
                    /* try { // try from 06ac215c to 06bc2163 has its CatchHandler @ 06ac2164 */
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar16,0);
    }
    if (*(uint *)(unaff_x25 + 3) <= unaff_w23) {
LAB_06ac2154:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06ac1b50 with catch @ 06ac2154 */
      FUN_033d1d44();
    }
    plVar15 = unaff_x25 + (long)(int)unaff_w23 + 4;
    *plVar15 = param_1;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      uStack000000000000000c = unaff_w23;
      uVar8 = FUN_03398650(*(undefined8 *)(unaff_x29 + 0xfc8),(long)&stack0x00000008 + 4);
      uStack0000000000000008 = (undefined4)unaff_x21;
      uVar9 = FUN_03398650(*(undefined8 *)(unaff_x29 + 0xfc8),&stack0x00000008);
      uVar16 = DAT_0845b310;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      FUN_0683f484(&stack0x000000a0,uVar8,uVar9,0);
      in_stack_00000088 = *(undefined8 *)(unaff_x22 + 0x28);
      in_stack_00000080 = *(undefined8 *)(unaff_x22 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
      FUN_0666f060(0,uVar16,&stack0x00000080);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06ac2150;
      uVar16 = FUN_06ac25fc(*(long *)(unaff_x19 + 0x40),unaff_w23);
      plVar15 = *(long **)(unaff_x19 + 0x38);
      fVar6 = (float)uVar16;
      if (unaff_w23 != 0) {
        fVar6 = unaff_s10;
      }
      fVar5 = -(float)uVar16;
      if (unaff_x21 < 0x13) {
        fVar5 = fVar6;
      }
      if (plVar15 == (long *)0x0) goto LAB_06ac2150;
      lVar7 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(unaff_x27 + 0xa30)) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_06ac1fb4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0338f71c(plVar15,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1fb4:
      (*(code *)*puVar10)(plVar15,unaff_x21 & 0xffffffff,&stack0x00000038,puVar10[1]);
      lVar7 = in_stack_00000058;
      if (in_stack_00000058 == 0) goto LAB_06ac2150;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      (*DAT_086ef188)(lVar7);
      uVar16 = FUN_06ac26a8(uStack0000000000000060,uStack0000000000000064,in_stack_00000068,
                            uStack0000000000000038,uStack000000000000003c,in_stack_00000040,uVar16,
                            fVar5);
      lVar7 = in_stack_00000058;
      uVar8 = FUN_03398a84(DAT_083c91f8);
      FUN_06ac2a20(uVar8,unaff_w23,unaff_x21 & 0xffffffff,lVar7,uVar16);
      lVar7 = DAT_083efe60;
      lVar11 = *(long *)(unaff_x19 + 0x68);
      if (lVar11 == 0) goto LAB_06ac2150;
      lVar12 = *(long *)(lVar11 + 0x10);
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_06ac2150;
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
        puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *puVar10 = uVar8;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        FUN_04ab0e54(lVar11,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
        ;
      }
      do {
        unaff_x21 = unaff_x21 + 1;
        if (unaff_x21 == 0x18) {
          FUN_06ac2ab0();
          lVar7 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
            return;
          }
          goto LAB_06ac2150;
        }
        lVar7 = *(long *)(unaff_x28 + 0xfd0);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          FUN_033b9870();
          lVar7 = *(long *)(unaff_x28 + 0xfd0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) goto LAB_06ac2150;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_06ac2154;
        unaff_w23 = *(uint *)(lVar7 + unaff_x21 * 4 + 0x20);
      } while ((unaff_w23 == 0xffffffff) ||
              ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
      plVar15 = *(long **)(unaff_x19 + 0x38);
      if (plVar15 == (long *)0x0) goto LAB_06ac2150;
      lVar7 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(unaff_x27 + 0xa30)) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_06ac1df8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0338f71c(plVar15,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1df8:
      (*(code *)*puVar10)(plVar15,unaff_w23,&stack0x00000060,puVar10[1]);
      uVar13 = FUN_06ac2164();
    } while ((uVar13 & 1) != 0);
    in_stack_00000010 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    in_stack_00000018 = in_stack_00000068;
    uStack0000000000000024 = uStack0000000000000074;
    uStack0000000000000020 = uStack0000000000000070;
    param_1 = FUN_06ac22a4();
    unaff_x25 = *(long **)(unaff_x19 + 0x78);
    in_stack_00000058 = param_1;
  } while (unaff_x25 != (long *)0x0);
LAB_06ac2150:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



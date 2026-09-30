/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 06ac1f34
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_AsymmetricFovEnabled(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *plVar15;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  float unaff_s10;
  uint uStack0000000000000008;
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
  
  while( true ) {
    uVar16 = FUN_06ac25fc(param_1,unaff_w23);
    plVar15 = *(long **)(unaff_x19 + 0x38);
    fVar6 = (float)uVar16;
    if (unaff_w23 != 0) {
      fVar6 = unaff_s10;
    }
    fVar5 = -(float)uVar16;
    if (unaff_x21 < 0x13) {
      fVar5 = fVar6;
    }
    if (plVar15 == (long *)0x0) break;
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)(unaff_x27 + 0xa30)) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 9) * 0x10 + 0x138);
          goto LAB_06ac1fb4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_0338f71c(plVar15,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1fb4:
    (*(code *)*puVar8)(plVar15,unaff_x21 & 0xffffffff,&stack0x00000038,puVar8[1]);
    lVar11 = in_stack_00000058;
    if (in_stack_00000058 == 0) break;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    (*DAT_086ef188)(lVar11);
    uVar16 = FUN_06ac26a8(uStack0000000000000060,uStack0000000000000064,in_stack_00000068,
                          uStack0000000000000038,uStack000000000000003c,in_stack_00000040,uVar16,
                          fVar5);
    lVar11 = in_stack_00000058;
    uVar9 = FUN_03398a84(DAT_083c91f8);
    FUN_06ac2a20(uVar9,unaff_w23,unaff_x21 & 0xffffffff,lVar11,uVar16);
    lVar11 = DAT_083efe60;
    lVar10 = *(long *)(unaff_x19 + 0x68);
    if (lVar10 == 0) break;
    lVar12 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      puVar8 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
      *puVar8 = uVar9;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      FUN_04ab0e54(lVar10,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_06ac2ab0();
        lVar11 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
          return;
        }
        goto LAB_06ac2150;
      }
      lVar11 = *(long *)(unaff_x28 + 0xfd0);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        FUN_033b9870();
        lVar11 = *(long *)(unaff_x28 + 0xfd0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar11 == 0) goto LAB_06ac2150;
      if (*(uint *)(lVar11 + 0x18) <= unaff_x21) goto LAB_06ac2154;
      unaff_w23 = *(uint *)(lVar11 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w23 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar15 = *(long **)(unaff_x19 + 0x38);
    if (plVar15 == (long *)0x0) break;
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)(unaff_x27 + 0xa30)) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 9) * 0x10 + 0x138);
          goto LAB_06ac1df8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_0338f71c(plVar15,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1df8:
    (*(code *)*puVar8)(plVar15,unaff_w23,&stack0x00000060,puVar8[1]);
    uVar13 = FUN_06ac2164();
    if ((uVar13 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
      in_stack_00000018 = in_stack_00000068;
      uStack0000000000000024 = uStack0000000000000074;
      uStack0000000000000020 = uStack0000000000000070;
      lVar11 = FUN_06ac22a4();
      plVar15 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000058 = lVar11;
      if (plVar15 == (long *)0x0) break;
      if ((lVar11 != 0) &&
         (lVar10 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
        uVar16 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar16,0);
      }
      if (*(uint *)(plVar15 + 3) <= unaff_w23) {
LAB_06ac2154:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar15 = plVar15 + (long)(int)unaff_w23 + 4;
      *plVar15 = lVar11;
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
    }
    uStack000000000000000c = unaff_w23;
    uVar9 = FUN_03398650(*(undefined8 *)(unaff_x29 + 0xfc8),(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar7 = FUN_03398650(*(undefined8 *)(unaff_x29 + 0xfc8),&stack0x00000008);
    uVar16 = DAT_0845b310;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    FUN_0683f484(&stack0x000000a0,uVar9,uVar7,0);
    in_stack_00000088 = *(undefined8 *)(unaff_x22 + 0x28);
    in_stack_00000080 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
    FUN_0666f060(0,uVar16,&stack0x00000080);
    param_1 = *(long *)(unaff_x19 + 0x40);
    if (param_1 == 0) break;
  }
LAB_06ac2150:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



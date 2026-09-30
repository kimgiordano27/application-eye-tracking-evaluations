/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 06ac1c98
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x21;
  ulong uVar17;
  long unaff_x27;
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
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  plVar11 = (long *)(param_1 + 0x68);
  *plVar11 = unaff_x21;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    unaff_x21 = *plVar11;
  }
  if (unaff_x21 != 0) {
    uVar7 = FUN_04ab10e8(unaff_x21,DAT_083efe68);
    puVar12 = (undefined8 *)(unaff_x19 + 0x70);
    *puVar12 = uVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar17 = 2;
    do {
      if (*(int *)(DAT_083cbfd0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar13 = *(long *)(*(long *)(DAT_083cbfd0 + 0xb8) + 0x10);
      if (lVar13 == 0) goto LAB_06ac2150;
      if (*(uint *)(lVar13 + 0x18) <= uVar17) {
LAB_06ac2154:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      uVar2 = *(uint *)(lVar13 + uVar17 * 4 + 0x20);
      if ((uVar2 != 0xffffffff) &&
         ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar17 & 0x1f) & 1) != 0)) {
        plVar11 = *(long **)(unaff_x19 + 0x38);
        if (plVar11 == (long *)0x0) goto LAB_06ac2150;
        lVar13 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)(unaff_x27 + 0xa30)) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto LAB_06ac1df8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1df8:
        (*(code *)*puVar12)(plVar11,uVar2,&stack0x00000060,puVar12[1]);
        uVar15 = FUN_06ac2164();
        if ((uVar15 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
          in_stack_00000018 = in_stack_00000068;
          uStack0000000000000024 = uStack0000000000000074;
          uStack0000000000000020 = uStack0000000000000070;
          lVar13 = FUN_06ac22a4();
          plVar11 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000058 = lVar13;
          if (plVar11 == (long *)0x0) goto LAB_06ac2150;
          if ((lVar13 != 0) &&
             (lVar8 = FUN_0339898c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
            uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20(uVar7,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar2) goto LAB_06ac2154;
          plVar11 = plVar11 + (long)(int)uVar2 + 4;
          *plVar11 = lVar13;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        uStack000000000000000c = uVar2;
        uVar9 = FUN_03398650(DAT_083cbfc8,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = (uint)uVar17;
        uVar10 = FUN_03398650(DAT_083cbfc8,&stack0x00000008);
        uVar7 = DAT_0845b310;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = 0;
        FUN_0683f484(&stack0x000000a0,uVar9,uVar10,0);
        in_stack_00000088 = in_stack_000000a8;
        in_stack_00000080 = in_stack_000000a0;
        in_stack_00000098 = in_stack_000000b8;
        in_stack_00000090 = in_stack_000000b0;
        FUN_0666f060(0,uVar7,&stack0x00000080);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06ac2150;
        uVar7 = FUN_06ac25fc(*(long *)(unaff_x19 + 0x40),uVar2);
        plVar11 = *(long **)(unaff_x19 + 0x38);
        fVar5 = (float)uVar7;
        if (uVar2 != 0) {
          fVar5 = 0.0;
        }
        fVar6 = -(float)uVar7;
        if (uVar17 < 0x13) {
          fVar6 = fVar5;
        }
        if (plVar11 == (long *)0x0) goto LAB_06ac2150;
        lVar13 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)(unaff_x27 + 0xa30)) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto LAB_06ac1fb4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1fb4:
        (*(code *)*puVar12)(plVar11,uVar17 & 0xffffffff,&stack0x00000038,puVar12[1]);
        lVar13 = in_stack_00000058;
        if (in_stack_00000058 == 0) goto LAB_06ac2150;
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        (*DAT_086ef188)(lVar13);
        uVar7 = FUN_06ac26a8(uStack0000000000000060,uStack0000000000000064,in_stack_00000068,
                             uStack0000000000000038,uStack000000000000003c,in_stack_00000040,uVar7,
                             fVar6);
        lVar13 = in_stack_00000058;
        uVar9 = FUN_03398a84(DAT_083c91f8);
        FUN_06ac2a20(uVar9,uVar2,uVar17 & 0xffffffff,lVar13,uVar7);
        lVar13 = DAT_083efe60;
        lVar8 = *(long *)(unaff_x19 + 0x68);
        if (lVar8 == 0) goto LAB_06ac2150;
        lVar14 = *(long *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_06ac2150;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
          *puVar12 = uVar9;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        else {
          FUN_04ab0e54(lVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x18);
    FUN_06ac2ab0();
    lVar13 = *(long *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    if (lVar13 != 0) {
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      return;
    }
  }
LAB_06ac2150:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



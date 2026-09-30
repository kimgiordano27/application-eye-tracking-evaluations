/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 06ac1bc8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_systemDisplayFrequency(void)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  ulong uVar19;
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
  
  FUN_07a18224();
  if (DAT_086d7c53 == '\0') {
    FUN_0335b6c8(&DAT_083d0300,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c53 = '\x01';
  }
  puVar13 = *(undefined4 **)(DAT_083d0300 + 0xb8);
  FUN_07a19258(*puVar13,puVar13[1],puVar13[2],puVar13[3]);
  if (DAT_086ef190 == (code *)0x0) {
    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
  }
  lVar8 = (*DAT_086ef190)();
  if (lVar8 != 0) {
    uVar2 = *(undefined4 *)(unaff_x19 + 0x4c);
    if (DAT_086ef260 == (code *)0x0) {
      DAT_086ef260 = (code *)FUN_033d1b68("UnityEngine.GameObject::set_layer(System.Int32)");
    }
    (*DAT_086ef260)(lVar8,uVar2);
    lVar8 = FUN_03398a84(DAT_083c4338);
    FUN_04ab0488(lVar8,0x18,DAT_083efe58);
    plVar14 = (long *)(unaff_x19 + 0x68);
    *plVar14 = lVar8;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar8 = *plVar14;
    }
    if (lVar8 != 0) {
      uVar9 = FUN_04ab10e8(lVar8,DAT_083efe68);
      puVar15 = (undefined8 *)(unaff_x19 + 0x70);
      *puVar15 = uVar9;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar19 = 2;
      do {
        if (*(int *)(DAT_083cbfd0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar8 = *(long *)(*(long *)(DAT_083cbfd0 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_06ac2150;
        if (*(uint *)(lVar8 + 0x18) <= uVar19) {
LAB_06ac2154:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        uVar3 = *(uint *)(lVar8 + uVar19 * 4 + 0x20);
        if ((uVar3 != 0xffffffff) &&
           ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)) {
          plVar14 = *(long **)(unaff_x19 + 0x38);
          if (plVar14 == (long *)0x0) goto LAB_06ac2150;
          lVar8 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)(unaff_x27 + 0xa30)) {
                puVar15 = (undefined8 *)(lVar8 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                goto LAB_06ac1df8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar15 = (undefined8 *)FUN_0338f71c(plVar14,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1df8:
          (*(code *)*puVar15)(plVar14,uVar3,&stack0x00000060,puVar15[1]);
          uVar17 = FUN_06ac2164();
          if ((uVar17 & 1) == 0) {
            in_stack_00000010 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
            in_stack_00000018 = in_stack_00000068;
            uStack0000000000000024 = uStack0000000000000074;
            uStack0000000000000020 = uStack0000000000000070;
            lVar8 = FUN_06ac22a4();
            plVar14 = *(long **)(unaff_x19 + 0x78);
            in_stack_00000058 = lVar8;
            if (plVar14 == (long *)0x0) goto LAB_06ac2150;
            if ((lVar8 != 0) &&
               (lVar10 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)) {
              uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar9,0);
            }
            if (*(uint *)(plVar14 + 3) <= uVar3) goto LAB_06ac2154;
            plVar14 = plVar14 + (long)(int)uVar3 + 4;
            *plVar14 = lVar8;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          uStack000000000000000c = uVar3;
          uVar11 = FUN_03398650(DAT_083cbfc8,(long)&stack0x00000008 + 4);
          uStack0000000000000008 = (uint)uVar19;
          uVar12 = FUN_03398650(DAT_083cbfc8,&stack0x00000008);
          uVar9 = DAT_0845b310;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          in_stack_000000b8 = 0;
          in_stack_000000b0 = 0;
          FUN_0683f484(&stack0x000000a0,uVar11,uVar12,0);
          in_stack_00000088 = in_stack_000000a8;
          in_stack_00000080 = in_stack_000000a0;
          in_stack_00000098 = in_stack_000000b8;
          in_stack_00000090 = in_stack_000000b0;
          FUN_0666f060(0,uVar9,&stack0x00000080);
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06ac2150;
          uVar9 = FUN_06ac25fc(*(long *)(unaff_x19 + 0x40),uVar3);
          plVar14 = *(long **)(unaff_x19 + 0x38);
          fVar6 = (float)uVar9;
          if (uVar3 != 0) {
            fVar6 = 0.0;
          }
          fVar7 = -(float)uVar9;
          if (uVar19 < 0x13) {
            fVar7 = fVar6;
          }
          if (plVar14 == (long *)0x0) goto LAB_06ac2150;
          lVar8 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)(unaff_x27 + 0xa30)) {
                puVar15 = (undefined8 *)(lVar8 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                goto LAB_06ac1fb4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar15 = (undefined8 *)FUN_0338f71c(plVar14,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1fb4:
          (*(code *)*puVar15)(plVar14,uVar19 & 0xffffffff,&stack0x00000038,puVar15[1]);
          lVar8 = in_stack_00000058;
          if (in_stack_00000058 == 0) goto LAB_06ac2150;
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          (*DAT_086ef188)(lVar8);
          uVar9 = FUN_06ac26a8(uStack0000000000000060,uStack0000000000000064,in_stack_00000068,
                               uStack0000000000000038,uStack000000000000003c,in_stack_00000040,uVar9
                               ,fVar7);
          lVar8 = in_stack_00000058;
          uVar11 = FUN_03398a84(DAT_083c91f8);
          FUN_06ac2a20(uVar11,uVar3,uVar19 & 0xffffffff,lVar8,uVar9);
          lVar8 = DAT_083efe60;
          lVar10 = *(long *)(unaff_x19 + 0x68);
          if (lVar10 == 0) goto LAB_06ac2150;
          lVar16 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_06ac2150;
          uVar3 = *(uint *)(lVar10 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
            *puVar15 = uVar11;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          else {
            FUN_04ab0e54(lVar10,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x18);
      FUN_06ac2ab0();
      lVar8 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        return;
      }
    }
  }
LAB_06ac2150:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



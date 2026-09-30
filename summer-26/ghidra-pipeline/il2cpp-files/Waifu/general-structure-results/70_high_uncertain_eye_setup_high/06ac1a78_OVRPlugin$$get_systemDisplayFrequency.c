/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 06ac1a78
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequency(long param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long *plVar15;
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
  
                    /* try { // try from 06ac1a7c to 06bc1b4f has its CatchHandler @ 06ac09ec */
  uVar8 = FUN_03398188(*(undefined8 *)(param_1 + 0xb80),0x13);
  puVar13 = (undefined8 *)(unaff_x19 + 0x78);
  *puVar13 = uVar8;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar9 = FUN_03398a84(DAT_083cbb78);
  FUN_07a0dda4(lVar9,DAT_08436ae8,0);
  if (lVar9 != 0) {
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac199c with catch @ 06ac1b18
                        */
    lVar9 = (*DAT_086ef250)(lVar9);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac190c with catch @ 06ac1b1c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac1a18 with catch @ 06ac1b20
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac1a2c with catch @ 06ac1b24
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac1958 with catch @ 06ac1b28
                        */
    if (DAT_086ef188 == (code *)0x0) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac18dc with catch @ 06ac1b2c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac19dc with catch @ 06ac1b30
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac1a28 with catch @ 06ac1b34
                        */
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac18a4 with catch @ 06ac1b38
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac1830 with catch @ 06ac1b3c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac1874 with catch @ 06ac1b40
                        */
    }
    uVar8 = (*DAT_086ef188)();
    if (lVar9 != 0) {
                    /* try { // try from 06ac1b50 to 06bc1b53 has its CatchHandler @ 06ac2154 */
                    /* try { // try from 06ac1b54 to 06bc215b has its CatchHandler @ 06ac09ec */
      if (DAT_086ef840 == (code *)0x0) {
        DAT_086ef840 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                           );
      }
      (*DAT_086ef840)(lVar9,uVar8,0);
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      puVar14 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
      FUN_07a18224(*puVar14,puVar14[1],puVar14[2],lVar9,0);
      if (DAT_086d7c53 == '\0') {
        FUN_0335b6c8(&DAT_083d0300,1);
        DataMemoryBarrier(2,3);
        DAT_086d7c53 = '\x01';
      }
      puVar14 = *(undefined4 **)(DAT_083d0300 + 0xb8);
      FUN_07a19258(*puVar14,puVar14[1],puVar14[2],puVar14[3],lVar9,0);
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar9 = (*DAT_086ef190)(lVar9);
      if (lVar9 != 0) {
        uVar2 = *(undefined4 *)(unaff_x19 + 0x4c);
        if (DAT_086ef260 == (code *)0x0) {
          DAT_086ef260 = (code *)FUN_033d1b68("UnityEngine.GameObject::set_layer(System.Int32)");
        }
        (*DAT_086ef260)(lVar9,uVar2);
        lVar9 = FUN_03398a84(DAT_083c4338);
        FUN_04ab0488(lVar9,0x18,DAT_083efe58);
        plVar15 = (long *)(unaff_x19 + 0x68);
        *plVar15 = lVar9;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar9 = *plVar15;
        }
        if (lVar9 != 0) {
          uVar8 = FUN_04ab10e8(lVar9,DAT_083efe68);
          puVar13 = (undefined8 *)(unaff_x19 + 0x70);
          *puVar13 = uVar8;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar19 = 2;
          do {
            if (*(int *)(DAT_083cbfd0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            lVar9 = *(long *)(*(long *)(DAT_083cbfd0 + 0xb8) + 0x10);
            if (lVar9 == 0) goto LAB_06ac2150;
            if (*(uint *)(lVar9 + 0x18) <= uVar19) {
LAB_06ac2154:
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            uVar3 = *(uint *)(lVar9 + uVar19 * 4 + 0x20);
            if ((uVar3 != 0xffffffff) &&
               ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)) {
              plVar15 = *(long **)(unaff_x19 + 0x38);
              if (plVar15 == (long *)0x0) goto LAB_06ac2150;
              lVar9 = *plVar15;
              uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)(unaff_x27 + 0xa30)) {
                    puVar13 = (undefined8 *)(lVar9 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                    goto LAB_06ac1df8;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_0338f71c(plVar15,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1df8:
              (*(code *)*puVar13)(plVar15,uVar3,&stack0x00000060,puVar13[1]);
              uVar17 = FUN_06ac2164();
              if ((uVar17 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
                in_stack_00000018 = in_stack_00000068;
                uStack0000000000000024 = uStack0000000000000074;
                uStack0000000000000020 = uStack0000000000000070;
                lVar9 = FUN_06ac22a4();
                plVar15 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000058 = lVar9;
                if (plVar15 == (long *)0x0) goto LAB_06ac2150;
                if ((lVar9 != 0) &&
                   (lVar10 = FUN_0339898c(lVar9,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
                  uVar8 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
                  FUN_033d1c20(uVar8,0);
                }
                if (*(uint *)(plVar15 + 3) <= uVar3) goto LAB_06ac2154;
                plVar15 = plVar15 + (long)(int)uVar3 + 4;
                *plVar15 = lVar9;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              uStack000000000000000c = uVar3;
              uVar11 = FUN_03398650(DAT_083cbfc8,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = (uint)uVar19;
              uVar12 = FUN_03398650(DAT_083cbfc8,&stack0x00000008);
              uVar8 = DAT_0845b310;
              in_stack_000000a8 = 0;
              in_stack_000000a0 = 0;
              in_stack_000000b8 = 0;
              in_stack_000000b0 = 0;
              FUN_0683f484(&stack0x000000a0,uVar11,uVar12,0);
              in_stack_00000088 = in_stack_000000a8;
              in_stack_00000080 = in_stack_000000a0;
              in_stack_00000098 = in_stack_000000b8;
              in_stack_00000090 = in_stack_000000b0;
              FUN_0666f060(0,uVar8,&stack0x00000080);
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06ac2150;
              uVar8 = FUN_06ac25fc(*(long *)(unaff_x19 + 0x40),uVar3);
              plVar15 = *(long **)(unaff_x19 + 0x38);
              fVar6 = (float)uVar8;
              if (uVar3 != 0) {
                fVar6 = 0.0;
              }
              fVar7 = -(float)uVar8;
              if (uVar19 < 0x13) {
                fVar7 = fVar6;
              }
              if (plVar15 == (long *)0x0) goto LAB_06ac2150;
              lVar9 = *plVar15;
              uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)(unaff_x27 + 0xa30)) {
                    puVar13 = (undefined8 *)(lVar9 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                    goto LAB_06ac1fb4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_0338f71c(plVar15,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1fb4:
              (*(code *)*puVar13)(plVar15,uVar19 & 0xffffffff,&stack0x00000038,puVar13[1]);
              lVar9 = in_stack_00000058;
              if (in_stack_00000058 == 0) goto LAB_06ac2150;
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              (*DAT_086ef188)(lVar9);
              uVar8 = FUN_06ac26a8(uStack0000000000000060,uStack0000000000000064,in_stack_00000068,
                                   uStack0000000000000038,uStack000000000000003c,in_stack_00000040,
                                   uVar8,fVar7);
              lVar9 = in_stack_00000058;
              uVar11 = FUN_03398a84(DAT_083c91f8);
              FUN_06ac2a20(uVar11,uVar3,uVar19 & 0xffffffff,lVar9,uVar8);
              lVar9 = DAT_083efe60;
              lVar10 = *(long *)(unaff_x19 + 0x68);
              if (lVar10 == 0) goto LAB_06ac2150;
              lVar16 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_06ac2150;
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                puVar13 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *puVar13 = uVar11;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else {
                FUN_04ab0e54(lVar10,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != 0x18);
          FUN_06ac2ab0();
          lVar9 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
            ;
            return;
          }
        }
      }
    }
  }
LAB_06ac2150:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



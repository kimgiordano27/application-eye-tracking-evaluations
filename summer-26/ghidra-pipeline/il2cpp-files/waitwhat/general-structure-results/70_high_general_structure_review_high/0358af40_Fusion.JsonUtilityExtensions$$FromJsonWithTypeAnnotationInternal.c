/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions$$FromJsonWithTypeAnnotationInternal
ENTRY_POINT: 0358af40
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_12
*/


void Fusion_JsonUtilityExtensions__FromJsonWithTypeAnnotationInternal(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_stack_00000438;
  
  memcpy(param_1,param_2,0x50);
  uVar3 = FUN_035ca558();
  *(long *)(unaff_x19 + 0x50) = unaff_x21;
  puVar2 = PTR_DAT_070d3908;
  if (unaff_x21 != 0) {
    *(long *)(unaff_x21 + 0x38) = unaff_x19;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x98);
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    uVar3 = FUN_03561404(lVar4,uVar11,0);
    *(long *)(unaff_x19 + 0x60) = lVar4;
    if (lVar4 != 0) {
      uVar3 = FUN_03561c0c(lVar4,*(undefined8 *)((long)unaff_x20 + 200),0);
      *(undefined4 *)(unaff_x19 + 0x5c) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined4 *)(unaff_x19 + 0x48) = 0;
      if (*(long *)((long)unaff_x20 + 0xb0) == 0) {
        uVar11 = *(undefined8 *)PTR_DAT_070d3930;
        uVar3 = FUN_03b37ffc();
        if ((uVar3 & 1) == 0) {
          plVar10 = *(long **)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
          if (plVar10 != (long *)0x0) {
            FUN_057bf780(*(undefined8 *)PTR_DAT_070d3940,uVar11,*(undefined8 *)PTR_DAT_070d3938,0);
            (**(code **)(*plVar10 + 0x188))(plVar10);
          }
          uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)PTR_DAT_070d38b8);
          uVar3 = FUN_035b6758(uVar11,0);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar11;
        }
      }
      else {
        *(long *)(unaff_x19 + 0x118) = *(long *)((long)unaff_x20 + 0xb0);
      }
      uVar1 = *(undefined4 *)((long)unaff_x20 + 0x34);
      uVar13 = *(undefined8 *)((long)unaff_x20 + 0xc);
      uVar11 = *(undefined8 *)((long)unaff_x20 + 4);
      uVar15 = *(undefined8 *)((long)unaff_x20 + 0x2c);
      uVar14 = *(undefined8 *)((long)unaff_x20 + 0x24);
      uVar17 = *(undefined8 *)((long)unaff_x20 + 0x1c);
      uVar16 = *(undefined8 *)((long)unaff_x20 + 0x14);
      *(undefined4 *)(unaff_x19 + 0x188) = uVar1;
      *(undefined8 *)(unaff_x19 + 0x170) = uVar17;
      *(undefined8 *)(unaff_x19 + 0x168) = uVar16;
      *(undefined8 *)(unaff_x19 + 0x180) = uVar15;
      *(undefined8 *)(unaff_x19 + 0x178) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x160) = uVar13;
      *(undefined8 *)(unaff_x19 + 0x158) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x128) = uVar13;
      *(undefined8 *)(unaff_x19 + 0x120) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x138) = uVar17;
      *(undefined8 *)(unaff_x19 + 0x130) = uVar16;
      *(undefined8 *)(unaff_x19 + 0x148) = uVar15;
      *(undefined8 *)(unaff_x19 + 0x140) = uVar14;
      *(undefined4 *)(unaff_x19 + 0x150) = uVar1;
      lVar4 = *(long *)((long)unaff_x20 + 0xb8);
      unaff_x27[1] = uVar13;
      *unaff_x27 = uVar11;
      unaff_x27[3] = uVar17;
      unaff_x27[2] = uVar16;
      unaff_x27[5] = uVar15;
      unaff_x27[4] = uVar14;
      if (lVar4 == 0) {
        lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070d3898);
        uVar3 = FUN_035b33c8(lVar4,0);
      }
      *(long *)(unaff_x19 + 0xa8) = lVar4;
      lVar4 = *(long *)((long)unaff_x20 + 0xc0);
      if (lVar4 == 0) {
        lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070d3888);
        uVar3 = FUN_035a1da0(lVar4,0);
      }
      plVar10 = *(long **)(unaff_x19 + 0xb8);
      *(long *)(unaff_x19 + 0xb0) = lVar4;
      if (plVar10 != (long *)0x0) {
        lVar4 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_070d35c8) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_0358b13c;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)PTR_DAT_070d35c8,4);
LAB_0358b13c:
        uVar3 = (*(code *)*puVar5)(plVar10);
      }
      plVar10 = *(long **)(unaff_x19 + 0x118);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
      }
      lVar4 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_070d3768) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0358b1a8;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)PTR_DAT_070d3768,0);
LAB_0358b1a8:
      (*(code *)*puVar5)(plVar10);
      uVar6 = FUN_03a2de08();
      uVar3 = uVar6;
      if (uVar6 != 0) {
        uVar8 = *(uint *)(uVar6 + 0x18);
        if (0 < (int)uVar8) {
          uVar12 = 0;
          do {
            if (uVar8 <= uVar12) {
              if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
            }
            lVar4 = *(long *)(uVar6 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_0358b42c;
            uVar3 = FUN_069d3220(lVar4,0);
            if ((uVar3 & 1) != 0) {
              uVar3 = FUN_0358b794();
            }
            uVar8 = *(uint *)(uVar6 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar8);
        }
        if ((*(long *)(unaff_x19 + 0x98) != 0) &&
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x28), lVar4 != 0)) {
          if (*(char *)(lVar4 + 0x10) != '\0') {
            FUN_03b371d4();
          }
          lVar4 = **(long **)(*unaff_x28 + 0xb8);
          if (lVar4 != 0) {
            uVar3 = FUN_057c02e8(*(undefined8 *)PTR_DAT_070d3928,*(undefined8 *)PTR_DAT_070d30f0,
                                 *(undefined8 *)(unaff_x19 + 0x98),0);
            plVar10 = *(long **)(lVar4 + 0x10);
            if (plVar10 == (long *)0x0) goto LAB_0358b42c;
            (**(code **)(*plVar10 + 0x188))(plVar10);
          }
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar3 = FUN_0358ba60();
          if (*(char *)(unaff_x19 + 0xd0) == '\0') {
            uVar3 = 0;
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0358b42c;
            FUN_035bb0b0(*(long *)(unaff_x19 + 0x50),0);
            uVar3 = FUN_0358842c();
          }
          plVar10 = *(long **)(unaff_x19 + 0xa8);
          if (plVar10 == (long *)0x0) {
            if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
          }
          lVar4 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_070d3760) {
                puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0358b33c;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)PTR_DAT_070d3760,0);
LAB_0358b33c:
          (*(code *)*puVar5)(plVar10);
          if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
             (lVar4 = FUN_0354c7fc(*(long *)(unaff_x19 + 0x1d0),0), lVar4 == 0)) {
            lVar4 = **(long **)(*(long *)(PTR_DAT_070c1958 + 0x90) + 0xb8);
          }
          lVar7 = *unaff_x26;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar7 = *unaff_x26;
          }
          *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar4;
          uVar3 = 0;
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            uVar3 = FUN_035b840c(*(long *)(unaff_x19 + 0x50),0);
            if ((uVar3 & 1) == 0) {
LAB_0358b3e8:
              uVar3 = FUN_0358a674();
            }
            else {
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0358b42c;
              if (*(char *)(*(long *)(unaff_x19 + 0x50) + 0xd0) == '\0') goto LAB_0358b3e8;
              memcpy(&stack0x00000018,unaff_x20,0xf8);
              FUN_035869d0();
              uVar3 = FUN_069d9070();
            }
            if (*(long *)(unaff_x19 + 0x80) != 0) {
              uVar3 = *(ulong *)(*(long *)(unaff_x19 + 0x80) + 0x10);
              if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                return;
              }
              goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
            }
          }
        }
      }
    }
  }
LAB_0358b42c:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



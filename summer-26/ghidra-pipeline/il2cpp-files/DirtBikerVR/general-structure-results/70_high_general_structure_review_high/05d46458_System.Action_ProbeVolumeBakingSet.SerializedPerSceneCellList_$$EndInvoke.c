/*
FUNCTION_NAME: System.Action<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$EndInvoke
ENTRY_POINT: 05d46458
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05d46818) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 System_Action<ProbeVolumeBakingSet_SerializedPerSceneCellList>__EndInvoke(code *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long unaff_x23;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_stack_00000008;
  uint in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  uVar4 = (*param_1)();
  uStack0000000000000014 = 0;
  while( true ) {
    lVar15 = *(long *)(unaff_x23 + 0x10);
    thunk_FUN_03a989e4();
    if (((lVar15 == 0) || (lVar11 = *(long *)(lVar15 + 0x10), lVar11 == 0)) ||
       (lVar12 = *(long *)(lVar15 + 0x18), lVar12 == 0)) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar5 = *(long *)(lVar15 + 0x18);
    if (lVar5 == 0) break;
    iVar10 = *(int *)(lVar11 + 0x18);
    iVar3 = 0;
    if (iVar10 != 0) {
      iVar3 = (int)(uVar4 & 0x7fffffff) / iVar10;
    }
    uVar1 = (uVar4 & 0x7fffffff) - iVar3 * iVar10;
    iVar10 = *(int *)(lVar12 + 0x18);
    iVar3 = 0;
    if (iVar10 != 0) {
      iVar3 = (int)uVar1 / iVar10;
    }
    uVar2 = uVar1 - iVar3 * iVar10;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    in_stack_00000040._4_1_ = '\0';
    in_stack_00000048 = *(undefined8 *)(lVar5 + (ulong)uVar2 * 8 + 0x20);
    FUN_067b43ac(in_stack_00000048,(long)&stack0x00000040 + 4,0);
    lVar11 = *(long *)(unaff_x23 + 0x10);
    thunk_FUN_03a989e4();
    if (lVar15 == lVar11) {
      lVar11 = *(long *)(lVar15 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar12 = 0;
      lVar11 = *(long *)(lVar11 + (ulong)uVar1 * 8 + 0x20);
      while (lVar11 != 0) {
        if (uVar4 == *(uint *)(lVar11 + 0x28)) {
          plVar13 = *(long **)(unaff_x23 + 0x18);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar14 = *(undefined8 *)(lVar11 + 0x10);
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03ac4090(lVar5);
          }
          lVar7 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05d465dc;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,lVar5,0);
LAB_05d465dc:
          uVar8 = (*(code *)*puVar6)(plVar13,uVar14);
          if ((uVar8 & 1) != 0) {
            if ((in_stack_00000010 & 1) != 0) {
              plVar13 = (long *)FUN_04036464(*(undefined8 *)
                                              (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x108
                                              ));
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar8 = (**(code **)(*plVar13 + 0x1b8))
                                (plVar13,in_stack_00000008,*(undefined8 *)(lVar11 + 0x18),
                                 *(undefined8 *)(*plVar13 + 0x1c0));
              if ((uVar8 & 1) == 0) {
                uStack0000000000000014 = 0;
                iVar10 = 8;
                *in_stack_00000018 = 0;
                goto LAB_05d466f4;
              }
            }
            if (lVar12 == 0) {
              lVar12 = *(long *)(lVar15 + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar14 = *(undefined8 *)(lVar11 + 0x20);
              thunk_FUN_03a989e4();
              if (*(uint *)(lVar12 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              thunk_FUN_03a989e4();
              puVar6 = (undefined8 *)(lVar12 + (ulong)uVar1 * 8 + 0x20);
              *puVar6 = uVar14;
              thunk_FUN_03afed3c(puVar6,uVar14);
            }
            else {
              uVar14 = *(undefined8 *)(lVar11 + 0x20);
              thunk_FUN_03a989e4();
              thunk_FUN_03a989e4();
              *(undefined8 *)(lVar12 + 0x20) = uVar14;
              thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x20),uVar14);
            }
            *in_stack_00000018 = *(undefined8 *)(lVar11 + 0x18);
            thunk_FUN_03afed3c();
            lVar15 = *(long *)(lVar15 + 0x20);
            thunk_FUN_03a989e4();
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            lVar15 = lVar15 + (ulong)uVar2 * 4;
            iVar10 = 8;
            *(int *)(lVar15 + 0x20) = *(int *)(lVar15 + 0x20) + -1;
            uStack0000000000000014 = 1;
            goto LAB_05d466f4;
          }
        }
        lVar5 = *(long *)(lVar11 + 0x20);
        thunk_FUN_03a989e4();
        lVar12 = lVar11;
        lVar11 = lVar5;
      }
      iVar10 = 0xb;
    }
    else {
      iVar10 = 2;
    }
LAB_05d466f4:
    if (in_stack_00000040._4_1_ != '\0') {
      thunk_FUN_03a98474(in_stack_00000048,0);
    }
    if (iVar10 != 2) {
      if ((iVar10 == 0xb) || (iVar10 == 0)) {
        uStack0000000000000014 = 0;
        *in_stack_00000018 = 0;
      }
      return uStack0000000000000014;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



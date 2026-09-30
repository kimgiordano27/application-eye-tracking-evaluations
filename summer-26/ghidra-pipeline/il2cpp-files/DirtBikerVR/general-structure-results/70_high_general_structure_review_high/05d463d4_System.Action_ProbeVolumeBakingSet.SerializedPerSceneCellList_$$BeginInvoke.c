/*
FUNCTION_NAME: System.Action<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$BeginInvoke
ENTRY_POINT: 05d463d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05d46818) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
System_Action<ProbeVolumeBakingSet_SerializedPerSceneCellList>__BeginInvoke
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_x5;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long *unaff_x25;
  long *plVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000008;
  uint in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (unaff_x25 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*(long *)(in_x5 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03ac4090(lVar7);
    }
    lVar8 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_05d46454;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4();
LAB_05d46454:
    uVar4 = (*(code *)*puVar5)();
    uStack0000000000000014 = 0;
    while( true ) {
      lVar7 = *(long *)(param_1 + 0x10);
      thunk_FUN_03a989e4();
      if (((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0x10), lVar8 == 0)) ||
         (lVar13 = *(long *)(lVar7 + 0x18), lVar13 == 0)) break;
      lVar6 = *(long *)(*(long *)(*(long *)(in_x5 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar6 = *(long *)(lVar7 + 0x18);
      if (lVar6 == 0) break;
      iVar12 = *(int *)(lVar8 + 0x18);
      iVar3 = 0;
      if (iVar12 != 0) {
        iVar3 = (int)(uVar4 & 0x7fffffff) / iVar12;
      }
      uVar1 = (uVar4 & 0x7fffffff) - iVar3 * iVar12;
      iVar12 = *(int *)(lVar13 + 0x18);
      iVar3 = 0;
      if (iVar12 != 0) {
        iVar3 = (int)uVar1 / iVar12;
      }
      uVar2 = uVar1 - iVar3 * iVar12;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      in_stack_00000040._4_1_ = '\0';
      in_stack_00000048 = *(undefined8 *)(lVar6 + (ulong)uVar2 * 8 + 0x20);
      FUN_067b43ac(in_stack_00000048,(long)&stack0x00000040 + 4,0);
      lVar8 = *(long *)(param_1 + 0x10);
      thunk_FUN_03a989e4();
      if (lVar7 == lVar8) {
        lVar8 = *(long *)(lVar7 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar13 = 0;
        lVar8 = *(long *)(lVar8 + (ulong)uVar1 * 8 + 0x20);
        while (lVar8 != 0) {
          if (uVar4 == *(uint *)(lVar8 + 0x28)) {
            plVar14 = *(long **)(param_1 + 0x18);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar15 = *(undefined8 *)(lVar8 + 0x10);
            lVar6 = *(long *)(*(long *)(*(long *)(in_x5 + 0x20) + 0xc0) + 0x20);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03ac4090(lVar6);
            }
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_05d465dc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar14,lVar6,0);
LAB_05d465dc:
            uVar10 = (*(code *)*puVar5)(plVar14,uVar15,param_2,puVar5[1]);
            if ((uVar10 & 1) != 0) {
              if ((in_stack_00000010 & 1) != 0) {
                plVar14 = (long *)FUN_04036464(*(undefined8 *)
                                                (*(long *)(*(long *)(in_x5 + 0x20) + 0xc0) + 0x108))
                ;
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar10 = (**(code **)(*plVar14 + 0x1b8))
                                   (plVar14,in_stack_00000008,*(undefined8 *)(lVar8 + 0x18),
                                    *(undefined8 *)(*plVar14 + 0x1c0));
                if ((uVar10 & 1) == 0) {
                  uStack0000000000000014 = 0;
                  iVar12 = 8;
                  *in_stack_00000018 = 0;
                  goto LAB_05d466f4;
                }
              }
              if (lVar13 == 0) {
                lVar13 = *(long *)(lVar7 + 0x10);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                uVar15 = *(undefined8 *)(lVar8 + 0x20);
                thunk_FUN_03a989e4();
                if (*(uint *)(lVar13 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c8();
                }
                thunk_FUN_03a989e4();
                puVar5 = (undefined8 *)(lVar13 + (ulong)uVar1 * 8 + 0x20);
                *puVar5 = uVar15;
                thunk_FUN_03afed3c(puVar5,uVar15);
              }
              else {
                uVar15 = *(undefined8 *)(lVar8 + 0x20);
                thunk_FUN_03a989e4();
                thunk_FUN_03a989e4();
                *(undefined8 *)(lVar13 + 0x20) = uVar15;
                thunk_FUN_03afed3c((undefined8 *)(lVar13 + 0x20),uVar15);
              }
              *in_stack_00000018 = *(undefined8 *)(lVar8 + 0x18);
              thunk_FUN_03afed3c();
              lVar7 = *(long *)(lVar7 + 0x20);
              thunk_FUN_03a989e4();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              lVar7 = lVar7 + (ulong)uVar2 * 4;
              iVar12 = 8;
              *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
              uStack0000000000000014 = 1;
              goto LAB_05d466f4;
            }
          }
          lVar6 = *(long *)(lVar8 + 0x20);
          thunk_FUN_03a989e4();
          lVar13 = lVar8;
          lVar8 = lVar6;
        }
        iVar12 = 0xb;
      }
      else {
        iVar12 = 2;
      }
LAB_05d466f4:
      if (in_stack_00000040._4_1_ != '\0') {
        thunk_FUN_03a98474(in_stack_00000048,0);
      }
      if (iVar12 != 2) {
        if ((iVar12 == 0xb) || (iVar12 == 0)) {
          uStack0000000000000014 = 0;
          *in_stack_00000018 = 0;
        }
        return uStack0000000000000014;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



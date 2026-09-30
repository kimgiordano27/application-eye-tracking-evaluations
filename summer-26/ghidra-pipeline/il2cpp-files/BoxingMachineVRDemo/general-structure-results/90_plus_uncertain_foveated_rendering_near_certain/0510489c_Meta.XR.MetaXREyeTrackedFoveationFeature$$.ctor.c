/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 0510489c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_8;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(void)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    uVar4 = thunk_FUN_02d9d438();
    uVar4 = FUN_050933f8(uVar4,unaff_x26,unaff_x27,0);
    if (unaff_x29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar8 = *unaff_x29;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0677dfa0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_05104914;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x29,*(long *)PTR_DAT_0677dfa0,1);
LAB_05104914:
    (*(code *)*puVar5)(unaff_x29,4,uVar4,0,puVar5[1]);
    do {
      do {
        if (*(char *)(unaff_x21 + 0xc0) == '\0') {
          if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          iVar1 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
        }
        else {
          iVar1 = *(int *)(unaff_x21 + 0xc4);
        }
        if (iVar1 == 1) {
          lVar8 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = FUN_04f8e414(0);
          plVar3 = *(long **)(unaff_x21 + 0x60);
          if (plVar3 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067803e8);
            FUN_050f0fe0(uVar6,uVar4,unaff_x28,uVar7);
            uVar4 = FUN_050924a8();
            uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar4,uVar7);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar9 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar9 & 1) != 0) {
          FUN_0510ec84();
        }
LAB_05104984:
        do {
          while( true ) {
            uVar9 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar9 & 1) == 0) {
              FUN_0510c284();
              goto LAB_05104bfc;
            }
            iVar1 = (**(code **)(*unaff_x19 + 0x238))();
            if (iVar1 == 4) break;
            if (iVar1 != 5) {
              if (iVar1 != 0xd) {
                FUN_028f4e40();
                uVar2 = (**(code **)(*unaff_x19 + 0x238))();
                in_stack_00000018 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
                in_stack_00000020 = 0xffffffffffffffff;
                in_stack_00000028 = uVar2;
                uVar4 = FUN_0503c914(&stack0x00000018,0);
                uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06780368);
                FUN_04e83184(uVar7,uVar4,0);
                uVar4 = FUN_050924a8();
                uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
                FUN_02d609b4(uVar4,uVar7);
              }
LAB_05104bfc:
              if (unaff_x24 != 0) {
                FUN_0488bc44(&stack0x00000030);
                while (uVar9 = FUN_04b38b14(&stack0x00000030,*unaff_x23), (uVar9 & 1) != 0) {
                  FUN_0510e72c();
                }
                FUN_04b38c38(&stack0x00000030,*(undefined8 *)PTR_DAT_06780380);
              }
              FUN_0510c058();
              return;
            }
          }
          plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          unaff_x28 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          uVar9 = FUN_0510638c();
        } while ((uVar9 & 1) != 0);
        if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar8 = FUN_050f6554(*(long *)(unaff_x21 + 0xd8),unaff_x28);
        if (lVar8 != 0) {
          if ((*(char *)(lVar8 + 0x80) == '\0') && (uVar9 = FUN_0510edf4(), (uVar9 & 1) != 0)) {
            plVar3 = (long *)(lVar8 + 0x48);
            if (*plVar3 == 0) {
              lVar8 = FUN_05104dd8();
              *plVar3 = lVar8;
              thunk_FUN_02dd37b4(plVar3);
            }
            FUN_05105228();
            uVar9 = FUN_05099224();
            if ((uVar9 & 1) == 0) {
              lVar8 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar4 = FUN_04f8e414(0);
              uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067803d8);
              FUN_050f0ec0(uVar7,uVar4,unaff_x28);
              uVar4 = FUN_050924a8();
              uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar4,uVar7);
            }
            FUN_0510f04c();
            uVar9 = FUN_0510aec4();
            if ((uVar9 & 1) == 0) {
              FUN_0510ec84();
            }
          }
          else {
            uVar9 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar9 & 1) != 0) {
              FUN_0510f04c();
              FUN_0510ec84();
            }
          }
          goto LAB_05104984;
        }
        plVar3 = *(long **)(unaff_x22 + 0x28);
      } while (plVar3 == (long *)0x0);
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0677dfa0) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05104808;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0677dfa0,0);
LAB_05104808:
      iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    } while (iVar1 < 4);
    unaff_x29 = *(long **)(unaff_x22 + 0x28);
    unaff_x26 = (**(code **)(*unaff_x19 + 0x278))();
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f8e414(0);
    unaff_x27 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_067803d0,uVar4,unaff_x28,
                             *(undefined8 *)(unaff_x21 + 0x60));
    if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
  } while( true );
}



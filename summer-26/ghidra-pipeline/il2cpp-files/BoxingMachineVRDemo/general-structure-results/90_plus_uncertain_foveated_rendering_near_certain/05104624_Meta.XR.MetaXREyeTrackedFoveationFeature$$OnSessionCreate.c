/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 05104624
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 136
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_9;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate(void)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *in_x9;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    iVar1 = (*in_x9)();
    if (iVar1 == 4) {
      plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      uVar8 = FUN_0510638c();
      if ((uVar8 & 1) == 0) {
        if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar4 = FUN_050f6554(*(long *)(unaff_x21 + 0xd8),uVar9);
        if (lVar4 == 0) {
          plVar3 = *(long **)(unaff_x22 + 0x28);
          if (plVar3 != (long *)0x0) {
            lVar4 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0677dfa0) {
                  puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_05104808;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0677dfa0,0);
LAB_05104808:
            iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
            if (3 < iVar1) {
              plVar3 = *(long **)(unaff_x22 + 0x28);
              uVar10 = (**(code **)(*unaff_x19 + 0x278))();
              if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar7 = FUN_04f8e414(0);
              uVar7 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_067803d0,uVar7,uVar9,
                                   *(undefined8 *)(unaff_x21 + 0x60));
              if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = thunk_FUN_02d9d438();
              uVar10 = FUN_050933f8(uVar6,uVar10,uVar7,0);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              lVar4 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0677dfa0) {
                    puVar5 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_05104914;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0677dfa0,1);
LAB_05104914:
              (*(code *)*puVar5)(plVar3,4,uVar10,0,puVar5[1]);
            }
          }
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
            lVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_04f8e414(0);
            plVar3 = *(long **)(unaff_x21 + 0x60);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar7 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067803e8);
            FUN_050f0fe0(uVar6,uVar10,uVar9,uVar7);
            uVar9 = FUN_050924a8();
            uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar9,uVar10);
          }
          uVar8 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar8 & 1) != 0) {
            FUN_0510ec84();
          }
        }
        else if ((*(char *)(lVar4 + 0x80) == '\0') && (uVar8 = FUN_0510edf4(), (uVar8 & 1) != 0)) {
          plVar3 = (long *)(lVar4 + 0x48);
          if (*plVar3 == 0) {
            lVar4 = FUN_05104dd8();
            *plVar3 = lVar4;
            thunk_FUN_02dd37b4(plVar3);
          }
          FUN_05105228();
          uVar8 = FUN_05099224();
          if ((uVar8 & 1) == 0) {
            lVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_04f8e414(0);
            uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067803d8);
            FUN_050f0ec0(uVar7,uVar10,uVar9);
            uVar9 = FUN_050924a8();
            uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar9,uVar10);
          }
          FUN_0510f04c();
          uVar8 = FUN_0510aec4();
          if ((uVar8 & 1) == 0) {
            FUN_0510ec84();
          }
        }
        else {
          uVar8 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar8 & 1) != 0) {
            FUN_0510f04c();
            FUN_0510ec84();
          }
        }
      }
    }
    else if (iVar1 != 5) {
      if (iVar1 != 0xd) {
        FUN_028f4e40();
        uVar2 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000018 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar2;
        uVar9 = FUN_0503c914(&stack0x00000018,0);
        uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06780368);
        FUN_04e83184(uVar10,uVar9,0);
        uVar9 = FUN_050924a8();
        uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar9,uVar10);
      }
      goto LAB_05104bfc;
    }
    uVar8 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar8 & 1) == 0) {
      FUN_0510c284();
LAB_05104bfc:
      if (unaff_x24 != 0) {
        FUN_0488bc44(&stack0x00000030);
        while (uVar8 = FUN_04b38b14(&stack0x00000030,*unaff_x23), (uVar8 & 1) != 0) {
          FUN_0510e72c();
        }
        FUN_04b38c38(&stack0x00000030,*(undefined8 *)PTR_DAT_06780380);
      }
      FUN_0510c058();
      return;
    }
    in_x9 = *(code **)(*unaff_x19 + 0x238);
  } while( true );
}



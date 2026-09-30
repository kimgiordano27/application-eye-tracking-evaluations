/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 0510480c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x28;
  long *plVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    iVar1 = (*param_1)(unaff_x26,param_3);
    if (3 < iVar1) {
      plVar10 = *(long **)(unaff_x22 + 0x28);
      uVar3 = (**(code **)(*unaff_x19 + 0x278))();
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_04f8e414(0);
      uVar4 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_067803d0,uVar4,unaff_x28,
                           *(undefined8 *)(unaff_x21 + 0x60));
      if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = thunk_FUN_02d9d438();
      uVar3 = FUN_050933f8(uVar5,uVar3,uVar4,0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0677dfa0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_05104914;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)PTR_DAT_0677dfa0,1);
LAB_05104914:
      (*(code *)*puVar6)(plVar10,4,uVar3,0,puVar6[1]);
    }
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
        lVar7 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_04f8e414(0);
        plVar10 = *(long **)(unaff_x21 + 0x60);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar4 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067803e8);
        FUN_050f0fe0(uVar5,uVar3,unaff_x28,uVar4);
        uVar3 = FUN_050924a8();
        uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar3,uVar4);
      }
      uVar8 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar8 & 1) != 0) {
        FUN_0510ec84();
      }
LAB_05104984:
      do {
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
        iVar1 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar1 != 4) {
          if (iVar1 != 5) {
            if (iVar1 != 0xd) {
              FUN_028f4e40();
              uVar2 = (**(code **)(*unaff_x19 + 0x238))();
              in_stack_00000018 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
              in_stack_00000020 = 0xffffffffffffffff;
              in_stack_00000028 = uVar2;
              uVar3 = FUN_0503c914(&stack0x00000018,0);
              uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06780368);
              FUN_04e83184(uVar4,uVar3,0);
              uVar3 = FUN_050924a8();
              uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar3,uVar4);
            }
            goto LAB_05104bfc;
          }
          goto LAB_05104984;
        }
        plVar10 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        unaff_x28 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        uVar8 = FUN_0510638c();
      } while ((uVar8 & 1) != 0);
      if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = FUN_050f6554(*(long *)(unaff_x21 + 0xd8),unaff_x28);
      if (lVar7 != 0) {
        if ((*(char *)(lVar7 + 0x80) == '\0') && (uVar8 = FUN_0510edf4(), (uVar8 & 1) != 0)) {
          plVar10 = (long *)(lVar7 + 0x48);
          if (*plVar10 == 0) {
            lVar7 = FUN_05104dd8();
            *plVar10 = lVar7;
            thunk_FUN_02dd37b4(plVar10);
          }
          FUN_05105228();
          uVar8 = FUN_05099224();
          if ((uVar8 & 1) == 0) {
            lVar7 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar3 = FUN_04f8e414(0);
            uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067803d8);
            FUN_050f0ec0(uVar4,uVar3,unaff_x28);
            uVar3 = FUN_050924a8();
            uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067803e0);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar3,uVar4);
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
        goto LAB_05104984;
      }
      unaff_x26 = *(long **)(unaff_x22 + 0x28);
    } while (unaff_x26 == (long *)0x0);
    lVar7 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0677dfa0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05104808;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(unaff_x26,*(long *)PTR_DAT_0677dfa0,0);
LAB_05104808:
    param_1 = (code *)*puVar6;
    param_3 = puVar6[1];
  } while( true );
}



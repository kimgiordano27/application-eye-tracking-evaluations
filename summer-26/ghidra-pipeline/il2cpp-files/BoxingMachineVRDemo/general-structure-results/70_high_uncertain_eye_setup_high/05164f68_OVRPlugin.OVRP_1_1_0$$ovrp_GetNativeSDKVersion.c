/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNativeSDKVersion
ENTRY_POINT: 05164f68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_GetNativeSDKVersion(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  if ((DAT_06b79e68 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782508);
    FUN_02d6084c(PTR_DAT_06782510);
    FUN_02d6084c(PTR_DAT_06782518);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_06782520);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(PTR_DAT_06782550);
    FUN_02d6084c(PTR_DAT_06782580);
    DAT_06b79e68 = 1;
  }
  puVar1 = PTR_DAT_067823f0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0516504c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)PTR_DAT_067823f0,3);
LAB_0516504c:
    lVar10 = (*(code *)*puVar8)(param_2,puVar8[1]);
    puVar5 = PTR_DAT_06782580;
    puVar4 = PTR_DAT_06782550;
    puVar3 = PTR_DAT_06782510;
    puVar2 = PTR_DAT_06782508;
    if (lVar10 != 0) {
      FUN_03aaceb0(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_06782520);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        do {
          uVar11 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar3);
          plVar6 = in_stack_00000030;
          if ((uVar11 & 1) == 0) {
            bVar7 = 0;
            iVar13 = 5;
            goto LAB_05165228;
          }
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar10 = *in_stack_00000030;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_05165108;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*(long *)puVar1,1);
LAB_05165108:
          uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)puVar5,0);
        } while ((uVar11 & 1) == 0);
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_05165174;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,8);
LAB_05165174:
        uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        uVar11 = thunk_FUN_04e8bd3c(uVar9,*(undefined8 *)puVar4,0);
      } while ((uVar11 & 1) == 0);
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_051651ec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,5);
LAB_051651ec:
      uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar7 = FUN_056705b0(uVar9,0);
      iVar13 = 4;
LAB_05165228:
      FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar2);
      return bVar7 & iVar13 == 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



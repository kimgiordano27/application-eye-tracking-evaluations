/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 05165f24
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06782518);
  FUN_02d6084c(PTR_DAT_067823f0);
  FUN_02d6084c(PTR_DAT_06782520);
  *(undefined1 *)(unaff_x20 + 0xe6c) = 1;
  puVar1 = PTR_DAT_067823f0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (unaff_x19 != (long *)0x0) {
    lVar8 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_05165fb8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05165fb8:
    lVar8 = (*(code *)*puVar5)();
    puVar3 = PTR_DAT_06782510;
    puVar2 = PTR_DAT_06782508;
    if (lVar8 != 0) {
      FUN_03aaceb0(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_06782520);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar10 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar3);
        plVar4 = in_stack_00000030;
        if ((uVar10 & 1) == 0) {
          iVar12 = 5;
          goto OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth;
        }
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar9 = *in_stack_00000030;
        lVar8 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_05166064;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,lVar8,1);
LAB_05166064:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        lVar8 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_051660c4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051660c4:
        uVar7 = (*(code *)*puVar5)();
        uVar10 = FUN_04e8c024(uVar6,uVar7,0);
      } while ((uVar10 & 1) == 0);
      iVar12 = 4;
OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth:
      FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar2);
      return iVar12 != 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



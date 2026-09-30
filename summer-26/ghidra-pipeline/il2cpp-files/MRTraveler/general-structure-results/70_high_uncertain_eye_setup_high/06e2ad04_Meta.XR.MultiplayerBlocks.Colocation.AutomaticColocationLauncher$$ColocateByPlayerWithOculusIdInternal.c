/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$ColocateByPlayerWithOculusIdInternal
ENTRY_POINT: 06e2ad04
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal
               (void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e86a58);
  FUN_03c8f898(PTR_DAT_08e93888);
  FUN_03c8f898(PTR_DAT_08e929d0);
  FUN_03c8f898(PTR_DAT_08e929d8);
  FUN_03c8f898(PTR_DAT_08e929e0);
  *(undefined1 *)(unaff_x20 + 0xae) = 1;
  puVar2 = PTR_DAT_08e780e8;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  lVar12 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *(long *)(lVar12 + 0x10);
    uVar1 = *(undefined8 *)(lVar12 + 0x18);
    plVar10 = *(long **)(*(long *)(lVar12 + 0x20) + 0x50);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93878);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e86a58) {
          lVar7 = lVar7 + (long)(*piVar9 + 0x13) * 0x10 + 0x138;
          goto LAB_06e2ae04;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar7 = FUN_03cf1348(plVar10,*(long *)PTR_DAT_08e86a58,0x13);
LAB_06e2ae04:
    FUN_06dfc8c8(uVar4,plVar10,*(undefined8 *)(lVar7 + 8),0);
    if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x20) + 0x78);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93870);
    FUN_06df980c(uVar5,uVar11,*(undefined8 *)PTR_DAT_08e93888,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = FUN_06e0ba6c(lVar6,uVar1,uVar4,uVar5,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05b9625c(lVar6,*(undefined8 *)PTR_DAT_08e929e0);
    uVar8 = FUN_05ac29c8(&stack0x00000008,*(undefined8 *)PTR_DAT_08e929d8);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0416e794(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  FUN_05ac2a0c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e929d0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar12 + 0x28) != 0) {
    lVar6 = *(long *)(*(long *)(lVar12 + 0x28) + 0x88);
    if (lVar6 != 0) {
      FUN_0675af18(lVar6,*(undefined8 *)(lVar12 + 0x30),&stack0x00000018,
                   *(undefined8 *)PTR_DAT_08e93960);
      *unaff_x19 = -2;
      puVar3 = PTR_DAT_08e78268;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_063c7630(unaff_x19 + 2,extraout_x1,*(undefined8 *)puVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



/*
FUNCTION_NAME: Animancer.AnimancerNode$$ToString
ENTRY_POINT: 0221b594
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221b7e4) */
/* WARNING: Removing unreachable block (ram,0x0221b968) */

void Animancer_AnimancerNode__ToString(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int iStack0000000000000008;
  char cStack000000000000000c;
  
  if (*(char *)(unaff_x19 + 0x108) == '\0') {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0221b964;
    plVar7 = *(long **)(*(long *)(unaff_x19 + 0x90) + 0x18);
    uVar1 = FUN_029e5e84();
    uVar1 = FUN_025b1328(uVar1,*(undefined8 *)PTR_DAT_03cdbd90,0);
    lVar8 = *(long *)PTR_DAT_03cbec30;
    lVar4 = *(long *)(lVar8 + 0x38);
    if (lVar4 == 0) {
      FUN_01a47054(lVar8);
      lVar4 = *(long *)(lVar8 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (plVar7 == (long *)0x0) goto LAB_0221b964;
    lVar8 = *plVar7;
    uVar9 = **(undefined8 **)(lVar4 + 0xb8);
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03ccf278) {
          puVar2 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0221b6c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03ccf278,2);
LAB_0221b6c0:
    (*(code *)*puVar2)(plVar7,uVar1,uVar9,puVar2[1]);
    uVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
    FUN_027d737c();
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
    FUN_027e22f4(lVar4,uVar1,0);
    if (lVar4 == 0) goto LAB_0221b964;
    FUN_027e2600(lVar4,0);
    uVar1 = FUN_029e5edc();
    uVar1 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cdbd98,uVar1,0);
    FUN_029e4c9c(lVar4,uVar1,0);
    *(undefined1 *)(unaff_x19 + 0x108) = 1;
  }
  uVar5 = FUN_0221b408();
  if ((uVar5 & 1) == 0) {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x19 + 0x120) == 0)) goto LAB_0221b964;
    FUN_021c7ff8();
    iVar3 = *(int *)(unaff_x19 + 300);
    if (iVar3 == *(int *)(unaff_x19 + 0x128)) {
      if (*(long *)(unaff_x19 + 0x90) == 0) {
LAB_0221b964:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar7 = *(long **)(*(long *)(unaff_x19 + 0x90) + 0x18);
      uVar1 = FUN_029e5e84();
      iStack0000000000000008 = *(int *)(unaff_x19 + 300) + 1;
      uVar9 = FUN_0276793c(&stack0x00000008,0);
      uVar1 = FUN_025bdc88(uVar1,*(undefined8 *)PTR_DAT_03cdbd88,uVar9,0);
      lVar8 = *(long *)PTR_DAT_03cbec30;
      lVar4 = *(long *)(lVar8 + 0x38);
      if (lVar4 == 0) {
        FUN_01a47054(lVar8);
        lVar4 = *(long *)(lVar8 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if (plVar7 == (long *)0x0) goto LAB_0221b964;
      lVar8 = *plVar7;
      uVar9 = **(undefined8 **)(lVar4 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03ccf278) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0221b938;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03ccf278,1);
LAB_0221b938:
      (*(code *)*puVar2)(plVar7,uVar1,uVar9,puVar2[1]);
      iVar3 = *(int *)(unaff_x19 + 300);
      *(int *)(unaff_x19 + 0x128) = iVar3 + 10;
    }
    *(int *)(unaff_x19 + 300) = iVar3 + 1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x110);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar1,(long)&stack0x00000008 + 4,0);
    if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02265dfc();
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
    }
    if (*(long *)(unaff_x19 + 0x118) == 0) goto LAB_0221b964;
    FUN_027de940(*(long *)(unaff_x19 + 0x118),0);
  }
  return;
}



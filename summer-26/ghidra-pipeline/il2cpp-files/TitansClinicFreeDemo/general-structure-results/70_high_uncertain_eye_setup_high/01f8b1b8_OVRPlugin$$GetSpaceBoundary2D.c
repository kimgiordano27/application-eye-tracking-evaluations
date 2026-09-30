/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 01f8b1b8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xec5) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b1ca8);
    *(undefined1 *)(unaff_x21 + 0xec5) = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar4 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027bbab0);
    FUN_01e75914(uVar4,uVar5,0);
  }
  else {
    iVar2 = FUN_0122b738(param_1);
    if (iVar2 == *(int *)(param_2 + 0x18)) {
      lVar3 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,iVar2);
      uVar1 = *(uint *)(param_2 + 0x18);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        do {
          if (uVar1 <= (uint)lVar7) {
LAB_01f8b268:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          lVar8 = *(long *)(param_2 + 0x20 + lVar7 * 8);
          iVar2 = (int)lVar8;
          if (lVar8 != iVar2) {
            thunk_FUN_01279b34(PTR_DAT_027b3fa8);
            uVar4 = thunk_FUN_0124bba8();
            uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3fa0);
            uVar6 = thunk_FUN_01279b34(PTR_DAT_027c17e8);
            FUN_01e79c88(uVar4,uVar5,uVar6,0);
            goto LAB_01f8b2b0;
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar7) goto LAB_01f8b268;
          *(int *)(lVar3 + 0x20 + lVar7 * 4) = iVar2;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar1);
      }
      FUN_0122b744(param_1);
      return;
    }
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar4 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1950);
    FUN_01e7d290(uVar4,uVar5,0);
  }
LAB_01f8b2b0:
  uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1948);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar4,uVar5);
}



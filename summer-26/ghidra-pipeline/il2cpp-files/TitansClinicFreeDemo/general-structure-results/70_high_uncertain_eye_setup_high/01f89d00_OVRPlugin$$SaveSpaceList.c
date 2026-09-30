/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 01f89d00
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpaceList(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  uVar5 = FUN_0122b458(param_1,unaff_w25);
  if ((uVar5 & 1) != 0) {
    return;
  }
  iVar1 = FUN_0122b6f4();
  iVar2 = FUN_0122b6f4();
  iVar2 = unaff_w24 - iVar2;
  if (iVar2 < 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3fa8);
    uVar8 = thunk_FUN_0124bba8();
    uVar10 = thunk_FUN_01279b34(PTR_DAT_027ba030);
    uVar9 = thunk_FUN_01279b34(PTR_DAT_027c18b8);
    FUN_01e79c88(uVar8,uVar10,uVar9,0);
  }
  else {
    iVar3 = FUN_01f7fe4c();
    if (iVar3 - unaff_w22 < unaff_w25 - iVar1) {
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar8 = thunk_FUN_0124bba8();
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027b3f98);
      FUN_01e7d290(uVar8,uVar9,0);
    }
    else {
      iVar3 = FUN_01f7fe4c();
      if (iVar2 <= iVar3 - unaff_w22) {
        plVar6 = (long *)thunk_FUN_0122c1cc();
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x408))(plVar6,*(undefined8 *)(*plVar6 + 0x410));
          plVar6 = (long *)thunk_FUN_0122c1cc();
          if ((plVar6 != (long *)0x0) &&
             (plVar6 = (long *)(**(code **)(*plVar6 + 0x408))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x410)),
             plVar6 != (long *)0x0)) {
            uVar4 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
            if ((unaff_x21 == unaff_x23) && (unaff_w25 - iVar1 <= iVar2)) {
              for (; 0 < unaff_w22; unaff_w22 = unaff_w22 + -1) {
                DG_Tweening_DOTweenModuleUnityVersion__DOOffset();
                FUN_0122ba44();
              }
              return;
            }
            if (unaff_w22 < 1) {
              return;
            }
            while (lVar7 = DG_Tweening_DOTweenModuleUnityVersion__DOOffset(),
                  lVar7 != 0 || ((uVar4 ^ 0xffffffff) & 1) != 0) {
              FUN_0122ba44();
              unaff_w22 = unaff_w22 + -1;
              if (unaff_w22 == 0) {
                return;
              }
            }
            thunk_FUN_01279b34(PTR_DAT_027b4e48);
            uVar8 = thunk_FUN_0124bba8();
            FUN_01f68d58(uVar8,0);
            goto LAB_01f89fb0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar8 = thunk_FUN_0124bba8();
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027c18c0);
      uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1898);
      FUN_01e7598c(uVar8,uVar9,uVar10,0);
    }
  }
LAB_01f89fb0:
  uVar9 = thunk_FUN_01279b34(PTR_DAT_027c18b0);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar8,uVar9);
}



/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 0338437c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingOriginType(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  int iVar11;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x940));
  *(undefined1 *)(unaff_x21 + 0x627) = 1;
  uVar7 = FUN_031532a8();
  if ((uVar7 & 1) != 0) {
    return;
  }
  plVar8 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230940);
  FUN_03160a50(plVar8,0);
  puVar2 = PTR_DAT_042305b0;
  puVar1 = PTR_DAT_042303d0;
  if (unaff_x20 != 0) {
    if (0 < *(int *)(unaff_x20 + 0x10)) {
      iVar10 = 0;
      iVar11 = 0;
      do {
        sVar4 = FUN_0314e438();
        if (sVar4 == 0x20) {
          bVar3 = iVar11 != 0;
          iVar11 = 0;
          if (bVar3) {
            iVar11 = 3;
          }
        }
        else {
          uVar5 = FUN_0314e438();
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar1);
          }
          uVar7 = FUN_0324ca78(uVar5,0);
          if ((uVar7 & 1) == 0) {
            uVar6 = FUN_0314e438();
            if ((uVar6 & 0xffff) == (unaff_w19 & 0xffff)) {
              if (plVar8 == (long *)0x0) goto LAB_0338461c;
              FUN_0315aa9c(plVar8,unaff_w19,0);
              iVar11 = 0;
            }
            else {
              if (iVar11 == 3) {
                if (plVar8 == (long *)0x0) goto LAB_0338461c;
                FUN_0315aa9c(plVar8,unaff_w19,0);
                uVar5 = FUN_0314e438();
              }
              else {
                uVar5 = FUN_0314e438();
                if (plVar8 == (long *)0x0) goto LAB_0338461c;
              }
              FUN_0315aa9c(plVar8,uVar5,0);
              iVar11 = 1;
            }
          }
          else {
            if ((iVar11 == 1) || (iVar11 == 3)) {
LAB_033844cc:
              if (plVar8 == (long *)0x0) goto LAB_0338461c;
              FUN_0315aa9c(plVar8,unaff_w19,0);
            }
            else if ((iVar11 == 2) && ((iVar10 != 0 && (iVar10 + 1 < *(int *)(unaff_x20 + 0x10)))))
            {
              uVar6 = FUN_0314e438();
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar1);
              }
              uVar7 = FUN_0324ca78(uVar6,0);
              if (((uVar6 & 0xffff) != (unaff_w19 & 0xffff)) && ((uVar7 & 1) == 0))
              goto LAB_033844cc;
            }
            uVar5 = FUN_0314e438();
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar2);
            }
            uVar9 = FUN_03295500(0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar1);
            }
            uVar5 = FUN_0324cf0c(uVar5,uVar9,0);
            if (plVar8 == (long *)0x0) goto LAB_0338461c;
            FUN_0315aa9c(plVar8,uVar5,0);
            iVar11 = 2;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(unaff_x20 + 0x10));
    }
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03384618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      return;
    }
  }
LAB_0338461c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



/*
FUNCTION_NAME: OVRPlugin.Vector3f$$.cctor
ENTRY_POINT: 06964558
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector3f___cctor(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long *unaff_x25;
  
  iVar5 = FUN_06964728();
  puVar4 = PTR_DAT_084b6e30;
  puVar3 = PTR_DAT_08487a70;
  if (iVar5 != -1) {
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (lVar8 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar8 == 0)) goto LAB_06964724;
    iVar1 = *(int *)(lVar8 + 0x18);
    if (0 < iVar1) {
      iVar10 = 0;
      do {
        if ((((*(long *)(unaff_x21 + 0x28) == 0) ||
             (lVar8 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar8 == 0)) ||
            (lVar8 = FUN_04de82e0(lVar8,iVar10,*(undefined8 *)puVar4), lVar8 == 0)) ||
           (*(long *)(lVar8 + 0x28) == 0)) goto LAB_06964724;
        iVar2 = *(int *)(*(long *)(lVar8 + 0x28) + 0x18);
        if (0 < iVar2) {
          iVar11 = 0;
          do {
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_06964724;
            iVar6 = FUN_04d8be94(*(long *)(lVar8 + 0x28),iVar11,*(undefined8 *)puVar3);
            if (iVar6 == iVar5) {
              *unaff_x20 = *(undefined8 *)(lVar8 + 0x18);
              thunk_FUN_03afed3c();
              *unaff_x19 = iVar10;
              return;
            }
            iVar11 = iVar11 + 1;
          } while (iVar2 != iVar11);
        }
        iVar10 = iVar10 + 1;
        unaff_x25 = (long *)PTR_DAT_08486738;
      } while (iVar10 != iVar1);
    }
  }
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    uVar9 = *(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar7 = FUN_07c9c218(uVar9,0,0);
    lVar8 = *(long *)(unaff_x21 + 0x28);
    if ((uVar7 & 1) == 0) {
      if (lVar8 != 0) {
        uVar9 = thunk_FUN_07ca227c(lVar8,0);
        uVar9 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6e40,uVar9,*(undefined8 *)PTR_DAT_084b6e38,0
                            );
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4fb40(uVar9,0);
        *unaff_x20 = 0;
        goto LAB_069646c8;
      }
    }
    else if (lVar8 != 0) {
      *unaff_x20 = *(undefined8 *)(lVar8 + 0x28);
LAB_069646c8:
      thunk_FUN_03afed3c();
      *unaff_x19 = -1;
      return;
    }
  }
LAB_06964724:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



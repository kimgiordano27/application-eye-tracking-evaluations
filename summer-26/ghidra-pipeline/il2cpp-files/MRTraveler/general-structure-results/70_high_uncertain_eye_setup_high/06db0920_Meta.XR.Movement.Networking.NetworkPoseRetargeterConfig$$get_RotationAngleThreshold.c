/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NetworkPoseRetargeterConfig$$get_RotationAngleThreshold
ENTRY_POINT: 06db0920
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_Movement_Networking_NetworkPoseRetargeterConfig__get_RotationAngleThreshold(void)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long *unaff_x25;
  bool bVar10;
  
  plVar1 = (long *)(unaff_x20 + 0x28);
  do {
    bVar10 = true;
    do {
      do {
        lVar8 = *plVar1;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        bVar4 = FUN_085decd4(lVar8,0,0);
        if ((bVar10 & bVar4) == 0) {
          lVar8 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar7 = FUN_085decd4(lVar8,0,0);
          if ((uVar7 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
          }
          else {
            if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
            uVar7 = (**(code **)(*unaff_x19 + 0x338))();
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(unaff_x20 + 0x18) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x18),0);
              *(undefined4 *)(unaff_x20 + 0x10) = 2;
              return 1;
            }
          }
          uVar7 = (**(code **)(*unaff_x19 + 0x338))();
          if ((uVar7 & 1) != 0) {
            (**(code **)(*unaff_x19 + 0x3b8))();
          }
          return 0;
        }
        if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
        iVar5 = (**(code **)(*unaff_x19 + 0x2b8))();
        if (iVar5 < *(int *)(unaff_x20 + 0x38)) {
          *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
        }
        *(int *)(unaff_x20 + 0x38) = iVar5;
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06db0d00;
        iVar2 = *(int *)(unaff_x20 + 0x40);
        iVar6 = FUN_08592530(*(long *)(unaff_x20 + 0x28),0);
        lVar8 = *(long *)(unaff_x20 + 0x30);
        if (lVar8 == 0) goto LAB_06db0d00;
        iVar3 = *(int *)(unaff_x20 + 0x3c);
        iVar5 = iVar5 + iVar6 * iVar2;
        iVar2 = iVar3 + *(int *)(lVar8 + 0x18);
        bVar10 = iVar2 < iVar5;
      } while (iVar5 <= iVar2);
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_06db0d00;
      iVar6 = FUN_08592530(lVar9,0);
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = iVar3 / iVar6;
      }
      uVar7 = FUN_085925e4(lVar9,lVar8,iVar3 - iVar5 * iVar6,0);
    } while ((uVar7 & 1) == 0);
    lVar8 = unaff_x19[0xc];
    if (lVar8 != 0) {
      if (lVar8 == 0) {
LAB_06db0d00:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(lVar8 + 0x18))
                (0,*(undefined8 *)(lVar8 + 0x40),0,*(undefined8 *)(unaff_x20 + 0x30),
                 *(undefined8 *)(lVar8 + 0x28));
    }
    *(int *)(unaff_x20 + 0x3c) = iVar2;
  } while( true );
}



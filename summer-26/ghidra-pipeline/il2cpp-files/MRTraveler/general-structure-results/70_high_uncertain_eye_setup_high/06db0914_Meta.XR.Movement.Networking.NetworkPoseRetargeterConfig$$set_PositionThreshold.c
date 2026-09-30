/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NetworkPoseRetargeterConfig$$set_PositionThreshold
ENTRY_POINT: 06db0914
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


undefined8 Meta_XR_Movement_Networking_NetworkPoseRetargeterConfig__set_PositionThreshold(void)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined4 in_w8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  *(undefined4 *)(unaff_x20 + 0x10) = in_w8;
  puVar4 = PTR_DAT_08e68f00;
  plVar1 = (long *)(unaff_x20 + 0x28);
  do {
    bVar11 = true;
    do {
      do {
        lVar9 = *plVar1;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        bVar5 = FUN_085decd4(lVar9,0,0);
        if ((bVar11 & bVar5) == 0) {
          lVar9 = *plVar1;
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar8 = FUN_085decd4(lVar9,0,0);
          if ((uVar8 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
          }
          else {
            if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
            uVar8 = (**(code **)(*unaff_x19 + 0x338))();
            if ((uVar8 & 1) != 0) {
              *(undefined8 *)(unaff_x20 + 0x18) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x18),0);
              *(undefined4 *)(unaff_x20 + 0x10) = 2;
              return 1;
            }
          }
          uVar8 = (**(code **)(*unaff_x19 + 0x338))();
          if ((uVar8 & 1) != 0) {
            (**(code **)(*unaff_x19 + 0x3b8))();
          }
          return 0;
        }
        if (unaff_x19 == (long *)0x0) goto LAB_06db0d00;
        iVar6 = (**(code **)(*unaff_x19 + 0x2b8))();
        if (iVar6 < *(int *)(unaff_x20 + 0x38)) {
          *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
        }
        *(int *)(unaff_x20 + 0x38) = iVar6;
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06db0d00;
        iVar2 = *(int *)(unaff_x20 + 0x40);
        iVar7 = FUN_08592530(*(long *)(unaff_x20 + 0x28),0);
        lVar9 = *(long *)(unaff_x20 + 0x30);
        if (lVar9 == 0) goto LAB_06db0d00;
        iVar3 = *(int *)(unaff_x20 + 0x3c);
        iVar6 = iVar6 + iVar7 * iVar2;
        iVar2 = iVar3 + *(int *)(lVar9 + 0x18);
        bVar11 = iVar2 < iVar6;
      } while (iVar6 <= iVar2);
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_06db0d00;
      iVar7 = FUN_08592530(lVar10,0);
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar3 / iVar7;
      }
      uVar8 = FUN_085925e4(lVar10,lVar9,iVar3 - iVar6 * iVar7,0);
    } while ((uVar8 & 1) == 0);
    lVar9 = unaff_x19[0xc];
    if (lVar9 != 0) {
      if (lVar9 == 0) {
LAB_06db0d00:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(lVar9 + 0x18))
                (0,*(undefined8 *)(lVar9 + 0x40),0,*(undefined8 *)(unaff_x20 + 0x30),
                 *(undefined8 *)(lVar9 + 0x28));
    }
    *(int *)(unaff_x20 + 0x3c) = iVar2;
  } while( true );
}



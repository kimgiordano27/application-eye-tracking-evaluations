/*
FUNCTION_NAME: PlayFab.MultiplayerModels.GetTitleEnabledForMultiplayerServersStatusRequest$$.ctor
ENTRY_POINT: 017e9560
PROGRAM: LethalApe-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusRequest___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  uint *unaff_x23;
  
  puVar3 = PTR_DAT_02c0ed90;
  puVar2 = PTR_DAT_02bc9ff8;
  puVar1 = PTR_DAT_02bc6ca8;
  if (*unaff_x23 < 0x100) goto LAB_017e96a4;
  *(undefined8 *)(unaff_x19 + 0x818) = unaff_x20;
  thunk_FUN_00a502ec(unaff_x19 + 0x818);
  **(long **)(*(long *)puVar3 + 0xb8) = unaff_x19;
  thunk_FUN_00a502ec(*(undefined8 *)(*(long *)puVar3 + 0xb8));
  plVar4 = (long *)FUN_00a19040(*(undefined8 *)puVar2,2);
  lVar5 = thunk_FUN_00a05c70(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_02bd3380;
  if (lVar5 != 0) {
    FUN_013b5ae4(lVar5,4,*(undefined8 *)PTR_DAT_02bd3380);
    *(undefined1 *)(lVar5 + 0x2c) = 0;
    if (plVar4 != (long *)0x0) {
      lVar6 = thunk_FUN_00a05b84(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 == 0) {
PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor:
        uVar8 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
        FUN_00a190b8(uVar8,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar5;
        thunk_FUN_00a502ec(plVar4 + 4,lVar5);
        lVar5 = thunk_FUN_00a05c70(*(undefined8 *)puVar1);
        if (lVar5 == 0) goto LAB_017e9694;
        FUN_013b5ae4(lVar5,4,*(undefined8 *)puVar2);
        *(undefined1 *)(lVar5 + 0x2c) = 1;
        lVar6 = thunk_FUN_00a05b84(lVar5,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar6 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = lVar5;
          thunk_FUN_00a502ec(plVar4 + 5,lVar5);
          plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *plVar7 = (long)plVar4;
          thunk_FUN_00a502ec(plVar7,plVar4);
          return;
        }
      }
LAB_017e96a4:
                    /* WARNING: Subroutine does not return */
      FUN_00a190f8();
    }
  }
LAB_017e9694:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}



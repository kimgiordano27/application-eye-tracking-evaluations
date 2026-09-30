/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 0575b114
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetSpaceUuid(void)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long *unaff_x21;
  uint uVar10;
  long unaff_x22;
  
  FUN_02f07e70(PTR_DAT_06d597f0);
  *(undefined1 *)(unaff_x22 + 0xa78) = 1;
  uVar9 = *unaff_x20;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  plVar3 = (long *)FUN_056109c0(uVar9,0);
  if (plVar3 == (long *)0x0) {
LAB_0575b330:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar4 = (**(code **)(*plVar3 + 0x298))();
  if ((uVar4 & 1) == 0) {
    if ((unaff_x19 == (long *)0x0) ||
       (lVar5 = (**(code **)(*unaff_x19 + 0x208))(), puVar2 = PTR_DAT_06d597f0, lVar5 == 0))
    goto LAB_0575b330;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
LAB_0575b334:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar6 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar6 == 0) || (plVar3 = (long *)thunk_FUN_02ebbee0(lVar6,0), plVar3 == (long *)0x0))
        goto LAB_0575b330;
        uVar9 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
        uVar4 = thunk_FUN_05464b70(uVar9,*(undefined8 *)puVar2,0);
        if ((uVar4 & 1) != 0) {
          uVar9 = FUN_056f26f4(plVar3,0);
          puVar2 = PTR_DAT_06d56c60;
          if (*(int *)(*(long *)PTR_DAT_06d56c60 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*(long *)PTR_DAT_06d56c60);
          }
          FUN_056e551c(uVar9,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (DAT_071c37cf == '\0') {
            FUN_02f07e70(PTR_DAT_06d56c60);
            DAT_071c37cf = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x28);
            lVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
            if (lVar5 != 0) {
              lVar7 = thunk_FUN_02ef170c();
              if (lVar7 == 0) {
                uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar9,0);
              }
              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0575b334;
              *(long **)(lVar5 + 0x20) = unaff_x19;
              thunk_FUN_02f411dc();
              if ((lVar6 != 0) &&
                 (plVar3 = (long *)(**(code **)(lVar6 + 0x18))
                                             (*(undefined8 *)(lVar6 + 0x40),0,lVar5,
                                              *(undefined8 *)(lVar6 + 0x28)), plVar3 != (long *)0x0)
                 ) {
                if (*(long *)(*plVar3 + 0x40) == *(long *)(*(long *)PTR_DAT_06d04020 + 0x40)) {
                  pcVar8 = (char *)thunk_FUN_02ef195c();
                  return *pcVar8 != '\0';
                }
                    /* WARNING: Subroutine does not return */
                FUN_02f08440();
              }
            }
          }
          goto LAB_0575b330;
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
  }
  return false;
}



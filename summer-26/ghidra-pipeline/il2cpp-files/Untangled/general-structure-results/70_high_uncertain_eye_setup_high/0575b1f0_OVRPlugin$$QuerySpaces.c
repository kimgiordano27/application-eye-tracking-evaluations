/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 0575b1f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__QuerySpaces(void)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  uint in_w8;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar8;
  uint unaff_w22;
  undefined8 *unaff_x23;
  
  do {
    if (in_NG == in_OV) {
      return false;
    }
    if (in_w8 <= unaff_w22) {
LAB_0575b334:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar2 = *(long *)(unaff_x20 + (long)(int)unaff_w22 * 8 + 0x20);
    if ((lVar2 == 0) || (plVar3 = (long *)thunk_FUN_02ebbee0(lVar2,0), plVar3 == (long *)0x0)) {
LAB_0575b330:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
    uVar5 = thunk_FUN_05464b70(uVar4,*unaff_x23,0);
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_056f26f4(plVar3,0);
      puVar1 = PTR_DAT_06d56c60;
      if (*(int *)(*(long *)PTR_DAT_06d56c60 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d56c60);
      }
      FUN_056e551c(uVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (DAT_071c37cf == '\0') {
        FUN_02f07e70(PTR_DAT_06d56c60);
        DAT_071c37cf = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        lVar8 = *(long *)(lVar2 + 0x28);
        lVar2 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
        if (lVar2 != 0) {
          lVar6 = thunk_FUN_02ef170c();
          if (lVar6 == 0) {
            uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar4,0);
          }
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0575b334;
          *(undefined8 *)(lVar2 + 0x20) = unaff_x19;
          thunk_FUN_02f411dc();
          if ((lVar8 != 0) &&
             (plVar3 = (long *)(**(code **)(lVar8 + 0x18))
                                         (*(undefined8 *)(lVar8 + 0x40),0,lVar2,
                                          *(undefined8 *)(lVar8 + 0x28)), plVar3 != (long *)0x0)) {
            if (*(long *)(*plVar3 + 0x40) == *(long *)(*(long *)PTR_DAT_06d04020 + 0x40)) {
              pcVar7 = (char *)thunk_FUN_02ef195c();
              return *pcVar7 != '\0';
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f08440();
          }
        }
      }
      goto LAB_0575b330;
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = (int)(unaff_w22 - in_w8) < 0;
  } while( true );
}



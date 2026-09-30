/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryPoint
ENTRY_POINT: 01d7f760
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__TestBoundaryPoint(long param_1)

{
  int iVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  
  if (in_ZR || in_NG != in_OV) {
    if ((unaff_w21 >> 0x12 & 1) != 0) {
      if (in_w9 <= in_w10) goto LAB_01d7f708;
      lVar3 = *(long *)(unaff_x20 + ((param_1 << 0x20) >> 0x1d) + 0x20);
      if (lVar3 == 0) goto LAB_01d7f864;
      uVar4 = FUN_01cc9618(lVar3,0);
      if ((uVar4 & 1) != 0) goto LAB_01d7f848;
    }
LAB_01d7f7a8:
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      iVar6 = (int)*(long *)(unaff_x20 + 0x18);
      iVar1 = iVar6 + -1;
      if (iVar1 <= *(int *)(unaff_x19 + 0x18)) {
        if (iVar6 == 0) {
LAB_01d7f708:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar7 = *(long **)(unaff_x20 + (long)iVar1 * 8 + 0x20);
        if ((plVar7 == (long *)0x0) ||
           (lVar3 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
           lVar3 == 0)) {
LAB_01d7f864:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar4 = FUN_01d61eb0(lVar3,0);
        if ((uVar4 & 1) != 0) {
          uVar5 = *(undefined8 *)PTR_DAT_02358d68;
          if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar5 = FUN_01d5e86c(uVar5,0);
          uVar4 = (**(code **)(*plVar7 + 0x208))(plVar7,uVar5,0,*(undefined8 *)(*plVar7 + 0x210));
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          goto LAB_01d7f848;
        }
      }
    }
    uVar5 = 0;
  }
  else {
    uVar2 = (**(code **)(*unaff_x22 + 600))();
    if ((uVar2 >> 1 & 1) == 0) goto LAB_01d7f7a8;
LAB_01d7f848:
    uVar5 = 1;
  }
  return uVar5;
}



/*
FUNCTION_NAME: OVRPlugin$$get_initialized
ENTRY_POINT: 033b9ae4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_initialized
               (code *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  int iVar6;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  long lVar7;
  long *unaff_x28;
  
  while( true ) {
    iVar1 = (*param_1)(param_2,param_3,unaff_x27,param_5);
    param_3 = unaff_x25;
    iVar6 = unaff_w22;
    if (-1 < iVar1) goto LAB_033b9b44;
    lVar7 = *unaff_x21;
    if (lVar7 == 0) break;
    uVar3 = FUN_033aae5c(lVar7,unaff_w23);
    FUN_033b49e8(lVar7,uVar3,unaff_w23 + 1);
    lVar7 = unaff_x21[1];
    if (lVar7 != 0) {
      uVar3 = FUN_033aae5c(lVar7,unaff_w23);
      FUN_033b49e8(lVar7,uVar3,unaff_w23 + 1);
    }
    unaff_w23 = unaff_w23 + -1;
    while (iVar6 = unaff_w22, unaff_w23 < unaff_w20) {
LAB_033b9b44:
      if (*unaff_x21 == 0) goto LAB_033b9b98;
      FUN_033b49e8(*unaff_x21,param_3,unaff_w23 + 1);
      if (unaff_x21[1] != 0) {
        FUN_033b49e8(unaff_x21[1],unaff_x24,unaff_w23 + 1);
      }
      if (iVar6 == unaff_w19) {
        return;
      }
      if (*unaff_x21 == 0) goto LAB_033b9b98;
      unaff_w22 = iVar6 + 1;
      param_3 = FUN_033aae5c(*unaff_x21,unaff_w22);
      unaff_w23 = iVar6;
      if (unaff_x21[1] == 0) {
        unaff_x24 = 0;
      }
      else {
        unaff_x24 = FUN_033aae5c(unaff_x21[1],unaff_w22);
      }
    }
    if (*unaff_x21 == 0) break;
    param_2 = (long *)unaff_x21[2];
    unaff_x27 = FUN_033aae5c(*unaff_x21,unaff_w23);
    if (param_2 == (long *)0x0) break;
    lVar7 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_033b9ad8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(param_2,*unaff_x28,0);
LAB_033b9ad8:
    param_1 = (code *)*puVar2;
    param_5 = puVar2[1];
    unaff_x25 = param_3;
  }
LAB_033b9b98:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}



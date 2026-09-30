/*
FUNCTION_NAME: OVRPlugin$$get_nativeXrApi
ENTRY_POINT: 033b9b40
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


void OVRPlugin__get_nativeXrApi(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  int iVar7;
  int unaff_w22;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar8;
  long *unaff_x28;
  
  do {
    while (iVar7 = unaff_w22, unaff_w23 < unaff_w20) {
LAB_033b9b44:
      if (*unaff_x21 == 0) goto LAB_033b9b98;
      FUN_033b49e8(*unaff_x21,unaff_x25,unaff_w23 + 1);
      if (unaff_x21[1] != 0) {
        FUN_033b49e8(unaff_x21[1],unaff_x24,unaff_w23 + 1);
      }
      if (iVar7 == unaff_w19) {
        return;
      }
      if (*unaff_x21 == 0) goto LAB_033b9b98;
      unaff_w22 = iVar7 + 1;
      unaff_x25 = FUN_033aae5c(*unaff_x21,unaff_w22);
      unaff_w23 = iVar7;
      if (unaff_x21[1] == 0) {
        unaff_x24 = 0;
      }
      else {
        unaff_x24 = FUN_033aae5c(unaff_x21[1],unaff_w22);
      }
    }
    if (*unaff_x21 == 0) {
LAB_033b9b98:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    plVar8 = (long *)unaff_x21[2];
    uVar2 = FUN_033aae5c(*unaff_x21,unaff_w23);
    if (plVar8 == (long *)0x0) goto LAB_033b9b98;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033b9ad8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar8,*unaff_x28,0);
LAB_033b9ad8:
    iVar1 = (*(code *)*puVar3)(plVar8,unaff_x25,uVar2,puVar3[1]);
    if (-1 < iVar1) goto LAB_033b9b44;
    lVar4 = *unaff_x21;
    if (lVar4 == 0) goto LAB_033b9b98;
    uVar2 = FUN_033aae5c(lVar4,unaff_w23);
    FUN_033b49e8(lVar4,uVar2,unaff_w23 + 1);
    lVar4 = unaff_x21[1];
    if (lVar4 != 0) {
      uVar2 = FUN_033aae5c(lVar4,unaff_w23);
      FUN_033b49e8(lVar4,uVar2,unaff_w23 + 1);
    }
    unaff_w23 = unaff_w23 + -1;
    unaff_w22 = iVar7;
  } while( true );
}



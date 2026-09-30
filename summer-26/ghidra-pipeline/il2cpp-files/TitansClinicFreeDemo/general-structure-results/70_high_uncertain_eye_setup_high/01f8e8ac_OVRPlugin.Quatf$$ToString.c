/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 01f8e8ac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf__ToString(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar8;
  long *unaff_x28;
  
  do {
    if (*unaff_x21 == 0) {
LAB_01f8e900:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    FUN_01f89750(*unaff_x21,unaff_x25,unaff_w23 + 1);
    if (unaff_x21[1] != 0) {
      FUN_01f89750(unaff_x21[1],unaff_x24,unaff_w23 + 1);
    }
    if (unaff_w22 == unaff_w19) {
      return;
    }
    if (*unaff_x21 == 0) goto LAB_01f8e900;
    iVar1 = unaff_w22 + 1;
    unaff_x25 = FUN_01f7feac(*unaff_x21,iVar1);
    unaff_w23 = unaff_w22;
    if (unaff_x21[1] == 0) {
      unaff_x24 = 0;
    }
    else {
      unaff_x24 = FUN_01f7feac(unaff_x21[1],iVar1);
    }
    for (; unaff_w22 = iVar1, unaff_w20 <= unaff_w23; unaff_w23 = unaff_w23 + -1) {
      if (*unaff_x21 == 0) goto LAB_01f8e900;
      plVar8 = (long *)unaff_x21[2];
      uVar3 = FUN_01f7feac(*unaff_x21,unaff_w23);
      if (plVar8 == (long *)0x0) goto LAB_01f8e900;
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01f8e840;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0122ea3c(plVar8,*unaff_x28,0);
LAB_01f8e840:
      iVar2 = (*(code *)*puVar4)(plVar8,unaff_x25,uVar3,puVar4[1]);
      if (-1 < iVar2) break;
      lVar5 = *unaff_x21;
      if (lVar5 == 0) goto LAB_01f8e900;
      uVar3 = FUN_01f7feac(lVar5,unaff_w23);
      FUN_01f89750(lVar5,uVar3,unaff_w23 + 1);
      lVar5 = unaff_x21[1];
      if (lVar5 != 0) {
        uVar3 = FUN_01f7feac(lVar5,unaff_w23);
        FUN_01f89750(lVar5,uVar3,unaff_w23 + 1);
      }
    }
  } while( true );
}



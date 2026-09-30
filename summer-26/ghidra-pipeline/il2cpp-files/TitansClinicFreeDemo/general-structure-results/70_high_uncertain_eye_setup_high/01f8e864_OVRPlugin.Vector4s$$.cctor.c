/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 01f8e864
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s___cctor(long param_1)

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
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar6;
  long unaff_x27;
  long lVar7;
  long *unaff_x28;
  
code_r0x01f8e864:
  uVar3 = FUN_01f7feac(param_1,unaff_w23);
  FUN_01f89750(unaff_x27,uVar3,unaff_w23 + 1);
  lVar7 = unaff_x21[1];
  if (lVar7 != 0) {
    uVar3 = FUN_01f7feac(lVar7,unaff_w23);
    FUN_01f89750(lVar7,uVar3,unaff_w23 + 1);
  }
  iVar1 = unaff_w22;
  unaff_w23 = unaff_w23 + -1;
LAB_01f8e7d0:
  unaff_w22 = iVar1;
  if (unaff_w20 <= unaff_w23) {
    if (*unaff_x21 == 0) goto LAB_01f8e900;
    plVar6 = (long *)unaff_x21[2];
    uVar3 = FUN_01f7feac(*unaff_x21,unaff_w23);
    if (plVar6 == (long *)0x0) goto LAB_01f8e900;
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01f8e840;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0122ea3c(plVar6,*unaff_x28,0);
LAB_01f8e840:
    iVar1 = (*(code *)*puVar2)(plVar6,unaff_x25,uVar3,puVar2[1]);
    if (iVar1 < 0) goto code_r0x01f8e858;
  }
  if (*unaff_x21 == 0) goto LAB_01f8e900;
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
  goto LAB_01f8e7d0;
code_r0x01f8e858:
  param_1 = *unaff_x21;
  unaff_x27 = param_1;
  if (param_1 == 0) {
LAB_01f8e900:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  goto code_r0x01f8e864;
}



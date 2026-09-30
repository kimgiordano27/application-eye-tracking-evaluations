/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$.cctor
ENTRY_POINT: 04f8feb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_42_0___cctor(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 in_w8;
  long unaff_x19;
  int iVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined1 *)(unaff_x20 + 0xdaf) = in_w8;
  puVar4 = System_Func<PropertyChangedEvent>_TypeInfo;
  puVar3 = PTR_DAT_06312cd0;
  lVar5 = *(long *)(unaff_x19 + 0x68);
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 + 1;
        iVar2 = iVar1;
        while (iVar2 < *(int *)(lVar5 + 0x18)) {
          lVar5 = FUN_037a6268(lVar5,iVar6,*(undefined8 *)puVar4);
          if ((lVar5 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_04f8ff7c;
          uVar7 = *(undefined8 *)(lVar5 + 0x20);
          lVar5 = FUN_037a6268(*(long *)(unaff_x19 + 0x68),iVar2,*(undefined8 *)puVar4);
          if (lVar5 == 0) goto LAB_04f8ff7c;
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05d1190c(uVar7,uVar8,0);
          lVar5 = *(long *)(unaff_x19 + 0x68);
          iVar2 = iVar2 + 1;
          if (lVar5 == 0) goto LAB_04f8ff7c;
        }
        iVar6 = iVar1;
      } while (iVar1 < *(int *)(lVar5 + 0x18));
    }
    return;
  }
LAB_04f8ff7c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



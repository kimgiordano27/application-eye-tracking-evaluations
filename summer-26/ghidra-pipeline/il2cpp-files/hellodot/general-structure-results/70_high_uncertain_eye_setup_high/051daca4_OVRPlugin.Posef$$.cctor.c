/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 051daca4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef___cctor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 in_w8;
  long unaff_x19;
  int iVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined1 *)(unaff_x20 + 0x598) = in_w8;
  puVar5 = PTR_DAT_066090e8;
  puVar4 = PTR_DAT_065c9f68;
  lVar6 = *(long *)(unaff_x19 + 0x68);
  if (lVar6 == 0) {
LAB_051dad78:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      iVar1 = iVar7 + 1;
      iVar2 = iVar1;
      if (iVar1 < iVar3) {
        do {
          lVar6 = FUN_03968108(lVar6,iVar7,*(undefined8 *)puVar5);
          if ((lVar6 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_051dad78;
          uVar8 = *(undefined8 *)(lVar6 + 0x20);
          lVar6 = FUN_03968108(*(long *)(unaff_x19 + 0x68),iVar2,*(undefined8 *)puVar5);
          if (lVar6 == 0) goto LAB_051dad78;
          uVar9 = *(undefined8 *)(lVar6 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)puVar4);
          }
          FUN_05f4b8ac(uVar8,uVar9,0);
          lVar6 = *(long *)(unaff_x19 + 0x68);
          if (lVar6 == 0) goto LAB_051dad78;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(lVar6 + 0x18));
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      iVar7 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}



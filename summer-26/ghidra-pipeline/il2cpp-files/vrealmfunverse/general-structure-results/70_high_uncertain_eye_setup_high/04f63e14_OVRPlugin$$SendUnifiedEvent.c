/*
FUNCTION_NAME: OVRPlugin$$SendUnifiedEvent
ENTRY_POINT: 04f63e14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SendUnifiedEvent(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  long *plVar9;
  float fVar10;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = 0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_05c8e378();
  puVar2 = UnityEngine_UIElements_EventBase<MouseDownEvent>_TypeInfo;
  puVar1 = System_IOSelectorJob_var;
  if ((uVar4 & 1) == 0) {
    if (unaff_x19 == 0) {
LAB_04f63f24:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar8 = 0;
    do {
      uStack0000000000000010 = *(undefined8 *)(unaff_x19 + 0xd0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar3 = FUN_04f7dd34();
      if (iVar3 != 0) {
        plVar9 = *(long **)(unaff_x20 + 0x130);
        if (plVar9 == (long *)0x0) goto LAB_04f63f24;
        lVar6 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04f63ed8;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0);
LAB_04f63ed8:
        fVar10 = (float)(*(code *)*puVar5)(plVar9,iVar8,puVar5[1]);
        if (*(float *)(unaff_x19 + 0xd8) < fVar10) {
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 5);
  }
  return 0;
}



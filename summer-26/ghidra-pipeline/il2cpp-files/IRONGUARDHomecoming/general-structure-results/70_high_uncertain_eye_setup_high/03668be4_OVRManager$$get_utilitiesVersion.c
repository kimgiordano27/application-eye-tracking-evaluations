/*
FUNCTION_NAME: OVRManager$$get_utilitiesVersion
ENTRY_POINT: 03668be4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_utilitiesVersion(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  if (*(int *)(unaff_x22 + 0x18) != 0) {
    *(undefined8 *)(unaff_x22 + 0x20) = unaff_x21;
    thunk_FUN_01f51358((undefined8 *)(unaff_x22 + 0x20));
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar5 = 0;
      uVar3 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      lVar6 = 0x28;
      do {
        if (uVar3 <= uVar5) goto LAB_03668c88;
        plVar7 = (long *)*unaff_x20;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(unaff_x19 + 0x20 + uVar5 * 8);
        if ((lVar4 != 0) &&
           (lVar1 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar1 == 0)) {
          uVar2 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar2,0);
        }
        uVar5 = uVar5 + 1;
        if (*(uint *)(plVar7 + 3) <= uVar5) goto LAB_03668c88;
        *(long *)((long)plVar7 + lVar6) = lVar4;
        thunk_FUN_01f51358((long *)((long)plVar7 + lVar6),lVar4);
        uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
        lVar6 = lVar6 + 8;
      } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
LAB_03668c88:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}



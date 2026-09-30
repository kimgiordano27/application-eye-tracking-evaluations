/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 03668b8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__DeregisterEventListener(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  ulong uVar7;
  long *plVar8;
  
  FUN_0406d950();
  if (unaff_x19 != 0) {
    lVar1 = FUN_01f08890(*(undefined8 *)
                          Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                         ,*(int *)(unaff_x19 + 0x18) + 1);
    plVar6 = (long *)(unaff_x20 + 0x18);
    *plVar6 = lVar1;
    thunk_FUN_01f51358(plVar6,lVar1);
    lVar1 = *plVar6;
    if (lVar1 != 0) {
      if ((unaff_x21 != 0) && (lVar2 = thunk_FUN_01f116d0(), lVar2 == 0)) {
LAB_03668c90:
        uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar4,0);
      }
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(long *)(lVar1 + 0x20) = unaff_x21;
        thunk_FUN_01f51358((long *)(lVar1 + 0x20));
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar7 = 0;
          uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          lVar1 = 0x28;
          do {
            if (uVar5 <= uVar7) goto LAB_03668c88;
            plVar8 = (long *)*plVar6;
            if (plVar8 == (long *)0x0) goto OVRManager__get_sdkVersion;
            lVar2 = *(long *)(unaff_x19 + 0x20 + uVar7 * 8);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0))
            goto LAB_03668c90;
            uVar7 = uVar7 + 1;
            if (*(uint *)(plVar8 + 3) <= uVar7) goto LAB_03668c88;
            *(long *)((long)plVar8 + lVar1) = lVar2;
            thunk_FUN_01f51358((long *)((long)plVar8 + lVar1),lVar2);
            uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
            lVar1 = lVar1 + 8;
          } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
LAB_03668c88:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
OVRManager__get_sdkVersion:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



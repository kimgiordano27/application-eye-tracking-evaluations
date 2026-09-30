/*
FUNCTION_NAME: FUN_03668b50
ENTRY_POINT: 03668b50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03668b50(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  if ((DAT_04833d48 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    DAT_04833d48 = 1;
  }
  FUN_0406d950(param_1,0);
  if (param_3 != 0) {
    uVar1 = FUN_01f08890(*(undefined8 *)
                          Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                         ,*(int *)(param_3 + 0x18) + 1);
    puVar5 = (undefined8 *)(param_1 + 0x18);
    *puVar5 = uVar1;
    thunk_FUN_01f51358(puVar5,uVar1);
    plVar7 = (long *)*puVar5;
    if (plVar7 != (long *)0x0) {
      if ((param_2 != 0) &&
         (lVar2 = thunk_FUN_01f116d0(param_2,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0)) {
LAB_03668c90:
        uVar1 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar1,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = param_2;
        thunk_FUN_01f51358(plVar7 + 4,param_2);
        if (0 < (int)*(ulong *)(param_3 + 0x18)) {
          uVar8 = 0;
          uVar4 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
          lVar2 = 0x28;
          do {
            if (uVar4 <= uVar8) goto LAB_03668c88;
            plVar7 = (long *)*puVar5;
            if (plVar7 == (long *)0x0) goto OVRManager__get_sdkVersion;
            lVar6 = *(long *)(param_3 + 0x20 + uVar8 * 8);
            if ((lVar6 != 0) &&
               (lVar3 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
            goto LAB_03668c90;
            uVar8 = uVar8 + 1;
            if (*(uint *)(plVar7 + 3) <= uVar8) goto LAB_03668c88;
            *(long *)((long)plVar7 + lVar2) = lVar6;
            thunk_FUN_01f51358((long *)((long)plVar7 + lVar2),lVar6);
            uVar4 = (ulong)*(uint *)(param_3 + 0x18);
            lVar2 = lVar2 + 8;
          } while ((long)uVar8 < (long)(int)*(uint *)(param_3 + 0x18));
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



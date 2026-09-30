/*
FUNCTION_NAME: FUN_034f0b80
ENTRY_POINT: 034f0b80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


uint FUN_034f0b80(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_04832e3b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    DAT_04832e3b = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    FUN_034efd20(uVar7,uVar9);
    uVar9 = thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_<HandleWriteStream>b__93_0__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar9);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_035820b0(uVar7,uVar9,0);
  if (((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x38) == *(char *)(param_2 + 0x38))) {
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_2 + 0x40);
    if (lVar6 != 0 || lVar5 != 0) {
      uVar2 = 0;
      if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_034f0c84;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 != *(uint *)(lVar5 + 0x18)) goto LAB_034f0c80;
      if (0 < (int)uVar1) {
        lVar8 = 0;
        do {
          if ((uVar1 <= (uint)lVar8) || (*(uint *)(lVar5 + 0x18) <= (uint)lVar8)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar4 = *(long *)(lVar6 + 0x20 + lVar8 * 8);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = FUN_034f0de8(lVar4,*(undefined8 *)(lVar5 + 0x20 + lVar8 * 8));
          if ((uVar2 & 1) == 0) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar1);
        goto LAB_034f0c84;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_034f0c80:
    uVar2 = 0;
  }
LAB_034f0c84:
  return uVar2 & 1;
}



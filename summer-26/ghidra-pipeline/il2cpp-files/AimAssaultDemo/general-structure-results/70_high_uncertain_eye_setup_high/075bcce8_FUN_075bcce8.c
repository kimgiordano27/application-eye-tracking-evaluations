/*
FUNCTION_NAME: FUN_075bcce8
ENTRY_POINT: 075bcce8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool FUN_075bcce8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar3 = OVRPlugin_OVRP_1_106_0_TypeInfo;
  if ((DAT_0826e654 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_107_0_TypeInfo);
    DAT_0826e654 = 1;
  }
  *param_4 = 0;
  thunk_FUN_037aeb94(param_4,0);
  *param_3 = 0;
  thunk_FUN_037aeb94(param_3,0);
  *param_2 = 0;
  thunk_FUN_037aeb94(param_2,0);
  uVar6 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar6 = FUN_062519f8(uVar6,0);
  if (param_1 != (long *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x218))(param_1,uVar6,0,*(undefined8 *)(*param_1 + 0x220));
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      if (iVar1 == 1) {
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_075bce4c;
        bVar2 = *(byte *)(*(long *)OVRPlugin_OVRP_1_107_0_TypeInfo + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)OVRPlugin_OVRP_1_107_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar5);
        }
        *param_4 = plVar5[2];
        thunk_FUN_037aeb94(param_4);
        *param_3 = plVar5[3];
        thunk_FUN_037aeb94(param_3);
        *param_2 = plVar5[4];
        thunk_FUN_037aeb94(param_2);
      }
      return iVar1 == 1;
    }
  }
LAB_075bce4c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



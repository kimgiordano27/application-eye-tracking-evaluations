/*
FUNCTION_NAME: FUN_0529b4ac
ENTRY_POINT: 0529b4ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0529b4ac(long param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_06bbace8 & 1) == 0) {
    FUN_02f08768(UnityEngine_Rendering_STP_PerViewConfig___TypeInfo);
    FUN_02f08768(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
    FUN_02f08768(PTR_DAT_067c8f20);
    DAT_06bbace8 = 1;
  }
  puVar1 = OVRPlugin_SpaceComponentType___TypeInfo;
  if (*(long *)(param_1 + 0x118) == 0) {
LAB_0529b614:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar2 = FUN_0529b618();
  if (((iVar2 == 0) &&
      (iVar2 = *param_2, iVar3 = FUN_037dbfdc(param_1,*(undefined8 *)puVar1), iVar2 != iVar3)) &&
     (param_2[4] == 3)) {
    uVar7 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_060f078c(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x158) = 1;
    }
  }
  iVar2 = *param_2;
  iVar3 = FUN_037dbfdc(param_1,*(undefined8 *)puVar1);
  if ((iVar2 == iVar3) && (param_2[4] == 5)) {
    uVar7 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_060f078c(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 200);
      uVar4 = FUN_037dbfdc(param_1,*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        FUN_037d9938(lVar6,uVar4,*(undefined8 *)UnityEngine_Rendering_STP_PerViewConfig___TypeInfo);
        return;
      }
      goto LAB_0529b614;
    }
  }
  return;
}



/*
FUNCTION_NAME: FUN_0529a1dc
ENTRY_POINT: 0529a1dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_0529a1dc(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 local_6c [2];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  if ((DAT_06bbacd7 & 1) == 0) {
    FUN_02f08768(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_02f08768(OVRPlugin_SpaceComponentType___TypeInfo);
    DAT_06bbacd7 = 1;
  }
  puVar1 = OVRPlugin_BoneCapsule___TypeInfo;
  plVar9 = *(long **)(param_1 + 0xc0);
  if (plVar9 == (long *)0x0) {
    uVar5 = FUN_060ed7ac(param_1,0);
    FUN_052c2324(&local_50,uVar5,0,0);
    uVar3 = 1;
    param_3[1] = CONCAT44(uStack_44,uStack_48);
    *param_3 = local_50;
    *(undefined8 *)((long)param_3 + 0x14) = uStack_3c;
    *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_40,uStack_44);
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = FUN_037dbfdc(param_2,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_052c2324(local_6c,*(undefined8 *)(param_2 + 0x130),0,0);
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_0529a2fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,5);
LAB_0529a2fc:
    local_50 = local_6c[0];
    uStack_3c = uStack_58;
    uVar3 = (*(code *)*puVar4)(plVar9,uVar2,&local_50,param_3,puVar4[1]);
  }
  return uVar3 & 1;
}



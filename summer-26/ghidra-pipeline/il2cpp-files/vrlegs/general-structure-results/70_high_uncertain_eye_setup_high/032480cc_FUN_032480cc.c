/*
FUNCTION_NAME: FUN_032480cc
ENTRY_POINT: 032480cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_032480cc(long param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  undefined8 local_48;
  
  if ((DAT_0412c771 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Bone___TypeInfo);
    DAT_0412c771 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x10);
    local_48 = *(undefined8 *)(param_3 + 0x18);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_48);
    uVar3 = local_48;
    puVar2 = OVRPlugin_Bone___TypeInfo;
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar9 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar5 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar5 == 0) || (plVar8 = *(long **)(lVar5 + 0x18), plVar8 == (long *)0x0)) break;
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_032481bc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_032481bc:
        (*(code *)*puVar4)(plVar8,CONCAT44(param_2,uVar1),uVar3,puVar4[1]);
        lVar5 = *(long *)(param_1 + 0x20);
        uVar9 = uVar9 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



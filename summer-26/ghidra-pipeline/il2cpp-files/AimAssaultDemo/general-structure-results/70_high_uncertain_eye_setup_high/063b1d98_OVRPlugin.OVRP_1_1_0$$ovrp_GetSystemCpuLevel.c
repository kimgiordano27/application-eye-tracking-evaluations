/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemCpuLevel
ENTRY_POINT: 063b1d98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_07db70c0;
  puVar2 = PTR_DAT_07db6f98;
  if ((DAT_0825c6d1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db70c0);
    FUN_0373b518(PTR_DAT_07db6f98);
    FUN_0373b518(PTR_DAT_07db70c8);
    DAT_0825c6d1 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
  FUN_062855bc(lVar4,0);
  lVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_062855bc(lVar5,0);
  *(undefined8 *)(lVar5 + 0x20) = param_2;
  thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20),param_2);
  *(undefined1 *)(lVar5 + 0x28) = 2;
  *(undefined1 *)(lVar5 + 0x30) = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = lVar5;
    thunk_FUN_037aeb94((long *)(lVar4 + 0x10),lVar5);
    *(long *)(lVar4 + 0x18) = param_3;
    thunk_FUN_037aeb94((long *)(lVar4 + 0x18),param_3);
    if (lVar8 != 0) {
      lVar5 = *(long *)(lVar8 + 0x10);
      lVar7 = *(long *)PTR_DAT_07db70c8;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar4;
          thunk_FUN_037aeb94(plVar6,lVar4);
        }
        else {
          FUN_049ceef4(lVar8,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (param_3 != 0) {
          *(long *)(param_3 + 0x10) = param_1;
          thunk_FUN_037aeb94((long *)(param_3 + 0x10),param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



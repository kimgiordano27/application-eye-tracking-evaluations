/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardTextureData
ENTRY_POINT: 07caf3fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardTextureData(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e538);
    FUN_04447ba8(PTR_DAT_09f32a58);
    *(undefined1 *)(unaff_x20 + 0xac6) = 1;
  }
  if ((*(long *)(param_2 + 0x40) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_2 + 0x40) + 0x18), lVar3 != 0)) {
    uVar4 = 0;
    fVar6 = 0.0;
    uVar2 = 0xffffffff;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) {
        if (uVar2 != 0xffffffff) {
          lVar3 = *(long *)(param_2 + 0x28);
          if (lVar3 == 0) break;
          if ((int)uVar2 < (int)*(uint *)(lVar3 + 0x18)) {
            if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_07caf500;
            uVar5 = *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar4 = FUN_09531730(uVar5,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(param_2 + 0x20) != 0) {
                FUN_094e9b40(*(long *)(param_2 + 0x20),*(undefined8 *)PTR_DAT_09f32a58,uVar5,0);
                return;
              }
              break;
            }
          }
        }
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_07caf500:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      fVar7 = *(float *)(lVar3 + 0x20 + uVar4 * 4);
      uVar1 = (uint)uVar4;
      if (fVar7 <= fVar6) {
        uVar1 = uVar2;
        fVar7 = fVar6;
      }
      fVar6 = fVar7;
      uVar4 = uVar4 + 1;
      uVar2 = uVar1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkAdapter$$set_NetworkData
ENTRY_POINT: 05633890
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__set_NetworkData
               (long param_1,uint param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0)) {
    if (param_2 < *(uint *)(lVar4 + 0x18)) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
      lVar7 = (long)(int)param_2;
      lVar5 = lVar4 + lVar7 * 0x28;
      *(int *)(lVar5 + 0x20) = param_3;
      uVar10 = param_4[1];
      uVar9 = *param_4;
      uVar8 = param_4[2];
      *(undefined8 *)(lVar5 + 0x40) = param_4[3];
      *(undefined8 *)(lVar5 + 0x38) = uVar8;
      *(undefined8 *)(lVar5 + 0x30) = uVar10;
      *(undefined8 *)(lVar5 + 0x28) = uVar9;
      if (param_2 < *(uint *)(lVar4 + 0x18)) {
        thunk_FUN_0333a630(lVar4 + lVar7 * 0x28 + 0x40,0);
        lVar4 = *(long *)(param_1 + 0x18);
        if ((lVar4 == 0) || (lVar5 = *(long *)(param_1 + 0x10), lVar5 == 0)) goto LAB_0563395c;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = param_3 / iVar1;
        }
        uVar2 = param_3 - iVar3 * iVar1;
        if ((uVar2 < *(uint *)(lVar5 + 0x18)) && (param_2 < *(uint *)(lVar4 + 0x18))) {
          piVar6 = (int *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
          *(int *)(lVar4 + lVar7 * 0x28 + 0x24) = *piVar6 + -1;
          *piVar6 = param_2 + 1;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_0563395c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



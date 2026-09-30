/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox3D
ENTRY_POINT: 02c556ac
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox3D(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((param_2 != 0) && (lVar3 = *(long *)(param_1 + 0x18), lVar3 != 0)) {
    iVar4 = *(int *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    if ((int)uVar5 < iVar4) {
LAB_02c5577c:
      thunk_FUN_01851c08(PTR_DAT_037f4600);
      uVar5 = thunk_FUN_01861bbc();
      FUN_02c04f30(uVar5,0);
      uVar2 = thunk_FUN_01851c08(PTR_DAT_0380cc90);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar2);
    }
    iVar6 = *(int *)(param_2 + 0x18);
    do {
      iVar1 = (int)uVar5 - iVar4;
      if (iVar6 <= iVar1) {
        iVar1 = iVar6;
      }
      FUN_02bf1608(param_2,0,lVar3,iVar4,iVar1,0);
      lVar3 = *(long *)(param_1 + 0x18);
      iVar4 = iVar1 + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar4;
      if (lVar3 == 0) goto LAB_02c557b0;
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      iVar6 = iVar6 - iVar1;
      if ((int)uVar5 < iVar4) goto LAB_02c5577c;
      if (iVar4 == (int)uVar5) {
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    } while (0 < iVar6);
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x28) + (float)*(int *)(param_2 + 0x18) / DAT_009a62dc;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = FUN_033b4cc8(*(long *)(param_1 + 0x10),0), lVar3 != 0)) {
      FUN_033b40c4(lVar3,*(undefined8 *)(param_1 + 0x18),0,0);
      return;
    }
  }
LAB_02c557b0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}



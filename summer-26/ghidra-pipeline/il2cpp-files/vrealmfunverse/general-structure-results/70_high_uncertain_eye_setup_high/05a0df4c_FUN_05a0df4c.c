/*
FUNCTION_NAME: FUN_05a0df4c
ENTRY_POINT: 05a0df4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05a0df4c(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar4 = Method_UnityEngine_Component_GetComponent<OVRManager>__;
  if ((DAT_066d3ced & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
                    /* try { // try from 05a0dfa4 to 05b0dfbb has its CatchHandler @ 05a0e680 */
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<OVRMesh>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__);
                    /* try { // try from 05a0dfc8 to 05b0dfdf has its CatchHandler @ 05a0e684 */
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    DAT_066d3ced = 1;
  }
  lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_04dbdb8c(lVar7,0);
  puVar5 = Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__;
  puVar4 = Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__;
  if (lVar7 != 0) {
                    /* try { // try from 05a0dfec to 05b0e003 has its CatchHandler @ 05a0e688 */
    lVar12 = *(long *)(param_2 + 0x10);
    *(undefined4 *)(lVar7 + 0x10) = param_3;
    *(undefined4 *)(lVar7 + 0x14) = param_4;
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                    /* try { // try from 05a0e010 to 05b0e027 has its CatchHandler @ 05a0e67c */
    FUN_03bfe598(uVar8,lVar7,*(undefined8 *)puVar5,0);
    if (lVar12 != 0) {
      iVar6 = FUN_037a6d8c(lVar12,uVar8,
                           *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRMesh>__);
      if (iVar6 != -1) {
        return 0xffffffff;
      }
      lVar12 = *(long *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(lVar7 + 0x10);
      uVar2 = *(undefined4 *)(lVar7 + 0x14);
      lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
      FUN_04dbdb8c(lVar7,0);
      *(undefined4 *)(lVar7 + 0x10) = uVar1;
      *(undefined4 *)(lVar7 + 0x24) = uVar2;
      *(undefined4 *)(lVar7 + 0x38) = param_1;
      if (lVar12 != 0) {
        lVar10 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)Method_UnityEngine_Component_GetComponent<OVRGrabbable>__;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            plVar9 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
            *plVar9 = lVar7;
            thunk_FUN_02bb0e9c(plVar9,lVar7);
          }
          else {
            FUN_037a6538(lVar12,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



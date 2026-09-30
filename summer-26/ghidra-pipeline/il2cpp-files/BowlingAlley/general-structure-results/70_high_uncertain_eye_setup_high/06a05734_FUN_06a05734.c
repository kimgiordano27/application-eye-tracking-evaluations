/*
FUNCTION_NAME: FUN_06a05734
ENTRY_POINT: 06a05734
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06a059b4) */

void FUN_06a05734(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_076e289a & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_032e1da0(Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    DAT_076e289a = 1;
  }
  if (param_1[7] == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727b6f8);
    uVar7 = thunk_FUN_032a56a0();
    FUN_05925ec0(uVar7,0);
    uVar8 = thunk_FUN_032e1da0(Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,uVar8);
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar9 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_06a05800;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_032937ac(plVar5,*(long *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__,0);
LAB_06a05800:
  puVar1 = PTR_DAT_07279f60;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar3 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
  puVar2 = PTR_DAT_0727a180;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  do {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06a05878;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar2,0);
LAB_06a05878:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer__get_scaleMode;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06a058d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar3,0);
LAB_06a058d4:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8(0,uVar4);
    }
    FUN_06bb09f8(param_1[4],uVar4,param_1[7],0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer__set_fixedScale;
    }
  }
UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer__get_scaleMode:
  puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar1,0);
UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer__set_fixedScale:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}



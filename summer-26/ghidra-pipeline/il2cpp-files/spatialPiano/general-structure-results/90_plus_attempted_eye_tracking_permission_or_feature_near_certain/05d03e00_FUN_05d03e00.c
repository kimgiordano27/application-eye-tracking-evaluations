/*
FUNCTION_NAME: FUN_05d03e00
ENTRY_POINT: 05d03e00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d03e00(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined8 local_75;
  undefined5 uStack_6d;
  undefined3 uStack_68;
  undefined5 uStack_65;
  undefined8 local_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  long local_48;
  
  puVar2 = PTR_DAT_067c9340;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc35dc & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9340);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                );
    DAT_06bc35dc = 1;
  }
  puVar3 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
  uStack_58 = 0;
  local_60 = 0;
  uStack_53 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_0610dca8(0);
  plVar5 = (long *)thunk_FUN_02f45174(uVar4,*(undefined8 *)puVar3);
  if (plVar5 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_05d03fa8;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar8 = *plVar5;
    lVar7 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass__InitPassData;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(plVar5,lVar7,0);
UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass__InitPassData:
    (*(code *)*puVar6)(&local_78,plVar5,puVar6[1]);
    uStack_58 = uStack_6d;
    local_60 = local_75;
    uStack_53 = uStack_68;
    uStack_50 = uStack_65;
    if (DAT_06bc363e == '\0') {
      FUN_02f08768(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__);
      DAT_06bc363e = '\x01';
    }
    puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__;
    *(undefined1 *)param_1 = local_78;
    *(undefined1 *)((long)param_1 + 1) = local_77;
    lVar7 = *(long *)puVar2;
    *(ulong *)((long)param_1 + 0xb) = CONCAT35(uStack_53,uStack_58);
    *(undefined8 *)((long)param_1 + 3) = local_60;
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 9) != '\0') {
      local_76 = 1;
    }
    *(undefined1 *)((long)param_1 + 2) = local_76;
    param_1[2] = CONCAT53(uStack_50,uStack_53);
    if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_05d03fa8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}



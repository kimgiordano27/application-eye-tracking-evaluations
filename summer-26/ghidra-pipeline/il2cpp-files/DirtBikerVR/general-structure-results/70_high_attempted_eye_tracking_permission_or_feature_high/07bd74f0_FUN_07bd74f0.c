/*
FUNCTION_NAME: FUN_07bd74f0
ENTRY_POINT: 07bd74f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_1
*/


undefined8 FUN_07bd74f0(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  int local_34;
  
  puVar1 = PTR_DAT_08486738;
  if ((DAT_08992dd5 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486738);
    DAT_08992dd5 = 1;
  }
  lVar2 = FUN_07bd1688(0);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar7);
  }
  uVar3 = FUN_07c9e200(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) {
LAB_07bd7660:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar3 = 0;
      uVar8 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        plVar11 = *(long **)(lVar2 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar8 = FUN_07c9e200(plVar11,0,0);
        if ((uVar8 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_07bd7660;
          uVar8 = FUN_07bd1ac4(plVar11);
          if ((uVar8 & 1) != 0) {
            if (param_2 < 2) {
              if (param_2 == 0) {
                puVar9 = (undefined8 *)(*plVar11 + 0x188);
                puVar10 = (undefined8 *)(*plVar11 + 400);
              }
              else {
                if (param_2 != 1) {
UnityEngine_Rendering_RenderPipelineAsset__get_defaultLineMaterial:
                  local_34 = param_2;
                  uVar4 = thunk_FUN_03af1434(OVREyeGaze_TypeInfo);
                  uVar4 = thunk_FUN_03ac70f4(uVar4,&local_34);
                  thunk_FUN_03af1434(PTR_DAT_08491280);
                  uVar5 = thunk_FUN_03ac74bc();
                  uVar6 = thunk_FUN_03af1434(PTR_DAT_084936d8);
                  FUN_066b4278(uVar5,uVar6,uVar4,0,0);
                  uVar4 = thunk_FUN_03af1434(OVRFaceExpressions_TypeInfo);
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a884(uVar5,uVar4);
                }
                puVar9 = (undefined8 *)(*plVar11 + 0x1b8);
                puVar10 = (undefined8 *)(*plVar11 + 0x1c0);
              }
            }
            else if (param_2 == 2) {
              puVar9 = (undefined8 *)(*plVar11 + 0x198);
              puVar10 = (undefined8 *)(*plVar11 + 0x1a0);
            }
            else {
              if (param_2 != 3)
              goto UnityEngine_Rendering_RenderPipelineAsset__get_defaultLineMaterial;
              puVar9 = (undefined8 *)(*plVar11 + 0x1a8);
              puVar10 = (undefined8 *)(*plVar11 + 0x1b0);
            }
            (*(code *)*puVar9)(plVar11,*puVar10);
          }
        }
        uVar8 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
  }
  return 1;
}



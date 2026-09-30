/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 033c3174
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetTrackingOriginType(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
  if ((DAT_044a6996 & 1) == 0) {
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a6996 = 1;
  }
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (param_1 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar4 = thunk_FUN_01de27b8();
                    /* try { // try from 033c33bc to 034c33db has its CatchHandler @ 033c39f8 */
    uVar8 = thunk_FUN_01dd295c(StringLiteral_1240);
    FUN_032870b8(uVar4,uVar8,0);
    uVar8 = thunk_FUN_01dd295c(StringLiteral_8818);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar4,uVar8);
  }
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(param_3 + 0x18);
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  if ((int)uVar6 < 1) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    uVar10 = 0;
    do {
      if (uVar6 <= uVar10) goto LAB_033c3354;
      plVar11 = (long *)(param_1 + (long)(int)uVar10 * 8 + 0x20);
      plVar2 = (long *)*plVar11;
      if (plVar2 == (long *)0x0) {
LAB_033c3350:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (0 < (int)uVar9) {
        if (lVar3 == 0) goto LAB_033c3350;
        uVar6 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_033c3354;
          plVar2 = *(long **)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
          if ((plVar2 == (long *)0x0) ||
             (uVar4 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0)),
             param_3 == 0)) goto LAB_033c3350;
          if (*(uint *)(param_3 + 0x18) <= uVar6) goto LAB_033c3354;
          uVar8 = *(undefined8 *)(param_3 + (long)(int)uVar6 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar5 = FUN_033ab18c(uVar4,uVar8,0);
          if ((uVar5 & 1) != 0) goto LAB_033c3314;
          uVar6 = uVar6 + 1;
        } while (uVar9 != uVar6);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar5 = FUN_033ab18c(uStack0000000000000008,0,0);
      if ((uVar5 & 1) == 0) {
LAB_033c32f0:
        uVar5 = FUN_033087ec(lVar7,0,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar4 = FUN_033d6e4c(uVar4,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar8 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar8,uVar4,0);
          uVar4 = thunk_FUN_01dd295c(StringLiteral_8818);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar8,uVar4);
        }
        if (*(uint *)(param_1 + 0x18) <= uVar10) {
LAB_033c3354:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar7 = *plVar11;
      }
      else {
        if (*(uint *)(param_1 + 0x18) <= uVar10) goto LAB_033c3354;
        plVar2 = (long *)*plVar11;
        if (plVar2 == (long *)0x0) goto LAB_033c3350;
        uVar4 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar1);
        }
        uVar5 = FUN_033ab18c(uStack0000000000000008,uVar4,0);
        if ((uVar5 & 1) == 0) goto LAB_033c32f0;
      }
LAB_033c3314:
      uVar6 = *(uint *)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar6);
  }
  return lVar7;
}



/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem.MetaOpenXRProvider$$TryRequestSceneCapture
ENTRY_POINT: 05ea3c38
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_5
*/


void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider__TryRequestSceneCapture
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int in_w9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  lVar3 = (**(code **)(param_1 + (long)(in_w9 + 2) * 0x10 + 0x138))();
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_00000348_PostfixBurstDelegate>__
  ;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_05ea3cb8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05ea3cb8:
      lVar3 = (*(code *)*puVar4)();
      if (lVar3 == 0) break;
      FUN_03aac1c4(lVar3,iVar1,*(undefined8 *)puVar2);
      (**(code **)(*unaff_x20 + 1000))();
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



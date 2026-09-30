/*
FUNCTION_NAME: FUN_05d73400
ENTRY_POINT: 05d73400
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_05d73400(undefined8 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  int local_44;
  
  puVar6 = 
  Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_CreateSubsystem<XRSessionSubsystemDescriptor,_XRSessionSubsystem>__
  ;
  puVar5 = 
  Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_CreateSubsystem<XRRaycastSubsystemDescriptor,_XRRaycastSubsystem>__
  ;
  if ((DAT_06bc39e4 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_CreateSubsystem<XRRaycastSubsystemDescriptor,_XRRaycastSubsystem>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_CreateSubsystem<XRSessionSubsystemDescriptor,_XRSessionSubsystem>__
                );
    DAT_06bc39e4 = 1;
  }
  local_44 = 0x10;
  uVar7 = FUN_033453f4(param_2,&local_44,*(undefined8 *)puVar5);
  uVar10 = *(undefined8 *)puVar6;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = 6 / (int)param_3;
  }
  iVar2 = 1 << (ulong)(param_3 & 0x1f);
  param_1[1] = uVar7;
  uVar1 = param_2;
  if ((int)uVar3 <= (int)param_2) {
    uVar1 = uVar3;
  }
  iVar4 = 0;
  if (iVar2 + -1 != 0) {
    iVar4 = ((iVar2 << (ulong)((param_2 - uVar3 & ((int)(param_2 - uVar3) >> 0x1f ^ 0xffffffffU)) *
                               param_3 & 0x1f)) - iVar2) / (iVar2 + -1);
  }
  uVar7 = FUN_03345494(iVar4 + uVar1,&local_44,uVar10);
  uVar10 = *(undefined8 *)puVar5;
  param_1[2] = uVar7;
  uVar7 = FUN_033453f4(iVar4 + uVar1,&local_44,uVar10);
  param_1[3] = uVar7;
  uVar7 = FUN_0609d330((long)local_44,0x40,param_4,0);
  *param_1 = uVar7;
  FUN_0609d540(uVar7,(long)local_44,0);
  *(undefined4 *)(param_1 + 4) = param_4;
  if ((DAT_06bc39de & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_CreateSubsystem<XRHandSubsystemDescriptor,_XRHandSubsystem>__
                );
    DAT_06bc39de = 1;
  }
  puVar11 = (uint *)*param_1;
  *puVar11 = param_3;
  puVar11[1] = param_2;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar8 = (undefined8 *)FUN_05d73160(param_1,0);
  *puVar8 = 0xf;
  puVar9 = (undefined4 *)FUN_05d730c8(param_1);
  *puVar9 = 1;
  return;
}



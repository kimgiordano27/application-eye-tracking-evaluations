/*
FUNCTION_NAME: FUN_056f70a4
ENTRY_POINT: 056f70a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_056f70a4(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined4 local_54;
  
  if ((DAT_06b7fbef & 1) == 0) {
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_ARRenderingUtils_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARFoundation_ARRaycastManager_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    FUN_02d6084c(PTR_DAT_06764da0);
    DAT_06b7fbef = 1;
  }
  puVar7 = UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_TypeInfo;
  puVar6 = UnityEngine_XR_ARFoundation_ARRaycastManager_TypeInfo;
  if (param_1 != 0) {
    uVar8 = FUN_04e87a5c(param_1,param_2 + 1,0);
    uVar9 = FUN_04e87a5c(param_1,param_2 + 2,0);
    iVar2 = param_2 + 3;
    iVar1 = iVar2 + (uint)uVar8;
    lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
    FUN_03bf8c64(lVar13,uVar8,*(undefined8 *)puVar7);
    puVar6 = UnityEngine_XR_ARSubsystems_ARRenderingUtils_TypeInfo;
    puVar4 = (undefined8 *)PTR_DAT_06764da0;
    plVar5 = (long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
    while( true ) {
      PTR_DAT_06764da0 = (undefined *)puVar4;
      UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo = (undefined *)plVar5;
      if (iVar1 <= iVar2) {
        if ((int)(iVar1 + (uint)uVar9) < *(int *)(param_1 + 0x10)) {
          if (*(int *)(*plVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar14 = FUN_056f70a4(param_1,iVar1 + (uint)uVar9);
        }
        else {
          uVar14 = 0;
        }
        sVar10 = FUN_04e87a5c(param_1,param_2,0);
        uVar15 = System_Globalization_SortKey___ctor(param_1,iVar1,uVar9,0);
        uVar16 = thunk_FUN_02d9d534(*puVar4);
        FUN_04e96490(uVar16,uVar15,0);
        uVar15 = thunk_FUN_02d9d534(*plVar5);
        FUN_056f5534(uVar15,sVar10 == 1,lVar13,uVar16,uVar14);
        return uVar15;
      }
      uVar11 = FUN_04e87a5c(param_1,iVar2,0);
      if (iVar2 + 1 < iVar1) {
        iVar12 = FUN_04e87a5c(param_1,iVar2 + 1,0);
        iVar12 = iVar12 + -1;
      }
      else {
        iVar12 = 0xffff;
      }
      local_54 = 0;
      FUN_056fdba8(&local_54,uVar11,iVar12,0);
      if (lVar13 == 0) break;
      lVar17 = *(long *)(lVar13 + 0x10);
      lVar18 = *(long *)puVar6;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar17 == 0) break;
      uVar3 = *(uint *)(lVar13 + 0x18);
      if (uVar3 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar17 + (long)(int)uVar3 * 4 + 0x20) = local_54;
      }
      else {
        FUN_03bf944c(lVar13,local_54,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
      iVar2 = iVar2 + 2;
      puVar4 = (undefined8 *)PTR_DAT_06764da0;
      plVar5 = (long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



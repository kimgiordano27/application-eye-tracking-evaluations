/*
FUNCTION_NAME: FUN_058f07d8
ENTRY_POINT: 058f07d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_9;telemetry_or_network_hits_4
*/


void FUN_058f07d8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_06b80c08 & 1) == 0) {
    FUN_02d6084c(System_Xml_Schema_XsdDateTime_TypeInfo);
    FUN_02d6084c(OVR_OpenVR_IVROverlay__SetOverlayInputMethod_TypeInfo);
    FUN_02d6084c(
                UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_067685f0);
    FUN_02d6084c(PTR_DAT_067685f8);
    FUN_02d6084c(PTR_DAT_06768600);
    FUN_02d6084c(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(PTR_DAT_0675ee10);
    FUN_02d6084c(PTR_DAT_06768610);
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_fsResult_TypeInfo);
    FUN_02d6084c(UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_TypeInfo);
    FUN_02d6084c(UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_TypeInfo);
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo);
    FUN_02d6084c(UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_TypeInfo);
    DAT_06b80c08 = 1;
  }
  puVar2 = PTR_DAT_06768438;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  plVar10 = (long *)(param_1 + 0x20);
  if (*plVar10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06768438 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    puVar6 = UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_TypeInfo;
    plVar12 = (long *)FUN_058566e4(*(undefined8 *)
                                    UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_TypeInfo
                                   ,0);
    if (plVar12 == (long *)0x0) {
LAB_058f0950:
      plVar12 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                       + 0x130);
      if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_058f0950;
      if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo) {
        plVar12 = (long *)0x0;
      }
    }
    *plVar10 = (long)plVar12;
    thunk_FUN_02dd37b4(plVar10);
    if (*plVar10 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar11 = FUN_03461ec4(*(undefined8 *)puVar6,
                            *(undefined8 *)
                             UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_TypeInfo
                           );
      *plVar10 = lVar11;
      thunk_FUN_02dd37b4(plVar10,lVar11);
    }
  }
  else {
    uVar8 = FUN_058523bc(*plVar10,0);
    if ((uVar8 & 1) == 0) {
      lVar11 = *plVar10;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05856558(lVar11,0);
    }
  }
  plVar12 = (long *)(param_1 + 0x48);
  if (*plVar12 == 0) {
    if (*plVar10 == 0) goto LAB_058f0b94;
    lVar11 = FUN_02d60934(*(undefined8 *)
                           UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_TypeInfo
                          ,*(undefined4 *)(*plVar10 + 0x1cc));
    *plVar12 = lVar11;
    thunk_FUN_02dd37b4(plVar12,lVar11);
  }
  plVar12 = (long *)(param_1 + 0x50);
  if (*plVar12 == 0) {
    if (*plVar10 == 0) {
LAB_058f0b94:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar11 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675ee10,*(undefined4 *)(*plVar10 + 0x1cc));
    *plVar12 = lVar11;
    thunk_FUN_02dd37b4(plVar12,lVar11);
  }
  puVar6 = PTR_DAT_06768610;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar5 = PTR_DAT_06768600;
  puVar4 = PTR_DAT_067685f8;
  puVar3 = PTR_DAT_067685f0;
  local_68 = FUN_05855934(0);
  FUN_03fcdd84(&local_58,local_68,*(undefined8 *)puVar6);
  while( true ) {
    uVar8 = FUN_04a7bd90(&local_58,*(undefined8 *)puVar4);
    if ((uVar8 & 1) == 0) break;
    uVar9 = FUN_04a7bdbc(&local_58,*(undefined8 *)puVar5);
    FUN_058f068c(param_1,uVar9,0);
  }
  FUN_04a7bd8c(&local_58,*(undefined8 *)puVar3);
  plVar10 = (long *)(param_1 + 0x60);
  if (*plVar10 == 0) {
    uVar9 = thunk_FUN_02d9d534(*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayInputMethod_TypeInfo)
    ;
    FUN_047d9fa8(uVar9,param_1,
                 *(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x60) = uVar9;
    thunk_FUN_02dd37b4(plVar10,uVar9);
  }
  plVar12 = (long *)(param_1 + 0x68);
  if (*plVar12 == 0) {
    uVar9 = thunk_FUN_02d9d534(*(undefined8 *)System_Xml_Schema_XsdDateTime_TypeInfo);
    FUN_047d8e58(uVar9,param_1,
                 *(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x68) = uVar9;
    thunk_FUN_02dd37b4(plVar12,uVar9);
  }
  lVar11 = *plVar10;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05855a34(lVar11,0);
  uVar9 = FUN_05857760(0);
  uVar7 = FUN_058f0c04(uVar9,*plVar12);
  FUN_05857768(uVar7,0);
  return;
}



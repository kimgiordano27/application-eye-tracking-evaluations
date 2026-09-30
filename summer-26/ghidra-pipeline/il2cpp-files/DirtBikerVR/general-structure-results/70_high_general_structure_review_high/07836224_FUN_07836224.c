/*
FUNCTION_NAME: FUN_07836224
ENTRY_POINT: 07836224
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_07836224(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_48;
  
  if ((DAT_08987477 & 1) == 0) {
    FUN_03a8a718(System_Func<ATGTextJobSystem_ManagedJobData>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_PrimitiveType>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<Transform,_UpdateTracker_UpdateStatus>_TypeInfo
                );
    FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_084a12e8);
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084a12f0);
    FUN_03a8a718(PTR_DAT_084931a8);
    FUN_03a8a718(System_Func<TextInfo>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491c28);
    FUN_03a8a718(PTR_DAT_08491c38);
    FUN_03a8a718(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_03a8a718(System_Func<Allocator2D_Row>_TypeInfo);
    FUN_03a8a718(System_Func<BestFitAllocator_Block>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08493188);
    FUN_03a8a718(TMPro_FastAction<Object>_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    FUN_03a8a718(System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo);
    FUN_03a8a718(System_Func<VectorImageRenderInfo>_TypeInfo);
    FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
    DAT_08987477 = 1;
  }
  puVar1 = System_Collections_Generic_Dictionary<Transform,_UpdateTracker_UpdateStatus>_TypeInfo;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 10);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar3,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    uVar13 = *(undefined8 *)PTR_DAT_08493188;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    puVar2 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar13,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    uVar13 = FUN_0675ff58(*(undefined8 *)PTR_DAT_084931a8,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    *(long *)(param_1 + 0xe) = lVar3;
    thunk_FUN_03afed3c(param_1 + 0xe,lVar3);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar13 = FUN_07834888(lVar10);
    lVar3 = FUN_077e0ec4(uVar12,uVar13,0);
    lVar7 = *(long *)(param_1 + 0xc);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar13 = *(undefined8 *)(lVar7 + 0x10);
    uVar12 = *(undefined8 *)(lVar7 + 0x18);
    plVar11 = *(long **)(lVar10 + 0x10);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a12f0);
                    /* try { // try from 07836478 to 07936623 has its CatchHandler @ 07836478
                       catch() { ... } // from try @ 07836478 with catch @ 07836478
                       catch() { ... } // from try @ 07836f90 with catch @ 07836478
                       catch() { ... } // from try @ 0783702c with catch @ 07836478
                       catch() { ... } // from try @ 07837034 with catch @ 07836478
                       catch() { ... } // from try @ 07837084 with catch @ 07836478
                       catch() { ... } // from try @ 0783716c with catch @ 07836478 */
    FUN_05f9f7c4(uVar4,*(undefined8 *)PTR_DAT_084a12e8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = 10;
    if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
      uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar3 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Func<TextInfo>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07836504;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)System_Func<TextInfo>_TypeInfo,0);
LAB_07836504:
    lVar3 = (*(code *)*puVar5)(plVar11,uVar12,uVar13,0,uVar4,uVar6,puVar5[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_48 = FUN_058b71ec(lVar3,*(undefined8 *)
                                   System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                           );
    uVar8 = FUN_0587c6c4(&local_48,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      thunk_FUN_03afed3c(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fdcf50(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)System_Func<ATGTextJobSystem_ManagedJobData>_TypeInfo);
      return;
    }
  }
  uVar13 = FUN_0587c704(&local_48,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
  uVar12 = FUN_04718284(uVar13,*(undefined8 *)(param_1 + 0xe),
                        *(undefined8 *)System_Func<VisualElementFocusChangeTarget>_TypeInfo);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Func<BestFitAllocator_Block>_TypeInfo);
  FUN_0575071c(uVar4,uVar13,uVar12,*(undefined8 *)System_Func<Allocator2D_Row>_TypeInfo);
  puVar2 = System_Collections_Generic_Dictionary<Type,_PrimitiveType>_TypeInfo;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  thunk_FUN_03afed3c(param_1 + 0xe,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar4,*(undefined8 *)puVar2);
  return;
}



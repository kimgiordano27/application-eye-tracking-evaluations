/*
FUNCTION_NAME: FUN_05531f44
ENTRY_POINT: 05531f44
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_18;telemetry_or_network_hits_6
*/


void FUN_05531f44(long param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *local_68;
  
  if ((DAT_06b7ef80 & 1) == 0) {
    FUN_02d6084c(
                System_Collections_Generic_Dictionary<VRUIPManager_ColorThemeMode,_ColorTheme>_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_067649b8);
    FUN_02d6084c(
                System_Collections_Generic_Dictionary<fsPortableReflection_AttributeQuery,_Attribute>_TypeInfo
                );
                    /* try { // try from 05531f9c to 05631faf has its CatchHandler @ 05531fb0 */
    FUN_02d6084c(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05531f9c with catch @ 05531fb0
                       try { // try from 05531fb0 to 05631fcb has its CatchHandler @ 05531eb4 */
    FUN_02d6084c(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05531f14 with catch @ 05531fb4
                        */
    FUN_02d6084c(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
                );
    FUN_02d6084c(UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
                    /* try { // try from 05531fcc to 05631fe3 has its CatchHandler @ 05532050 */
    FUN_02d6084c(UnityEngine_Rendering_DynamicArray<Name>_TypeInfo);
    FUN_02d6084c(TMPro_FloatTween_var);
                    /* try { // try from 05531fe4 to 0563203f has its CatchHandler @ 05531eb4 */
    FUN_02d6084c(PTR_DAT_0676bc98);
    DAT_06b7ef80 = 1;
  }
  puVar5 = UnityEngine_Rendering_DynamicArray<Name>_TypeInfo;
  local_68 = (long *)0x0;
  if (param_3 == 0) {
    FUN_05532324();
  }
  else {
    puVar1 = (undefined8 *)
             System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
    ;
    puVar2 = (undefined8 *)
             System_Collections_Generic_Dictionary<fsPortableReflection_AttributeQuery,_Attribute>_TypeInfo
    ;
    plVar3 = (long *)TMPro_FloatTween_var;
    plVar4 = (long *)PTR_DAT_0676bc98;
    if (**(long **)(*(long *)UnityEngine_Rendering_DynamicArray<Name>_TypeInfo + 0xb8) == 0) {
      uVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<VRUIPManager_ColorThemeMode,_ColorTheme>_TypeInfo
                                );
      FUN_04cf8ef8(uVar7,0,*(undefined8 *)
                            UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo,0);
      uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
                                );
      FUN_04636f7c(uVar8,uVar7,0x20,
                   *(undefined8 *)
                    UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                  );
      FUN_02d99e8c(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar8,0);
      puVar1 = (undefined8 *)
               System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
      ;
      puVar2 = (undefined8 *)
               System_Collections_Generic_Dictionary<fsPortableReflection_AttributeQuery,_Attribute>_TypeInfo
      ;
      plVar3 = (long *)TMPro_FloatTween_var;
      plVar4 = (long *)PTR_DAT_0676bc98;
    }
    do {
      if (**(long **)(*(long *)puVar5 + 0xb8) == 0) goto LAB_05532214;
      uVar9 = FUN_04636ff4(**(long **)(*(long *)puVar5 + 0xb8),param_1,param_2,param_3,&local_68,
                           *puVar1);
      if ((uVar9 & 1) == 0) {
        lVar11 = *plVar3;
        if (lVar11 == 0) {
LAB_05532214:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if ((*(int *)(lVar11 + 0x10) == param_3) &&
           (iVar6 = FUN_04e8b464(param_1,param_2,lVar11,0,param_3,0), iVar6 == 0)) {
          FUN_0553263c();
          return;
        }
        lVar11 = *plVar4;
        if (lVar11 == 0) goto LAB_05532214;
        if ((*(int *)(lVar11 + 0x10) == param_3) &&
           (iVar6 = FUN_04e8b464(param_1,param_2,lVar11,0,param_3,0), iVar6 == 0)) {
          FUN_0553269c();
          return;
        }
        if (param_1 == 0) goto LAB_05532214;
        lVar11 = **(long **)(*(long *)puVar5 + 0xb8);
        uVar7 = System_Globalization_SortKey___ctor(param_1,param_2,param_3,0);
        uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_05532440(uVar8,uVar7);
        uVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067649b8);
        FUN_05060a68(uVar7,uVar8,0);
        if (lVar11 == 0) goto LAB_05532214;
        local_68 = (long *)FUN_04637018(lVar11,uVar7,*puVar2);
        plVar10 = (long *)0x0;
        if (local_68 != (long *)0x0) goto LAB_055321b8;
      }
      else if (local_68 == (long *)0x0) {
        plVar10 = (long *)0x0;
      }
      else {
LAB_055321b8:
        plVar10 = (long *)(**(code **)(*local_68 + 0x198))
                                    (local_68,*(undefined8 *)(*local_68 + 0x1a0));
        if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88();
        }
      }
    } while (plVar10 == (long *)0x0);
  }
  return;
}



/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$SetupColorGrading
ENTRY_POINT: 0663fa0c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Universal_PostProcessPass__SetupColorGrading(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *unaff_x20;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x5b0));
                    /* try { // try from 0663fa18 to 0673fa1b has its CatchHandler @ 0663fa7c */
                    /* try { // try from 0663fa1c to 0673fa83 has its CatchHandler @ 0663f3a4 */
  FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xb8e) = 1;
  puVar2 = PTR_DAT_06f7b348;
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar5 = *unaff_x20;
  }
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar2);
  }
  FUN_03dbda3c(uVar9,*(undefined8 *)puVar1);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0xb8);
                    /* catch() { ... } // from try @ 0663fa18 with catch @ 0663fa7c */
  if (*(long *)(lVar7 + 0x10) != 0) {
                    /* try { // try from 0663fa84 to 0673fa8b has its CatchHandler @ 0663faa0 */
    iVar3 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
                    /* try { // try from 0663fa8c to 0673fa97 has its CatchHandler @ 0663f3a4 */
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar5 = *unaff_x20;
                    /* try { // try from 0663fa98 to 0673fa9f has its CatchHandler @ 0663faa0 */
      lVar7 = *(long *)(lVar5 + 0xb8);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0663fa84 with catch @ 0663faa0
                       catch(type#2 @ 00000000) { ... } // from try @ 0663fa98 with catch @ 0663faa0
                        */
    if (iVar3 < 1) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      thunk_FUN_03048534((undefined8 *)(lVar7 + 0x18),0);
      return;
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 != 0) {
      if (1 < *(int *)(lVar7 + 0x18)) {
        thunk_FUN_03037804(PTR_DAT_06f6d548);
        uVar9 = thunk_FUN_0301080c();
        uVar6 = thunk_FUN_03037804(
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                  );
        FUN_05af1770(uVar9,uVar6,0);
        uVar6 = thunk_FUN_03037804(
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar9,uVar6);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
        if (lVar7 == 0) goto LAB_0663fc4c;
      }
      uVar9 = FUN_04430018(lVar7,0,*(undefined8 *)PTR_DAT_06f8ade0);
      puVar8 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
      *puVar8 = uVar9;
      thunk_FUN_03048534(puVar8,uVar9);
      lVar5 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
      if (lVar5 != 0) {
        FUN_06b763e8(lVar5,1,0);
        lVar5 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
        iVar3 = FUN_068ca8e0(0);
        if (lVar5 != 0) {
          FUN_06b762c8(lVar5,iVar3 == 1,0);
          puVar2 = 
          System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TypeInfo;
          lVar5 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
          if (lVar5 != 0) {
            FUN_06b76360(lVar5,1,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            if (DAT_073a0c52 == '\0') {
              FUN_02fe925c(
                          System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TypeInfo
                          );
              DAT_073a0c52 = '\x01';
            }
            puVar1 = PTR_DAT_06f6d508;
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar5 = *(long *)puVar2;
            }
            uVar4 = **(undefined4 **)(lVar5 + 0xb8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*(long *)puVar1);
            }
            uVar4 = FUN_05af0054(uVar4,2,0);
            if (DAT_073a0c57 == '\0') {
              FUN_02fe925c(
                          System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TypeInfo
                          );
              DAT_073a0c57 = '\x01';
            }
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar5 = *(long *)puVar2;
            }
            **(undefined4 **)(lVar5 + 0xb8) = uVar4;
            return;
          }
        }
      }
    }
  }
LAB_0663fc4c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



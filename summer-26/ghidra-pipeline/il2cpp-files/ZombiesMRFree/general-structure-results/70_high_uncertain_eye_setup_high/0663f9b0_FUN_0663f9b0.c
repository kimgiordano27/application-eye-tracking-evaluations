/*
FUNCTION_NAME: FUN_0663f9b0
ENTRY_POINT: 0663f9b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0663f9b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar1 = System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo;
                    /* try { // try from 0663f9b4 to 0673f9c3 has its CatchHandler @ 0663f9f0 */
                    /* try { // try from 0663f9c4 to 0673f9e7 has its CatchHandler @ 0663f3a4 */
  if ((DAT_073a0b8e & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f8add8);
    FUN_02fe925c(PTR_DAT_06f8ade0);
                    /* try { // try from 0663f9e8 to 0673f9eb has its CatchHandler @ 0663f9f4 */
                    /* try { // try from 0663f9ec to 0673fa17 has its CatchHandler @ 0663f3a4 */
    FUN_02fe925c(PTR_DAT_06f6d508);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0663f9b4 with catch @ 0663f9f0
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0663f9e8 with catch @ 0663f9f4
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0663f998 with catch @ 0663f9f8
                        */
    FUN_02fe925c(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0663f988 with catch @ 0663f9fc
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0663f978 with catch @ 0663fa00
                        */
    FUN_02fe925c(PTR_DAT_06f7b348);
    FUN_02fe925c(System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TypeInfo
                );
    FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo);
    DAT_073a0b8e = 1;
  }
  puVar2 = PTR_DAT_06f7b348;
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar2);
  }
  FUN_03dbda3c(uVar10,*(undefined8 *)puVar3);
  lVar6 = *(long *)puVar1;
  lVar8 = *(long *)(lVar6 + 0xb8);
  if (*(long *)(lVar8 + 0x10) != 0) {
    iVar4 = *(int *)(*(long *)(lVar8 + 0x10) + 0x18);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar6 = *(long *)puVar1;
      lVar8 = *(long *)(lVar6 + 0xb8);
    }
    if (iVar4 < 1) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      thunk_FUN_03048534((undefined8 *)(lVar8 + 0x18),0);
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 != 0) {
      if (1 < *(int *)(lVar8 + 0x18)) {
        thunk_FUN_03037804(PTR_DAT_06f6d548);
        uVar10 = thunk_FUN_0301080c();
        uVar7 = thunk_FUN_03037804(
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                  );
        FUN_05af1770(uVar10,uVar7,0);
        uVar7 = thunk_FUN_03037804(
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar10,uVar7);
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_0663fc4c;
      }
      uVar10 = FUN_04430018(lVar8,0,*(undefined8 *)PTR_DAT_06f8ade0);
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *puVar9 = uVar10;
      thunk_FUN_03048534(puVar9,uVar10);
      lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      if (lVar6 != 0) {
        FUN_06b763e8(lVar6,1,0);
        lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
        iVar4 = FUN_068ca8e0(0);
        if (lVar6 != 0) {
          FUN_06b762c8(lVar6,iVar4 == 1,0);
          puVar2 = 
          System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TypeInfo;
          lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          if (lVar6 != 0) {
            FUN_06b76360(lVar6,1,0);
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
            lVar6 = *(long *)puVar2;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar6 = *(long *)puVar2;
            }
            uVar5 = **(undefined4 **)(lVar6 + 0xb8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*(long *)puVar1);
            }
            uVar5 = FUN_05af0054(uVar5,2,0);
            if (DAT_073a0c57 == '\0') {
              FUN_02fe925c(
                          System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TypeInfo
                          );
              DAT_073a0c57 = '\x01';
            }
            lVar6 = *(long *)puVar2;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar6 = *(long *)puVar2;
            }
            **(undefined4 **)(lVar6 + 0xb8) = uVar5;
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



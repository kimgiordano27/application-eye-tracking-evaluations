/*
FUNCTION_NAME: FUN_034a6bf8
ENTRY_POINT: 034a6bf8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;data_collection;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_3;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_034a6bf8(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 034a4abc with catch @ 034a6bf8 */
                    /* try { // try from 034a6c10 to 035a6c13 has its CatchHandler @ 034a6c3c */
                    /* try { // try from 034a6c14 to 035a6c4b has its CatchHandler @ 034a47fc */
  if ((DAT_0412da1a & 1) == 0) {
    FUN_01ab69ac(Newtonsoft_Json_Converters_XmlDocumentWrapper_TypeInfo);
    FUN_01ab69ac(System_Xml_XmlDownloadManager_TypeInfo);
    FUN_01ab69ac(System_Xml_XPath_XPathException_TypeInfo);
                    /* catch() { ... } // from try @ 034a6c10 with catch @ 034a6c3c */
    FUN_01ab69ac(System_Xml_XmlElement_TypeInfo);
                    /* try { // try from 034a6c4c to 035a6c53 has its CatchHandler @ 034a6c68 */
    FUN_01ab69ac(System_Xml_Serialization_XmlElementAttribute_TypeInfo);
                    /* try { // try from 034a6c54 to 035a6c5f has its CatchHandler @ 034a47fc */
    FUN_01ab69ac(UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo);
                    /* try { // try from 034a6c60 to 035a6c67 has its CatchHandler @ 034a6c68 */
                    /* catch() { ... } // from try @ 034a6c4c with catch @ 034a6c68
                       catch() { ... } // from try @ 034a6c60 with catch @ 034a6c68 */
    FUN_01ab69ac(System_Xml_Serialization_XmlElementAttributes_TypeInfo);
    FUN_01ab69ac(System_Xml_Serialization_XmlElementEventArgs_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Converters_XmlElementWrapper_TypeInfo);
    FUN_01ab69ac(System_Xml_XmlEncodedRawTextWriter_TypeInfo);
    DAT_0412da1a = 1;
  }
  puVar2 = System_Xml_XPath_XPathException_TypeInfo;
  local_40 = 0;
  lVar12 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    local_40 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar1 = *(uint *)(lVar12 + 0xb8);
    if ((uVar1 | 4) != 4) {
      plVar11 = *(long **)(lVar12 + 0xd8);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = thunk_FUN_01a6ca08(System_Xml_Linq_XCData_TypeInfo);
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_034a6fc8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar11,lVar4,0);
LAB_034a6fc8:
      uVar5 = (*(code *)*puVar6)(plVar11,uVar1,puVar6[1]);
      lVar12 = *(long *)(lVar12 + 0x20);
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),uVar5,*(undefined8 *)(lVar12 + 0x28));
      }
      uVar7 = thunk_FUN_01a6ca08(System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar7);
    }
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)System_Xml_XmlElement_TypeInfo);
    FUN_034a7134();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_034a71a4(lVar4);
    piVar10 = param_1 + 0xc;
    *(undefined8 *)piVar10 = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar10);
    uVar5 = FUN_034a7408(*(undefined8 *)piVar10);
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)System_Xml_Serialization_XmlElementAttribute_TypeInfo)
    ;
    FUN_027b3d9c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 10);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar4 + 0x18),uVar5);
    plVar11 = *(long **)(lVar12 + 200);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_034a6dc0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01a472ec(plVar11,*(long *)
                                   UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo,0xb)
    ;
LAB_034a6dc0:
    lVar4 = (*(code *)*puVar6)(plVar11,lVar4,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_40 = FUN_020a2c44(lVar4,*(undefined8 *)System_Xml_XmlEncodedRawTextWriter_TypeInfo);
    uVar9 = FUN_0209f888(&local_40,
                         *(undefined8 *)Newtonsoft_Json_Converters_XmlElementWrapper_TypeInfo);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_40;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(param_1 + 2,&local_40,param_1,
                   *(undefined8 *)Newtonsoft_Json_Converters_XmlDocumentWrapper_TypeInfo);
      return;
    }
  }
  FUN_0209f8cc(&local_40,&local_38,
               *(undefined8 *)System_Xml_Serialization_XmlElementEventArgs_TypeInfo);
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)System_Xml_Serialization_XmlElementAttributes_TypeInfo);
  FUN_027b3d9c(lVar4,0);
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(local_38 + 0x18);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(local_38 + 0x20);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(local_38 + 0x10);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(param_1 + 0xc);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar12 = *(long *)(lVar12 + 0x40);
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),lVar4,*(undefined8 *)(lVar12 + 0x28));
      }
      puVar3 = System_Xml_XmlDownloadManager_TypeInfo;
      *param_1 = -2;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02145584(param_1 + 2,lVar4,*(undefined8 *)puVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



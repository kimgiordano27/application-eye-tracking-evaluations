/*
FUNCTION_NAME: CodeStage.AntiCheat.Storage.StorageDataConverter$$GetBytesFromValue<Vector2>
ENTRY_POINT: 023045cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void CodeStage_AntiCheat_Storage_StorageDataConverter__GetBytesFromValue<Vector2>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_01c5d288();
  FUN_01c5d288(Photon_Realtime_IWebRpcCallback_TypeInfo);
  FUN_01c5d288(Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo);
  FUN_01c5d288(Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo);
                    /* try { // try from 023045fc to 024045ff has its CatchHandler @ 023048a8 */
  FUN_01c5d288(Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo);
                    /* try { // try from 02304600 to 0240460b has its CatchHandler @ 023048e0 */
  FUN_01c5d288(Newtonsoft_Json_Converters_IXmlDocument_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fb28);
                    /* try { // try from 0230461c to 02404627 has its CatchHandler @ 023048d8 */
  FUN_01c5d288(Newtonsoft_Json_Converters_IXmlDocumentType_TypeInfo);
                    /* try { // try from 02304628 to 02404633 has its CatchHandler @ 023048d4 */
  FUN_01c5d288(Newtonsoft_Json_Converters_IXmlElement_TypeInfo);
  FUN_01c5d288(System_Xml_IXmlLineInfo_TypeInfo);
                    /* try { // try from 0230463c to 02404643 has its CatchHandler @ 023048c4 */
  puVar9 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 02304644 to 02404657 has its CatchHandler @ 023048bc */
    FUN_01c723f0();
    puVar9 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  uVar10 = *puVar9;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                    /* try { // try from 02304668 to 024046b3 has its CatchHandler @ 023048e8 */
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_032e04b8(uVar10,0);
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)Newtonsoft_Json_Converters_IXmlDocument_TypeInfo);
  FUN_02fe55e0(lVar3,3,*(undefined8 *)Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo);
  puVar2 = Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo;
  if (lVar3 != 0) {
    FUN_02fe5a88(lVar3);
                    /* try { // try from 023046c8 to 024046cb has its CatchHandler @ 02304898 */
                    /* try { // try from 023046cc to 024046d7 has its CatchHandler @ 023048c0 */
    uVar4 = FUN_032e04b8(*(undefined8 *)Unity_Services_Analytics_Internal_IWebRequestHelper_TypeInfo
                         ,0);
                    /* try { // try from 023046e8 to 024046f3 has its CatchHandler @ 023048b8 */
    if (*(int *)(*(long *)Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo + 0xe0) == 0) {
                    /* try { // try from 023046f4 to 024046ff has its CatchHandler @ 023048b4 */
      thunk_FUN_01c1d1e8(*(long *)Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo);
    }
                    /* try { // try from 02304708 to 0240470f has its CatchHandler @ 023048a0 */
    uVar4 = FUN_035e064c(uVar4,*(undefined8 *)Newtonsoft_Json_Converters_IXmlElement_TypeInfo,0);
                    /* try { // try from 02304710 to 02404723 has its CatchHandler @ 0230489c */
    if (unaff_x20 != 0) {
      uVar5 = FUN_0230794c(*(undefined8 *)(unaff_x20 + 0x10),uVar4,
                           *(undefined8 *)Photon_Realtime_IWebRpcCallback_TypeInfo);
      puVar1 = UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo;
                    /* try { // try from 02304734 to 02404783 has its CatchHandler @ 023048c8 */
      if (*(int *)(*(long *)UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo);
      }
      if (DAT_0452ffc0 == '\0') {
        FUN_01c5d288(UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo);
        DAT_0452ffc0 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar6 = *(long *)puVar1;
      }
                    /* try { // try from 02304784 to 024047db has its CatchHandler @ 02303ab8 */
      uVar7 = FUN_035ef390(**(undefined8 **)(lVar6 + 0xb8),0);
      FUN_02fe5a88(lVar3,uVar7,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar7 = FUN_035dcdd0(0);
      uVar7 = FUN_035e09cc(uVar7,uVar4,0);
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        uVar8 = FUN_035ec010(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18),0);
                    /* try { // try from 023047dc to 024047f3 has its CatchHandler @ 02304948 */
        uVar10 = FUN_035e0cc4(uVar4,uVar10,0);
                    /* try { // try from 023047f4 to 024047ff has its CatchHandler @ 0230490c */
        lVar6 = FUN_032e04b8(**(undefined8 **)(unaff_x19 + 0x38),0);
        if (lVar6 != 0) {
                    /* try { // try from 02304808 to 0240482b has its CatchHandler @ 023048f0 */
          uVar4 = FUN_032ebb88(lVar6,*(undefined8 *)
                                      Newtonsoft_Json_Converters_IXmlDocumentType_TypeInfo,0);
          uVar10 = FUN_035f07bc(uVar10,uVar4,0);
          uVar10 = FUN_035eeab4(uVar10,uVar5,0);
                    /* try { // try from 02304838 to 0240483f has its CatchHandler @ 023048ac */
                    /* try { // try from 02304844 to 02404863 has its CatchHandler @ 023048d0 */
          uVar10 = FUN_035e0f70(uVar7,uVar8,uVar10,0);
          uVar10 = FUN_035ef3e8(uVar11,uVar10,0);
          FUN_02fe5a88(lVar3,uVar10,*(undefined8 *)puVar2);
                    /* try { // try from 02304868 to 02404893 has its CatchHandler @ 023048a4 */
          uVar10 = FUN_035ea550(lVar3,0);
                    /* try { // try from 02304894 to 02404a47 has its CatchHandler @ 02303ab8 */
                    /* catch() { ... } // from try @ 023046c8 with catch @ 02304898 */
                    /* catch() { ... } // from try @ 02304710 with catch @ 0230489c */
                    /* catch() { ... } // from try @ 02304708 with catch @ 023048a0 */
                    /* catch() { ... } // from try @ 02304868 with catch @ 023048a4 */
          FUN_0235b84c(uVar10,*(undefined8 *)System_Xml_IXmlLineInfo_TypeInfo,1,uVar5,
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 023045fc with catch @ 023048a8 */
  FUN_01c5d4a4();
}



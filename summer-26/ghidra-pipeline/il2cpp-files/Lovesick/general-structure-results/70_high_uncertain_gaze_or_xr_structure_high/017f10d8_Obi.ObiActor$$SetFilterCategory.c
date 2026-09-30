/*
FUNCTION_NAME: Obi.ObiActor$$SetFilterCategory
ENTRY_POINT: 017f10d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_data_collection_or_telemetry_hits_1
*/


void Obi_ObiActor__SetFilterCategory(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
                    /* try { // try from 017f10dc to 018f10eb has its CatchHandler @ 017f10fc */
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xa58));
  thunk_FUN_00d48444(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
                    /* try { // try from 017f10ec to 018f1113 has its CatchHandler @ 017f10a4 */
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<VisualData>_CopyFrom__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 017f10dc with catch @ 017f10fc
                        */
  thunk_FUN_00d48444(Method_Oculus_Interaction_Input_Controller_<>c_<_ctor>b__24_0__);
  thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__);
                    /* try { // try from 017f1114 to 018f112b has its CatchHandler @ 017f11a8 */
  thunk_FUN_00d48444(
                    Method_Unity_XR_CoreUtils_GameObjectUtils_<>c__DisplayClass20_0_<GetNamedChild>b__0__
                    );
  thunk_FUN_00d48444(PTR_DAT_033ec050);
                    /* try { // try from 017f112c to 018f1197 has its CatchHandler @ 017f10a4 */
  thunk_FUN_00d48444(Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__);
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_11__);
  *(undefined1 *)(unaff_x19 + 0x275) = 1;
  lVar4 = thunk_FUN_00d62348(*unaff_x21);
  puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  puVar1 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_11__;
    puVar1 = Method_System_IO_Compression_DeflateStream_BeginRead__;
    if (lVar4 != 0) {
                    /* try { // try from 017f1198 to 018f11a7 has its CatchHandler @ 017f11a8 */
                    /* catch() { ... } // from try @ 017f1114 with catch @ 017f11a8
                       catch() { ... } // from try @ 017f1198 with catch @ 017f11a8 */
                    /* try { // try from 017f11ac to 018f11af has its CatchHandler @ 017f11b8 */
                    /* try { // try from 017f11b0 to 018f11bb has its CatchHandler @ 017f10a4 */
      FUN_011c181c(lVar4,0,*(undefined8 *)
                            Method_Oculus_Interaction_Input_Controller_<>c_<_ctor>b__24_0__,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017f11ac with catch @ 017f11b8
                        */
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar4;
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar3;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_UnityEngine_UIElements_StyleDataRef<VisualData>_CopyFrom__;
      if (lVar4 != 0) {
        FUN_012d1810(lVar4,uVar5,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_GameObjectUtils_<>c__DisplayClass20_0_<GetNamedChild>b__0__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar4;
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          FUN_017f3604(lVar4,0,0,0,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar4;
          lVar4 = thunk_FUN_00d62348();
          puVar1 = Method_System_IO_Compression_GZipStream_ThrowStreamClosedException__;
          if (lVar4 != 0) {
            FUN_017e9508(lVar4,0,0x4000,0);
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = lVar4;
            uVar5 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = System_Collections_Generic_IEnumerable<Grabbable>_TypeInfo;
            if (lVar4 != 0) {
              FUN_0136b58c(lVar4,uVar5,*(undefined8 *)PTR_DAT_033ec050,0);
              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = lVar4;
              uVar5 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = Method_System_Collections_Generic_List<Transform>_Clear__;
              if (lVar4 != 0) {
                FUN_0136b58c(lVar4,uVar5,
                             *(undefined8 *)
                              Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__
                             ,0);
                *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = lVar4;
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  FUN_01298da0(lVar4,*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vuzp2_s32__);
                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = lVar4;
                  lVar4 = thunk_FUN_00d62348(*unaff_x21);
                  if (lVar4 != 0) {
                    FUN_017b46ec(lVar4,0);
                    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58) = lVar4;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



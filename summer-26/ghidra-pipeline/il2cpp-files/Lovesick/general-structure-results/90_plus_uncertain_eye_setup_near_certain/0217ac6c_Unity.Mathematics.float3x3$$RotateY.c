/*
FUNCTION_NAME: Unity.Mathematics.float3x3$$RotateY
ENTRY_POINT: 0217ac6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Mathematics_float3x3__RotateY(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *plVar6;
  
                    /* catch() { ... } // from try @ 0217ac4c with catch @ 0217ac6c */
                    /* catch() { ... } // from try @ 0217ab74 with catch @ 0217ac70 */
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x770));
                    /* catch() { ... } // from try @ 0217abcc with catch @ 0217ac7c */
  thunk_FUN_00d48444(
                    Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                    );
                    /* catch() { ... } // from try @ 0217abac with catch @ 0217ac80 */
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_94__);
  *(undefined1 *)(unaff_x19 + 0x3cd) = 1;
  lVar2 = thunk_FUN_00d62348(*unaff_x22);
  if (lVar2 != 0) {
                    /* try { // try from 0217aca4 to 0227aca7 has its CatchHandler @ 0217b1a4 */
    FUN_021f6eec(lVar2,0);
    lVar3 = FUN_02147788(lVar2,0);
    if ((unaff_x24 != 0) && (plVar6 = *(long **)(unaff_x24 + 0x150), plVar6 != (long *)0x0)) {
                    /* try { // try from 0217acc8 to 0227accf has its CatchHandler @ 0217ad30 */
                    /* try { // try from 0217acd4 to 0227acd7 has its CatchHandler @ 0217ad2c */
                    /* try { // try from 0217acdc to 0227acdf has its CatchHandler @ 0217ad28 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,0);
      }
                    /* try { // try from 0217ace4 to 0227ace7 has its CatchHandler @ 0217ad24 */
      if (*(uint *)(plVar6 + 3) < 0xbf) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
                    /* try { // try from 0217acec to 0227acef has its CatchHandler @ 0217ad50 */
      plVar6[0xc2] = lVar3;
      if (lVar3 != 0) {
                    /* try { // try from 0217acf4 to 0227acf7 has its CatchHandler @ 0217ad40 */
                    /* try { // try from 0217acfc to 0227ad07 has its CatchHandler @ 0217ad38 */
        *(long *)(lVar3 + 0x78) = unaff_x24;
        *(undefined8 *)(lVar3 + 0x80) = unaff_x23;
                    /* try { // try from 0217ad0c to 0227ad0f has its CatchHandler @ 0217ad20 */
                    /* try { // try from 0217ad14 to 0227ad1b has its CatchHandler @ 0217ad70 */
        FUN_021f605c();
                    /* try { // try from 0217ad1c to 0227adab has its CatchHandler @ 02179e60 */
                    /* catch() { ... } // from try @ 0217ad0c with catch @ 0217ad20 */
                    /* catch() { ... } // from try @ 0217ace4 with catch @ 0217ad24 */
                    /* catch() { ... } // from try @ 0217acdc with catch @ 0217ad28 */
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
                    /* catch() { ... } // from try @ 0217acd4 with catch @ 0217ad2c */
                    /* catch() { ... } // from try @ 0217acc8 with catch @ 0217ad30 */
                    /* catch() { ... } // from try @ 0217a7b4 with catch @ 0217ad34 */
        FUN_021f605c();
                    /* catch() { ... } // from try @ 0217a85c with catch @ 0217ad38
                       catch() { ... } // from try @ 0217acfc with catch @ 0217ad38 */
                    /* catch() { ... } // from try @ 0217a830 with catch @ 0217ad3c */
                    /* catch() { ... } // from try @ 0217a828 with catch @ 0217ad40
                       catch() { ... } // from try @ 0217acf4 with catch @ 0217ad40 */
        uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(0,0,0);
        *(undefined8 *)(lVar3 + 0x40) = uVar5;
        FUN_021f605c();
        uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(0,0,0);
        *(undefined8 *)(lVar3 + 0x50) = uVar5;
        *(undefined8 *)(lVar3 + 0x58) = unaff_x21;
        *(undefined8 *)(lVar3 + 0x60) = unaff_x20;
        FUN_02145478(lVar3,1,0);
        puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
        if (*(long *)(lVar3 + 0x78) != 0) {
          FUN_021485a4(*(long *)(lVar3 + 0x78),1,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = _DAT_02955070;
          *(undefined8 *)(lVar3 + 0x18) = _UNK_02955078;
          *(undefined8 *)(lVar3 + 0x10) = uVar5;
          FUN_02145428(lVar3,1,0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



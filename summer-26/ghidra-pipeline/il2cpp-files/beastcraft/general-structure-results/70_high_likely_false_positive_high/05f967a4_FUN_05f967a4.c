/*
FUNCTION_NAME: FUN_05f967a4
ENTRY_POINT: 05f967a4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05f967a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 05f967a4 to 060967b3 has its CatchHandler @ 05f96860 */
                    /* try { // try from 05f967c4 to 060967cf has its CatchHandler @ 05f96854 */
  if ((bRam0000000006e948d8 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_Pool_CollectionPool<List<RadioButton>,_RadioButton>_TypeInfo);
                    /* try { // try from 05f967d4 to 060967df has its CatchHandler @ 05f96850 */
    FUN_02e3ca1c(UnityEngine_Pool_CollectionPool<List<RectMask2D>,_RectMask2D>_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Pool_CollectionPool<List<UIVertex>,_UIVertex>_TypeInfo);
                    /* try { // try from 05f967ec to 060967ef has its CatchHandler @ 05f9684c */
    FUN_02e3ca1c(UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_TypeInfo);
                    /* try { // try from 05f967f8 to 060967ff has its CatchHandler @ 05f96858 */
                    /* try { // try from 05f96800 to 0609687b has its CatchHandler @ 05f96658 */
    FUN_02e3ca1c(UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                );
    bRam0000000006e948d8 = 1;
  }
  uVar1 = FUN_05f96a2c(param_1);
  if (uVar1 < 0x899e1a14) {
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f967ec with catch @ 05f9684c
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f967d4 with catch @ 05f96850
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f967c4 with catch @ 05f96854
                        */
    if (0x4ab71b63 < uVar1) {
      if (uVar1 == 0x899e1a13) {
        uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                            UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                                   ,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = 0x277c;
          goto LAB_05f96a14;
        }
      }
      else if ((uVar1 == 0x5ec77d25) &&
              (uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_TypeInfo
                                          ,0), (uVar2 & 1) != 0)) {
        uVar3 = 0x277a;
        goto LAB_05f96a1c;
      }
      goto LAB_05f96a10;
    }
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f967f8 with catch @ 05f96858
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f96794 with catch @ 05f9685c
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05f967a4 with catch @ 05f96860
                        */
    if (uVar1 == 0xd07aeba) {
      uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                          UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo
                                 ,0);
      if ((uVar2 & 1) == 0) goto LAB_05f96a10;
      uVar3 = 0x2779;
    }
    else {
                    /* try { // try from 05f9687c to 0609687f has its CatchHandler @ 05f968a0 */
                    /* try { // try from 05f96880 to 060968a3 has its CatchHandler @ 05f96658 */
      if ((uVar1 != 0x4ab71b63) ||
         (uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                              UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                                     ,0), (uVar2 & 1) == 0)) goto LAB_05f96a10;
      uVar3 = 0x2778;
    }
  }
  else {
                    /* catch() { ... } // from try @ 05f9687c with catch @ 05f968a0 */
                    /* try { // try from 05f968a4 to 060968ab has its CatchHandler @ 05f968b4 */
    if (uVar1 < 0xbdc94f27) {
                    /* try { // try from 05f968ac to 060968b7 has its CatchHandler @ 05f96658 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f968a4 with catch @ 05f968b4
                        */
      if (uVar1 == 0xa02e23b3) {
        uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                            UnityEngine_Pool_CollectionPool<List<RadioButton>,_RadioButton>_TypeInfo
                                   ,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = 0x277e;
          goto LAB_05f96a14;
        }
      }
      else if ((uVar1 == 0xbdc94f26) &&
              (uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_Pool_CollectionPool<List<RectMask2D>,_RectMask2D>_TypeInfo
                                          ,0), (uVar2 & 1) != 0)) {
        uVar3 = 0x2777;
        goto LAB_05f96a1c;
      }
    }
    else if (uVar1 == 0xc3448bae) {
      uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                          UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo
                                 ,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = 0x277d;
        goto LAB_05f96a1c;
      }
    }
    else if ((uVar1 == 0xecd4339e) &&
            (uVar2 = thunk_FUN_0548b788(param_1,*(undefined8 *)
                                                 UnityEngine_Pool_CollectionPool<List<UIVertex>,_UIVertex>_TypeInfo
                                        ,0), (uVar2 & 1) != 0)) {
      uVar3 = 0x2775;
      goto LAB_05f96a14;
    }
LAB_05f96a10:
    uVar3 = 0x2774;
  }
LAB_05f96a14:
  param_3 = 0;
  param_2 = param_1;
LAB_05f96a1c:
  FUN_05f96730(uVar3,param_2,param_3);
  return;
}



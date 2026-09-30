/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$UnsafeElementAt
ENTRY_POINT: 03f3b130
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__UnsafeElementAt
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x21;
  
  lVar1 = FUN_03356750(param_2,*param_1);
                    /* try { // try from 03f3b138 to 0403b13b has its CatchHandler @ 03f3b150 */
                    /* try { // try from 03f3b13c to 0403b17f has its CatchHandler @ 03f3ae78 */
  if (unaff_x21[2] != 0) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3b138 with catch @ 03f3b150
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3b0a0 with catch @ 03f3b154
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3afd4 with catch @ 03f3b15c
                        */
    uVar2 = FUN_04884e58(unaff_x21[2],unaff_w19);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03f3b018 with catch @ 03f3b160
                        */
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = FUN_060f078c(lVar1,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar1 == 0) goto LAB_03f3b230;
        if (*(char *)(lVar1 + 0x99) != '\0') {
          *(undefined1 *)(lVar1 + 0x99) = 0;
          Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length();
        }
      }
    }
    else {
      uVar2 = (**(code **)(*unaff_x21 + 0x1f8))();
      if ((uVar2 & 1) != 0) {
        lVar1 = unaff_x21[2];
        if (lVar1 == 0) goto LAB_03f3b230;
        uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xf8);
        memcpy(&stack0x00000070,&stack0x00000000,0x70);
        FUN_04883298(lVar1,unaff_w19,&stack0x00000070,uVar3);
      }
    }
    return;
  }
LAB_03f3b230:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



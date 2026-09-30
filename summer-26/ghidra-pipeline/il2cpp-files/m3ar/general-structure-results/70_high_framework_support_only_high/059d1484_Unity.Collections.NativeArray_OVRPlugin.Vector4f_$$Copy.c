/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 059d1484
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(undefined1 *param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  
  while( true ) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059d1478 with catch @ 059d1484
                        */
    memcpy(param_1,param_2,0x48);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000048,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x48;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      unaff_x19[8] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_059d1514;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_059d1518;
    if (unaff_x21 == 0) goto LAB_059d1514;
    param_2 = (void *)(lVar2 + unaff_x22);
    param_1 = (undefined1 *)register0x00000008;
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    if ((uint)unaff_x23 < *(uint *)(lVar2 + 0x18)) {
      memcpy(unaff_x19,(void *)(lVar2 + unaff_x22),0x48);
      return;
    }
LAB_059d1518:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_059d1514:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



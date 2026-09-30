/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 03b612d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe
              (undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar5;
  uint uVar6;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  code *unaff_x26;
  
  do {
    uVar3 = (*unaff_x26)(param_1,param_2,param_3);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 03b612f8 to 03c6131f has its CatchHandler @ 03b61334 */
      iVar4 = *(int *)(unaff_x19 + 0x18);
LAB_03b612fc:
      uVar6 = (uint)unaff_x23;
      if ((int)uVar6 < iVar4) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) {
LAB_03b613a0:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 03b61320 to 03c6132b has its CatchHandler @ 03b60ddc */
                    /* try { // try from 03b6132c to 03c61333 has its CatchHandler @ 03b61334 */
        if ((uVar1 <= uVar6) ||
           (memcpy(&stack0x00000000,(void *)(lVar5 + (long)(int)uVar6 * (long)unaff_w24 + 0x20),
                   0x160), uVar1 <= unaff_w21)) goto LAB_03b613a4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03b612f8 with catch @ 03b61334
                       catch(type#2 @ 00000000) { ... } // from try @ 03b6132c with catch @ 03b61334
                        */
        lVar2 = (long)(int)unaff_w21;
        unaff_w21 = unaff_w21 + 1;
        memcpy((void *)(lVar5 + lVar2 * unaff_w24 + 0x20),&stack0x00000000,0x160);
        iVar4 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar4 <= (int)uVar6) {
        FUN_04f53aa4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar4 - unaff_w21,0);
        iVar4 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar4 - unaff_w21;
      }
      unaff_x25 = (long)(int)uVar6 * (long)unaff_w24 + 0x20;
      unaff_x23 = (long)(int)uVar6;
    }
    else {
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x23 = unaff_x23 + 1;
      unaff_x25 = unaff_x25 + 0x160;
      if (iVar4 <= unaff_x23) goto LAB_03b612fc;
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_03b613a0;
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x23) {
LAB_03b613a4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy(&stack0x00000160,(void *)(lVar5 + unaff_x25),0x160);
    if (unaff_x20 == 0) goto LAB_03b613a0;
    unaff_x26 = *(code **)(unaff_x20 + 0x18);
    param_1 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x000002c0,&stack0x00000160,0x160);
    param_3 = *(undefined8 *)(unaff_x20 + 0x28);
    param_2 = &stack0x000002c0;
  } while( true );
}



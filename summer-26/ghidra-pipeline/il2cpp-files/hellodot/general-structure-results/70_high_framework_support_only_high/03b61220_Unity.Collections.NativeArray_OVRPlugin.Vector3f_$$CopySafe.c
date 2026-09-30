/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 03b61220
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


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(undefined1 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  undefined8 unaff_x21;
  ulong uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong unaff_x23;
  code *unaff_x24;
  code *pcVar10;
  
  while( true ) {
    memcpy(param_1,&stack0x00000160,0x160);
    uVar2 = (*unaff_x24)(unaff_x21,&stack0x000002c0,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) break;
    uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x160;
    if ((long)uVar2 <= (long)unaff_x23) goto LAB_03b61264;
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (lVar7 == 0) goto LAB_03b613a0;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_03b613a4;
    memcpy(&stack0x00000160,(void *)(lVar7 + unaff_x22),0x160);
    if (unaff_x20 == 0) goto LAB_03b613a0;
    unaff_x24 = *(code **)(unaff_x20 + 0x18);
    unaff_x21 = *(undefined8 *)(unaff_x20 + 0x40);
    param_1 = &stack0x000002c0;
  }
  uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
LAB_03b61264:
  if ((int)uVar2 <= (int)unaff_x23) {
    return 0;
  }
                    /* try { // try from 03b61270 to 03c61273 has its CatchHandler @ 03b6127c */
  uVar5 = unaff_x23 & 0xffffffff;
  do {
                    /* try { // try from 03b61274 to 03c6129f has its CatchHandler @ 03b60ddc */
    unaff_x23 = (ulong)((int)unaff_x23 + 1);
    do {
      iVar8 = (int)unaff_x23;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b61270 with catch @ 03b6127c
                        */
      uVar4 = (uint)uVar5;
      if ((int)uVar2 <= iVar8) {
        FUN_04f53aa4(*(undefined8 *)(unaff_x19 + 0x10),uVar5,(int)uVar2 - uVar4,0);
        iVar8 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar4;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar8 - uVar4;
      }
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b6119c with catch @ 03b61280
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b610e0 with catch @ 03b61284
                        */
      lVar7 = (long)iVar8 * 0x160 + 0x20;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b61120 with catch @ 03b61288
                        */
      unaff_x23 = (ulong)iVar8;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_03b613a0;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x23) goto LAB_03b613a4;
                    /* try { // try from 03b612a0 to 03c612a3 has its CatchHandler @ 03b612b8 */
        memcpy(&stack0x00000160,(void *)(lVar3 + lVar7),0x160);
        if (unaff_x20 == 0) goto LAB_03b613a0;
        pcVar10 = *(code **)(unaff_x20 + 0x18);
                    /* catch() { ... } // from try @ 03b612a0 with catch @ 03b612b8 */
        uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
        memcpy(&stack0x000002c0,&stack0x00000160,0x160);
        uVar2 = (*pcVar10)(uVar6,&stack0x000002c0,*(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x23 = unaff_x23 + 1;
        lVar7 = lVar7 + 0x160;
      } while ((long)unaff_x23 < (long)uVar2);
      uVar9 = (uint)unaff_x23;
    } while ((int)uVar2 <= (int)uVar9);
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (lVar7 == 0) {
LAB_03b613a0:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 <= uVar9) ||
       (memcpy(&stack0x00000000,(void *)(lVar7 + (long)(int)uVar9 * 0x160 + 0x20),0x160),
       uVar1 <= uVar4)) {
LAB_03b613a4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy((void *)(lVar7 + (long)(int)uVar4 * 0x160 + 0x20),&stack0x00000000,0x160);
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar5 = (ulong)(uVar4 + 1);
  } while( true );
}



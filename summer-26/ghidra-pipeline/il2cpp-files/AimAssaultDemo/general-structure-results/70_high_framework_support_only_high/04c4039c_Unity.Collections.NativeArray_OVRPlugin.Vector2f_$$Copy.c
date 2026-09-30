/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 04c4039c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (void *param_1,int param_2,size_t param_3)

{
  void *__dest;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  void *unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long lVar6;
  void *unaff_x28;
  long unaff_x29;
  float fVar7;
  float fVar8;
  
  memset(param_1,param_2,param_3);
                    /* catch() { ... } // from try @ 04c40350 with catch @ 04c403a0
                       catch() { ... } // from try @ 04c40390 with catch @ 04c403a0 */
                    /* try { // try from 04c403a4 to 04d403a7 has its CatchHandler @ 04c403b0 */
                    /* try { // try from 04c403a8 to 04d403b3 has its CatchHandler @ 04c402d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c403a4 with catch @ 04c403b0
                        */
  uVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0xc0) + 0x68))();
  lVar6 = *(long *)(unaff_x29 + -0x48);
  if (lVar6 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
    *(void **)(unaff_x29 + -0x38) = unaff_x22;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar6,unaff_x29 + -0x40);
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x78))();
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
    *(void **)(unaff_x29 + -0x38) = unaff_x28;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar6,unaff_x29 + -0x40);
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x80))();
    fVar7 = (float)FUN_03fe028c(lVar6,uVar1,*(undefined8 *)PTR_DAT_07d98f00);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90))();
    if ((uVar2 & 1) == 0) {
      memcpy(unaff_x26,unaff_x28,unaff_x21);
      memcpy(unaff_x19,unaff_x22,unaff_x21);
      fVar8 = 1.0;
    }
    else {
      unaff_x26 = *(void **)(unaff_x29 + -0x60);
      memcpy(unaff_x26,unaff_x28,unaff_x21);
      unaff_x19 = *(void **)(unaff_x29 + -0x68);
      memcpy(unaff_x19,unaff_x22,unaff_x21);
      fVar8 = (float)FUN_075b6260(0);
    }
    memcpy(unaff_x24,unaff_x26,unaff_x21);
    memcpy(unaff_x25,unaff_x19,unaff_x21);
    if (unaff_x20 != (long *)0x0) {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8) + 0x28)) {
        unaff_x25 = (undefined8 *)*unaff_x25;
        unaff_x24 = (undefined8 *)*unaff_x24;
      }
      *(float *)(unaff_x29 + -0x1c) = fVar7 * fVar8;
      lVar5 = *unaff_x20;
      *(undefined8 **)(unaff_x29 + -0x40) = unaff_x25;
      *(undefined8 **)(unaff_x29 + -0x38) = unaff_x24;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
      *(void **)(unaff_x29 + -0x28) = unaff_x22;
      __dest = *(void **)(unaff_x29 + -0x58);
      lVar6 = *(long *)(unaff_x29 + -0x50);
      (**(code **)(*(long *)(lVar5 + 0x600) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x600) + 8));
      memcpy(__dest,unaff_x22,unaff_x21);
      if (*(long *)(lVar6 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



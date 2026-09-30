/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 04c40334
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 *__s;
  long unaff_x25;
  undefined8 *__s_00;
  void *__s_01;
  long unaff_x27;
  long lVar7;
  void *unaff_x28;
  long unaff_x29;
  float fVar8;
  float fVar9;
  
  __s_01 = (void *)(param_1 - unaff_x25);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c40318 with catch @ 04c40338
                        */
  memset(__s_01,0,unaff_x21);
                    /* try { // try from 04c40350 to 04d40367 has its CatchHandler @ 04c403a0 */
  pvVar6 = (void *)((long)__s_01 - unaff_x25);
  memset(pvVar6,0,unaff_x21);
                    /* try { // try from 04c40368 to 04d4038f has its CatchHandler @ 04c402d8 */
  __s = (undefined8 *)((long)pvVar6 - unaff_x25);
  memset(__s,0,unaff_x21);
  __s_00 = (undefined8 *)((long)__s - unaff_x25);
                    /* try { // try from 04c40390 to 04d4039f has its CatchHandler @ 04c403a0 */
  memset(__s_00,0,unaff_x21);
  uVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0xc0) + 0x68))();
  lVar7 = *(long *)(unaff_x29 + -0x48);
  if (lVar7 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
    *(void **)(unaff_x29 + -0x38) = unaff_x22;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar7,unaff_x29 + -0x40);
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x78))();
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
    *(void **)(unaff_x29 + -0x38) = unaff_x28;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar7,unaff_x29 + -0x40);
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x80))();
    fVar8 = (float)FUN_03fe028c(lVar7,uVar1,*(undefined8 *)PTR_DAT_07d98f00);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90))();
    if ((uVar2 & 1) == 0) {
      memcpy(__s_01,unaff_x28,unaff_x21);
      memcpy(pvVar6,unaff_x22,unaff_x21);
      fVar9 = 1.0;
    }
    else {
      __s_01 = *(void **)(unaff_x29 + -0x60);
      memcpy(__s_01,unaff_x28,unaff_x21);
      pvVar6 = *(void **)(unaff_x29 + -0x68);
      memcpy(pvVar6,unaff_x22,unaff_x21);
      fVar9 = (float)FUN_075b6260(0);
    }
    memcpy(__s,__s_01,unaff_x21);
    memcpy(__s_00,pvVar6,unaff_x21);
    if (unaff_x20 != (long *)0x0) {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8) + 0x28)) {
        __s_00 = (undefined8 *)*__s_00;
        __s = (undefined8 *)*__s;
      }
      *(float *)(unaff_x29 + -0x1c) = fVar8 * fVar9;
      lVar5 = *unaff_x20;
      *(undefined8 **)(unaff_x29 + -0x40) = __s_00;
      *(undefined8 **)(unaff_x29 + -0x38) = __s;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
      *(void **)(unaff_x29 + -0x28) = unaff_x22;
      pvVar6 = *(void **)(unaff_x29 + -0x58);
      lVar7 = *(long *)(unaff_x29 + -0x50);
      (**(code **)(*(long *)(lVar5 + 0x600) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x600) + 8));
      memcpy(pvVar6,unaff_x22,unaff_x21);
      if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



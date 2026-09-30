/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Equality
ENTRY_POINT: 04c402e0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Equality(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong in_x9;
  long lVar5;
  void *__s;
  long *unaff_x20;
  size_t unaff_x21;
  void *__src;
  long unaff_x23;
  undefined8 *__s_00;
  ulong uVar6;
  undefined8 *__s_01;
  long unaff_x27;
  long lVar7;
  void *__src_00;
  long unaff_x29;
  float fVar8;
  float fVar9;
  
  uVar6 = in_x9 & 0x1fffffff0;
  __src = (void *)(param_1 - uVar6);
  __src_00 = (void *)((long)__src - uVar6);
  pvVar1 = (void *)((long)__src_00 - uVar6);
  *(void **)(unaff_x29 + -0x60) = pvVar1;
  memset(pvVar1,0,unaff_x21);
                    /* try { // try from 04c40318 to 04d4032b has its CatchHandler @ 04c40338 */
  pvVar1 = (void *)((long)pvVar1 - uVar6);
  *(void **)(unaff_x29 + -0x68) = pvVar1;
                    /* try { // try from 04c4032c to 04d4034f has its CatchHandler @ 04c402d8 */
  memset(pvVar1,0,unaff_x21);
  pvVar1 = (void *)((long)pvVar1 - uVar6);
  memset(pvVar1,0,unaff_x21);
  __s = (void *)((long)pvVar1 - uVar6);
  memset(__s,0,unaff_x21);
  __s_00 = (undefined8 *)((long)__s - uVar6);
  memset(__s_00,0,unaff_x21);
  __s_01 = (undefined8 *)((long)__s_00 - uVar6);
  memset(__s_01,0,unaff_x21);
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0xc0) + 0x68))();
  lVar7 = *(long *)(unaff_x29 + -0x48);
  if (lVar7 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
    *(void **)(unaff_x29 + -0x38) = __src;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar7,unaff_x29 + -0x40,__src);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x78))();
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
    *(void **)(unaff_x29 + -0x38) = __src_00;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar7,unaff_x29 + -0x40,__src_00);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x80))();
    fVar8 = (float)FUN_03fe028c(lVar7,uVar2,*(undefined8 *)PTR_DAT_07d98f00);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90))();
    if ((uVar6 & 1) == 0) {
      memcpy(pvVar1,__src_00,unaff_x21);
      memcpy(__s,__src,unaff_x21);
      fVar9 = 1.0;
    }
    else {
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      memcpy(pvVar1,__src_00,unaff_x21);
      __s = *(void **)(unaff_x29 + -0x68);
      memcpy(__s,__src,unaff_x21);
      fVar9 = (float)FUN_075b6260(0);
    }
    memcpy(__s_00,pvVar1,unaff_x21);
    memcpy(__s_01,__s,unaff_x21);
    if (unaff_x20 != (long *)0x0) {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8) + 0x28)) {
        __s_01 = (undefined8 *)*__s_01;
        __s_00 = (undefined8 *)*__s_00;
      }
      *(float *)(unaff_x29 + -0x1c) = fVar8 * fVar9;
      lVar5 = *unaff_x20;
      *(undefined8 **)(unaff_x29 + -0x40) = __s_01;
      *(undefined8 **)(unaff_x29 + -0x38) = __s_00;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
      *(void **)(unaff_x29 + -0x28) = __src;
      pvVar1 = *(void **)(unaff_x29 + -0x58);
      lVar7 = *(long *)(unaff_x29 + -0x50);
      (**(code **)(*(long *)(lVar5 + 0x600) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x600) + 8));
      memcpy(pvVar1,__src,unaff_x21);
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



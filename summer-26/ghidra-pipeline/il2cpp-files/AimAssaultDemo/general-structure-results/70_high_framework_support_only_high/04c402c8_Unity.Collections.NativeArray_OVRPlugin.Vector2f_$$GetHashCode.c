/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 04c402c8
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


/* WARNING: Type propagation algorithm not settling */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long *unaff_x20;
  ulong __n;
  undefined1 *__src;
  long unaff_x23;
  undefined8 *__s;
  ulong uVar7;
  undefined8 *__s_00;
  long lVar8;
  undefined1 *__src_00;
  long unaff_x29;
  float fVar9;
  float fVar10;
  
  lVar8 = *(long *)(unaff_x23 + 0x20);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0xfc);
                    /* try { // try from 04c402d8 to 04d40317 has its CatchHandler @ 04c402d8
                       catch() { ... } // from try @ 04c402d8 with catch @ 04c402d8
                       catch() { ... } // from try @ 04c4032c with catch @ 04c402d8
                       catch() { ... } // from try @ 04c40368 with catch @ 04c402d8
                       catch() { ... } // from try @ 04c403a8 with catch @ 04c402d8 */
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar7;
  __src_00 = __src + -uVar7;
  puVar1 = __src_00 + -uVar7;
  *(undefined1 **)(unaff_x29 + -0x60) = puVar1;
  memset(puVar1,0,__n);
  puVar1 = puVar1 + -uVar7;
  *(undefined1 **)(unaff_x29 + -0x68) = puVar1;
  memset(puVar1,0,__n);
  puVar1 = puVar1 + -uVar7;
  memset(puVar1,0,__n);
  pvVar6 = puVar1 + -uVar7;
  memset(pvVar6,0,__n);
  __s = (undefined8 *)((long)pvVar6 - uVar7);
  memset(__s,0,__n);
  __s_00 = (undefined8 *)((long)__s - uVar7);
  memset(__s_00,0,__n);
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x68))();
  lVar8 = *(long *)(unaff_x29 + -0x48);
  if (lVar8 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
    *(undefined1 **)(unaff_x29 + -0x38) = __src;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar8,unaff_x29 + -0x40,__src);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x78))();
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x88);
    uVar4 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
    *(undefined1 **)(unaff_x29 + -0x38) = __src_00;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar8,unaff_x29 + -0x40,__src_00);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x80))();
    fVar9 = (float)FUN_03fe028c(lVar8,uVar2,*(undefined8 *)PTR_DAT_07d98f00);
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90))();
    if ((uVar7 & 1) == 0) {
      memcpy(puVar1,__src_00,__n);
      memcpy(pvVar6,__src,__n);
      fVar10 = 1.0;
    }
    else {
      puVar1 = *(undefined1 **)(unaff_x29 + -0x60);
      memcpy(puVar1,__src_00,__n);
      pvVar6 = *(void **)(unaff_x29 + -0x68);
      memcpy(pvVar6,__src,__n);
      fVar10 = (float)FUN_075b6260(0);
    }
    memcpy(__s,puVar1,__n);
    memcpy(__s_00,pvVar6,__n);
    if (unaff_x20 != (long *)0x0) {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8) + 0x28)) {
        __s_00 = (undefined8 *)*__s_00;
        __s = (undefined8 *)*__s;
      }
      *(float *)(unaff_x29 + -0x1c) = fVar9 * fVar10;
      lVar5 = *unaff_x20;
      *(undefined8 **)(unaff_x29 + -0x40) = __s_00;
      *(undefined8 **)(unaff_x29 + -0x38) = __s;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
      *(undefined1 **)(unaff_x29 + -0x28) = __src;
      pvVar6 = *(void **)(unaff_x29 + -0x58);
      lVar8 = *(long *)(unaff_x29 + -0x50);
      (**(code **)(*(long *)(lVar5 + 0x600) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x600) + 8));
      memcpy(pvVar6,__src,__n);
      if (*(long *)(lVar8 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



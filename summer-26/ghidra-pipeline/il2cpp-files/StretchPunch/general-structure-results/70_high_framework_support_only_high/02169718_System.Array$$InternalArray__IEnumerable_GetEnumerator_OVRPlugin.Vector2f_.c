/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector2f>
ENTRY_POINT: 02169718
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02169934) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector2f>(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *pvVar7;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  if (*(long *)(unaff_x29 + -0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  pvVar7 = *(void **)(unaff_x29 + -0x30);
  puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8);
  uVar1 = *puVar3;
  *(void **)(unaff_x29 + -0x10) = pvVar7;
  (*(code *)puVar3[2])(uVar1,puVar3,*(long *)(unaff_x29 + -0x20),unaff_x29 + -0x10,pvVar7);
  memcpy(unaff_x21,pvVar7,*(size_t *)(unaff_x29 + -0x38));
  while( true ) {
    do {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x48))();
      if ((uVar2 & 1) == 0) {
        lVar6 = *(long *)(unaff_x19 + 0x38);
        lVar4 = *(long *)(lVar6 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01dde7f8();
          lVar6 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_01d7e454(lVar4,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(unaff_x29 + -0x28));
        if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
      uVar1 = *puVar3;
      *(void **)(unaff_x29 + -0x10) = unaff_x25;
      (*(code *)puVar3[2])(uVar1);
      memcpy(unaff_x28,unaff_x25,unaff_x23);
      memcpy(unaff_x26,unaff_x28,unaff_x23);
      uVar1 = thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar4 = thunk_FUN_01de26bc(uVar1,lVar4);
    } while (lVar4 == 0);
    memcpy(unaff_x25,unaff_x28,unaff_x23);
    uVar1 = thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    uVar1 = thunk_FUN_01de26bc(uVar1,lVar4);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    pvVar7 = (void *)FUN_01d7da60(uVar1,lVar4);
    memcpy(unaff_x20,pvVar7,unaff_x24);
    memcpy(unaff_x27,unaff_x20,unaff_x24);
    if (*(long *)(unaff_x29 + -0x18) == 0) break;
    puVar3 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x27;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40);
    uVar1 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
    (*(code *)puVar5[2])(uVar1,puVar5,*(undefined8 *)(unaff_x29 + -0x18),unaff_x29 + -0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}



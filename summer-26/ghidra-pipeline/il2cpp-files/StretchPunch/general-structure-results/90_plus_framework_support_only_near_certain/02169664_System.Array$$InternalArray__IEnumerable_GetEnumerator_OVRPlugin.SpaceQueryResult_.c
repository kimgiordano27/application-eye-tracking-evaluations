/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02169664
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02169934) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long unaff_x19;
  ulong uVar7;
  void *__s;
  void *__s_00;
  ulong uVar8;
  void *pvVar9;
  size_t unaff_x23;
  size_t unaff_x24;
  void *__src;
  void *__dest;
  undefined8 *__dest_00;
  size_t unaff_x28;
  void *__s_01;
  long unaff_x29;
  
  lVar4 = in_x9 - (param_1 & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x28) = lVar4;
  uVar7 = unaff_x23 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar4 - uVar7);
  __dest = (void *)((long)__src - uVar7);
  uVar8 = unaff_x24 + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)((long)__dest - uVar8);
  uVar6 = unaff_x28 + 0xf & 0x1fffffff0;
  lVar4 = (long)__dest_00 - uVar6;
  *(long *)(unaff_x29 + -0x30) = lVar4;
  __s_00 = (void *)(lVar4 - uVar6);
  memset(__s_00,0,unaff_x28);
  *(size_t *)(unaff_x29 + -0x38) = unaff_x28;
  __s_01 = (void *)((long)__s_00 - uVar7);
  memset(__s_01,0,unaff_x23);
  __s = (void *)((long)__s_01 - uVar8);
  memset(__s,0,unaff_x24);
  if (*(long *)(unaff_x29 + -0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  pvVar9 = *(void **)(unaff_x29 + -0x30);
  puVar2 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8);
  uVar1 = *puVar2;
  *(void **)(unaff_x29 + -0x10) = pvVar9;
  (*(code *)puVar2[2])(uVar1,puVar2,*(long *)(unaff_x29 + -0x20),unaff_x29 + -0x10,pvVar9);
  memcpy(__s_00,pvVar9,*(size_t *)(unaff_x29 + -0x38));
  while( true ) {
    do {
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x48))(__s_00);
      if ((uVar6 & 1) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x38);
        lVar4 = *(long *)(lVar5 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01dde7f8();
          lVar5 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_01d7e454(lVar4,*(undefined8 *)(lVar5 + 0x50),*(undefined8 *)(unaff_x29 + -0x28),__s_00,0
                     ,0);
        if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar2 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
      uVar1 = *puVar2;
      *(void **)(unaff_x29 + -0x10) = __src;
      (*(code *)puVar2[2])(uVar1,puVar2,__s_00,unaff_x29 + -0x10,__src);
      memcpy(__s_01,__src,unaff_x23);
      memcpy(__dest,__s_01,unaff_x23);
      uVar1 = thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),__dest);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar4 = thunk_FUN_01de26bc(uVar1,lVar4);
    } while (lVar4 == 0);
    memcpy(__src,__s_01,unaff_x23);
    uVar1 = thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),__src);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    uVar1 = thunk_FUN_01de26bc(uVar1,lVar4);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    pvVar9 = (void *)FUN_01d7da60(uVar1,lVar4,__dest_00);
    memcpy(__s,pvVar9,unaff_x24);
    memcpy(__dest_00,__s,unaff_x24);
    if (*(long *)(unaff_x29 + -0x18) == 0) break;
    puVar2 = __dest_00;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
      puVar2 = (undefined8 *)*__dest_00;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40);
    uVar1 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar2;
    (*(code *)puVar3[2])(uVar1,puVar3,*(undefined8 *)(unaff_x29 + -0x18),unaff_x29 + -0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}



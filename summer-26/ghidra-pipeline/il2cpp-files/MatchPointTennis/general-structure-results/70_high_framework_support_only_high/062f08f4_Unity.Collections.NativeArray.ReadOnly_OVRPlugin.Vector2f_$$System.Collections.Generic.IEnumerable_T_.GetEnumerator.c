/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 062f08f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x062f0d6c) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  void *__src;
  undefined8 uVar11;
  long *unaff_x21;
  long *unaff_x22;
  ulong __n;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *puVar12;
  size_t unaff_x28;
  long unaff_x29;
  
  lVar2 = FUN_04481fb8();
  lVar7 = *(long *)(*unaff_x21 + 0xc0);
  lVar2 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x40) = lVar2;
  __n = (ulong)*(uint *)(*(long *)(lVar7 + 0x20) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(lVar2 - uVar8);
  __dest_00 = (undefined8 *)((long)__dest - uVar8);
  puVar12 = (undefined8 *)((long)__dest_00 - uVar8);
  uVar8 = unaff_x28 + 0xf & 0x1fffffff0;
  __src = (void *)((long)puVar12 - uVar8);
  pvVar3 = (void *)((long)__src - uVar8);
  *(void **)(unaff_x29 + -0x30) = pvVar3;
  memset(pvVar3,0,unaff_x28);
  if (*(long *)(unaff_x29 + -0x28) == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar5 = thunk_FUN_0448520c();
    uVar11 = thunk_FUN_044adef4(PTR_DAT_09f296e0);
    FUN_07996cc8(uVar5,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar5);
  }
  plVar4 = (long *)thunk_FUN_044a5a9c();
  if (*plVar4 != 0) {
    plVar4 = (long *)thunk_FUN_044a5a9c();
    lVar2 = *plVar4;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xa8);
    uVar5 = *puVar6;
    *(void **)(unaff_x29 + -0x20) = __src;
    (*(code *)puVar6[2])(uVar5,puVar6,lVar2,unaff_x29 + -0x20,__src);
    memcpy(*(void **)(unaff_x29 + -0x30),__src,unaff_x28);
    while (uVar8 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0x110))
                             (*(undefined8 *)(unaff_x29 + -0x30)), (uVar8 & 1) != 0) {
      if ((*(byte *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      lVar2 = thunk_FUN_0448520c();
      (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xc0))();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_03dbcd04(lVar2,*(long *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80) + 0x20);
      puVar6 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 200);
      uVar5 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x20) = __dest;
      (*(code *)puVar6[2])(uVar5,puVar6,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x20,__dest)
      ;
      FUN_04447bd0(lVar2,*(undefined8 *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80),
                   __dest,__n);
      plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xd8))();
      pvVar3 = (void *)thunk_FUN_044a5a9c(lVar2,*(undefined8 *)
                                                 (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(__dest_00,pvVar3,__n);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar7 = *unaff_x22;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
      (**(code **)(*(long *)(lVar7 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar7 + 0xa30) + 8));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      puVar6 = __dest_00;
      puVar9 = puVar12;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        puVar9 = (undefined8 *)*puVar12;
      }
      lVar7 = *plVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
      lVar7 = *(long *)(lVar7 + 0x1c0);
      (**(code **)(lVar7 + 0x10))
                (*(undefined8 *)(lVar7 + 8),lVar7,plVar4,unaff_x29 + -0x18,unaff_x29 + -0x20);
      if (*(char *)(unaff_x29 + -0x20) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xf8))();
        uVar1 = ~uVar1 & 1;
      }
      pvVar3 = (void *)thunk_FUN_044a5a9c(lVar2,*(undefined8 *)
                                                 (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(__dest,pvVar3,__n);
      puVar6 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
      }
      lVar7 = *unaff_x22;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      (**(code **)(*(long *)(lVar7 + 0xaf0) + 0x10))(*(undefined8 *)(*(long *)(lVar7 + 0xaf0) + 8));
      uVar11 = *(undefined8 *)(unaff_x29 + -0x18);
      uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
      FUN_0799ce68(uVar5,lVar2,*(undefined8 *)(*(long *)(*unaff_x21 + 0xc0) + 0x108),0);
      lVar2 = **(long **)(unaff_x29 + -0x28);
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f296d8) {
            puVar6 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_062f0c90;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_044822ac(*(undefined8 *)(unaff_x29 + -0x28),*(long *)PTR_DAT_09f296d8,0);
LAB_062f0c90:
      (*(code *)*puVar6)(*(undefined8 *)(unaff_x29 + -0x28),uVar11,uVar1,uVar5,puVar6[1]);
    }
    lVar7 = *(long *)(*unaff_x21 + 0xc0);
    lVar2 = *(long *)(lVar7 + 0xb0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
      lVar7 = *(long *)(*unaff_x21 + 0xc0);
    }
    FUN_0444872c(lVar2,*(undefined8 *)(lVar7 + 0x118),*(undefined8 *)(unaff_x29 + -0x40),
                 *(undefined8 *)(unaff_x29 + -0x30),0,0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$GetEnumerator
ENTRY_POINT: 062f0894
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

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__GetEnumerator
               (long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  void *__src;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong __n;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *puVar14;
  ulong uVar15;
  long unaff_x29;
  
  lVar6 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar6 + 0x28);
  if ((DAT_0a51e6c7 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1ea48);
    FUN_04447ba8(PTR_DAT_09f296d8);
    DAT_0a51e6c7 = 1;
  }
  plVar13 = (long *)(param_3 + 0x20);
  lVar12 = *plVar13;
  *(long *)(unaff_x29 + -0x38) = lVar6;
  lVar6 = *(long *)(lVar12 + 0xc0);
  uVar1 = *(uint *)(*(long *)(lVar6 + 0xb0) + 0xfc);
  uVar15 = (ulong)uVar1;
  if ((*(byte *)(*(long *)(lVar6 + 0xb0) + 0x135) & 1) == 0) {
    lVar6 = FUN_04481fb8();
    lVar12 = *plVar13;
    uVar1 = *(uint *)(lVar6 + 0xfc);
    lVar6 = *(long *)(lVar12 + 0xc0);
  }
  lVar7 = (long)&stack0x00000000 - ((ulong)(uVar1 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x40) = lVar7;
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x20) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(lVar7 - uVar8);
  __dest_00 = (undefined8 *)((long)__dest - uVar8);
  puVar14 = (undefined8 *)((long)__dest_00 - uVar8);
  uVar8 = uVar15 + 0xf & 0x1fffffff0;
  __src = (void *)((long)puVar14 - uVar8);
  pvVar2 = (void *)((long)__src - uVar8);
  *(void **)(unaff_x29 + -0x30) = pvVar2;
  memset(pvVar2,0,uVar15);
  if (*(long *)(unaff_x29 + -0x28) == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar4 = thunk_FUN_0448520c();
    uVar11 = thunk_FUN_044adef4(PTR_DAT_09f296e0);
    FUN_07996cc8(uVar4,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,param_3);
  }
  plVar3 = (long *)thunk_FUN_044a5a9c(param_1,*(long *)(**(long **)(lVar12 + 0xc0) + 0x80) + 0x40);
  if (*plVar3 != 0) {
    plVar3 = (long *)thunk_FUN_044a5a9c(param_1,*(long *)(**(long **)(*plVar13 + 0xc0) + 0x80) +
                                                0x40);
    lVar6 = *plVar3;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    puVar5 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xa8);
    uVar4 = *puVar5;
    *(void **)(unaff_x29 + -0x20) = __src;
    (*(code *)puVar5[2])(uVar4,puVar5,lVar6,unaff_x29 + -0x20,__src);
    memcpy(*(void **)(unaff_x29 + -0x30),__src,uVar15);
    while (uVar15 = (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x110))
                              (*(undefined8 *)(unaff_x29 + -0x30)), (uVar15 & 1) != 0) {
      if ((*(byte *)(*(long *)(*(long *)(*plVar13 + 0xc0) + 0xb8) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      lVar6 = thunk_FUN_0448520c();
      (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xc0))();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_03dbcd04(lVar6,*(long *)(*(long *)(*(long *)(*plVar13 + 0xc0) + 0xb8) + 0x80) + 0x20,
                   param_1);
      puVar5 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 200);
      uVar4 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x20) = __dest;
      (*(code *)puVar5[2])(uVar4,puVar5,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x20,__dest)
      ;
      FUN_04447bd0(lVar6,*(undefined8 *)(*(long *)(*(long *)(*plVar13 + 0xc0) + 0xb8) + 0x80),__dest
                   ,__n);
      plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xd8))();
      pvVar2 = (void *)thunk_FUN_044a5a9c(lVar6,*(undefined8 *)
                                                 (*(long *)(*(long *)(*plVar13 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(__dest_00,pvVar2,__n);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar12 = *param_1;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar14;
      lVar12 = *(long *)(lVar12 + 0xa30);
      (**(code **)(lVar12 + 0x10))
                (*(undefined8 *)(lVar12 + 8),lVar12,param_1,unaff_x29 + -0x20,puVar14);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      puVar5 = __dest_00;
      puVar9 = puVar14;
      if (-1 < *(int *)(*(long *)(*(long *)(*plVar13 + 0xc0) + 0x20) + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        puVar9 = (undefined8 *)*puVar14;
      }
      lVar12 = *plVar3;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
      lVar12 = *(long *)(lVar12 + 0x1c0);
      (**(code **)(lVar12 + 0x10))
                (*(undefined8 *)(lVar12 + 8),lVar12,plVar3,unaff_x29 + -0x18,unaff_x29 + -0x20);
      if (*(char *)(unaff_x29 + -0x20) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(code *)**(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xf8))(param_1);
        uVar1 = ~uVar1 & 1;
      }
      pvVar2 = (void *)thunk_FUN_044a5a9c(lVar6,*(undefined8 *)
                                                 (*(long *)(*(long *)(*plVar13 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(__dest,pvVar2,__n);
      puVar5 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*plVar13 + 0xc0) + 0x20) + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
      }
      lVar12 = *param_1;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      lVar12 = *(long *)(lVar12 + 0xaf0);
      (**(code **)(lVar12 + 0x10))
                (*(undefined8 *)(lVar12 + 8),lVar12,param_1,unaff_x29 + -0x20,unaff_x29 + -0x18);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x18);
      uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
      FUN_0799ce68(uVar4,lVar6,*(undefined8 *)(*(long *)(*plVar13 + 0xc0) + 0x108),0);
      lVar6 = **(long **)(unaff_x29 + -0x28);
      uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar15 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f296d8) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_062f0c90;
          }
          uVar15 = uVar15 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar15 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_044822ac(*(undefined8 *)(unaff_x29 + -0x28),*(long *)PTR_DAT_09f296d8,0);
LAB_062f0c90:
      (*(code *)*puVar5)(*(undefined8 *)(unaff_x29 + -0x28),uVar11,uVar1,uVar4,puVar5[1]);
    }
    lVar12 = *(long *)(*plVar13 + 0xc0);
    lVar6 = *(long *)(lVar12 + 0xb0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8();
      lVar12 = *(long *)(*plVar13 + 0xc0);
    }
    FUN_0444872c(lVar6,*(undefined8 *)(lVar12 + 0x118),*(undefined8 *)(unaff_x29 + -0x40),
                 *(undefined8 *)(unaff_x29 + -0x30),0,0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



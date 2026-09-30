/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 062f096c
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

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  undefined8 *puVar9;
  int *piVar10;
  void *unaff_x19;
  undefined8 uVar11;
  long *unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  size_t unaff_x28;
  long unaff_x29;
  
  *(void **)(unaff_x29 + -0x30) = (void *)((long)unaff_x19 - in_x9);
  memset((void *)((long)unaff_x19 - in_x9),0,unaff_x28);
  if (*(long *)(unaff_x29 + -0x28) == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar3 = thunk_FUN_0448520c();
    uVar11 = thunk_FUN_044adef4(PTR_DAT_09f296e0);
    FUN_07996cc8(uVar3,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3);
  }
  plVar2 = (long *)thunk_FUN_044a5a9c();
  if (*plVar2 != 0) {
    plVar2 = (long *)thunk_FUN_044a5a9c();
    lVar7 = *plVar2;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xa8);
    uVar3 = *puVar6;
    *(void **)(unaff_x29 + -0x20) = unaff_x19;
    (*(code *)puVar6[2])(uVar3,puVar6,lVar7,unaff_x29 + -0x20);
    memcpy(*(void **)(unaff_x29 + -0x30),unaff_x19,unaff_x28);
    while (uVar4 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0x110))
                             (*(undefined8 *)(unaff_x29 + -0x30)), (uVar4 & 1) != 0) {
      if ((*(byte *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      lVar7 = thunk_FUN_0448520c();
      (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xc0))();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_03dbcd04(lVar7,*(long *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80) + 0x20);
      puVar6 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 200);
      uVar3 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
      (*(code *)puVar6[2])(uVar3,puVar6,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x20);
      FUN_04447bd0(lVar7,*(undefined8 *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80));
      plVar2 = (long *)(*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xd8))();
      pvVar5 = (void *)thunk_FUN_044a5a9c(lVar7,*(undefined8 *)
                                                 (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(unaff_x25,pvVar5,unaff_x23);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar8 = *unaff_x22;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
      (**(code **)(*(long *)(lVar8 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 0xa30) + 8));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      puVar6 = unaff_x25;
      puVar9 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x25;
        puVar9 = (undefined8 *)*unaff_x26;
      }
      lVar8 = *plVar2;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
      lVar8 = *(long *)(lVar8 + 0x1c0);
      (**(code **)(lVar8 + 0x10))
                (*(undefined8 *)(lVar8 + 8),lVar8,plVar2,unaff_x29 + -0x18,unaff_x29 + -0x20);
      if (*(char *)(unaff_x29 + -0x20) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xf8))();
        uVar1 = ~uVar1 & 1;
      }
      pvVar5 = (void *)thunk_FUN_044a5a9c(lVar7,*(undefined8 *)
                                                 (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(unaff_x24,pvVar5,unaff_x23);
      puVar6 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x24;
      }
      lVar8 = *unaff_x22;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      (**(code **)(*(long *)(lVar8 + 0xaf0) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 0xaf0) + 8));
      uVar11 = *(undefined8 *)(unaff_x29 + -0x18);
      uVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
      FUN_0799ce68(uVar3,lVar7,*(undefined8 *)(*(long *)(*unaff_x21 + 0xc0) + 0x108),0);
      lVar7 = **(long **)(unaff_x29 + -0x28);
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f296d8) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_062f0c90;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_044822ac(*(undefined8 *)(unaff_x29 + -0x28),*(long *)PTR_DAT_09f296d8,0);
LAB_062f0c90:
      (*(code *)*puVar6)(*(undefined8 *)(unaff_x29 + -0x28),uVar11,uVar1,uVar3,puVar6[1]);
    }
    lVar8 = *(long *)(*unaff_x21 + 0xc0);
    lVar7 = *(long *)(lVar8 + 0xb0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8();
      lVar8 = *(long *)(*unaff_x21 + 0xc0);
    }
    FUN_0444872c(lVar7,*(undefined8 *)(lVar8 + 0x118),*(undefined8 *)(unaff_x29 + -0x40),
                 *(undefined8 *)(unaff_x29 + -0x30),0,0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



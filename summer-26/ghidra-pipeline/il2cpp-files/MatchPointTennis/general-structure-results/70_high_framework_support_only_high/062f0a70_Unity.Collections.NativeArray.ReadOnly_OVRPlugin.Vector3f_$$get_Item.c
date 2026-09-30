/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$get_Item
ENTRY_POINT: 062f0a70
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x062f0d6c) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__get_Item(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  do {
    FUN_03dbcd04(unaff_x27,param_1 + 0x20);
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 200);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
    (*(code *)puVar5[2])(uVar2,puVar5,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x20);
    FUN_04447bd0(unaff_x27,*(undefined8 *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80));
    plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xd8))();
    pvVar4 = (void *)thunk_FUN_044a5a9c(unaff_x27,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80));
    memcpy(unaff_x25,pvVar4,unaff_x23);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar6 = *unaff_x22;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
    (**(code **)(*(long *)(lVar6 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0xa30) + 8));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    puVar5 = unaff_x25;
    puVar8 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x25;
      puVar8 = (undefined8 *)*unaff_x26;
    }
    lVar6 = *plVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar8;
    lVar6 = *(long *)(lVar6 + 0x1c0);
    (**(code **)(lVar6 + 0x10))
              (*(undefined8 *)(lVar6 + 8),lVar6,plVar3,unaff_x29 + -0x18,unaff_x29 + -0x20);
    if (*(char *)(unaff_x29 + -0x20) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xf8))();
      uVar1 = ~uVar1 & 1;
    }
    pvVar4 = (void *)thunk_FUN_044a5a9c(unaff_x27,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80));
    memcpy(unaff_x24,pvVar4,unaff_x23);
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    lVar6 = *unaff_x22;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    (**(code **)(*(long *)(lVar6 + 0xaf0) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0xaf0) + 8));
    uVar11 = *(undefined8 *)(unaff_x29 + -0x18);
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
    FUN_0799ce68(uVar2,unaff_x27,*(undefined8 *)(*(long *)(*unaff_x21 + 0xc0) + 0x108),0);
    lVar6 = **(long **)(unaff_x29 + -0x28);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f296d8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_062f0a0c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_044822ac(*(undefined8 *)(unaff_x29 + -0x28),*(long *)PTR_DAT_09f296d8,0);
LAB_062f0a0c:
    (*(code *)*puVar5)(*(undefined8 *)(unaff_x29 + -0x28),uVar11,uVar1,uVar2,puVar5[1]);
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0x110))
                      (*(undefined8 *)(unaff_x29 + -0x30));
    if ((uVar9 & 1) == 0) {
      lVar7 = *(long *)(*unaff_x21 + 0xc0);
      lVar6 = *(long *)(lVar7 + 0xb0);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
        lVar7 = *(long *)(*unaff_x21 + 0xc0);
      }
      FUN_0444872c(lVar6,*(undefined8 *)(lVar7 + 0x118),*(undefined8 *)(unaff_x29 + -0x40),
                   *(undefined8 *)(unaff_x29 + -0x30),0,0);
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if ((*(byte *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    unaff_x27 = thunk_FUN_0448520c();
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xc0))();
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_1 = *(long *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80);
  } while( true );
}



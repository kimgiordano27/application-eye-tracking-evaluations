/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$op_Implicit
ENTRY_POINT: 062f0a28
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

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__op_Implicit(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
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
  long unaff_x29;
  
  do {
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
    uVar3 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
    (*(code *)puVar6[2])(uVar3,puVar6,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x20);
    FUN_04447bd0(lVar2,*(undefined8 *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80));
    plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xd8))();
    pvVar5 = (void *)thunk_FUN_044a5a9c(lVar2,*(undefined8 *)
                                               (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                               0x80));
    memcpy(unaff_x25,pvVar5,unaff_x23);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = *unaff_x22;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
    (**(code **)(*(long *)(lVar7 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar7 + 0xa30) + 8));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    puVar6 = unaff_x25;
    puVar8 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x25;
      puVar8 = (undefined8 *)*unaff_x26;
    }
    lVar7 = *plVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar8;
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
    pvVar5 = (void *)thunk_FUN_044a5a9c(lVar2,*(undefined8 *)
                                               (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                               0x80));
    memcpy(unaff_x24,pvVar5,unaff_x23);
    puVar6 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x24;
    }
    lVar7 = *unaff_x22;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    (**(code **)(*(long *)(lVar7 + 0xaf0) + 0x10))(*(undefined8 *)(*(long *)(lVar7 + 0xaf0) + 8));
    uVar11 = *(undefined8 *)(unaff_x29 + -0x18);
    uVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
    FUN_0799ce68(uVar3,lVar2,*(undefined8 *)(*(long *)(*unaff_x21 + 0xc0) + 0x108),0);
    lVar2 = **(long **)(unaff_x29 + -0x28);
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f296d8) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_062f0a0c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_044822ac(*(undefined8 *)(unaff_x29 + -0x28),*(long *)PTR_DAT_09f296d8,0);
LAB_062f0a0c:
    (*(code *)*puVar6)(*(undefined8 *)(unaff_x29 + -0x28),uVar11,uVar1,uVar3,puVar6[1]);
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0x110))
                      (*(undefined8 *)(unaff_x29 + -0x30));
    if ((uVar9 & 1) == 0) {
      lVar7 = *(long *)(*unaff_x21 + 0xc0);
      lVar2 = *(long *)(lVar7 + 0xb0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
        lVar7 = *(long *)(*unaff_x21 + 0xc0);
      }
      FUN_0444872c(lVar2,*(undefined8 *)(lVar7 + 0x118),*(undefined8 *)(unaff_x29 + -0x40),
                   *(undefined8 *)(unaff_x29 + -0x30),0,0);
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



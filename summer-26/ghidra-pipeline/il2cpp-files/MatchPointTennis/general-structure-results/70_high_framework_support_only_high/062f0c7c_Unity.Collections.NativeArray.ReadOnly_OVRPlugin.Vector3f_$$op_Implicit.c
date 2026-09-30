/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$op_Implicit
ENTRY_POINT: 062f0c7c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x062f0d6c) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__op_Implicit
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w28;
  long unaff_x29;
  
  do {
    puVar7 = (undefined8 *)FUN_044822ac(param_1,param_2,param_3);
    while( true ) {
      (*(code *)*puVar7)(*(undefined8 *)(unaff_x29 + -0x28),unaff_x19,unaff_w28,unaff_x20,puVar7[1])
      ;
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0x110))
                        (*(undefined8 *)(unaff_x29 + -0x30));
      if ((uVar2 & 1) == 0) {
        lVar8 = *(long *)(*unaff_x21 + 0xc0);
        lVar3 = *(long *)(lVar8 + 0xb0);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
          lVar8 = *(long *)(*unaff_x21 + 0xc0);
        }
        FUN_0444872c(lVar3,*(undefined8 *)(lVar8 + 0x118),*(undefined8 *)(unaff_x29 + -0x40),
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
      lVar3 = thunk_FUN_0448520c();
      (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xc0))();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_03dbcd04(lVar3,*(long *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80) + 0x20);
      puVar7 = *(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 200);
      uVar4 = *puVar7;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
      (*(code *)puVar7[2])(uVar4,puVar7,*(undefined8 *)(unaff_x29 + -0x30),unaff_x29 + -0x20);
      FUN_04447bd0(lVar3,*(undefined8 *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) + 0x80));
      plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xd8))();
      pvVar6 = (void *)thunk_FUN_044a5a9c(lVar3,*(undefined8 *)
                                                 (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(unaff_x25,pvVar6,unaff_x23);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar8 = *unaff_x22;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
      (**(code **)(*(long *)(lVar8 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 0xa30) + 8));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      puVar7 = unaff_x25;
      puVar9 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x25;
        puVar9 = (undefined8 *)*unaff_x26;
      }
      lVar8 = *plVar5;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
      lVar8 = *(long *)(lVar8 + 0x1c0);
      (**(code **)(lVar8 + 0x10))
                (*(undefined8 *)(lVar8 + 8),lVar8,plVar5,unaff_x29 + -0x18,unaff_x29 + -0x20);
      if (*(char *)(unaff_x29 + -0x20) == '\0') {
        unaff_w28 = 0;
      }
      else {
        uVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x21 + 0xc0) + 0xf8))();
        unaff_w28 = ~uVar1 & 1;
      }
      pvVar6 = (void *)thunk_FUN_044a5a9c(lVar3,*(undefined8 *)
                                                 (*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0xb8) +
                                                 0x80));
      memcpy(unaff_x24,pvVar6,unaff_x23);
      puVar7 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x20) + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x24;
      }
      lVar8 = *unaff_x22;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
      (**(code **)(*(long *)(lVar8 + 0xaf0) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 0xaf0) + 8));
      unaff_x19 = *(undefined8 *)(unaff_x29 + -0x18);
      unaff_x20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
      FUN_0799ce68(unaff_x20,lVar3,*(undefined8 *)(*(long *)(*unaff_x21 + 0xc0) + 0x108),0);
      lVar3 = **(long **)(unaff_x29 + -0x28);
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      param_2 = *(long *)PTR_DAT_09f296d8;
      if (uVar2 == 0) break;
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      while (*(long *)(piVar10 + -2) != param_2) {
        uVar2 = uVar2 - 1;
        piVar10 = piVar10 + 4;
        if (uVar2 == 0) goto LAB_062f0c74;
      }
      puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
    }
LAB_062f0c74:
    param_1 = *(undefined8 *)(unaff_x29 + -0x28);
    param_3 = 0;
  } while( true );
}



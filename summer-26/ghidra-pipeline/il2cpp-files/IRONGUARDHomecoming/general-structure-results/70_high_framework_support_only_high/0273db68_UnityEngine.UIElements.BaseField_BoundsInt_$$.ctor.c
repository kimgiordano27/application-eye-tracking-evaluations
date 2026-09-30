/*
FUNCTION_NAME: UnityEngine.UIElements.BaseField<BoundsInt>$$.ctor
ENTRY_POINT: 0273db68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0273dc98) */
/* WARNING: Removing unreachable block (ram,0x0273dcac) */

void UnityEngine_UIElements_BaseField<BoundsInt>___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x21;
  long *plVar8;
  undefined8 *unaff_x22;
  undefined8 unaff_x24;
  int unaff_w28;
  long unaff_x29;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0390bec0();
  while (unaff_w28 = unaff_w28 + -1, -1 < unaff_w28) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      lVar4 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    }
    puVar2 = *(undefined8 **)(lVar4 + 0xf8);
    lVar5 = **(long **)(lVar5 + 0xb8);
    uVar1 = *puVar2;
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar2[2])(uVar1);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar2 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x78) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0x100);
    uVar1 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar2;
    *(long **)(unaff_x29 + -0x18) = unaff_x19;
    (*(code *)puVar3[2])(uVar1,puVar3,lVar5,unaff_x29 + -0x20);
  }
  plVar8 = *(long **)(unaff_x29 + -0x38);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0273dbdc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0273dbdc:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
        goto LAB_0273dc48;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0273dc48:
  (*(code *)*puVar2)();
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



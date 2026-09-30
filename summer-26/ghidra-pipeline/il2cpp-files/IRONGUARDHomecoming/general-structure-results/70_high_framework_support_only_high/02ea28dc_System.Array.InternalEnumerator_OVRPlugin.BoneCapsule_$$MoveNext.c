/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$MoveNext
ENTRY_POINT: 02ea28dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea2ae4) */
/* WARNING: Removing unreachable block (ram,0x02ea2af4) */

void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__MoveNext(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x29;
  
  while( true ) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar6 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x58) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0x90);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar3[2])(uVar2,puVar3,unaff_x21,unaff_x29 + -0x18);
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98))();
    if ((uVar1 & 1) == 0) break;
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80);
    uVar2 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
    (*(code *)puVar6[2])(uVar2);
    memcpy(unaff_x25,unaff_x24,unaff_x23);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    unaff_x21 = **(long **)(lVar4 + 0xb8);
    memcpy(unaff_x24,unaff_x25,unaff_x23);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar4 = *(long *)(lVar5 + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar4,*(undefined8 *)(lVar5 + 0xa0),*(undefined8 *)(unaff_x29 + -0x30));
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x19;
  uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar1 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
        goto LAB_02ea2a98;
      }
      uVar1 = uVar1 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar1 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02ea2a98:
  (*(code *)*puVar6)();
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



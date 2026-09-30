/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02ea2834
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

void System_Array_InternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x29;
  
  while (uVar1 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x98))(), (uVar1 & 1) != 0)
  {
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
    (*(code *)puVar4[2])(uVar2);
    memcpy(unaff_x25,unaff_x24,unaff_x23);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    memcpy(unaff_x24,unaff_x25,unaff_x23);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar4 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x24;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x90);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar5[2])(uVar2,puVar5,lVar3,unaff_x29 + -0x18);
    param_1 = *(long *)(unaff_x20 + 0x20);
  }
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar6 + 0x78);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar3,*(undefined8 *)(lVar6 + 0xa0),*(undefined8 *)(unaff_x29 + -0x30));
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *unaff_x19;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
        goto LAB_02ea2a98;
      }
      uVar1 = uVar1 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar1 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02ea2a98:
  (*(code *)*puVar4)();
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



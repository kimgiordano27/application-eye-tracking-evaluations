/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$get_Current
ENTRY_POINT: 02ea2720
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea2ae4) */
/* WARNING: Removing unreachable block (ram,0x02ea2af4) */

void System_Array_InternalEnumerator<OVRPlugin_Bone>__get_Current(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 *__s;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *__s_00;
  size_t unaff_x26;
  long *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  __s = &stack0x00000000 + -in_x9;
  memset(__s,0,unaff_x26);
  __s_00 = __s + -unaff_x21;
  memset(__s_00,0,unaff_x23);
  if (*unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68))();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_02ea27d4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02ea27d4:
  (*(code *)*puVar1)();
  lVar4 = *unaff_x27;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  uVar2 = *puVar1;
  *(void **)(unaff_x29 + -0x20) = unaff_x28;
  (*(code *)puVar1[2])(uVar2,puVar1,lVar4,unaff_x29 + -0x20);
  memcpy(__s,unaff_x28,unaff_x26);
  while (uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98))
                           (__s), (uVar6 & 1) != 0) {
    puVar1 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80);
    uVar2 = *puVar1;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
    (*(code *)puVar1[2])(uVar2,puVar1,__s,unaff_x29 + -0x20);
    memcpy(__s_00,unaff_x24,unaff_x23);
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
    lVar4 = **(long **)(lVar4 + 0xb8);
    memcpy(unaff_x24,__s_00,unaff_x23);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar1 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0x90);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar3[2])(uVar2,puVar3,lVar4,unaff_x29 + -0x18);
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar4 = *(long *)(lVar5 + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar4,*(undefined8 *)(lVar5 + 0xa0),*(undefined8 *)(unaff_x29 + -0x30),__s,0,0);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
        goto LAB_02ea2a98;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02ea2a98:
  (*(code *)*puVar1)();
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



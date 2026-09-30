/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$.ctor
ENTRY_POINT: 02ea26ac
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

void System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 in_w8;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  void *__s;
  ulong uVar10;
  undefined8 *puVar11;
  void *__s_00;
  ulong uVar12;
  long *unaff_x27;
  void *__src;
  long unaff_x29;
  
  *(undefined1 *)(unaff_x21 + 0x8b7) = in_w8;
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar1 = *(long *)(lVar6 + 0x78);
  uVar5 = *(uint *)(lVar1 + 0xfc);
  uVar12 = (ulong)uVar5;
  uVar10 = (ulong)*(uint *)(*(long *)(lVar6 + 0x58) + 0xfc);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
    uVar5 = *(uint *)(lVar1 + 0xfc);
  }
  lVar1 = (long)&stack0x00000000 - ((ulong)(uVar5 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x30) = lVar1;
  uVar9 = uVar10 + 0xf & 0x1fffffff0;
  puVar11 = (undefined8 *)(lVar1 - uVar9);
  uVar7 = uVar12 + 0xf & 0x1fffffff0;
  __src = (void *)((long)puVar11 - uVar7);
  __s = (void *)((long)__src - uVar7);
  memset(__s,0,uVar12);
  __s_00 = (void *)((long)__s - uVar9);
  memset(__s_00,0,uVar10);
  if (*unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68))();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar1 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_02ea27d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02ea27d4:
  (*(code *)*puVar2)();
  lVar1 = *unaff_x27;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  uVar3 = *puVar2;
  *(void **)(unaff_x29 + -0x20) = __src;
  (*(code *)puVar2[2])(uVar3,puVar2,lVar1,unaff_x29 + -0x20,__src);
  memcpy(__s,__src,uVar12);
  while (uVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98))
                            (__s), (uVar12 & 1) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80);
    uVar3 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
    (*(code *)puVar2[2])(uVar3,puVar2,__s,unaff_x29 + -0x20,puVar11);
    memcpy(__s_00,puVar11,uVar10);
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
    memcpy(puVar11,__s_00,uVar10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar2 = puVar11;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x28)) {
      puVar2 = (undefined8 *)*puVar11;
    }
    puVar4 = *(undefined8 **)(lVar6 + 0x90);
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar4[2])(uVar3,puVar4,lVar1,unaff_x29 + -0x18);
  }
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar1 = *(long *)(lVar6 + 0x78);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar1,*(undefined8 *)(lVar6 + 0xa0),*(undefined8 *)(unaff_x29 + -0x30),__s,0,0);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar1 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar11 = (undefined8 *)(lVar1 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
        goto LAB_02ea2a98;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_02ea2a98:
  (*(code *)*puVar11)();
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



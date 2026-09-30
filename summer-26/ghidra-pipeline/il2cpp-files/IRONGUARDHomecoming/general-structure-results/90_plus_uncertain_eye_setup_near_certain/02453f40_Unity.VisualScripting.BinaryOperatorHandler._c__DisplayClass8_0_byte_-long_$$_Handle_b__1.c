/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<byte,-long>$$<Handle>b__1
ENTRY_POINT: 02453f40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<byte,_long>__<Handle>b__1
               (void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *__dest;
  void *__dest_00;
  void *__s;
  void *__s_00;
  void *__src;
  long unaff_x29;
  
  lVar1 = FUN_01ecaf44();
  lVar1 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar9 = unaff_x22 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar1 - uVar9);
  __dest_00 = (void *)((long)__src - uVar9);
  __dest = (void *)((long)__dest_00 - uVar9);
  __s = (void *)((long)__dest - uVar9);
  memset(__s,0,unaff_x22);
  __s_00 = (void *)((long)__s - uVar9);
  memset(__s_00,0,unaff_x22);
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    plVar2 = (long *)FUN_04155a74(*(long *)(unaff_x21 + 0x18),*(undefined4 *)(unaff_x29 + -0x14),0);
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02454034;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02454034:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    puVar3 = (undefined8 *)**(undefined8 **)(unaff_x20 + 0x38);
    uVar4 = *puVar3;
    *(void **)(unaff_x29 + -0x10) = __src;
    (*(code *)puVar3[2])(uVar4,puVar3,0,unaff_x29 + -0x10,__src);
    memcpy(__s_00,__src,unaff_x22);
    lVar7 = *(long *)(unaff_x20 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x21 + 0x10);
    lVar6 = *(long *)(lVar7 + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar7 = *(long *)(unaff_x20 + 0x38);
    }
    uVar5 = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(unaff_x29 + -0x10) = uVar4;
    FUN_01f09244(lVar6,uVar5,lVar1,__s_00,unaff_x29 + -0x10,uVar4);
    memcpy(__dest_00,__s_00,unaff_x22);
    memcpy(__s,__dest_00,unaff_x22);
    lVar1 = *(long *)(unaff_x21 + 0x18);
    memcpy(__dest,__s,unaff_x22);
    uVar4 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),__dest);
    if (lVar1 != 0) {
      FUN_04155ba4(lVar1,*(undefined4 *)(unaff_x29 + -0x14),uVar4,0);
      if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



/*
FUNCTION_NAME: FUN_0256e894
ENTRY_POINT: 0256e894
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 FUN_0256e894(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  size_t unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  long *plVar10;
  long unaff_x25;
  long unaff_x29;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x100);
    plVar10 = (long *)*puVar2;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0256e90c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_0256e90c:
    uVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x100,0);
      uVar9 = 0;
      goto LAB_0256eae8;
    }
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x100);
    plVar10 = (long *)*puVar2;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0256e9ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(plVar10,lVar5,0);
LAB_0256e9ac:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x18);
    memcpy(unaff_x22,unaff_x20,unaff_x19);
    plVar10 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0xe0);
    lVar5 = *plVar10;
    memcpy(unaff_x21,unaff_x22,unaff_x19);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar4 = *(undefined8 **)(lVar6 + 0x50);
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar4[2])(uVar3,puVar4,lVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
  } while (*(char *)(unaff_x29 + -0xc) == '\0');
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar9 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
LAB_0256eae8:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



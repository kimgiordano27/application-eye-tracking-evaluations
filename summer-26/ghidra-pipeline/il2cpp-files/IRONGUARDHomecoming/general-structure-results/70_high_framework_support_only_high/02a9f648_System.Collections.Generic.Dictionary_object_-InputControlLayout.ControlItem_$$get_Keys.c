/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-InputControlLayout.ControlItem>$$get_Keys
ENTRY_POINT: 02a9f648
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_Generic_Dictionary<object,_InputControlLayout_ControlItem>__get_Keys
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  long *unaff_x25;
  long *plVar9;
  long unaff_x26;
  long unaff_x29;
  
  lVar1 = FUN_01ecaf44(param_2);
  lVar6 = *unaff_x25;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02a9f69c;
      }
      uVar7 = uVar7 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02a9f69c:
  uVar3 = (*(code *)*puVar2)();
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80)
               + 0x100,uVar3);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) +
                                                   0xc0) + 0x80) + 0x100);
  plVar9 = (long *)*puVar2;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar1 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar7 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02a9f75c;
      }
      uVar7 = uVar7 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02a9f75c:
  uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if ((uVar7 & 1) == 0) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x30));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x100,0);
    uVar8 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20)
                                                     + 0xc0) + 0x80) + 0x100);
    plVar9 = (long *)*puVar2;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44(lVar1);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar1) {
          lVar1 = lVar6 + (long)*piVar4 * 0x10 + 0x138;
          goto LAB_02a9f83c;
        }
        uVar7 = uVar7 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar7 != 0);
    }
    lVar1 = FUN_01ecb238(plVar9,lVar1,0);
LAB_02a9f83c:
    *(void **)(unaff_x29 + -0x28) = unaff_x24;
    lVar1 = *(long *)(lVar1 + 8);
    (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar9,unaff_x29 + -0x28);
    memcpy(unaff_x23,unaff_x24,unaff_x22);
    piVar4 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38)
                                                                      + 0x20) + 0xc0) + 0x80) + 0xe0
                                      );
    if (*piVar4 == 0x7fffffff) {
      uVar3 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar3,*(undefined8 *)(unaff_x29 + -0x38));
    }
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0xe0,*piVar4 + 1);
    plVar9 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0xa0);
    lVar1 = *plVar9;
    memcpy(unaff_x21,unaff_x23,unaff_x22);
    puVar5 = (undefined4 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
    puVar2 = *(undefined8 **)(lVar6 + 0x40);
    uVar3 = *puVar2;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x30) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    *(undefined4 *)(unaff_x29 + -0xc) = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x28) = unaff_x21;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
    (*(code *)puVar2[2])(uVar3,puVar2,lVar1,unaff_x29 + -0x28);
    FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x20);
    uVar8 = 1;
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),1);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



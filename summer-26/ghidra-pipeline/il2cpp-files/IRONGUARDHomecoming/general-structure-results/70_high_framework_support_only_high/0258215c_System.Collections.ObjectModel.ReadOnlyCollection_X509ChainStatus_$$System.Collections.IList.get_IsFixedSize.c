/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<X509ChainStatus>$$System.Collections.IList.get_IsFixedSize
ENTRY_POINT: 0258215c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<X509ChainStatus>__System_Collections_IList_get_IsFixedSize
          (undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x24;
  long unaff_x29;
  
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x20)
  ;
  uVar1 = *puVar3;
  *(undefined8 *)(unaff_x29 + -0x18) = *param_1;
  (*(code *)puVar3[2])(uVar1);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar2 = (long *)*puVar3;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025822b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar4,0);
LAB_025822b8:
    uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,uVar1);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x120);
    plVar2 = (long *)*puVar3;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02582378;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02582378:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x120,0);
      uVar8 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) +
                                                                 0x20) + 0xc0) + 0x80) + 0x120);
      plVar2 = (long *)*puVar3;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
            goto FUN_02582458;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar4 = FUN_01ecb238(plVar2,lVar4,0);
FUN_02582458:
      *(void **)(unaff_x29 + -0x18) = unaff_x20;
      lVar4 = *(long *)(lVar4 + 8);
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar2,unaff_x29 + -0x18);
      memcpy(unaff_x22,unaff_x20,unaff_x19);
      memcpy(unaff_x21,unaff_x22,unaff_x19);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),2);
      uVar8 = 1;
    }
  }
  else {
    plVar2 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0xe0);
    lVar4 = *plVar2;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar3 = *(undefined8 **)
              (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x30);
    uVar1 = *puVar3;
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    (*(code *)puVar3[2])(uVar1,puVar3,lVar4,unaff_x29 + -0x18);
    FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0x20);
    uVar8 = 1;
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



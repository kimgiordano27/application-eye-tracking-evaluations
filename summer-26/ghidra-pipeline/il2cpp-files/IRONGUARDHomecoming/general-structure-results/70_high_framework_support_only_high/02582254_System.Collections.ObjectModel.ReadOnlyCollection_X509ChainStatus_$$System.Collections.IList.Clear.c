/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<X509ChainStatus>$$System.Collections.IList.Clear
ENTRY_POINT: 02582254
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<X509ChainStatus>__System_Collections_IList_Clear
          (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uVar7;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  long *plVar8;
  long unaff_x24;
  long unaff_x29;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar4 = *unaff_x23;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_025822b8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_025822b8:
  uVar2 = (*(code *)*puVar1)();
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x120,uVar2);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  puVar1 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) +
                                                   0xc0) + 0x80) + 0x120);
  plVar8 = (long *)*puVar1;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02582378;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02582378:
  uVar5 = (*(code *)*puVar1)(plVar8,puVar1[1]);
  if ((uVar5 & 1) == 0) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x20));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,0);
    uVar7 = 0;
  }
  else {
    puVar1 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x120);
    plVar8 = (long *)*puVar1;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto FUN_02582458;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238(plVar8,lVar3,0);
FUN_02582458:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar8,unaff_x29 + -0x18);
    memcpy(unaff_x22,unaff_x20,unaff_x19);
    memcpy(unaff_x21,unaff_x22,unaff_x19);
    FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0x20);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),2);
    uVar7 = 1;
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



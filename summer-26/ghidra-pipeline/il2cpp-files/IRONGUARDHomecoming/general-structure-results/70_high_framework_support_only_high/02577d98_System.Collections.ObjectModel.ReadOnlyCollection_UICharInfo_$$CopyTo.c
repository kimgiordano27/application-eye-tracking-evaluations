/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<UICharInfo>$$CopyTo
ENTRY_POINT: 02577d98
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
System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__CopyTo
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  undefined4 uVar7;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  long *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x25;
  long unaff_x29;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02577dc8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238(unaff_x23,param_3,0);
LAB_02577dc8:
        uVar2 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
        FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                              0x80) + 0x80,uVar2);
        FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                     *(undefined8 *)
                      (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                     0xfffffffc);
        puVar1 = (undefined8 *)
                 thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                    *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                   0x20) + 0xc0) + 0x80) + 0x80);
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
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02577e88;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_02577e88:
        uVar5 = (*(code *)*puVar1)(plVar8,puVar1[1]);
        if ((uVar5 & 1) != 0) {
          puVar1 = (undefined8 *)
                   thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                      *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                     0x20) + 0xc0) + 0x80) + 0x80);
          plVar8 = (long *)*puVar1;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x70)
          ;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44(lVar3);
          }
          lVar4 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_02577fc8;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_02577fb0;
        }
        (*(code *)**(undefined8 **)
                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                  (*(undefined8 *)(unaff_x29 + -0x10));
        FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                              0x80) + 0x80,0);
        plVar8 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
        pcVar9 = *(code **)plVar8[0x11];
        uVar2 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                   *(long *)(*plVar8 + 0x80) + 0x60);
        uVar5 = (*pcVar9)(uVar2,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                                 0x88));
        plVar8 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
        if ((uVar5 & 1) == 0) {
          (**(code **)plVar8[2])(*(undefined8 *)(unaff_x29 + -0x10));
          puVar1 = (undefined8 *)
                   thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                      *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                     0x20) + 0xc0) + 0x80) + 0x60);
          uVar7 = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          goto 
          System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
          ;
        }
        puVar1 = (undefined8 *)plVar8[9];
        uVar10 = *puVar1;
        uVar2 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                   *(long *)(*plVar8 + 0x80) + 0x60);
        (*(code *)puVar1[2])(uVar10,puVar1,uVar2,0,unaff_x29 + -0x50);
        unaff_x23 = *(long **)(unaff_x29 + -0x50);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        param_3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x60)
        ;
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_02577fb0:
    if (*(long *)(piVar6 + -2) == lVar3) {
      lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
      goto LAB_02577fe4;
    }
  }
LAB_02577fc8:
  lVar3 = FUN_01ecb238(plVar8,lVar3,0);
LAB_02577fe4:
  *(void **)(unaff_x29 + -0x50) = unaff_x21;
  lVar3 = *(long *)(lVar3 + 8);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar8,unaff_x29 + -0x50);
  memcpy(unaff_x22,unaff_x21,unaff_x19);
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x10),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar7 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);

  System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
  :
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<UICharInfo>$$get_Item
ENTRY_POINT: 02577c4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__get_Item(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar11 [16];
  
  auVar11 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x28))()
  ;
  if (auVar11._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(0,auVar11._8_8_,0);
  }
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x38)
  ;
  (*(code *)puVar3[2])(*puVar3,puVar3,auVar11._0_8_,0,unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x60);
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x58);
  lVar6 = *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80);
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x58);
  FUN_01bc6c2c(*(undefined8 *)(unaff_x29 + -0x10),lVar6 + 0x60,unaff_x29 + -0x80);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  while( true ) {
    plVar5 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
    pcVar9 = *(code **)plVar5[0x11];
    uVar1 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),*(long *)(*plVar5 + 0x80) + 0x60);
    uVar2 = (*pcVar9)(uVar1,*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                             0x88));
    plVar5 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
    if ((uVar2 & 1) == 0) break;
    puVar3 = (undefined8 *)plVar5[9];
    uVar10 = *puVar3;
    uVar1 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),*(long *)(*plVar5 + 0x80) + 0x60);
    (*(code *)puVar3[2])(uVar10,puVar3,uVar1,0,unaff_x29 + -0x50);
    plVar5 = *(long **)(unaff_x29 + -0x50);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar4 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02577dc8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar5,lVar6,0);
LAB_02577dc8:
    uVar1 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0x80,uVar1);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0x80);
    plVar5 = (long *)*puVar3;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02577e88;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02577e88:
    uVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                 0x20) + 0xc0) + 0x80) + 0x80);
      plVar5 = (long *)*puVar3;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x70);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar4 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_02577fc8;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_02577fb0;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x10));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0x80,0);
  }
  (**(code **)plVar5[2])(*(undefined8 *)(unaff_x29 + -0x10));
  puVar3 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) +
                                                   0xc0) + 0x80) + 0x60);
  uVar8 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  goto 
  System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
  ;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_02577fb0:
    if (*(long *)(piVar7 + -2) == lVar6) {
      lVar6 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
      goto LAB_02577fe4;
    }
  }
LAB_02577fc8:
  lVar6 = FUN_01ecb238(plVar5,lVar6,0);
LAB_02577fe4:
  *(void **)(unaff_x29 + -0x50) = unaff_x21;
  lVar6 = *(long *)(lVar6 + 8);
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar5,unaff_x29 + -0x50);
  memcpy(unaff_x22,unaff_x21,unaff_x19);
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x10),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar8 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);

  System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
  :
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



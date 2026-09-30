/*
FUNCTION_NAME: FUN_02577ed0
ENTRY_POINT: 02577ed0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_02577ed0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
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
  
  while( true ) {
    plVar6 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
    pcVar9 = *(code **)plVar6[0x11];
    uVar1 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),*(long *)(*plVar6 + 0x80) + 0x60);
    uVar2 = (*pcVar9)(uVar1,*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                             0x88));
    plVar6 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
    if ((uVar2 & 1) == 0) break;
    puVar3 = (undefined8 *)plVar6[9];
    uVar10 = *puVar3;
    uVar1 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),*(long *)(*plVar6 + 0x80) + 0x60);
    (*(code *)puVar3[2])(uVar10,puVar3,uVar1,0,unaff_x29 + -0x50);
    plVar6 = *(long **)(unaff_x29 + -0x50);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02577dc8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar6,lVar4,0);
LAB_02577dc8:
    uVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
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
    plVar6 = (long *)*puVar3;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02577e88;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02577e88:
    uVar2 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                 0x20) + 0xc0) + 0x80) + 0x80);
      plVar6 = (long *)*puVar3;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x70);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 == 0) goto LAB_02577fc8;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_02577fb0;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x10));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0x80,0);
  }
  (**(code **)plVar6[2])(*(undefined8 *)(unaff_x29 + -0x10));
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
    if (*(long *)(piVar7 + -2) == lVar4) {
      lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
      goto LAB_02577fe4;
    }
  }
LAB_02577fc8:
  lVar4 = FUN_01ecb238(plVar6,lVar4,0);
LAB_02577fe4:
  *(void **)(unaff_x29 + -0x50) = unaff_x21;
  lVar4 = *(long *)(lVar4 + 8);
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar6,unaff_x29 + -0x50);
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



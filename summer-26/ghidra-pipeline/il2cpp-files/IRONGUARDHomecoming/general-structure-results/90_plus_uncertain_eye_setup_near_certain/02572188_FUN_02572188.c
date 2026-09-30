/*
FUNCTION_NAME: FUN_02572188
ENTRY_POINT: 02572188
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02572380) */
/* WARNING: Removing unreachable block (ram,0x025726f4) */

undefined4 FUN_02572188(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  size_t unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  plVar1 = (long *)(*(code *)*param_1)();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025721e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*unaff_x27,0);
LAB_025721e8:
    uVar8 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar1 == (long *)0x0) goto LAB_02572374;
      lVar6 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_0257234c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02572264;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar1,lVar6,0);
LAB_02572264:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar1,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x20,unaff_x19);
    plVar3 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x120);
    lVar6 = *plVar3;
    memcpy(unaff_x21,unaff_x23,unaff_x19);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar5 = *(undefined8 **)(lVar7 + 0x50);
    uVar4 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar5[2])(uVar4,puVar5,lVar6,unaff_x29 + -0x18,unaff_x29 + -0xc);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02572368;
    }
  }
LAB_0257234c:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02572368:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_02572374:
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) +
                                                   0xc0) + 0x80) + 0xe0);
  plVar1 = (long *)*puVar2;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *plVar1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02572414;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar1,lVar6,0);
LAB_02572414:
  uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x140,uVar4);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  do {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar1 = (long *)*puVar2;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025724cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*unaff_x27,0);
LAB_025724cc:
    uVar8 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar8 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x140,0);
      uVar10 = 0;
      goto LAB_025726a8;
    }
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar1 = (long *)*puVar2;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0257256c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar1,lVar6,0);
LAB_0257256c:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar1,unaff_x29 + -0x18);
    memcpy(unaff_x22,unaff_x20,unaff_x19);
    plVar1 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x120);
    lVar6 = *plVar1;
    memcpy(unaff_x21,unaff_x22,unaff_x19);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar5 = *(undefined8 **)(lVar7 + 0x50);
    uVar4 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar5[2])(uVar4,puVar5,lVar6,unaff_x29 + -0x18,unaff_x29 + -0x10);
  } while (*(char *)(unaff_x29 + -0x10) == '\0');
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar10 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
LAB_025726a8:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



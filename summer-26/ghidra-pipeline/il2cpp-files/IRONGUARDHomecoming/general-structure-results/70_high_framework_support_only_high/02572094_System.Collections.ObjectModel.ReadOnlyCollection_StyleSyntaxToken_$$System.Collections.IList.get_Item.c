/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<StyleSyntaxToken>$$System.Collections.IList.get_Item
ENTRY_POINT: 02572094
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02572380) */
/* WARNING: Removing unreachable block (ram,0x025726f4) */

undefined4
System_Collections_ObjectModel_ReadOnlyCollection<StyleSyntaxToken>__System_Collections_IList_get_Item
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  size_t unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  uVar10 = *param_1;
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar1 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)
              (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x20))
            (uVar1,uVar10);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x120,uVar1);
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) +
                                                   0xc0) + 0x80) + 0xa0);
  plVar11 = (long *)*puVar2;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar6 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto FUN_02572188;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar11,lVar4,0);
FUN_02572188:
  plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_025721e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x27,0);
LAB_025721e8:
    uVar7 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar11 == (long *)0x0) goto LAB_02572374;
      lVar4 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_0257234c;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02572264;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_01ecb238(plVar11,lVar4,0);
LAB_02572264:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar11,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x20,unaff_x19);
    plVar3 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x120);
    lVar4 = *plVar3;
    memcpy(unaff_x21,unaff_x23,unaff_x19);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x50);
    uVar10 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar5[2])(uVar10,puVar5,lVar4,unaff_x29 + -0x18,unaff_x29 + -0xc);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02572368;
    }
  }
LAB_0257234c:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02572368:
  (*(code *)*puVar2)(plVar11,puVar2[1]);
LAB_02572374:
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) +
                                                   0xc0) + 0x80) + 0xe0);
  plVar11 = (long *)*puVar2;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar6 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02572414;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar11,lVar4,0);
LAB_02572414:
  uVar10 = (*(code *)*puVar2)(plVar11,puVar2[1]);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x140,uVar10);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  do {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar11 = (long *)*puVar2;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_025724cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x27,0);
LAB_025724cc:
    uVar7 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x140,0);
      uVar9 = 0;
      goto LAB_025726a8;
    }
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar11 = (long *)*puVar2;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0257256c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_01ecb238(plVar11,lVar4,0);
LAB_0257256c:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar11,unaff_x29 + -0x18);
    memcpy(unaff_x22,unaff_x20,unaff_x19);
    plVar11 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0x120);
    lVar4 = *plVar11;
    memcpy(unaff_x21,unaff_x22,unaff_x19);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x50);
    uVar10 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar5[2])(uVar10,puVar5,lVar4,unaff_x29 + -0x18,unaff_x29 + -0x10);
  } while (*(char *)(unaff_x29 + -0x10) == '\0');
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar9 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
LAB_025726a8:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



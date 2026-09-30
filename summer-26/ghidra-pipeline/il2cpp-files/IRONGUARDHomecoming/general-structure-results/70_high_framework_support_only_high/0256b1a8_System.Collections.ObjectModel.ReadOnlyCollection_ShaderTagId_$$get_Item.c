/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<ShaderTagId>$$get_Item
ENTRY_POINT: 0256b1a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<ShaderTagId>__get_Item
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong __n;
  long unaff_x20;
  undefined1 *__dest;
  undefined1 *__src;
  undefined1 *__s;
  long unaff_x24;
  long *plVar10;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  bVar1 = *(byte *)(unaff_x20 + 0xdf1);
  *(long *)(unaff_x29 + -0x20) = param_3;
  *(undefined8 *)(unaff_x29 + -0x18) = param_2;
  if ((bVar1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_DateTime_Add__);
    *(undefined1 *)(unaff_x20 + 0xdf1) = 1;
  }
  plVar10 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar10[8] + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar8;
  __dest = __src + -uVar8;
  __s = __dest + -uVar8;
  memset(__s,0,__n);
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  piVar3 = (int *)thunk_FUN_01ee7388(param_2,*(undefined8 *)(*plVar10 + 0x80));
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*piVar3 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar10 = (long *)FUN_023856e8(*puVar5,*(undefined8 *)Method_System_DateTime_Add__);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)Method_System_DateTime__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0256b344;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_DateTime__ctor__,0);
LAB_0256b344:
    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0xa0,uVar4);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_0256b3ac;
  }
  if (*piVar3 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    do {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xc0);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0256b5f4;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_0256b5f4:
      uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if ((uVar8 & 1) != 0) {
        puVar5 = (undefined8 *)
                 thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                    *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                   0x20) + 0xc0) + 0x80) + 0xc0);
        plVar10 = (long *)*puVar5;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_0256b6f0;
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0256b6d8;
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x18));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0xc0,0);
LAB_0256b3ac:
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xa0);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0256b41c;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_0256b41c:
      uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        (*(code *)**(undefined8 **)
                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x10))
                  (*(undefined8 *)(unaff_x29 + -0x18));
        FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                              0x80) + 0xa0,0);
        break;
      }
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xa0);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == *(long *)Method_System_DateTime__ctor__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0256b4a4;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_DateTime__ctor__,0);
LAB_0256b4a4:
      (*(code *)*puVar5)(plVar10,puVar5[1]);
      plVar10 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0
                                              ) + 0x18))();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0256b53c;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_0256b53c:
      uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0xc0,uVar4);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
    } while( true );
  }
  uVar9 = 0;
  goto LAB_0256b78c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar3 = piVar3 + 4;
    if (uVar8 == 0) break;
LAB_0256b6d8:
    if (*(long *)(piVar3 + -2) == lVar6) {
      lVar6 = lVar7 + (long)*piVar3 * 0x10 + 0x138;
      goto LAB_0256b70c;
    }
  }
LAB_0256b6f0:
  lVar6 = FUN_01ecb238(plVar10,lVar6,0);
LAB_0256b70c:
  *(undefined1 **)(unaff_x29 + -0x10) = __src;
  lVar6 = *(long *)(lVar6 + 8);
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar10,unaff_x29 + -0x10,__src);
  memcpy(__s,__src,__n);
  memcpy(__dest,__s,__n);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0x20,__dest,__n);
  uVar9 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
LAB_0256b78c:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



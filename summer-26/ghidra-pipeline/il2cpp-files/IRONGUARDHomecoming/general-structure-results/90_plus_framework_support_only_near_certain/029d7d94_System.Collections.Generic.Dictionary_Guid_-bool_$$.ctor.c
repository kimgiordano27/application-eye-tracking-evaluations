/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-bool>$$.ctor
ENTRY_POINT: 029d7d94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x029d8324) */
/* WARNING: Removing unreachable block (ram,0x029d838c) */

void System_Collections_Generic_Dictionary<Guid,_bool>___ctor(undefined8 *param_1)

{
  code *pcVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar12;
  ulong __n;
  undefined1 *__src;
  undefined1 *__s;
  long unaff_x27;
  long unaff_x29;
  
  if ((*(byte *)(unaff_x19 + 0xe09) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x19 + 0xe09) = 1;
  }
  lVar12 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar5 = lVar12;
  if ((uVar2 & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x21 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x48) + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar10;
  __s = __src + -uVar10;
  memset(__s,0,__n);
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_01ecaf44(lVar5);
  }
  plVar6 = (long *)thunk_FUN_01f116d0();
  if (plVar6 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar12 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_029d8038;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_029d8038:
    pcVar1 = (code *)*puVar7;
    *(undefined8 **)(unaff_x29 + -0x20) = param_1;
    *(long *)(unaff_x29 + -0x18) = unaff_x27;
    plVar6 = (long *)(*pcVar1)();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)0x0;
    uVar4 = 0;
    do {
      lVar5 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029d80b0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_029d80b0:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar10 & 1) == 0) {
        param_1 = *(undefined8 **)(unaff_x29 + -0x20);
        unaff_x27 = *(long *)(unaff_x29 + -0x18);
        if (plVar6 == (long *)0x0) goto LAB_029d8328;
        lVar5 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 == 0) goto LAB_029d82f0;
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_029d82d8;
      }
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar12 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            lVar5 = lVar12 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_029d8134;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar5 = FUN_01ecb238(plVar6,lVar5,0);
LAB_029d8134:
      *(undefined1 **)(unaff_x29 + -0x10) = __src;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar6,unaff_x29 + -0x10,__src);
      memcpy(__s,__src,__n);
      if (plVar8 == (long *)0x0) {
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        plVar8 = (long *)FUN_01f08890(lVar5,4);
LAB_029d81f8:
        memcpy(__src,__s,__n);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        if (uVar4 == *(uint *)(plVar8 + 3)) {
          if ((int)(uVar4 + 0x40000000) < 0) {
            FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910();
          }
          lVar5 = *(long *)(unaff_x21 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          plVar9 = (long *)FUN_01f08890(lVar5,uVar4 << 1);
          FUN_0358d498(plVar8,0,plVar9,0,uVar4,0);
          plVar8 = plVar9;
          goto LAB_029d81f8;
        }
        memcpy(__src,__s,__n);
      }
      if (*(uint *)(plVar8 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar4 + 0x20),
             __src,__n);
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar8 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar5,(long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar4 + 0x20,
                   __src);
      uVar4 = uVar4 + 1;
    } while( true );
  }
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar12 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar5) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_029d7f44;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,0);
LAB_029d7f44:
  uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((int)uVar4 < 1) {
    plVar8 = (long *)0x0;
  }
  else {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    plVar8 = (long *)FUN_01f08890(lVar5,uVar4);
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar12 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_029d8014;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,5);
LAB_029d8014:
    (*(code *)*puVar7)(plVar6,plVar8,0,puVar7[1]);
  }
LAB_029d8328:
  *param_1 = plVar8;
  thunk_FUN_01f51358(param_1,plVar8);
  *(uint *)(param_1 + 1) = uVar4;
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_029d82d8:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_029d830c;
    }
  }
LAB_029d82f0:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d830c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  goto LAB_029d8328;
}



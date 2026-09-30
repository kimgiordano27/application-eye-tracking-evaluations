/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-bool>$$.ctor
ENTRY_POINT: 029d7e48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x029d8324) */
/* WARNING: Removing unreachable block (ram,0x029d838c) */

void System_Collections_Generic_Dictionary<Guid,_bool>___ctor(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long unaff_x21;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
                    /* catch() { ... } // from try @ 029d7e34 with catch @ 029d7e48 */
                    /* catch() { ... } // from try @ 029d7e30 with catch @ 029d7e4c */
  FUN_01ecaf44(param_2);
                    /* catch() { ... } // from try @ 029d7ba4 with catch @ 029d7e50 */
                    /* catch() { ... } // from try @ 029d7c10 with catch @ 029d7e54 */
                    /* catch() { ... } // from try @ 029d7c70 with catch @ 029d7e58 */
  plVar4 = (long *)thunk_FUN_01f116d0();
  if (plVar4 == (long *)0x0) {
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
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_029d8038;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_029d8038:
    pcVar1 = (code *)*puVar6;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x28;
    *(long *)(unaff_x29 + -0x18) = unaff_x27;
    plVar4 = (long *)(*pcVar1)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar7 = (long *)0x0;
    uVar3 = 0;
    do {
      lVar5 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029d80b0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_029d80b0:
      uVar10 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        unaff_x28 = *(undefined8 **)(unaff_x29 + -0x20);
        unaff_x27 = *(long *)(unaff_x29 + -0x18);
        if (plVar4 == (long *)0x0) goto LAB_029d8328;
        lVar5 = *plVar4;
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
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            lVar5 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_029d8134;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar5 = FUN_01ecb238(plVar4,lVar5,0);
LAB_029d8134:
      *(void **)(unaff_x29 + -0x10) = unaff_x25;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar4,unaff_x29 + -0x10);
      memcpy(unaff_x26,unaff_x25,unaff_x24);
      if (plVar7 == (long *)0x0) {
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        plVar7 = (long *)FUN_01f08890(lVar5,4);
LAB_029d81f8:
        memcpy(unaff_x25,unaff_x26,unaff_x24);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        if (uVar3 == *(uint *)(plVar7 + 3)) {
          if ((int)(uVar3 + 0x40000000) < 0) {
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
          plVar8 = (long *)FUN_01f08890(lVar5,uVar3 << 1);
          FUN_0358d498(plVar7,0,plVar8,0,uVar3,0);
          plVar7 = plVar8;
          goto LAB_029d81f8;
        }
        memcpy(unaff_x25,unaff_x26,unaff_x24);
      }
      if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar3 + 0x20),
             unaff_x25,unaff_x24);
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar5,(long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar3 + 0x20)
      ;
      uVar3 = uVar3 + 1;
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
  lVar9 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_029d7f44;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_029d7f44:
  uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
  if ((int)uVar3 < 1) {
    plVar7 = (long *)0x0;
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
    plVar7 = (long *)FUN_01f08890(lVar5,uVar3);
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_029d8014;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,5);
LAB_029d8014:
    (*(code *)*puVar6)(plVar4,plVar7,0,puVar6[1]);
  }
LAB_029d8328:
  *unaff_x28 = plVar7;
  thunk_FUN_01f51358(unaff_x28,plVar7);
  *(uint *)(unaff_x28 + 1) = uVar3;
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
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_029d830c;
    }
  }
LAB_029d82f0:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d830c:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
  goto LAB_029d8328;
}



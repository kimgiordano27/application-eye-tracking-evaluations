/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-bool>$$.ctor
ENTRY_POINT: 029d7e5c
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

void System_Collections_Generic_Dictionary<Guid,_bool>___ctor(long *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
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
  
                    /* catch() { ... } // from try @ 029d7e38 with catch @ 029d7e5c */
  if (param_1 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_029d8038;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_029d8038:
    pcVar1 = (code *)*puVar5;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x28;
    *(long *)(unaff_x29 + -0x18) = unaff_x27;
    plVar7 = (long *)(*pcVar1)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar6 = (long *)0x0;
    uVar3 = 0;
    do {
      lVar4 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029d80b0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_029d80b0:
      uVar10 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        unaff_x28 = *(undefined8 **)(unaff_x29 + -0x20);
        unaff_x27 = *(long *)(unaff_x29 + -0x18);
        if (plVar7 == (long *)0x0) goto LAB_029d8328;
        lVar4 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 == 0) goto LAB_029d82f0;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_029d82d8;
      }
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar4) {
            lVar4 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_029d8134;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar4 = FUN_01ecb238(plVar7,lVar4,0);
LAB_029d8134:
      *(void **)(unaff_x29 + -0x10) = unaff_x25;
      lVar4 = *(long *)(lVar4 + 8);
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar7,unaff_x29 + -0x10);
      memcpy(unaff_x26,unaff_x25,unaff_x24);
      if (plVar6 == (long *)0x0) {
        lVar4 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        plVar6 = (long *)FUN_01f08890(lVar4,4);
LAB_029d81f8:
        memcpy(unaff_x25,unaff_x26,unaff_x24);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        if (uVar3 == *(uint *)(plVar6 + 3)) {
          if ((int)(uVar3 + 0x40000000) < 0) {
            FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910();
          }
          lVar4 = *(long *)(unaff_x21 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44();
          }
          plVar8 = (long *)FUN_01f08890(lVar4,uVar3 << 1);
          FUN_0358d498(plVar6,0,plVar8,0,uVar3,0);
          plVar6 = plVar8;
          goto LAB_029d81f8;
        }
        memcpy(unaff_x25,unaff_x26,unaff_x24);
      }
      if (*(uint *)(plVar6 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar3 + 0x20),
             unaff_x25,unaff_x24);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar6 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar4,(long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar3 + 0x20)
      ;
      uVar3 = uVar3 + 1;
    } while( true );
  }
                    /* catch() { ... } // from try @ 029d7e2c with catch @ 029d7e60 */
                    /* catch() { ... } // from try @ 029d7e28 with catch @ 029d7e64 */
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
                    /* try { // try from 029d7e7c to 02ad7e7f has its CatchHandler @ 029d7ea0 */
                    /* try { // try from 029d7e80 to 02ad7ea3 has its CatchHandler @ 029d7a60 */
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar9 = *param_1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 029d7e7c with catch @ 029d7ea0 */
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
                    /* try { // try from 029d7ea4 to 02ad7eaf has its CatchHandler @ 029d7ec4 */
      if (*(long *)(piVar11 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_029d7f44;
      }
                    /* try { // try from 029d7eb0 to 02ad7ebb has its CatchHandler @ 029d7a60 */
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
                    /* try { // try from 029d7ebc to 02ad7ec3 has its CatchHandler @ 029d7ec4 */
                    /* catch() { ... } // from try @ 029d7ea4 with catch @ 029d7ec4
                       catch() { ... } // from try @ 029d7ebc with catch @ 029d7ec4 */
  puVar5 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
LAB_029d7f44:
  uVar3 = (*(code *)*puVar5)(param_1,puVar5[1]);
  if ((int)uVar3 < 1) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    plVar6 = (long *)FUN_01f08890(lVar4,uVar3);
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar9 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_029d8014;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_1,lVar4,5);
LAB_029d8014:
    (*(code *)*puVar5)(param_1,plVar6,0,puVar5[1]);
  }
LAB_029d8328:
  *unaff_x28 = plVar6;
  thunk_FUN_01f51358(unaff_x28,plVar6);
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
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_029d830c;
    }
  }
LAB_029d82f0:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d830c:
  (*(code *)*puVar5)(plVar7,puVar5[1]);
  goto LAB_029d8328;
}



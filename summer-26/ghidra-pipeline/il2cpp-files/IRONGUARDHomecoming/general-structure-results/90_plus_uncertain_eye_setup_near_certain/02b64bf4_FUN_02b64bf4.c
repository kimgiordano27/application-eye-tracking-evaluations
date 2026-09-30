/*
FUNCTION_NAME: FUN_02b64bf4
ENTRY_POINT: 02b64bf4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02b6502c) */

void FUN_02b64bf4(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_0483128c & 1) == 0) {
                    /* try { // try from 02b64c24 to 02c64c27 has its CatchHandler @ 02b64c4c */
                    /* try { // try from 02b64c28 to 02c64c2b has its CatchHandler @ 02b64c58 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 02b64c2c to 02c64c2f has its CatchHandler @ 02b64c44 */
                    /* try { // try from 02b64c30 to 02c64c33 has its CatchHandler @ 02b64c54 */
                    /* try { // try from 02b64c34 to 02c64c37 has its CatchHandler @ 02b64c3c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* catch() { ... } // from try @ 02b64adc with catch @ 02b64c38
                       try { // try from 02b64c38 to 02c64c7f has its CatchHandler @ 02b64984 */
                    /* catch() { ... } // from try @ 02b64c34 with catch @ 02b64c3c */
                    /* catch() { ... } // from try @ 02b64a24 with catch @ 02b64c40 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
                    /* catch() { ... } // from try @ 02b64c2c with catch @ 02b64c44 */
                    /* catch() { ... } // from try @ 02b64a38 with catch @ 02b64c48 */
    DAT_0483128c = 1;
  }
                    /* catch() { ... } // from try @ 02b64c24 with catch @ 02b64c4c */
                    /* catch() { ... } // from try @ 02b649dc with catch @ 02b64c50 */
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 02b64b00 with catch @ 02b64c58
                       catch() { ... } // from try @ 02b64c28 with catch @ 02b64c58 */
                    /* catch() { ... } // from try @ 02b64a8c with catch @ 02b64c5c */
                    /* catch() { ... } // from try @ 02b64b7c with catch @ 02b64c60 */
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
                    /* catch() { ... } // from try @ 02b64b78 with catch @ 02b64c64 */
                    /* catch() { ... } // from try @ 02b64b74 with catch @ 02b64c68 */
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 02b64c80 to 02c64c83 has its CatchHandler @ 02b64c90 */
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 02b64c80 with catch @ 02b64c90 */
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02b64ccc;
        }
        uVar9 = uVar9 - 1;
                    /* try { // try from 02b64c9c to 02c64ca7 has its CatchHandler @ 02b64cbc */
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_02b64ccc:
    uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  FUN_02b64b48(param_1,uVar3,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar5 = thunk_FUN_01ecaf38(param_2,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar9 = FUN_03582560(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      puVar12 = (undefined4 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < (int)puVar12[-4]) {
          FUN_02b65dc4(param_1,*(undefined8 *)(puVar12 + -2),*puVar12,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0xf8));
        }
        uVar9 = uVar9 + 1;
        puVar12 = puVar12 + 6;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02b64e68;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_02b64e68:
  plVar6 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02b64ed0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02b64ed0:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02b64f48;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
LAB_02b64f48:
    auVar13 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    FUN_02b65dc4(param_1,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                                      + 0x20) + 0xc0) + 0xf8));
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02b64fe8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b64fe8:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}



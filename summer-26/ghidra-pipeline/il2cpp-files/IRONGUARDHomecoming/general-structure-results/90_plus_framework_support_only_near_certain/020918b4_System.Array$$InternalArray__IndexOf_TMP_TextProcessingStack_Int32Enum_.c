/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<TMP_TextProcessingStack<Int32Enum>>
ENTRY_POINT: 020918b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02091cfc) */
/* WARNING: Removing unreachable block (ram,0x02091cec) */
/* WARNING: Removing unreachable block (ram,0x02091ab4) */

void System_Array__InternalArray__IndexOf<TMP_TextProcessingStack<Int32Enum>>
               (float param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  
code_r0x020918b4:
  uVar6 = (ulong)(uint)(unaff_s10 * unaff_s10);
  fVar9 = SQRT(unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9 + param_1);
  if (fVar9 <= unaff_s11) {
    if (*(char *)(unaff_x28 + 0xe12) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x28 + 0xe12) = 1;
    }
    pfVar7 = *(float **)(*unaff_x21 + 0xb8);
    fVar10 = *pfVar7;
    fVar11 = pfVar7[1];
    fVar9 = pfVar7[2];
  }
  else {
    fVar10 = unaff_s8 / fVar9;
                    /* catch() { ... } // from try @ 02091910 with catch @ 020918d4 */
    fVar11 = unaff_s9 / fVar9;
    fVar9 = unaff_s10 / fVar9;
  }
  lVar4 = *unaff_x23;
                    /* try { // try from 0209190c to 0219190f has its CatchHandler @ 02091920 */
                    /* try { // try from 02091910 to 02191953 has its CatchHandler @ 020918d4 */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 0209190c with catch @ 02091920 */
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
                    /* try { // try from 02091954 to 021919b3 has its CatchHandler @ 02091954
                       catch() { ... } // from try @ 02091954 with catch @ 02091954
                       catch() { ... } // from try @ 02091bc8 with catch @ 02091954
                       catch() { ... } // from try @ 02091c20 with catch @ 02091954
                       catch() { ... } // from try @ 02091cc0 with catch @ 02091954
                       catch() { ... } // from try @ 02091cf8 with catch @ 02091954 */
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0209195c;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(unaff_x23,
                        *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0);
LAB_0209195c:
  plVar3 = (long *)(*(code *)*puVar2)(unaff_x23,puVar2[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
                    /* try { // try from 020919b4 to 021919b7 has its CatchHandler @ 02091cec */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_020919bc;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x29,0);
LAB_020919bc:
                    /* try { // try from 020919bc to 021919bf has its CatchHandler @ 02091cd4 */
    uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
                    /* try { // try from 020919c8 to 021919cf has its CatchHandler @ 02091cc8 */
    if ((uVar5 & 1) == 0) break;
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 020919e8 to 021919ff has its CatchHandler @ 02091cec */
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091a18;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 02091a04 to 02191a17 has its CatchHandler @ 02091cb0 */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x24,0);
LAB_02091a18:
                    /* try { // try from 02091a20 to 02191a27 has its CatchHandler @ 02091c94 */
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = (ulong)(uint)fVar11;
    param_3 = (ulong)(uint)fVar9;
    FUN_0317fdd8(fVar10);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091aa4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02091aa4:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  do {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091604;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02091604:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_02091b88;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_02091b70;
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091660;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02091660:
    unaff_x23 = (long *)(*(code *)*puVar2)();
    iVar1 = FUN_022f0920(unaff_x23,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Equals__);
  } while (iVar1 == 1);
  if (*(char *)(unaff_x28 + 0xe12) == '\0') {
    thunk_FUN_01efb3a4();
    *(undefined1 *)(unaff_x28 + 0xe12) = 1;
  }
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x23;
  pfVar7 = *(float **)(*unaff_x21 + 0xb8);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  unaff_s8 = *pfVar7;
  unaff_s9 = pfVar7[1];
  unaff_s10 = pfVar7[2];
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02091708;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(unaff_x23,
                        *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0);
LAB_02091708:
  plVar3 = (long *)(*(code *)*puVar2)(unaff_x23,puVar2[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091774;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x29,0);
LAB_02091774:
    uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar5 & 1) == 0) break;
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_020917d0;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x24,0);
LAB_020917d0:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar9 = (float)FUN_0317fd78();
    unaff_s8 = unaff_s8 + fVar9;
    unaff_s9 = unaff_s9 + (float)uVar6;
    unaff_s10 = unaff_s10 + (float)param_3;
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0209185c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0209185c:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  unaff_x27 = (long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Inequality__;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_1 = unaff_s8 * unaff_s8;
  goto code_r0x020918b4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_02091b70:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02091ba4;
    }
  }
LAB_02091b88:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02091ba4:
  (*(code *)*puVar2)();
  return;
}



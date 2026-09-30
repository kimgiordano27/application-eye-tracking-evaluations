/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<TMP_TextProcessingStack<int>>
ENTRY_POINT: 02091738
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


/* WARNING: Removing unreachable block (ram,0x02091ab4) */
/* WARNING: Removing unreachable block (ram,0x02091cfc) */
/* WARNING: Removing unreachable block (ram,0x02091cec) */

void System_Array__InternalArray__IndexOf<TMP_TextProcessingStack<int>>
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong in_x9;
  float *pfVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x28;
  long *unaff_x29;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  
code_r0x02091738:
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_6) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02091774;
    }
    in_x9 = in_x9 - 1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
LAB_02091758:
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x25,param_6,0);
LAB_02091774:
  uVar4 = (*(code *)*puVar3)(unaff_x25,puVar3[1]);
  if ((uVar4 & 1) == 0) {
    if (unaff_x25 != (long *)0x0) {
      lVar6 = *unaff_x25;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0209185c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x25,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0209185c:
      (*(code *)*puVar3)(unaff_x25,puVar3[1]);
    }
                    /* try { // try from 02091868 to 02191877 has its CatchHandler @ 02091898 */
    puVar1 = Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Inequality__;
                    /* try { // try from 02091878 to 0219189b has its CatchHandler @ 020917fc */
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02091868 with catch @ 02091898
                        */
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_3 = (ulong)(uint)(unaff_s10 * unaff_s10);
    fVar9 = SQRT(unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8);
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
      fVar11 = unaff_s9 / fVar9;
      fVar9 = unaff_s10 / fVar9;
    }
    lVar6 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0209195c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(unaff_x23,
                          *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0);
LAB_0209195c:
    plVar5 = (long *)(*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar6 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_020919bc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x29,0);
LAB_020919bc:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if ((uVar4 & 1) == 0) goto LAB_02091a48;
      lVar6 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02091a18;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x24,0);
LAB_02091a18:
      (*(code *)*puVar3)(plVar5,puVar3[1]);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      param_3 = (ulong)(uint)fVar11;
      param_4 = (ulong)(uint)fVar9;
      FUN_0317fdd8(fVar10);
    } while( true );
  }
  lVar6 = *unaff_x25;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_020917d0;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x24,0);
LAB_020917d0:
  (*(code *)*puVar3)(unaff_x25,puVar3[1]);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  fVar9 = (float)FUN_0317fd78();
  unaff_s8 = unaff_s8 + fVar9;
  unaff_s9 = unaff_s9 + (float)param_3;
  unaff_s10 = unaff_s10 + (float)param_4;
                    /* try { // try from 020917fc to 02191867 has its CatchHandler @ 020917fc
                       catch(type#1 @ 00000000) { ... } // from try @ 020917fc with catch @ 020917fc
                       catch(type#1 @ 00000000) { ... } // from try @ 02091878 with catch @ 020917fc
                        */
  goto LAB_02091728;
LAB_02091a48:
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091aa4;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02091aa4:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
  }
  do {
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091604;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02091604:
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar6 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_02091b88;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_02091b70;
    }
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02091660;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02091660:
    unaff_x23 = (long *)(*(code *)*puVar3)();
    iVar2 = FUN_022f0920(unaff_x23,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Equals__);
  } while (iVar2 == 1);
  if (*(char *)(unaff_x28 + 0xe12) == '\0') {
    thunk_FUN_01efb3a4();
    *(undefined1 *)(unaff_x28 + 0xe12) = 1;
  }
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *unaff_x23;
  pfVar7 = *(float **)(*unaff_x21 + 0xb8);
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  unaff_s8 = *pfVar7;
  unaff_s9 = pfVar7[1];
  unaff_s10 = pfVar7[2];
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02091708;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(unaff_x23,
                        *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0);
LAB_02091708:
  unaff_x25 = (long *)(*(code *)*puVar3)(unaff_x23,puVar3[1]);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_02091728:
  param_1 = *unaff_x25;
  param_6 = *unaff_x29;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x02091738;
  goto LAB_02091758;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_02091b70:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02091ba4;
    }
  }
LAB_02091b88:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02091ba4:
  (*(code *)*puVar3)();
  return;
}



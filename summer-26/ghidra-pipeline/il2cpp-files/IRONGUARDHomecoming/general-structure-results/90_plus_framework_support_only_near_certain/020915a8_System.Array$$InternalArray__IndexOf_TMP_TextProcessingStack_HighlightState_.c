/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<TMP_TextProcessingStack<HighlightState>>
ENTRY_POINT: 020915a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02091cec) */
/* WARNING: Removing unreachable block (ram,0x02091ab4) */
/* WARNING: Removing unreachable block (ram,0x02091cfc) */

void System_Array__InternalArray__IndexOf<TMP_TextProcessingStack<HighlightState>>
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  long *plVar10;
  long *unaff_x27;
  long *unaff_x29;
  float fVar11;
  float unaff_s11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  plVar10 = *(long **)(unaff_x24 + 0x7f8);
LAB_020915b8:
  do {
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02091604;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02091604:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) goto LAB_02091b48;
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02091660;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02091660:
    plVar3 = (long *)(*(code *)*puVar2)();
    iVar1 = FUN_022f0920(plVar3,*(undefined8 *)
                                 Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Equals__);
    if (iVar1 != 1) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4();
        DAT_0482ee12 = '\x01';
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar3;
      pfVar8 = *(float **)(*unaff_x21 + 0xb8);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      fVar12 = *pfVar8;
      fVar13 = pfVar8[1];
      fVar14 = pfVar8[2];
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02091708;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0)
      ;
LAB_02091708:
      plVar4 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar5 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x29) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02091774;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x29,0);
LAB_02091774:
        uVar7 = (*(code *)*puVar2)(plVar4,puVar2[1]);
        if ((uVar7 & 1) == 0) goto LAB_02091800;
        lVar6 = *plVar4;
        lVar5 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_020917d0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_020917d0:
        (*(code *)*puVar2)(plVar4,puVar2[1]);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar11 = (float)FUN_0317fd78();
        fVar12 = fVar12 + fVar11;
        fVar13 = fVar13 + (float)param_2;
        fVar14 = fVar14 + (float)param_3;
      } while( true );
    }
  } while( true );
LAB_02091800:
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0209185c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0209185c:
    (*(code *)*puVar2)(plVar4,puVar2[1]);
  }
  unaff_x27 = (long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Inequality__;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_2 = (ulong)(uint)(fVar14 * fVar14);
  fVar11 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12);
  if (fVar11 <= unaff_s11) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4();
      DAT_0482ee12 = '\x01';
    }
    pfVar8 = *(float **)(*unaff_x21 + 0xb8);
    fVar12 = *pfVar8;
    fVar13 = pfVar8[1];
    fVar14 = pfVar8[2];
  }
  else {
    fVar12 = fVar12 / fVar11;
    fVar13 = fVar13 / fVar11;
    fVar14 = fVar14 / fVar11;
  }
  lVar5 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0209195c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0);
LAB_0209195c:
  plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_020919bc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x29,0);
LAB_020919bc:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02091a18;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar5,0);
LAB_02091a18:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_2 = (ulong)(uint)fVar13;
    param_3 = (ulong)(uint)fVar14;
    FUN_0317fdd8(fVar12);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02091aa4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02091aa4:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  goto LAB_020915b8;
LAB_02091b48:
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02091ba4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02091ba4:
    (*(code *)*puVar2)();
  }
  return;
}



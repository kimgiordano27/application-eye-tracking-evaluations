/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<TMP_TextProcessingStack<MaterialReference>>
ENTRY_POINT: 02091a30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02091cfc) */
/* WARNING: Removing unreachable block (ram,0x02091cec) */
/* WARNING: Removing unreachable block (ram,0x02091ab4) */

void System_Array__InternalArray__IndexOf<TMP_TextProcessingStack<MaterialReference>>(void)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  float fVar10;
  ulong uVar11;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float unaff_s11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  do {
    uVar7 = unaff_d9;
    uVar11 = unaff_d10;
                    /* try { // try from 02091a34 to 02191a3b has its CatchHandler @ 02091cec */
                    /* try { // try from 02091a40 to 02191a47 has its CatchHandler @ 02091c78 */
    FUN_0317fdd8(unaff_d8);
LAB_02091970:
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_020919bc;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x29,0);
LAB_020919bc:
    uVar6 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      if (unaff_x23 != (long *)0x0) {
                    /* try { // try from 02091a50 to 02191a57 has its CatchHandler @ 02091c28 */
        lVar5 = *unaff_x23;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 02091a9c to 02191ab3 has its CatchHandler @ 02091cec */
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02091aa4;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(unaff_x23,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_02091aa4:
        (*(code *)*puVar4)(unaff_x23,puVar4[1]);
      }
      do {
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x29) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02091604;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02091604:
        uVar6 = (*(code *)*puVar4)();
        if ((uVar6 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) {
            return;
          }
          lVar5 = *unaff_x20;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 == 0) goto LAB_02091b88;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_02091b70;
        }
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02091660;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02091660:
        plVar2 = (long *)(*(code *)*puVar4)();
        iVar1 = FUN_022f0920(plVar2,*(undefined8 *)
                                     Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Equals__
                            );
      } while (iVar1 == 1);
      if (*(char *)(unaff_x28 + 0xe12) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x28 + 0xe12) = 1;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar2;
      pfVar8 = *(float **)(*unaff_x21 + 0xb8);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      fVar12 = *pfVar8;
      fVar13 = pfVar8[1];
      fVar14 = pfVar8[2];
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02091708;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0)
      ;
LAB_02091708:
      plVar3 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x29) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02091774;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x29,0);
LAB_02091774:
        uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar6 & 1) == 0) goto LAB_02091800;
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_020917d0;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x24,0);
LAB_020917d0:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02091ab8 to 02191acb has its CatchHandler @ 02091c98 */
          FUN_01f08a3c();
        }
        fVar10 = (float)FUN_0317fd78();
        fVar12 = fVar12 + fVar10;
        fVar13 = fVar13 + (float)uVar7;
        fVar14 = fVar14 + (float)uVar11;
      } while( true );
    }
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 == 0) {
LAB_020919fc:
      puVar4 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x24,0);
    }
    else {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      while (*(long *)(piVar9 + -2) != *unaff_x24) {
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
        if (uVar7 == 0) goto LAB_020919fc;
      }
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
    }
    (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
LAB_02091800:
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0209185c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0209185c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  unaff_x27 = (long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>_op_Inequality__;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = (ulong)(uint)(fVar14 * fVar14);
  fVar10 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12);
  if (fVar10 <= unaff_s11) {
    if (*(char *)(unaff_x28 + 0xe12) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x28 + 0xe12) = 1;
    }
    pfVar8 = *(float **)(*unaff_x21 + 0xb8);
    fVar12 = *pfVar8;
    fVar13 = pfVar8[1];
    fVar14 = pfVar8[2];
  }
  else {
    fVar12 = fVar12 / fVar10;
    fVar13 = fVar13 / fVar10;
    fVar14 = fVar14 / fVar10;
  }
  unaff_d10 = (ulong)(uint)fVar14;
  unaff_d9 = (ulong)(uint)fVar13;
  unaff_d8 = (ulong)(uint)fVar12;
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0209195c;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_UnityEngine_UIElements_StyleEnum<DisplayStyle>__ctor__,0);
LAB_0209195c:
  unaff_x23 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto LAB_02091970;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_02091b70:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02091ba4;
    }
  }
LAB_02091b88:
                    /* try { // try from 02091b8c to 02191bc7 has its CatchHandler @ 02091ccc */
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02091ba4:
  (*(code *)*puVar4)();
                    /* try { // try from 02091bc8 to 02191beb has its CatchHandler @ 02091954 */
  return;
}



/*
FUNCTION_NAME: FUN_038b8f38
ENTRY_POINT: 038b8f38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_038b8f38(undefined1 param_1 [16],ulong param_2,long param_3,long param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  int local_94;
  
  puVar6 = StringLiteral_2333;
  if ((DAT_04838032 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(StringLiteral_2539);
    thunk_FUN_01efb3a4(StringLiteral_2540);
    thunk_FUN_01efb3a4(StringLiteral_2541);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
                      );
    thunk_FUN_01efb3a4(StringLiteral_2542);
    thunk_FUN_01efb3a4(StringLiteral_2543);
    thunk_FUN_01efb3a4(StringLiteral_2544);
    thunk_FUN_01efb3a4(StringLiteral_2545);
    thunk_FUN_01efb3a4(StringLiteral_2546);
    thunk_FUN_01efb3a4(StringLiteral_2328);
    thunk_FUN_01efb3a4(StringLiteral_2329);
    thunk_FUN_01efb3a4(StringLiteral_2547);
    thunk_FUN_01efb3a4(StringLiteral_2548);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                      );
    thunk_FUN_01efb3a4(StringLiteral_2333);
    thunk_FUN_01efb3a4(StringLiteral_2549);
    thunk_FUN_01efb3a4(StringLiteral_2550);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
    thunk_FUN_01efb3a4(StringLiteral_2551);
    thunk_FUN_01efb3a4(StringLiteral_2552);
    thunk_FUN_01efb3a4(StringLiteral_2553);
    DAT_04838032 = 1;
  }
  fVar27 = (float)FUN_038c5138(param_4);
  lVar12 = *(long *)puVar6;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar12 = *(long *)puVar6;
  }
                    /* try { // try from 038b90cc to 039b9263 has its CatchHandler @ 038b90cc
                       catch() { ... } // from try @ 038b90cc with catch @ 038b90cc
                       catch() { ... } // from try @ 038b92c0 with catch @ 038b90cc
                       catch() { ... } // from try @ 038b9304 with catch @ 038b90cc
                       catch() { ... } // from try @ 038b933c with catch @ 038b90cc
                       catch() { ... } // from try @ 038b936c with catch @ 038b90cc */
  *(bool *)(*(long *)(lVar12 + 0xb8) + 0x38) = 0.0 < fVar27;
  if ((param_3 != 0) && (FUN_04054ca4(param_3,0), param_4 != 0)) {
    iVar3 = *(int *)(param_4 + 0x18);
    if (iVar3 < 2) {
      return;
    }
    lVar12 = FUN_01f08890(*(undefined8 *)
                           Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                          iVar3 * 3 + -6);
    if (param_5 == 0) {
      if (2 < iVar3) {
        if (lVar12 == 0) goto LAB_038b984c;
        uVar4 = *(uint *)(lVar12 + 0x18);
        uVar25 = 0;
        iVar20 = 2;
        do {
          if (uVar4 <= uVar25) goto LAB_038b9850;
          *(int *)(lVar12 + (long)(int)uVar25 * 4 + 0x20) = iVar20;
          if ((uVar4 <= uVar25 + 1) ||
             (*(int *)(lVar12 + (long)(int)(uVar25 + 1) * 4 + 0x20) = iVar20 + -1,
             uVar4 <= uVar25 + 2)) goto LAB_038b9850;
          iVar20 = iVar20 + 1;
          *(undefined4 *)(lVar12 + (long)(int)(uVar25 + 2) * 4 + 0x20) = 0;
          uVar25 = uVar25 + 3;
        } while (iVar3 != iVar20);
      }
    }
    else {
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_2548);
      FUN_030f23f0(lVar13,iVar3,*(undefined8 *)StringLiteral_2544);
      puVar8 = StringLiteral_2542;
      puVar7 = StringLiteral_2539;
      puVar6 = StringLiteral_2329;
      iVar20 = 0;
      uVar26 = param_2;
      do {
        uVar28 = FUN_0317d578(param_4,iVar20,*(undefined8 *)puVar6);
        FUN_0317d578(param_4,iVar20,*(undefined8 *)puVar6);
        param_2 = uVar26;
        lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
        FUN_035ac8e8(lVar14,0);
        *(int *)(lVar14 + 0x10) = iVar20;
        *(undefined4 *)(lVar14 + 0x14) = uVar28;
        *(int *)(lVar14 + 0x18) = (int)uVar26;
        if (lVar13 == 0) goto LAB_038b984c;
        lVar18 = *(long *)(lVar13 + 0x10);
        lVar19 = *(long *)puVar8;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_038b984c;
        uVar25 = *(uint *)(lVar13 + 0x18);
        if (uVar25 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar25 + 1;
          plVar15 = (long *)(lVar18 + (long)(int)uVar25 * 8 + 0x20);
          *plVar15 = lVar14;
          thunk_FUN_01f51358(plVar15,lVar14);
        }
        else {
          FUN_030f2bb4(lVar13,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        puVar9 = StringLiteral_2547;
        iVar20 = iVar20 + 1;
        uVar26 = param_2;
      } while (iVar3 != iVar20);
      iVar20 = 0;
      do {
        lVar14 = FUN_030f28e4(lVar13,iVar20,*(undefined8 *)puVar9);
        iVar21 = iVar3 + -1 + iVar20;
        iVar10 = 0;
        if (iVar3 != 0) {
          iVar10 = iVar21 / iVar3;
        }
        uVar16 = FUN_030f28e4(lVar13,iVar21 - iVar10 * iVar3,*(undefined8 *)puVar9);
        if (lVar14 == 0) goto LAB_038b984c;
        *(undefined8 *)(lVar14 + 0x20) = uVar16;
        thunk_FUN_01f51358();
        iVar21 = 0;
        if (iVar3 + -1 != iVar20) {
          iVar21 = iVar20 + 1;
        }
                    /* try { // try from 038b9264 to 039b926b has its CatchHandler @ 038b9320 */
        iVar20 = iVar20 + 1;
        uVar16 = FUN_030f28e4(lVar13,iVar21,*(undefined8 *)puVar9);
        *(undefined8 *)(lVar14 + 0x28) = uVar16;
                    /* try { // try from 038b9274 to 039b927b has its CatchHandler @ 038b9314 */
        thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x28),uVar16);
      } while (iVar3 != iVar20);
                    /* try { // try from 038b928c to 039b928f has its CatchHandler @ 038b9308 */
                    /* try { // try from 038b9290 to 039b929b has its CatchHandler @ 038b931c */
      uVar26 = 0;
                    /* try { // try from 038b92ac to 039b92b7 has its CatchHandler @ 038b9310 */
      local_94 = 1000000;
LAB_038b92b4:
      iVar20 = *(int *)(lVar13 + 0x18);
                    /* try { // try from 038b92b8 to 039b92bf has its CatchHandler @ 038b9318 */
      if (2 < iVar20) {
                    /* try { // try from 038b92c0 to 039b92ff has its CatchHandler @ 038b90cc */
        if (local_94 == 0) goto LAB_038b96fc;
        local_94 = local_94 + -1;
        if (iVar20 == 3) {
          lVar14 = FUN_030f28e4(lVar13,2,*(undefined8 *)puVar9);
          if ((lVar14 == 0) || (lVar12 == 0)) goto LAB_038b984c;
          uVar25 = (uint)uVar26;
          if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_038b9850;
          *(undefined4 *)(lVar12 + ((long)(uVar26 << 0x20) >> 0x1e) + 0x20) =
               *(undefined4 *)(lVar14 + 0x10);
          lVar14 = FUN_030f28e4(lVar13,1,*(undefined8 *)puVar9);
          if (lVar14 == 0) goto LAB_038b984c;
          if (*(uint *)(lVar12 + 0x18) <= uVar25 + 1) goto LAB_038b9850;
          *(undefined4 *)(lVar12 + (long)(int)(uVar25 + 1) * 4 + 0x20) =
               *(undefined4 *)(lVar14 + 0x10);
          lVar13 = FUN_030f28e4(lVar13,0,*(undefined8 *)puVar9);
          if (lVar13 == 0) goto LAB_038b984c;
          if (*(uint *)(lVar12 + 0x18) <= uVar25 + 2) {
LAB_038b9850:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined4 *)(lVar12 + (long)(int)(uVar25 + 2) * 4 + 0x20) =
               *(undefined4 *)(lVar13 + 0x10);
        }
        else {
          iVar21 = 0;
          bVar1 = true;
          do {
            lVar14 = FUN_030f28e4(lVar13,iVar21,*(undefined8 *)puVar9);
            if (lVar14 == 0) goto LAB_038b984c;
                    /* try { // try from 038b9300 to 039b9303 has its CatchHandler @ 038b930c */
            iVar10 = FUN_038c7254();
                    /* try { // try from 038b9304 to 039b9337 has its CatchHandler @ 038b90cc */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038b928c with catch @ 038b9308
                        */
            if (iVar10 == 2) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038b9300 with catch @ 038b930c
                        */
              iVar10 = iVar20 + -1 + iVar21;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038b92ac with catch @ 038b9310
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038b9274 with catch @ 038b9314
                        */
              iVar5 = 0;
              if (iVar20 != 0) {
                iVar5 = iVar10 / iVar20;
              }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038b92b8 with catch @ 038b9318
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038b9290 with catch @ 038b931c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038b9264 with catch @ 038b9320
                        */
              iVar23 = 0;
              iVar2 = 0;
              if (iVar21 + 1 != iVar20) {
                iVar2 = iVar21 + 1;
              }
              do {
                    /* try { // try from 038b9338 to 039b933b has its CatchHandler @ 038b935c */
                    /* try { // try from 038b933c to 039b9363 has its CatchHandler @ 038b90cc */
                if (((iVar2 != iVar23) && (iVar21 != iVar23)) && (iVar10 - iVar5 * iVar20 != iVar23)
                   ) {
                  lVar18 = FUN_030f28e4(lVar13,iVar23,*(undefined8 *)puVar9);
                  if (lVar18 == 0) goto LAB_038b984c;
                  iVar11 = FUN_038c7254();
                    /* catch() { ... } // from try @ 038b9338 with catch @ 038b935c */
                  if (iVar11 == 1) {
                    /* try { // try from 038b9364 to 039b936b has its CatchHandler @ 038b9380 */
                    lVar18 = *(long *)(lVar14 + 0x28);
                    /* try { // try from 038b936c to 039b9377 has its CatchHandler @ 038b90cc */
                    if ((lVar18 == 0) || (lVar19 = *(long *)(lVar14 + 0x20), lVar19 == 0))
                    goto LAB_038b984c;
                    uVar28 = *(undefined4 *)(lVar18 + 0x14);
                    param_2 = (ulong)*(uint *)(lVar18 + 0x18);
                    uVar29 = *(undefined4 *)(lVar14 + 0x14);
                    uVar30 = *(undefined4 *)(lVar14 + 0x18);
                    uVar31 = *(undefined4 *)(lVar19 + 0x14);
                    uVar32 = *(undefined4 *)(lVar19 + 0x18);
                    lVar18 = FUN_030f28e4(lVar13,iVar23,*(undefined8 *)puVar9);
                    if (lVar18 == 0) goto LAB_038b984c;
                    uVar17 = FUN_038c4fec(uVar28,param_2,uVar29,uVar30,uVar31,uVar32,
                                          *(undefined4 *)(lVar18 + 0x14),
                                          *(undefined4 *)(lVar18 + 0x18));
                    if ((uVar17 & 1) != 0) break;
                  }
                }
                iVar23 = iVar23 + 1;
                if (iVar20 == iVar23) {
                  lVar18 = *(long *)(lVar14 + 0x28);
                  if ((lVar18 == 0) || (lVar12 == 0)) goto LAB_038b984c;
                  uVar17 = (ulong)*(uint *)(lVar12 + 0x18);
                  if (uVar17 <= uVar26) goto LAB_038b9850;
                  *(undefined4 *)(lVar12 + uVar26 * 4 + 0x20) = *(undefined4 *)(lVar18 + 0x10);
                  if (uVar17 <= uVar26 + 1) goto LAB_038b9850;
                  *(undefined4 *)(lVar12 + (uVar26 + 1) * 4 + 0x20) = *(undefined4 *)(lVar14 + 0x10)
                  ;
                  lVar14 = *(long *)(lVar14 + 0x20);
                  if (lVar14 == 0) goto LAB_038b984c;
                  if (uVar17 <= uVar26 + 2) goto LAB_038b9850;
                  *(undefined4 *)(lVar12 + (uVar26 + 2) * 4 + 0x20) = *(undefined4 *)(lVar14 + 0x10)
                  ;
                  *(undefined4 *)(lVar18 + 0x1c) = 0;
                  *(undefined4 *)(lVar14 + 0x1c) = 0;
                  *(long *)(lVar18 + 0x20) = lVar14;
                  uVar26 = uVar26 + 3;
                  thunk_FUN_01f51358((long *)(lVar18 + 0x20),lVar14);
                  *(long *)(lVar14 + 0x28) = lVar18;
                  thunk_FUN_01f51358((long *)(lVar14 + 0x28),lVar18);
                  FUN_030f42ac(lVar13,iVar21,*(undefined8 *)StringLiteral_2543);
                  if (!bVar1) goto LAB_038b94a0;
                  goto LAB_038b92b4;
                }
              } while( true );
            }
            iVar21 = iVar21 + 1;
            bVar1 = iVar21 < iVar20;
          } while (iVar21 != iVar20);
LAB_038b94a0:
          uVar16 = FUN_03405678(*(undefined8 *)StringLiteral_2552,*(undefined8 *)StringLiteral_2551,
                                0);
          puVar6 = StringLiteral_2550;
          lVar14 = *(long *)StringLiteral_2550;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar14);
            lVar14 = *(long *)puVar6;
          }
          lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          uVar22 = *(undefined8 *)
                    Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__;
          if (lVar18 == 0) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar14);
              lVar14 = *(long *)puVar6;
            }
            uVar24 = **(undefined8 **)(lVar14 + 0xb8);
            lVar18 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_2541);
            FUN_02e6c748(lVar18,uVar24,*(undefined8 *)StringLiteral_2549,0);
            plVar15 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
            *plVar15 = lVar18;
            thunk_FUN_01f51358(plVar15,lVar18);
          }
          uVar24 = FUN_02300e64(lVar13,lVar18,*(undefined8 *)StringLiteral_2540);
          uVar22 = FUN_0340f7f4(uVar22,uVar24,0);
          uVar16 = FUN_03405678(uVar16,uVar22,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
          }
          FUN_0403ed64(uVar16,0);
        }
      }
      if (local_94 < 1) {
LAB_038b96fc:
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ed64(*(undefined8 *)StringLiteral_2553,0);
      }
    }
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                               );
    FUN_0317f884(lVar13,iVar3,*(undefined8 *)StringLiteral_2545);
    puVar7 = StringLiteral_2329;
    puVar6 = 
    Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__;
    if (0 < iVar3) {
      iVar20 = 0;
      do {
        uVar28 = FUN_0317d578(param_4,iVar20,*(undefined8 *)puVar7);
        if (lVar13 == 0) goto LAB_038b984c;
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar18 = *(long *)puVar6;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_038b984c;
        uVar25 = *(uint *)(lVar13 + 0x18);
        if (uVar25 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar25 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar25 + 1;
          *(undefined4 *)(lVar14 + 0x20) = uVar28;
          *(int *)(lVar14 + 0x24) = (int)param_2;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          FUN_031800a8(lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        iVar20 = iVar20 + 1;
      } while (iVar3 != iVar20);
    }
    FUN_040529fc(param_3,lVar13,0);
    FUN_040519d4(param_3,1,0);
    FUN_040544e0(param_3,lVar12,0,0);
    return;
  }
LAB_038b984c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



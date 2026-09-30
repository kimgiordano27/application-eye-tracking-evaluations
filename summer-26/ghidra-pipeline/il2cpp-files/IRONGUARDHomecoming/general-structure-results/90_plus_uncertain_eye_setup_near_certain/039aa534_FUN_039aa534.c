/*
FUNCTION_NAME: FUN_039aa534
ENTRY_POINT: 039aa534
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_039aa534(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 extraout_x1;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  int iVar21;
  int local_c4;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar3 = StringLiteral_5172;
  puVar2 = StringLiteral_5171;
  if ((DAT_048387c6 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_5173);
    thunk_FUN_01efb3a4(StringLiteral_5174);
    thunk_FUN_01efb3a4(StringLiteral_5175);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_5176);
    thunk_FUN_01efb3a4(StringLiteral_5177);
    thunk_FUN_01efb3a4(StringLiteral_5178);
    thunk_FUN_01efb3a4(StringLiteral_5179);
    thunk_FUN_01efb3a4(StringLiteral_5180);
    thunk_FUN_01efb3a4(StringLiteral_5181);
    thunk_FUN_01efb3a4(StringLiteral_5172);
    thunk_FUN_01efb3a4(StringLiteral_5171);
    DAT_048387c6 = 1;
  }
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0329352c(lVar9,*(undefined8 *)puVar3);
  if (param_4 == (long *)0x0) {
    lVar18 = *(long *)StringLiteral_5173;
    lVar13 = *(long *)(lVar18 + 0x38);
    if (lVar13 == 0) {
      FUN_01ecafa0(lVar18);
      lVar13 = *(long *)(lVar18 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01ecaf44();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01ecaf44();
    }
    param_4 = (long *)**(undefined8 **)(lVar13 + 0xb8);
    if (param_4 == (long *)0x0) goto LAB_039aab24;
  }
  lVar13 = *param_4;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_5174) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_039aa6d8;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(param_4,*(long *)StringLiteral_5174,0);
LAB_039aa6d8:
  plVar11 = (long *)(*(code *)*puVar10)(param_4,puVar10[1]);
  plVar20 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_039aa740;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar11,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                           ,0);
LAB_039aa740:
    uVar14 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (param_1 != (long *)0x0) {
      lVar13 = *param_1;
      uVar14 = uVar14 & 0xffffffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_5176) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_039aa7a8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(param_1,*(long *)StringLiteral_5176,0);
LAB_039aa7a8:
      iVar4 = (*(code *)*puVar10)(param_1,puVar10[1]);
      puVar2 = StringLiteral_5175;
      if (iVar4 < 1) {
        if (lVar9 == 0) goto LAB_039aab24;
      }
      else {
        local_c4 = 0;
        uVar17 = 0;
        iVar21 = 0;
        do {
          lVar13 = *param_1;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_5177) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_039aa83c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(param_1,*(long *)StringLiteral_5177,0);
LAB_039aa83c:
          plVar12 = (long *)(*(code *)*puVar10)(param_1,iVar21,puVar10[1]);
          uVar19 = 0;
          while ((uVar14 & 1) != 0) {
            lVar18 = *plVar11;
            lVar13 = *(long *)puVar2;
            uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_039aa8a8;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar13,0);
LAB_039aa8a8:
            iVar5 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (iVar21 != iVar5) {
              uVar14 = 1;
              if (plVar12 != (long *)0x0) goto LAB_039aa98c;
              goto LAB_039aab24;
            }
            lVar18 = *plVar11;
            lVar13 = *(long *)puVar2;
            uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_039aa908;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar13,0);
LAB_039aa908:
            (*(code *)*puVar10)(plVar11,puVar10[1]);
            lVar13 = *plVar11;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *plVar20) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_039aa968;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*plVar20,0);
LAB_039aa968:
            uVar14 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            uVar19 = extraout_x1;
          }
          uVar14 = 0;
          if (plVar12 == (long *)0x0) goto LAB_039aab24;
LAB_039aa98c:
          iVar5 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
          iVar6 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
          iVar7 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          iVar8 = (**(code **)(*plVar12 + 0x198))(plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
          uVar19 = (**(code **)(*plVar12 + 0x1d8))
                             (plVar12,iVar21,uVar19,param_3,param_2,
                              *(undefined8 *)(*plVar12 + 0x1e0));
          local_b0 = 0;
          plStack_a8 = plVar12;
          thunk_FUN_01f51358(&plStack_a8,plVar12);
          local_b0 = uVar19;
          thunk_FUN_01f51358(&local_b0,uVar19);
          local_c0 = CONCAT44(local_c4,iVar21);
          uStack_b8 = (ulong)uVar17;
          if (lVar9 == 0) goto LAB_039aab24;
          uStack_98 = uStack_b8;
          local_a0 = local_c0;
          plStack_88 = plStack_a8;
          uStack_90 = local_b0;
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar18 = *(long *)StringLiteral_5180;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_039aab24;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
            *(ulong *)(lVar13 + 0x28) = uStack_b8;
            *(undefined8 *)(lVar13 + 0x20) = local_c0;
            *(long **)(lVar13 + 0x38) = plStack_a8;
            *(undefined8 *)(lVar13 + 0x30) = local_b0;
            thunk_FUN_01f51358(lVar13 + 0x30,0);
          }
          else {
            uStack_78 = uStack_b8;
            local_80 = local_c0;
            plStack_68 = plStack_a8;
            uStack_70 = local_b0;
            FUN_03293e00(lVar9,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          iVar21 = iVar21 + 1;
          uVar17 = (iVar7 + uVar17) - iVar8;
          local_c4 = (iVar5 + local_c4) - iVar6;
          plVar20 = (long *)
                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        } while (iVar21 != iVar4);
      }
      FUN_03295b30(lVar9,*(undefined8 *)StringLiteral_5181);
      return;
    }
  }
LAB_039aab24:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



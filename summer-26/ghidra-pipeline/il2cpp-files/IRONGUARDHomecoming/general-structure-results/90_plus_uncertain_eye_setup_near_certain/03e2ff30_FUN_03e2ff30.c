/*
FUNCTION_NAME: FUN_03e2ff30
ENTRY_POINT: 03e2ff30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03e30828) */
/* WARNING: Removing unreachable block (ram,0x03e3174c) */

undefined8
FUN_03e2ff30(float param_1,ulong param_2,ulong param_3,long param_4,uint param_5,long *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined4 *puVar28;
  long *plVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  ulong uVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b0;
  long local_a8;
  
  puVar5 = Method_System_Runtime_Remoting_Messaging_ConstructionCallDictionary_SetMethodProperty__;
  if ((DAT_0483a87d & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04579b50);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_System_IConvertible_ToBoolean__);
    thunk_FUN_01efb3a4(Method_System_DateTime_IsLeapYear__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04579c88);
    thunk_FUN_01efb3a4(PTR_DAT_04579c58);
    thunk_FUN_01efb3a4(PTR_DAT_04579c70);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__);
    thunk_FUN_01efb3a4(PTR_DAT_04579c90);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Messaging_ConstructionCallDictionary_SetMethodProperty__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_045781f8);
    DAT_0483a87d = 1;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_100 = 0;
  local_140 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_03e1f538(lVar9,0);
  *param_6 = lVar9;
  thunk_FUN_01f51358(param_6,lVar9);
  puVar7 = PTR_DAT_04579c70;
  puVar4 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (param_4 != 0) {
    fVar31 = (float)FUN_03196b68(param_4,1,*(undefined8 *)PTR_DAT_04579c70);
    fVar47 = (float)param_2;
    uVar16 = param_3;
    fVar32 = (float)FUN_03196b68(param_4,0,*(undefined8 *)puVar7);
    fVar53 = (float)uVar16;
    uVar26 = param_2;
    if (DAT_0482ee1a == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee1a = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar33 = (float)FUN_03196b68(param_4,*(int *)(param_4 + 0x18) + -1,*(undefined8 *)puVar7);
    fVar55 = (float)uVar26;
    uVar19 = uVar16;
    fVar34 = (float)FUN_03196b68(param_4,*(int *)(param_4 + 0x18) + -2,*(undefined8 *)puVar7);
    fVar56 = (float)uVar19;
    uVar49 = uVar26;
    if (DAT_0482ee1a == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee1a = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar6 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
    fVar48 = (float)uVar19;
    fVar38 = (float)uVar49;
    if (*(int *)(param_4 + 0x18) == 2) {
      fVar35 = (float)FUN_03196b68(param_4,0,*(undefined8 *)puVar7);
      fVar51 = fVar38;
      fVar58 = fVar48;
      fVar36 = (float)FUN_03196b68(param_4,1,*(undefined8 *)puVar7);
      if (DAT_04839be6 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_04839be6 = '\x01';
      }
      fVar31 = fVar31 - fVar32;
      fVar47 = fVar47 - (float)param_2;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar53 = (float)param_3 - fVar53;
      thunk_FUN_01ec1aac((double)(fVar35 - fVar36),0x4000000000000000,0);
      if (DAT_04839be6 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_04839be6 = '\x01';
      }
      fVar33 = fVar33 - fVar34;
      fVar55 = fVar55 - (float)uVar26;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar56 = (float)uVar16 - fVar56;
      thunk_FUN_01ec1aac((double)(fVar38 - fVar51),0x4000000000000000,0);
      if (DAT_04839be6 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_04839be6 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      thunk_FUN_01ec1aac((double)(fVar48 - fVar58),0x4000000000000000,0);
      if (DAT_0482ee1a == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee1a = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        bVar8 = DAT_0482ee1a == '\0';
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee1a = '\x01';
      }
      fVar33 = fVar33 * (1.0 / SQRT(fVar56 * fVar56 + fVar33 * fVar33 + fVar55 * fVar55));
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03e2fa4c(fVar31 * (1.0 / SQRT(fVar53 * fVar53 + fVar31 * fVar31 + fVar47 * fVar47)));
      FUN_03196b68(param_4,0,*(undefined8 *)puVar7);
      FUN_03e1570c(&local_f0,0);
      if (DAT_0482ee1a == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee1a = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(fVar33);
      }
      FUN_03e2fa4c(fVar33);
      FUN_03196b68(param_4,1,*(undefined8 *)puVar7);
      FUN_03e1570c(&local_130,0);
      lVar9 = FUN_01f08890(*(undefined8 *)PTR_DAT_04579b50,2);
      uStack_1a8 = uStack_e8;
      local_1b0 = local_f0;
      uStack_198 = uStack_d8;
      uStack_1a0 = local_e0;
      uStack_188 = uStack_c8;
      local_190 = local_d0;
      local_180 = local_c0;
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) != 0) {
          *(undefined8 *)(lVar9 + 0x38) = uStack_d8;
          *(undefined8 *)(lVar9 + 0x30) = local_e0;
          *(undefined8 *)(lVar9 + 0x48) = uStack_c8;
          *(undefined8 *)(lVar9 + 0x40) = local_d0;
          *(undefined4 *)(lVar9 + 0x50) = local_c0;
          *(undefined8 *)(lVar9 + 0x28) = uStack_e8;
          *(undefined8 *)(lVar9 + 0x20) = local_f0;
          if (*(int *)(lVar9 + 0x18) != 1) {
            *(undefined4 *)(lVar9 + 0x84) = local_100;
            *(undefined8 *)(lVar9 + 0x7c) = uStack_108;
            *(undefined8 *)(lVar9 + 0x74) = local_110;
            *(undefined8 *)(lVar9 + 0x6c) = uStack_118;
            *(undefined8 *)(lVar9 + 100) = local_120;
            *(undefined8 *)(lVar9 + 0x5c) = uStack_128;
            *(undefined8 *)(lVar9 + 0x54) = local_130;
            lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_03e1f9e4(lVar14,lVar9,param_5 & 1,0);
            *param_6 = lVar14;
LAB_03e3170c:
            thunk_FUN_01f51358(param_6,lVar14);
            return 1;
          }
        }
        goto LAB_03e31744;
      }
    }
    else {
      FUN_01f08890(*(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__);
      lVar9 = FUN_01f08890(*(undefined8 *)puVar6,*(undefined4 *)(param_4 + 0x18));
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_03e31744;
        *(undefined4 *)(lVar9 + 0x20) = 0;
        lVar14 = FUN_01f08890(*(undefined8 *)puVar6,*(int *)(param_4 + 0x18) + -1);
        fVar32 = 0.0;
        if (*(int *)(param_4 + 0x18) < 2) {
          if (lVar14 == 0) goto LAB_03e31748;
        }
        else {
          lVar27 = 8;
          fVar32 = 0.0;
          do {
            fVar55 = (float)uVar19;
            fVar33 = (float)uVar49;
            fVar53 = (float)FUN_03196b68(param_4,(int)lVar27 + -7,*(undefined8 *)puVar7);
            fVar31 = fVar33;
            fVar47 = fVar55;
            fVar34 = (float)FUN_03196b68(param_4,lVar27 - 8U & 0xffffffff,*(undefined8 *)puVar7);
            if (DAT_0482ee1a == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee1a = '\x01';
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar14 == 0) goto LAB_03e31748;
            if ((ulong)*(uint *)(lVar14 + 0x18) <= lVar27 - 8U) goto LAB_03e31744;
            fVar55 = fVar55 - fVar47;
            uVar19 = (ulong)(uint)fVar55;
            uVar49 = (ulong)(uint)(fVar55 * fVar55);
            fVar32 = fVar32 + SQRT(fVar55 * fVar55 +
                                   (fVar53 - fVar34) * (fVar53 - fVar34) +
                                   (fVar33 - fVar31) * (fVar33 - fVar31));
            *(float *)(lVar14 + lVar27 * 4) = fVar32;
            lVar11 = lVar27 + -6;
            lVar27 = lVar27 + 1;
          } while (lVar11 < *(int *)(param_4 + 0x18));
        }
        uVar30 = *(uint *)(lVar14 + 0x18);
        if (0 < (long)((ulong)uVar30 << 0x20)) {
          lVar27 = 0x100000000;
          uVar26 = 0;
          do {
            if ((uVar30 <= uVar26) || (uVar16 = uVar26 + 1, *(uint *)(lVar9 + 0x18) <= uVar16))
            goto LAB_03e31744;
            lVar11 = lVar27 >> 0x1e;
            lVar27 = lVar27 + 0x100000000;
            *(float *)(lVar9 + lVar11 + 0x20) = *(float *)(lVar14 + 0x20 + uVar26 * 4) / fVar32;
            uVar26 = uVar16;
          } while ((long)(int)uVar30 != uVar16);
        }
        lVar14 = FUN_03e317e0(param_4,param_5 & 1,lVar9);
        *param_6 = lVar14;
        thunk_FUN_01f51358(param_6,lVar14);
        lVar14 = FUN_01f08890(*(undefined8 *)PTR_DAT_045781f8,*(undefined4 *)(param_4 + 0x18));
        puVar5 = PTR_DAT_04579c90;
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar26 = 0;
          uVar16 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          puVar28 = (undefined4 *)(lVar14 + 0x28);
          do {
            if (uVar16 <= uVar26) goto LAB_03e31744;
            uVar37 = FUN_0240ab08(*(undefined4 *)(lVar9 + 0x20 + uVar26 * 4),*param_6,
                                  *(undefined8 *)puVar5);
            if (lVar14 == 0) goto LAB_03e31748;
            if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_03e31744;
            puVar28[-2] = uVar37;
            puVar28[-1] = (int)uVar49;
            *puVar28 = (int)uVar19;
            uVar16 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar26 = uVar26 + 1;
            puVar28 = puVar28 + 3;
          } while ((long)uVar26 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        uVar10 = FUN_03e3218c(param_4,lVar14);
        puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if ((float)uVar10 < param_1) {
          return 1;
        }
        if ((float)uVar10 < param_1 * 4.0) {
          iVar15 = 0;
          lVar27 = lVar9 + 0x20;
LAB_03e305d8:
          puVar4 = Method_System_DateTime_IsLeapYear__;
          if (*param_6 != 0) {
            uVar37 = FUN_03e1cbb8(*param_6,0);
            lVar11 = FUN_01f08890(*(undefined8 *)PTR_DAT_04579b50,uVar37);
            if ((*param_6 != 0) && (plVar29 = *(long **)(*param_6 + 0x18), plVar29 != (long *)0x0))
            {
              lVar17 = *plVar29;
              uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar26 != 0) {
                piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) ==
                      *(long *)Method_System_DateTime_System_IConvertible_ToBoolean__) {
                    puVar12 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_03e30668;
                  }
                  uVar26 = uVar26 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar26 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_01ecb238(plVar29,*(long *)
                                              Method_System_DateTime_System_IConvertible_ToBoolean__
                                     ,0);
LAB_03e30668:
              plVar29 = (long *)(*(code *)*puVar12)(plVar29,puVar12[1]);
              if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar30 = 0;
              do {
                lVar17 = *plVar29;
                uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar26 != 0) {
                  piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                      puVar12 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_03e306d0;
                    }
                    uVar26 = uVar26 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar26 != 0);
                }
                puVar12 = (undefined8 *)FUN_01ecb238(plVar29,*(long *)puVar5,0);
LAB_03e306d0:
                uVar26 = (*(code *)*puVar12)(plVar29,puVar12[1]);
                if ((uVar26 & 1) == 0) goto LAB_03e307b0;
                lVar17 = *plVar29;
                uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar26 != 0) {
                  piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                      puVar12 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_03e3072c;
                    }
                    uVar26 = uVar26 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar26 != 0);
                }
                puVar12 = (undefined8 *)FUN_01ecb238(plVar29,*(long *)puVar4,0);
LAB_03e3072c:
                (*(code *)*puVar12)(&local_1b0,plVar29,puVar12[1]);
                uStack_168 = uStack_1a8;
                local_170 = local_1b0;
                uStack_158 = uStack_198;
                local_160 = uStack_1a0;
                uStack_148 = uStack_188;
                local_150 = local_190;
                local_140 = local_180;
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar30) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                lVar17 = lVar11 + (long)(int)uVar30 * 0x34;
                uVar30 = uVar30 + 1;
                *(undefined4 *)(lVar17 + 0x50) = local_180;
                *(undefined8 *)(lVar17 + 0x38) = uStack_198;
                *(undefined8 *)(lVar17 + 0x30) = uStack_1a0;
                *(undefined8 *)(lVar17 + 0x48) = uStack_188;
                *(undefined8 *)(lVar17 + 0x40) = local_190;
                *(undefined8 *)(lVar17 + 0x28) = uStack_1a8;
                *(undefined8 *)(lVar17 + 0x20) = local_1b0;
              } while( true );
            }
          }
          goto LAB_03e31748;
        }
LAB_03e30ff8:
        puVar5 = PTR_DAT_04579c88;
        iVar21 = (int)((ulong)uVar10 >> 0x20);
        iVar15 = iVar21 - (uint)(*(int *)(param_4 + 0x18) + -1 == iVar21);
        if (*(int *)(param_4 + 0x18) == 3 || iVar21 == 0) {
          iVar15 = 1;
        }
        uVar10 = FUN_031979f4(param_4,0,iVar15 + 1,*(undefined8 *)PTR_DAT_04579c88);
        FUN_03e2ff30(param_1,uVar10,0,&local_a8);
        uVar10 = FUN_031979f4(param_4,iVar15,*(int *)(param_4 + 0x18) - iVar15,*(undefined8 *)puVar5
                             );
        FUN_03e2ff30(param_1,uVar10,0,&local_b0);
        if (local_a8 != 0) {
          uVar37 = FUN_03e1cbb8(local_a8,0);
          puVar5 = PTR_DAT_04579b50;
          lVar9 = FUN_01f08890(*(undefined8 *)PTR_DAT_04579b50,uVar37);
          if (local_b0 != 0) {
            uVar37 = FUN_03e1cbb8(local_b0,0);
            lVar14 = FUN_01f08890(*(undefined8 *)puVar5,uVar37);
            puVar7 = 
            Method_System_Runtime_Remoting_Messaging_ConstructionCallDictionary_SetMethodProperty__;
            puVar4 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
            if ((((local_a8 != 0) && (FUN_03e218a0(local_a8,lVar9,0,0), local_b0 != 0)) &&
                (FUN_03e218a0(local_b0,lVar14,0,0), lVar9 != 0)) && (lVar14 != 0)) {
              lVar27 = FUN_01f08890(*(undefined8 *)puVar5,
                                    *(int *)(lVar9 + 0x18) + *(int *)(lVar14 + 0x18) + -1);
              iVar15 = (int)*(undefined8 *)(lVar9 + 0x18);
              if (iVar15 != 0) {
                lVar11 = lVar9 + (long)(iVar15 + -1) * 0x34;
                fVar53 = *(float *)(lVar11 + 0x44);
                fVar34 = *(float *)(lVar11 + 0x48);
                fVar33 = *(float *)(lVar11 + 0x4c);
                fVar55 = *(float *)(lVar11 + 0x50);
                fVar32 = *(float *)(lVar11 + 0x2c);
                fVar47 = *(float *)(lVar11 + 0x30);
                fVar31 = *(float *)(lVar11 + 0x34);
                FUN_0358d3e4(lVar9,lVar27,0,0);
                FUN_0358d3e4(lVar14,lVar27,*(int *)(lVar9 + 0x18) + -1,0);
                if (lVar27 == 0) goto LAB_03e31748;
                uVar30 = *(int *)(lVar9 + 0x18) - 1;
                uVar22 = (uint)*(undefined8 *)(lVar27 + 0x18);
                if (uVar30 < uVar22) {
                  fVar38 = fVar34 * fVar31 - fVar33 * fVar47;
                  fVar48 = fVar33 * fVar32 - fVar53 * fVar31;
                  fVar38 = fVar38 + fVar38;
                  fVar48 = fVar48 + fVar48;
                  lVar9 = lVar27 + 0x20 + (long)(int)uVar30 * 0x34;
                  fVar56 = fVar53 * fVar47 - fVar34 * fVar32;
                  fVar36 = *(float *)(lVar9 + 0x24);
                  fVar57 = *(float *)(lVar9 + 0x28);
                  fVar56 = fVar56 + fVar56;
                  fVar35 = *(float *)(lVar9 + 0x2c);
                  fVar58 = *(float *)(lVar9 + 0x30);
                  fVar51 = fVar32 + fVar55 * fVar38 + (fVar34 * fVar56 - fVar33 * fVar48);
                  fVar32 = fVar47 + fVar55 * fVar48 + (fVar33 * fVar38 - fVar53 * fVar56);
                  fVar31 = fVar31 + fVar55 * fVar56 + (fVar53 * fVar48 - fVar34 * fVar38);
                  fVar47 = 1.0 / (fVar58 * fVar58 +
                                 fVar35 * fVar35 + fVar36 * fVar36 + fVar57 * fVar57);
                  fVar58 = fVar58 * fVar47;
                  fVar53 = fVar47 * -fVar36;
                  fVar33 = fVar47 * -fVar57;
                  fVar47 = fVar47 * -fVar35;
                  fVar34 = fVar32 * fVar53 - fVar51 * fVar33;
                  fVar55 = fVar31 * fVar33 - fVar32 * fVar47;
                  fVar56 = fVar51 * fVar47 - fVar31 * fVar53;
                  fVar55 = fVar55 + fVar55;
                  fVar56 = fVar56 + fVar56;
                  fVar34 = fVar34 + fVar34;
                  *(float *)(lVar9 + 0xc) =
                       fVar51 + fVar58 * fVar55 + (fVar33 * fVar34 - fVar47 * fVar56);
                  *(float *)(lVar9 + 0x10) =
                       fVar32 + fVar58 * fVar56 + (fVar47 * fVar55 - fVar53 * fVar34);
                  *(float *)(lVar9 + 0x14) =
                       fVar31 + fVar58 * fVar34 + (fVar53 * fVar56 - fVar33 * fVar55);
                  pfVar20 = (float *)(lVar27 + 0x20 + (long)(int)(uVar22 - 1) * 0x34);
                  fVar32 = *(float *)(lVar27 + 0x20);
                  fVar31 = *(float *)(lVar27 + 0x24);
                  fVar47 = *(float *)(lVar27 + 0x28);
                  fVar53 = *pfVar20;
                  fVar34 = pfVar20[1];
                  fVar33 = pfVar20[2];
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  if (DAT_04838466 == '\0') {
                    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                    DAT_04838466 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  dVar41 = (double)FUN_0356be8c((double)fVar32,2,0,0);
                  if (DAT_04838466 == '\0') {
                    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                    DAT_04838466 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  dVar42 = (double)FUN_0356be8c((double)fVar31,2,0,0);
                  if (DAT_04838466 == '\0') {
                    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                    DAT_04838466 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  dVar43 = (double)FUN_0356be8c((double)fVar47,2,0,0);
                  if (DAT_04838466 == '\0') {
                    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                    DAT_04838466 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  dVar44 = (double)FUN_0356be8c((double)fVar53,2,0,0);
                  if (DAT_04838466 == '\0') {
                    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                    DAT_04838466 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  dVar45 = (double)FUN_0356be8c((double)fVar34,2,0,0);
                  if (DAT_04838466 == '\0') {
                    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                    DAT_04838466 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  dVar46 = (double)FUN_0356be8c((double)fVar33,2,0,0);
                  lVar9 = lVar27;
                  if ((((float)dVar41 == (float)dVar44) && ((float)dVar42 == (float)dVar45)) &&
                     (((float)dVar43 == (float)dVar46 && ((param_5 & 1) != 0)))) {
                    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_03e31744;
                    fVar53 = *(float *)(lVar27 + 0x48);
                    fVar34 = *(float *)(lVar27 + 0x4c);
                    fVar55 = *(float *)(lVar27 + 0x50);
                    fVar32 = *(float *)(lVar27 + 0x38);
                    fVar47 = *(float *)(lVar27 + 0x3c);
                    fVar31 = *(float *)(lVar27 + 0x40);
                    fVar33 = *(float *)(lVar27 + 0x44);
                    lVar9 = FUN_01f08890(*(undefined8 *)puVar5,*(int *)(lVar27 + 0x18) + -1);
                    if (lVar9 == 0) goto LAB_03e31748;
                    uVar30 = *(uint *)(lVar9 + 0x18);
                    if (0 < (long)((ulong)uVar30 << 0x20)) {
                      puVar12 = (undefined8 *)(lVar27 + 0x54);
                      puVar25 = (undefined8 *)(lVar9 + 0x20);
                      uVar26 = 0;
                      do {
                        uVar16 = uVar26 + 1;
                        if (*(uint *)(lVar27 + 0x18) <= uVar16) goto LAB_03e31744;
                        uVar54 = puVar12[3];
                        uVar52 = puVar12[2];
                        uVar39 = puVar12[5];
                        uVar10 = puVar12[4];
                        puVar1 = puVar12 + 6;
                        uVar50 = puVar12[1];
                        uVar40 = *puVar12;
                        if (uVar30 <= uVar26) goto LAB_03e31744;
                        puVar12 = (undefined8 *)((long)puVar12 + 0x34);
                        *(undefined4 *)(puVar25 + 6) = *(undefined4 *)puVar1;
                        puVar25[3] = uVar54;
                        puVar25[2] = uVar52;
                        puVar25[5] = uVar39;
                        puVar25[4] = uVar10;
                        puVar25[1] = uVar50;
                        *puVar25 = uVar40;
                        puVar25 = (undefined8 *)((long)puVar25 + 0x34);
                        uVar26 = uVar16;
                      } while ((long)uVar16 < (long)(int)uVar30);
                    }
                    if (uVar30 == 0) goto LAB_03e31744;
                    fVar38 = fVar53 * fVar31 - fVar34 * fVar47;
                    fVar48 = fVar34 * fVar32 - fVar33 * fVar31;
                    fVar38 = fVar38 + fVar38;
                    fVar48 = fVar48 + fVar48;
                    lVar14 = lVar9 + (long)(int)(uVar30 - 1) * 0x34;
                    fVar56 = fVar33 * fVar47 - fVar53 * fVar32;
                    fVar36 = *(float *)(lVar14 + 0x44);
                    fVar57 = *(float *)(lVar14 + 0x48);
                    fVar56 = fVar56 + fVar56;
                    fVar35 = *(float *)(lVar14 + 0x4c);
                    fVar58 = *(float *)(lVar14 + 0x50);
                    fVar51 = fVar32 + fVar55 * fVar38 + (fVar53 * fVar56 - fVar34 * fVar48);
                    fVar32 = fVar47 + fVar55 * fVar48 + (fVar34 * fVar38 - fVar33 * fVar56);
                    fVar31 = fVar31 + fVar55 * fVar56 + (fVar33 * fVar48 - fVar53 * fVar38);
                    fVar47 = 1.0 / (fVar58 * fVar58 +
                                   fVar35 * fVar35 + fVar36 * fVar36 + fVar57 * fVar57);
                    fVar58 = fVar58 * fVar47;
                    fVar53 = fVar47 * -fVar36;
                    fVar33 = fVar47 * -fVar57;
                    fVar47 = fVar47 * -fVar35;
                    fVar34 = fVar32 * fVar53 - fVar51 * fVar33;
                    fVar55 = fVar31 * fVar33 - fVar32 * fVar47;
                    fVar56 = fVar51 * fVar47 - fVar31 * fVar53;
                    fVar55 = fVar55 + fVar55;
                    fVar56 = fVar56 + fVar56;
                    fVar34 = fVar34 + fVar34;
                    *(float *)(lVar14 + 0x38) =
                         fVar51 + fVar58 * fVar55 + (fVar33 * fVar34 - fVar47 * fVar56);
                    *(float *)(lVar14 + 0x3c) =
                         fVar32 + fVar58 * fVar56 + (fVar47 * fVar55 - fVar53 * fVar34);
                    *(float *)(lVar14 + 0x40) =
                         fVar31 + fVar58 * fVar34 + (fVar53 * fVar56 - fVar33 * fVar55);
                  }
                  lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
                  FUN_03e1f9e4(lVar14,lVar9,param_5 & 1,0);
                  *param_6 = lVar14;
                  goto LAB_03e3170c;
                }
              }
LAB_03e31744:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
          }
        }
      }
    }
  }
LAB_03e31748:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03e307b0:
  if (plVar29 != (long *)0x0) {
    lVar17 = *plVar29;
    uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar26 != 0) {
      piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_03e30810;
        }
        uVar26 = uVar26 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar26 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar29,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03e30810:
    (*(code *)*puVar12)(plVar29,puVar12[1]);
  }
  puVar4 = PTR_DAT_045781f8;
  if (lVar11 == 0) goto LAB_03e31748;
  if ((*(int *)(lVar11 + 0x18) == 0) || (*(int *)(lVar11 + 0x18) == 1)) goto LAB_03e31744;
  uVar50 = *(undefined8 *)(lVar11 + 0x48);
  uVar10 = *(undefined8 *)(lVar11 + 0x38);
  fVar34 = *(float *)(lVar11 + 0x50);
  uVar54 = *(undefined8 *)(lVar11 + 0x20);
  fVar32 = *(float *)(lVar11 + 0x44);
  fVar47 = *(float *)(lVar11 + 0x40);
  fVar56 = *(float *)(lVar11 + 0x28);
  uVar52 = *(undefined8 *)(lVar11 + 0x54);
  uVar39 = *(undefined8 *)(lVar11 + 0x7c);
  fVar33 = *(float *)(lVar11 + 0x78);
  fVar55 = *(float *)(lVar11 + 0x5c);
  uVar40 = *(undefined8 *)(lVar11 + 0x60);
  fVar53 = *(float *)(lVar11 + 0x84);
  fVar31 = *(float *)(lVar11 + 0x68);
  lVar11 = FUN_01f08890(*(undefined8 *)PTR_DAT_045781f8,4);
  if (lVar11 == 0) goto LAB_03e31748;
  uVar30 = *(uint *)(lVar11 + 0x18);
  if (uVar30 == 0) goto LAB_03e31744;
  *(undefined8 *)(lVar11 + 0x20) = uVar54;
  *(float *)(lVar11 + 0x28) = fVar56;
  if (uVar30 == 1) goto LAB_03e31744;
  fVar35 = (float)((ulong)uVar50 >> 0x20);
  fVar57 = (float)((ulong)uVar10 >> 0x20);
  fVar58 = (float)uVar50;
  fVar36 = (float)uVar10;
  fVar38 = fVar32 * fVar57 - fVar58 * fVar36;
  fVar38 = fVar38 + fVar38;
  fVar48 = fVar58 * fVar47 - fVar35 * fVar57;
  fVar51 = fVar35 * fVar36 - fVar32 * fVar47;
  fVar48 = fVar48 + fVar48;
  fVar51 = fVar51 + fVar51;
  *(ulong *)(lVar11 + 0x2c) =
       CONCAT44((float)((ulong)uVar54 >> 0x20) +
                fVar57 + fVar51 * fVar34 + (fVar35 * fVar48 - fVar32 * fVar38),
                (float)uVar54 + fVar36 + fVar48 * fVar34 + (fVar58 * fVar38 - fVar35 * fVar51));
  *(float *)(lVar11 + 0x34) =
       fVar56 + fVar47 + fVar34 * fVar38 + (fVar32 * fVar51 - fVar58 * fVar48);
  if (uVar30 < 3) goto LAB_03e31744;
  fVar51 = (float)((ulong)uVar40 >> 0x20);
  fVar38 = (float)((ulong)uVar39 >> 0x20);
  fVar56 = (float)uVar39;
  fVar48 = (float)uVar40;
  fVar32 = fVar33 * fVar51 - fVar56 * fVar48;
  fVar32 = fVar32 + fVar32;
  fVar47 = fVar56 * fVar31 - fVar38 * fVar51;
  fVar34 = fVar38 * fVar48 - fVar33 * fVar31;
  fVar47 = fVar47 + fVar47;
  fVar34 = fVar34 + fVar34;
  *(ulong *)(lVar11 + 0x38) =
       CONCAT44((float)((ulong)uVar52 >> 0x20) +
                fVar51 + fVar34 * fVar53 + (fVar38 * fVar47 - fVar33 * fVar32),
                (float)uVar52 + fVar48 + fVar47 * fVar53 + (fVar56 * fVar32 - fVar38 * fVar34));
  *(float *)(lVar11 + 0x40) =
       fVar55 + fVar31 + fVar53 * fVar32 + (fVar33 * fVar34 - fVar56 * fVar47);
  if (uVar30 == 3) goto LAB_03e31744;
  *(undefined8 *)(lVar11 + 0x44) = uVar52;
  *(float *)(lVar11 + 0x4c) = fVar55;
  lVar13 = FUN_01f08890(*(undefined8 *)puVar4,3);
  lVar17 = 0;
  uVar26 = 0;
  do {
    if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar26 + 1) goto LAB_03e31744;
    if (lVar13 == 0) goto LAB_03e31748;
    if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_03e31744;
    lVar18 = lVar11 + lVar17;
    fVar31 = *(float *)(lVar18 + 0x34);
    uVar10 = NEON_fmov(0x40400000,4);
    fVar32 = *(float *)(lVar18 + 0x28);
    lVar2 = lVar13 + lVar17;
    lVar17 = lVar17 + 0xc;
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar18 + 0x2c) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar18 + 0x20) >> 0x20)) *
                  (float)((ulong)uVar10 >> 0x20),
                  ((float)*(undefined8 *)(lVar18 + 0x2c) - (float)*(undefined8 *)(lVar18 + 0x20)) *
                  (float)uVar10);
    *(float *)(lVar2 + 0x28) = (fVar31 - fVar32) * 3.0;
    uVar26 = uVar26 + 1;
  } while (lVar17 != 0x24);
  lVar17 = FUN_01f08890(*(undefined8 *)puVar4,2);
  uVar26 = 0;
  bVar8 = true;
  do {
    bVar3 = bVar8;
    if ((ulong)*(uint *)(lVar13 + 0x18) <= uVar26 + 1) goto LAB_03e31744;
    if (lVar17 == 0) goto LAB_03e31748;
    if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_03e31744;
    puVar12 = (undefined8 *)(lVar13 + 0x20 + (uVar26 + 1) * 0xc);
    uVar10 = *puVar12;
    puVar24 = (ulong *)(lVar13 + 0x20 + uVar26 * 0xc);
    uVar16 = *puVar24;
    lVar18 = lVar17 + uVar26 * 0xc;
    fVar31 = (float)uVar10 - (float)uVar16;
    fVar47 = (float)((ulong)uVar10 >> 0x20) - (float)(uVar16 >> 0x20);
    fVar32 = *(float *)(puVar12 + 1) - *(float *)(puVar24 + 1);
    uVar49 = CONCAT44(fVar47 + fVar47,fVar31 + fVar31);
    *(ulong *)(lVar18 + 0x20) = uVar49;
    *(float *)(lVar18 + 0x28) = fVar32 + fVar32;
    uVar26 = 1;
    bVar8 = false;
  } while (bVar3);
  if (0 < *(int *)(param_4 + 0x18)) {
    uVar26 = 0;
    pfVar20 = (float *)(lVar14 + 0x28);
    uVar19 = uVar16;
    do {
      fVar32 = (float)uVar49;
      if (*(uint *)(lVar9 + 0x18) <= uVar26) goto LAB_03e31744;
      uVar37 = *(undefined4 *)(lVar27 + uVar26 * 4);
      fVar53 = (float)FUN_03e32324(uVar37,lVar11,3);
      uVar49 = uVar19;
      fVar47 = fVar32;
      fVar34 = (float)FUN_03e32324(uVar37,lVar13,2);
      uVar16 = uVar49;
      fVar31 = fVar47;
      fVar33 = (float)FUN_03e32324(uVar37,lVar17,1);
      if (lVar14 == 0) goto LAB_03e31748;
      if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_03e31744;
      fVar56 = (float)uVar49;
      fVar38 = (float)uVar19 - *pfVar20;
      fVar55 = (float)uVar16 * fVar38;
      fVar31 = fVar56 * fVar56 + fVar34 * fVar34 + fVar47 * fVar47 +
               fVar55 + fVar33 * (fVar53 - pfVar20[-2]) + fVar31 * (fVar32 - pfVar20[-1]);
      if (fVar31 != 0.0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar26) goto LAB_03e31744;
        fVar56 = fVar56 * fVar38;
        uVar16 = (ulong)(uint)fVar56;
        fVar55 = fVar56 + fVar34 * (fVar53 - pfVar20[-2]) + fVar47 * (fVar32 - pfVar20[-1]);
        *(float *)(lVar27 + uVar26 * 4) = *(float *)(lVar27 + uVar26 * 4) - fVar55 / fVar31;
      }
      uVar49 = (ulong)(uint)fVar55;
      uVar26 = uVar26 + 1;
      pfVar20 = pfVar20 + 3;
      uVar19 = uVar16;
    } while ((long)uVar26 < (long)*(int *)(param_4 + 0x18));
  }
  lVar14 = FUN_03e317e0(param_4,param_5 & 1,lVar9);
  *param_6 = lVar14;
  thunk_FUN_01f51358(param_6,lVar14);
  lVar14 = FUN_01f08890(*(undefined8 *)PTR_DAT_045781f8,*(undefined4 *)(param_4 + 0x18));
  puVar4 = PTR_DAT_04579c90;
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar26 = 0;
    uVar19 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    puVar28 = (undefined4 *)(lVar14 + 0x28);
    do {
      if (uVar19 <= uVar26) goto LAB_03e31744;
      uVar37 = FUN_0240ab08(*(undefined4 *)(lVar27 + uVar26 * 4),*param_6,*(undefined8 *)puVar4);
      if (lVar14 == 0) goto LAB_03e31748;
      if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_03e31744;
      puVar28[-2] = uVar37;
      puVar28[-1] = (int)uVar49;
      *puVar28 = (int)uVar16;
      uVar19 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar26 = uVar26 + 1;
      puVar28 = puVar28 + 3;
    } while ((long)uVar26 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  uVar10 = FUN_03e3218c(param_4,lVar14);
  if ((float)uVar10 < param_1) {
    return 1;
  }
  iVar15 = iVar15 + 1;
  if (iVar15 == 4) goto LAB_03e30ff8;
  goto LAB_03e305d8;
}



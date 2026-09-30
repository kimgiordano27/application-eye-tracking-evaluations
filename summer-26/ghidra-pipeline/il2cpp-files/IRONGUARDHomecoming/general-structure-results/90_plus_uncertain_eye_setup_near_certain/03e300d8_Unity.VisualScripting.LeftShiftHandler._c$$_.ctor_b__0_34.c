/*
FUNCTION_NAME: Unity.VisualScripting.LeftShiftHandler.<>c$$<.ctor>b__0_34
ENTRY_POINT: 03e300d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03e30828) */
/* WARNING: Removing unreachable block (ram,0x03e3174c) */

undefined8
Unity_VisualScripting_LeftShiftHandler_<>c__<_ctor>b__0_34
          (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long unaff_x20;
  undefined1 unaff_w21;
  long lVar24;
  undefined4 *puVar25;
  long unaff_x22;
  undefined8 *unaff_x24;
  long *plVar26;
  uint uVar27;
  long *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  ulong uVar47;
  float fVar48;
  float unaff_s8;
  undefined8 uVar49;
  float unaff_s10;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float unaff_s13;
  float unaff_s14;
  float fVar53;
  float unaff_s15;
  float fVar54;
  float fVar55;
  float fVar56;
  uint uStack0000000000000034;
  float in_stack_000000c0;
  float in_stack_000000d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined4 in_stack_00000210;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined4 in_stack_00000290;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined4 in_stack_000002d0;
  long in_stack_000002e0;
  long in_stack_000002e8;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_4 + 0x328));
  *(undefined1 *)(unaff_x20 + 0xe1a) = unaff_w21;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar28 = (float)FUN_03196b68();
  fVar52 = (float)param_2;
  uVar47 = param_3;
  fVar29 = (float)FUN_03196b68();
  fVar53 = (float)uVar47;
  uVar19 = param_2;
  if (*(char *)(unaff_x20 + 0xe1a) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x20 + 0xe1a) = 1;
  }
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar5 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
  fVar46 = (float)uVar47;
  fVar33 = (float)uVar19;
  if (*(int *)(unaff_x22 + 0x18) == 2) {
    fVar30 = (float)FUN_03196b68();
    fVar45 = fVar33;
    fVar51 = fVar46;
    fVar31 = (float)FUN_03196b68();
    if (DAT_04839be6 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_04839be6 = '\x01';
    }
    fVar32 = unaff_s14 - unaff_s8;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ec1aac((double)(fVar30 - fVar31),0x4000000000000000,0);
    if (DAT_04839be6 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_04839be6 = '\x01';
    }
    fVar28 = fVar28 - fVar29;
    fVar52 = fVar52 - (float)param_2;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar53 = (float)param_3 - fVar53;
    thunk_FUN_01ec1aac((double)(fVar33 - fVar45),0x4000000000000000,0);
    if (DAT_04839be6 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_04839be6 = '\x01';
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ec1aac((double)(fVar46 - fVar51),0x4000000000000000,0);
    if (*(char *)(unaff_x20 + 0xe1a) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      *(undefined1 *)(unaff_x20 + 0xe1a) = 1;
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      bVar7 = *(char *)(unaff_x20 + 0xe1a) == '\0';
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      *(undefined1 *)(unaff_x20 + 0xe1a) = 1;
    }
    fVar28 = fVar28 * (1.0 / SQRT(fVar53 * fVar53 + fVar28 * fVar28 + fVar52 * fVar52));
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03e2fa4c(fVar32 * (1.0 / SQRT((unaff_s13 - in_stack_000000c0) *
                                      (unaff_s13 - in_stack_000000c0) +
                                      fVar32 * fVar32 +
                                      (in_stack_000000d0 - unaff_s10) *
                                      (in_stack_000000d0 - unaff_s10))));
    FUN_03196b68();
    FUN_03e1570c(&stack0x000002a0,0);
    if (*(char *)(unaff_x20 + 0xe1a) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      *(undefined1 *)(unaff_x20 + 0xe1a) = 1;
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(fVar28);
    }
    FUN_03e2fa4c(fVar28);
    FUN_03196b68();
    FUN_03e1570c(&stack0x00000260,0);
    lVar11 = FUN_01f08890(*(undefined8 *)PTR_DAT_04579b50,2);
    in_stack_000001e0 = in_stack_000002a0;
    in_stack_000001e8 = in_stack_000002a8;
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined8 *)(lVar11 + 0x38) = in_stack_000002b8;
        *(undefined8 *)(lVar11 + 0x30) = in_stack_000002b0;
        *(undefined8 *)(lVar11 + 0x48) = in_stack_000002c8;
        *(undefined8 *)(lVar11 + 0x40) = in_stack_000002c0;
        *(undefined4 *)(lVar11 + 0x50) = in_stack_000002d0;
        *(undefined8 *)(lVar11 + 0x28) = in_stack_000002a8;
        *(undefined8 *)(lVar11 + 0x20) = in_stack_000002a0;
        if (*(int *)(lVar11 + 0x18) != 1) {
          *(undefined4 *)(lVar11 + 0x84) = in_stack_00000290;
          *(undefined8 *)(lVar11 + 0x7c) = in_stack_00000288;
          *(undefined8 *)(lVar11 + 0x74) = in_stack_00000280;
          *(undefined8 *)(lVar11 + 0x6c) = in_stack_00000278;
          *(undefined8 *)(lVar11 + 100) = in_stack_00000270;
          *(undefined8 *)(lVar11 + 0x5c) = in_stack_00000268;
          *(undefined8 *)(lVar11 + 0x54) = in_stack_00000260;
          lVar12 = thunk_FUN_01f117cc(*unaff_x24);
          FUN_03e1f9e4(lVar12,lVar11,unaff_w28 & 1,0);
          *unaff_x27 = lVar12;
LAB_03e3170c:
          thunk_FUN_01f51358();
          return 1;
        }
      }
      goto LAB_03e31744;
    }
  }
  else {
    FUN_01f08890(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__
                );
    lVar11 = FUN_01f08890(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x22 + 0x18));
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03e31744;
      *(undefined4 *)(lVar11 + 0x20) = 0;
      lVar12 = FUN_01f08890(*(undefined8 *)puVar5,*(int *)(unaff_x22 + 0x18) + -1);
      fVar29 = 0.0;
      if (*(int *)(unaff_x22 + 0x18) < 2) {
        if (lVar12 == 0) goto LAB_03e31748;
      }
      else {
        lVar24 = 8;
        fVar29 = 0.0;
        do {
          fVar45 = (float)uVar47;
          fVar46 = (float)uVar19;
          fVar53 = (float)FUN_03196b68();
          fVar28 = fVar46;
          fVar52 = fVar45;
          fVar33 = (float)FUN_03196b68();
          if (*(char *)(unaff_x20 + 0xe1a) == '\0') {
            thunk_FUN_01efb3a4();
            *(undefined1 *)(unaff_x20 + 0xe1a) = 1;
          }
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar12 == 0) goto LAB_03e31748;
          if ((ulong)*(uint *)(lVar12 + 0x18) <= lVar24 - 8U) goto LAB_03e31744;
          fVar45 = fVar45 - fVar52;
          uVar47 = (ulong)(uint)fVar45;
          uVar19 = (ulong)(uint)(fVar45 * fVar45);
          fVar29 = fVar29 + SQRT(fVar45 * fVar45 +
                                 (fVar53 - fVar33) * (fVar53 - fVar33) +
                                 (fVar46 - fVar28) * (fVar46 - fVar28));
          *(float *)(lVar12 + lVar24 * 4) = fVar29;
          lVar8 = lVar24 + -6;
          lVar24 = lVar24 + 1;
        } while (lVar8 < *(int *)(unaff_x22 + 0x18));
      }
      uVar27 = *(uint *)(lVar12 + 0x18);
      if (0 < (long)((ulong)uVar27 << 0x20)) {
        lVar24 = 0x100000000;
        uVar23 = 0;
        do {
          if ((uVar27 <= uVar23) || (uVar14 = uVar23 + 1, *(uint *)(lVar11 + 0x18) <= uVar14))
          goto LAB_03e31744;
          lVar8 = lVar24 >> 0x1e;
          lVar24 = lVar24 + 0x100000000;
          *(float *)(lVar11 + lVar8 + 0x20) = *(float *)(lVar12 + 0x20 + uVar23 * 4) / fVar29;
          uVar23 = uVar14;
        } while ((long)(int)uVar27 != uVar14);
      }
      lVar12 = FUN_03e317e0();
      *unaff_x27 = lVar12;
      thunk_FUN_01f51358();
      lVar12 = FUN_01f08890(*(undefined8 *)PTR_DAT_045781f8,*(undefined4 *)(unaff_x22 + 0x18));
      puVar5 = PTR_DAT_04579c90;
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar23 = 0;
        uVar14 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        puVar25 = (undefined4 *)(lVar12 + 0x28);
        do {
          if (uVar14 <= uVar23) goto LAB_03e31744;
          uVar34 = FUN_0240ab08(*(undefined4 *)(lVar11 + 0x20 + uVar23 * 4),*unaff_x27,
                                *(undefined8 *)puVar5);
          if (lVar12 == 0) goto LAB_03e31748;
          if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_03e31744;
          puVar25[-2] = uVar34;
          puVar25[-1] = (int)uVar19;
          *puVar25 = (int)uVar47;
          uVar14 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar23 = uVar23 + 1;
          puVar25 = puVar25 + 3;
        } while ((long)uVar23 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      uStack0000000000000034 = unaff_w28;
      fVar29 = (float)FUN_03e3218c();
      puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (fVar29 < unaff_s15) {
        return 1;
      }
      if (fVar29 < unaff_s15 * 4.0) {
        iVar13 = 0;
        lVar24 = lVar11 + 0x20;
LAB_03e305d8:
        puVar4 = Method_System_DateTime_IsLeapYear__;
        if (*unaff_x27 != 0) {
          uVar34 = FUN_03e1cbb8(*unaff_x27,0);
          lVar8 = FUN_01f08890(*(undefined8 *)PTR_DAT_04579b50,uVar34);
          if ((*unaff_x27 != 0) && (plVar26 = *(long **)(*unaff_x27 + 0x18), plVar26 != (long *)0x0)
             ) {
            lVar15 = *plVar26;
            uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)Method_System_DateTime_System_IConvertible_ToBoolean__) {
                  puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_03e30668;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01ecb238(plVar26,*(long *)
                                           Method_System_DateTime_System_IConvertible_ToBoolean__,0)
            ;
LAB_03e30668:
            plVar26 = (long *)(*(code *)*puVar9)(plVar26,puVar9[1]);
            if (plVar26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar27 = 0;
            do {
              lVar15 = *plVar26;
              uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
                    puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_03e306d0;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar26,*(long *)puVar5,0);
LAB_03e306d0:
              uVar19 = (*(code *)*puVar9)(plVar26,puVar9[1]);
              if ((uVar19 & 1) == 0) goto LAB_03e307b0;
              lVar15 = *plVar26;
              uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                    puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_03e3072c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar26,*(long *)puVar4,0);
LAB_03e3072c:
              (*(code *)*puVar9)(&stack0x000001e0,plVar26,puVar9[1]);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar15 = lVar8 + (long)(int)uVar27 * 0x34;
              uVar27 = uVar27 + 1;
              *(undefined4 *)(lVar15 + 0x50) = in_stack_00000210;
              *(undefined8 *)(lVar15 + 0x38) = in_stack_000001f8;
              *(undefined8 *)(lVar15 + 0x30) = in_stack_000001f0;
              *(undefined8 *)(lVar15 + 0x48) = in_stack_00000208;
              *(undefined8 *)(lVar15 + 0x40) = in_stack_00000200;
              *(undefined8 *)(lVar15 + 0x28) = in_stack_000001e8;
              *(undefined8 *)(lVar15 + 0x20) = in_stack_000001e0;
            } while( true );
          }
        }
        goto LAB_03e31748;
      }
LAB_03e30ff8:
      uVar35 = FUN_031979f4();
      FUN_03e2ff30(unaff_s15,uVar35,0,&stack0x000002e8);
      uVar35 = FUN_031979f4();
      FUN_03e2ff30(unaff_s15,uVar35,0,&stack0x000002e0);
      if (in_stack_000002e8 != 0) {
        uVar34 = FUN_03e1cbb8(in_stack_000002e8,0);
        puVar5 = PTR_DAT_04579b50;
        lVar11 = FUN_01f08890(*(undefined8 *)PTR_DAT_04579b50,uVar34);
        if (in_stack_000002e0 != 0) {
          uVar34 = FUN_03e1cbb8(in_stack_000002e0,0);
          lVar12 = FUN_01f08890(*(undefined8 *)puVar5,uVar34);
          puVar6 = 
          Method_System_Runtime_Remoting_Messaging_ConstructionCallDictionary_SetMethodProperty__;
          puVar4 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
          if ((((in_stack_000002e8 != 0) &&
               (FUN_03e218a0(in_stack_000002e8,lVar11,0,0), in_stack_000002e0 != 0)) &&
              (FUN_03e218a0(in_stack_000002e0,lVar12,0,0), lVar11 != 0)) && (lVar12 != 0)) {
            lVar24 = FUN_01f08890(*(undefined8 *)puVar5,
                                  *(int *)(lVar11 + 0x18) + *(int *)(lVar12 + 0x18) + -1);
            iVar13 = (int)*(undefined8 *)(lVar11 + 0x18);
            if (iVar13 != 0) {
              lVar8 = lVar11 + (long)(iVar13 + -1) * 0x34;
              fVar53 = *(float *)(lVar8 + 0x44);
              fVar33 = *(float *)(lVar8 + 0x48);
              fVar46 = *(float *)(lVar8 + 0x4c);
              fVar45 = *(float *)(lVar8 + 0x50);
              fVar29 = *(float *)(lVar8 + 0x2c);
              fVar52 = *(float *)(lVar8 + 0x30);
              fVar28 = *(float *)(lVar8 + 0x34);
              FUN_0358d3e4(lVar11,lVar24,0,0);
              FUN_0358d3e4(lVar12,lVar24,*(int *)(lVar11 + 0x18) + -1,0);
              if (lVar24 == 0) goto LAB_03e31748;
              uVar27 = *(int *)(lVar11 + 0x18) - 1;
              uVar18 = (uint)*(undefined8 *)(lVar24 + 0x18);
              if (uVar27 < uVar18) {
                fVar30 = fVar33 * fVar28 - fVar46 * fVar52;
                fVar31 = fVar46 * fVar29 - fVar53 * fVar28;
                fVar30 = fVar30 + fVar30;
                fVar31 = fVar31 + fVar31;
                lVar11 = lVar24 + 0x20 + (long)(int)uVar27 * 0x34;
                fVar51 = fVar53 * fVar52 - fVar33 * fVar29;
                fVar54 = *(float *)(lVar11 + 0x24);
                fVar55 = *(float *)(lVar11 + 0x28);
                fVar51 = fVar51 + fVar51;
                fVar48 = *(float *)(lVar11 + 0x2c);
                fVar56 = *(float *)(lVar11 + 0x30);
                fVar32 = fVar29 + fVar45 * fVar30 + (fVar33 * fVar51 - fVar46 * fVar31);
                fVar29 = fVar52 + fVar45 * fVar31 + (fVar46 * fVar30 - fVar53 * fVar51);
                fVar28 = fVar28 + fVar45 * fVar51 + (fVar53 * fVar31 - fVar33 * fVar30);
                fVar52 = 1.0 / (fVar56 * fVar56 +
                               fVar48 * fVar48 + fVar54 * fVar54 + fVar55 * fVar55);
                fVar56 = fVar56 * fVar52;
                fVar53 = fVar52 * -fVar54;
                fVar46 = fVar52 * -fVar55;
                fVar52 = fVar52 * -fVar48;
                fVar33 = fVar29 * fVar53 - fVar32 * fVar46;
                fVar45 = fVar28 * fVar46 - fVar29 * fVar52;
                fVar51 = fVar32 * fVar52 - fVar28 * fVar53;
                fVar45 = fVar45 + fVar45;
                fVar51 = fVar51 + fVar51;
                fVar33 = fVar33 + fVar33;
                *(float *)(lVar11 + 0xc) =
                     fVar32 + fVar56 * fVar45 + (fVar46 * fVar33 - fVar52 * fVar51);
                *(float *)(lVar11 + 0x10) =
                     fVar29 + fVar56 * fVar51 + (fVar52 * fVar45 - fVar53 * fVar33);
                *(float *)(lVar11 + 0x14) =
                     fVar28 + fVar56 * fVar33 + (fVar53 * fVar51 - fVar46 * fVar45);
                pfVar17 = (float *)(lVar24 + 0x20 + (long)(int)(uVar18 - 1) * 0x34);
                fVar29 = *(float *)(lVar24 + 0x20);
                fVar28 = *(float *)(lVar24 + 0x24);
                fVar52 = *(float *)(lVar24 + 0x28);
                fVar53 = *pfVar17;
                fVar33 = pfVar17[1];
                fVar46 = pfVar17[2];
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
                dVar38 = (double)FUN_0356be8c((double)fVar29,2,0,0);
                if (DAT_04838466 == '\0') {
                  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                  DAT_04838466 = '\x01';
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                dVar39 = (double)FUN_0356be8c((double)fVar28,2,0,0);
                if (DAT_04838466 == '\0') {
                  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                  DAT_04838466 = '\x01';
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                dVar40 = (double)FUN_0356be8c((double)fVar52,2,0,0);
                if (DAT_04838466 == '\0') {
                  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                  DAT_04838466 = '\x01';
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                dVar41 = (double)FUN_0356be8c((double)fVar53,2,0,0);
                if (DAT_04838466 == '\0') {
                  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                  DAT_04838466 = '\x01';
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                dVar42 = (double)FUN_0356be8c((double)fVar33,2,0,0);
                if (DAT_04838466 == '\0') {
                  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
                  DAT_04838466 = '\x01';
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                dVar43 = (double)FUN_0356be8c((double)fVar46,2,0,0);
                lVar11 = lVar24;
                if ((((float)dVar38 == (float)dVar41) && ((float)dVar39 == (float)dVar42)) &&
                   (((float)dVar40 == (float)dVar43 && ((uStack0000000000000034 & 1) != 0)))) {
                  if (*(int *)(lVar24 + 0x18) == 0) goto LAB_03e31744;
                  fVar53 = *(float *)(lVar24 + 0x48);
                  fVar33 = *(float *)(lVar24 + 0x4c);
                  fVar45 = *(float *)(lVar24 + 0x50);
                  fVar29 = *(float *)(lVar24 + 0x38);
                  fVar52 = *(float *)(lVar24 + 0x3c);
                  fVar28 = *(float *)(lVar24 + 0x40);
                  fVar46 = *(float *)(lVar24 + 0x44);
                  lVar11 = FUN_01f08890(*(undefined8 *)puVar5,*(int *)(lVar24 + 0x18) + -1);
                  if (lVar11 == 0) goto LAB_03e31748;
                  uVar27 = *(uint *)(lVar11 + 0x18);
                  if (0 < (long)((ulong)uVar27 << 0x20)) {
                    puVar9 = (undefined8 *)(lVar24 + 0x54);
                    puVar22 = (undefined8 *)(lVar11 + 0x20);
                    uVar19 = 0;
                    do {
                      uVar47 = uVar19 + 1;
                      if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_03e31744;
                      uVar50 = puVar9[3];
                      uVar49 = puVar9[2];
                      uVar36 = puVar9[5];
                      uVar35 = puVar9[4];
                      puVar1 = puVar9 + 6;
                      uVar44 = puVar9[1];
                      uVar37 = *puVar9;
                      if (uVar27 <= uVar19) goto LAB_03e31744;
                      puVar9 = (undefined8 *)((long)puVar9 + 0x34);
                      *(undefined4 *)(puVar22 + 6) = *(undefined4 *)puVar1;
                      puVar22[3] = uVar50;
                      puVar22[2] = uVar49;
                      puVar22[5] = uVar36;
                      puVar22[4] = uVar35;
                      puVar22[1] = uVar44;
                      *puVar22 = uVar37;
                      puVar22 = (undefined8 *)((long)puVar22 + 0x34);
                      uVar19 = uVar47;
                    } while ((long)uVar47 < (long)(int)uVar27);
                  }
                  if (uVar27 == 0) goto LAB_03e31744;
                  fVar30 = fVar53 * fVar28 - fVar33 * fVar52;
                  fVar31 = fVar33 * fVar29 - fVar46 * fVar28;
                  fVar30 = fVar30 + fVar30;
                  fVar31 = fVar31 + fVar31;
                  lVar12 = lVar11 + (long)(int)(uVar27 - 1) * 0x34;
                  fVar51 = fVar46 * fVar52 - fVar53 * fVar29;
                  fVar54 = *(float *)(lVar12 + 0x44);
                  fVar55 = *(float *)(lVar12 + 0x48);
                  fVar51 = fVar51 + fVar51;
                  fVar48 = *(float *)(lVar12 + 0x4c);
                  fVar56 = *(float *)(lVar12 + 0x50);
                  fVar32 = fVar29 + fVar45 * fVar30 + (fVar53 * fVar51 - fVar33 * fVar31);
                  fVar29 = fVar52 + fVar45 * fVar31 + (fVar33 * fVar30 - fVar46 * fVar51);
                  fVar28 = fVar28 + fVar45 * fVar51 + (fVar46 * fVar31 - fVar53 * fVar30);
                  fVar52 = 1.0 / (fVar56 * fVar56 +
                                 fVar48 * fVar48 + fVar54 * fVar54 + fVar55 * fVar55);
                  fVar56 = fVar56 * fVar52;
                  fVar53 = fVar52 * -fVar54;
                  fVar46 = fVar52 * -fVar55;
                  fVar52 = fVar52 * -fVar48;
                  fVar33 = fVar29 * fVar53 - fVar32 * fVar46;
                  fVar45 = fVar28 * fVar46 - fVar29 * fVar52;
                  fVar51 = fVar32 * fVar52 - fVar28 * fVar53;
                  fVar45 = fVar45 + fVar45;
                  fVar51 = fVar51 + fVar51;
                  fVar33 = fVar33 + fVar33;
                  *(float *)(lVar12 + 0x38) =
                       fVar32 + fVar56 * fVar45 + (fVar46 * fVar33 - fVar52 * fVar51);
                  *(float *)(lVar12 + 0x3c) =
                       fVar29 + fVar56 * fVar51 + (fVar52 * fVar45 - fVar53 * fVar33);
                  *(float *)(lVar12 + 0x40) =
                       fVar28 + fVar56 * fVar33 + (fVar53 * fVar51 - fVar46 * fVar45);
                }
                lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
                FUN_03e1f9e4(lVar12,lVar11,uStack0000000000000034 & 1,0);
                *unaff_x27 = lVar12;
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
LAB_03e31748:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03e307b0:
  if (plVar26 != (long *)0x0) {
    lVar15 = *plVar26;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_03e30810;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar26,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03e30810:
    (*(code *)*puVar9)(plVar26,puVar9[1]);
  }
  puVar4 = PTR_DAT_045781f8;
  if (lVar8 == 0) goto LAB_03e31748;
  if ((*(int *)(lVar8 + 0x18) == 0) || (*(int *)(lVar8 + 0x18) == 1)) goto LAB_03e31744;
  uVar44 = *(undefined8 *)(lVar8 + 0x48);
  uVar35 = *(undefined8 *)(lVar8 + 0x38);
  fVar33 = *(float *)(lVar8 + 0x50);
  uVar50 = *(undefined8 *)(lVar8 + 0x20);
  fVar29 = *(float *)(lVar8 + 0x44);
  fVar52 = *(float *)(lVar8 + 0x40);
  fVar51 = *(float *)(lVar8 + 0x28);
  uVar49 = *(undefined8 *)(lVar8 + 0x54);
  uVar36 = *(undefined8 *)(lVar8 + 0x7c);
  fVar46 = *(float *)(lVar8 + 0x78);
  fVar45 = *(float *)(lVar8 + 0x5c);
  uVar37 = *(undefined8 *)(lVar8 + 0x60);
  fVar53 = *(float *)(lVar8 + 0x84);
  fVar28 = *(float *)(lVar8 + 0x68);
  lVar8 = FUN_01f08890(*(undefined8 *)PTR_DAT_045781f8,4);
  if (lVar8 == 0) goto LAB_03e31748;
  uVar27 = *(uint *)(lVar8 + 0x18);
  if (uVar27 == 0) goto LAB_03e31744;
  *(undefined8 *)(lVar8 + 0x20) = uVar50;
  *(float *)(lVar8 + 0x28) = fVar51;
  if (uVar27 == 1) goto LAB_03e31744;
  fVar48 = (float)((ulong)uVar44 >> 0x20);
  fVar55 = (float)((ulong)uVar35 >> 0x20);
  fVar56 = (float)uVar44;
  fVar54 = (float)uVar35;
  fVar30 = fVar29 * fVar55 - fVar56 * fVar54;
  fVar30 = fVar30 + fVar30;
  fVar31 = fVar56 * fVar52 - fVar48 * fVar55;
  fVar32 = fVar48 * fVar54 - fVar29 * fVar52;
  fVar31 = fVar31 + fVar31;
  fVar32 = fVar32 + fVar32;
  *(ulong *)(lVar8 + 0x2c) =
       CONCAT44((float)((ulong)uVar50 >> 0x20) +
                fVar55 + fVar32 * fVar33 + (fVar48 * fVar31 - fVar29 * fVar30),
                (float)uVar50 + fVar54 + fVar31 * fVar33 + (fVar56 * fVar30 - fVar48 * fVar32));
  *(float *)(lVar8 + 0x34) = fVar51 + fVar52 + fVar33 * fVar30 + (fVar29 * fVar32 - fVar56 * fVar31)
  ;
  if (uVar27 < 3) goto LAB_03e31744;
  fVar32 = (float)((ulong)uVar37 >> 0x20);
  fVar30 = (float)((ulong)uVar36 >> 0x20);
  fVar51 = (float)uVar36;
  fVar31 = (float)uVar37;
  fVar29 = fVar46 * fVar32 - fVar51 * fVar31;
  fVar29 = fVar29 + fVar29;
  fVar52 = fVar51 * fVar28 - fVar30 * fVar32;
  fVar33 = fVar30 * fVar31 - fVar46 * fVar28;
  fVar52 = fVar52 + fVar52;
  fVar33 = fVar33 + fVar33;
  *(ulong *)(lVar8 + 0x38) =
       CONCAT44((float)((ulong)uVar49 >> 0x20) +
                fVar32 + fVar33 * fVar53 + (fVar30 * fVar52 - fVar46 * fVar29),
                (float)uVar49 + fVar31 + fVar52 * fVar53 + (fVar51 * fVar29 - fVar30 * fVar33));
  *(float *)(lVar8 + 0x40) = fVar45 + fVar28 + fVar53 * fVar29 + (fVar46 * fVar33 - fVar51 * fVar52)
  ;
  if (uVar27 == 3) goto LAB_03e31744;
  *(undefined8 *)(lVar8 + 0x44) = uVar49;
  *(float *)(lVar8 + 0x4c) = fVar45;
  lVar10 = FUN_01f08890(*(undefined8 *)puVar4,3);
  lVar15 = 0;
  uVar19 = 0;
  do {
    if ((ulong)*(uint *)(lVar8 + 0x18) <= uVar19 + 1) goto LAB_03e31744;
    if (lVar10 == 0) goto LAB_03e31748;
    if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_03e31744;
    lVar16 = lVar8 + lVar15;
    fVar28 = *(float *)(lVar16 + 0x34);
    uVar35 = NEON_fmov(0x40400000,4);
    fVar29 = *(float *)(lVar16 + 0x28);
    lVar2 = lVar10 + lVar15;
    lVar15 = lVar15 + 0xc;
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar16 + 0x2c) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20)) *
                  (float)((ulong)uVar35 >> 0x20),
                  ((float)*(undefined8 *)(lVar16 + 0x2c) - (float)*(undefined8 *)(lVar16 + 0x20)) *
                  (float)uVar35);
    *(float *)(lVar2 + 0x28) = (fVar28 - fVar29) * 3.0;
    uVar19 = uVar19 + 1;
  } while (lVar15 != 0x24);
  lVar15 = FUN_01f08890(*(undefined8 *)puVar4,2);
  uVar19 = 0;
  bVar7 = true;
  do {
    bVar3 = bVar7;
    if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar19 + 1) goto LAB_03e31744;
    if (lVar15 == 0) goto LAB_03e31748;
    if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_03e31744;
    puVar9 = (undefined8 *)(lVar10 + 0x20 + (uVar19 + 1) * 0xc);
    uVar35 = *puVar9;
    puVar21 = (ulong *)(lVar10 + 0x20 + uVar19 * 0xc);
    uVar47 = *puVar21;
    lVar16 = lVar15 + uVar19 * 0xc;
    fVar28 = (float)uVar35 - (float)uVar47;
    fVar52 = (float)((ulong)uVar35 >> 0x20) - (float)(uVar47 >> 0x20);
    fVar29 = *(float *)(puVar9 + 1) - *(float *)(puVar21 + 1);
    uVar23 = CONCAT44(fVar52 + fVar52,fVar28 + fVar28);
    *(ulong *)(lVar16 + 0x20) = uVar23;
    *(float *)(lVar16 + 0x28) = fVar29 + fVar29;
    uVar19 = 1;
    bVar7 = false;
  } while (bVar3);
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    uVar19 = 0;
    pfVar17 = (float *)(lVar12 + 0x28);
    uVar14 = uVar47;
    do {
      fVar29 = (float)uVar23;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto LAB_03e31744;
      uVar34 = *(undefined4 *)(lVar24 + uVar19 * 4);
      fVar53 = (float)FUN_03e32324(uVar34,lVar8,3);
      uVar23 = uVar14;
      fVar52 = fVar29;
      fVar33 = (float)FUN_03e32324(uVar34,lVar10,2);
      uVar47 = uVar23;
      fVar28 = fVar52;
      fVar46 = (float)FUN_03e32324(uVar34,lVar15,1);
      if (lVar12 == 0) goto LAB_03e31748;
      if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_03e31744;
      fVar51 = (float)uVar23;
      fVar30 = (float)uVar14 - *pfVar17;
      fVar45 = (float)uVar47 * fVar30;
      fVar28 = fVar51 * fVar51 + fVar33 * fVar33 + fVar52 * fVar52 +
               fVar45 + fVar46 * (fVar53 - pfVar17[-2]) + fVar28 * (fVar29 - pfVar17[-1]);
      if (fVar28 != 0.0) {
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto LAB_03e31744;
        fVar51 = fVar51 * fVar30;
        uVar47 = (ulong)(uint)fVar51;
        fVar45 = fVar51 + fVar33 * (fVar53 - pfVar17[-2]) + fVar52 * (fVar29 - pfVar17[-1]);
        *(float *)(lVar24 + uVar19 * 4) = *(float *)(lVar24 + uVar19 * 4) - fVar45 / fVar28;
      }
      uVar23 = (ulong)(uint)fVar45;
      uVar19 = uVar19 + 1;
      pfVar17 = pfVar17 + 3;
      uVar14 = uVar47;
    } while ((long)uVar19 < (long)*(int *)(unaff_x22 + 0x18));
  }
  lVar12 = FUN_03e317e0();
  *unaff_x27 = lVar12;
  thunk_FUN_01f51358(unaff_x27,lVar12);
  lVar12 = FUN_01f08890(*(undefined8 *)PTR_DAT_045781f8,*(undefined4 *)(unaff_x22 + 0x18));
  puVar4 = PTR_DAT_04579c90;
  if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
    uVar19 = 0;
    uVar14 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    puVar25 = (undefined4 *)(lVar12 + 0x28);
    do {
      if (uVar14 <= uVar19) goto LAB_03e31744;
      uVar34 = FUN_0240ab08(*(undefined4 *)(lVar24 + uVar19 * 4),*unaff_x27,*(undefined8 *)puVar4);
      if (lVar12 == 0) goto LAB_03e31748;
      if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_03e31744;
      puVar25[-2] = uVar34;
      puVar25[-1] = (int)uVar23;
      *puVar25 = (int)uVar47;
      uVar14 = (ulong)*(uint *)(lVar11 + 0x18);
      uVar19 = uVar19 + 1;
      puVar25 = puVar25 + 3;
    } while ((long)uVar19 < (long)(int)*(uint *)(lVar11 + 0x18));
  }
  fVar29 = (float)FUN_03e3218c();
  if (fVar29 < unaff_s15) {
    return 1;
  }
  iVar13 = iVar13 + 1;
  if (iVar13 == 4) goto LAB_03e30ff8;
  goto LAB_03e305d8;
}



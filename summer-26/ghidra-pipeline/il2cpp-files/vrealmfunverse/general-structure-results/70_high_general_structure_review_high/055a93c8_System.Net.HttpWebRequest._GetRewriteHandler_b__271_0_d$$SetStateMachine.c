/*
FUNCTION_NAME: System.Net.HttpWebRequest.<<GetRewriteHandler>b__271_0>d$$SetStateMachine
ENTRY_POINT: 055a93c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x055a8dec) */
/* WARNING: Removing unreachable block (ram,0x055a91a4) */
/* WARNING: Removing unreachable block (ram,0x055a9080) */
/* WARNING: Removing unreachable block (ram,0x055a91ac) */

void System_Net_HttpWebRequest_<<GetRewriteHandler>b__271_0>d__SetStateMachine(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 unaff_x19;
  undefined8 uVar21;
  long *unaff_x22;
  long unaff_x23;
  long lVar22;
  long lVar23;
  long *plVar24;
  long unaff_x26;
  ulong unaff_x27;
  int unaff_w29;
  undefined *puVar25;
  long lStack0000000000000010;
  long *plStack0000000000000018;
  long in_stack_00000030;
  long in_stack_00000038;
  uint in_stack_00000040;
  long in_stack_00000048;
  uint in_stack_00000050;
  int iStack0000000000000054;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000068;
  
  puVar25 = PTR_DAT_06312f78;
  plVar9 = (long *)thunk_FUN_02b79548(*in_stack_00000060,*(undefined8 *)PTR_DAT_06312f78);
  *in_stack_00000068 = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    lVar17 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar25) {
          puVar10 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_055a7aac;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar25,0);
LAB_055a7aac:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if (((int)unaff_x22[0x1b] == 0) && (*(long *)(in_stack_00000038 + 0x18) != 0)) {
    uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_InputDevice>_TryGetValue__
                               );
    FUN_055aa778();
    uVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
    FUN_055a197c(uVar12,uVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_InputDevice>_Remove__);
    plVar9 = *(long **)(in_stack_00000038 + 0x18);
    if (plVar9 == (long *)0x0) goto LAB_055a90bc;
    lVar17 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0631f238) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_055a7b9c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)PTR_DAT_0631f238,1);
LAB_055a7b9c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
    lStack0000000000000010 =
         thunk_FUN_02b79644(*(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Keys__
                           );
    System_Net_HttpWebRequest_AuthorizationState__CheckAuthorization();
    FUN_055a2148();
  }
  else {
    lStack0000000000000010 = 0;
  }
  plVar9 = (long *)unaff_x22[3];
  if (plVar9 == (long *)0x0) goto LAB_055a90bc;
  lVar17 = unaff_x23 + 0x20;
  lVar18 = unaff_x26 + 0x20;
  plStack0000000000000018 = (long *)0x0;
  iStack0000000000000054 = -1;
  puVar25 = PTR_DAT_06312310;
LAB_055a7c24:
  iVar8 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
  if (iVar8 == 0xf || unaff_w29 + -1 <= iStack0000000000000054) {
    if (unaff_x26 == 0) goto LAB_055a8df0;
    plVar9 = *(long **)(in_stack_00000038 + 0x30);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      puVar7 = Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__;
      puVar6 = PTR_DAT_06312f90;
      goto joined_r0x055a8b44;
    }
    goto LAB_055a90bc;
  }
  plVar9 = (long *)unaff_x22[3];
  if (plVar9 == (long *)0x0) goto LAB_055a90bc;
  iVar8 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
  if (iVar8 == 1) {
    if ((unaff_x27 & 1) == 0) {
      if ((in_stack_00000040 & 1) == 0) {
        uVar19 = FUN_055b9aa8(in_stack_00000038,0);
        plVar9 = (long *)unaff_x22[3];
        if ((uVar19 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_055a90bc;
          uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          plVar9 = (long *)unaff_x22[3];
          if (plVar9 == (long *)0x0) goto LAB_055a90bc;
          uVar12 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          plVar13 = (long *)FUN_055b9740(in_stack_00000038,uVar11,uVar12,0);
        }
        else {
          if (plVar9 == (long *)0x0) goto LAB_055a90bc;
          uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          plVar9 = (long *)unaff_x22[3];
          if (plVar9 == (long *)0x0) goto LAB_055a90bc;
          uVar12 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          plVar13 = (long *)FUN_055b9394(in_stack_00000038,uVar11,uVar12,iStack0000000000000054,0);
        }
        in_stack_00000040 = 0;
        goto joined_r0x055a7fd4;
      }
      plVar9 = *(long **)(in_stack_00000038 + 0x70);
      if (plVar9 == (long *)0x0) goto LAB_055a90bc;
      bVar3 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__))
      goto LAB_055a9160;
      plVar9 = (long *)FUN_055b1960(plVar9,0);
      if (plVar9 == (long *)0x0) goto LAB_055a90bc;
      plVar9 = (long *)(**(code **)(*plVar9 + 0x2e8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2f0));
      if (plVar9 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__
                         + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)
             Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__
           )) goto LAB_055a9104;
        in_stack_00000040 = 0;
        plVar13 = plVar9;
        goto LAB_055a7fd8;
      }
      in_stack_00000040 = 0;
System_Net_WebOperation__GetResponseStream:
      lVar22 = *(long *)(in_stack_00000038 + 0x50);
      if (lVar22 == 0) {
        (**(code **)(*unaff_x22 + 0x1e8))();
      }
      else {
        if (*(long *)(lVar22 + 0x28) == 0) goto LAB_055a90bc;
        uVar19 = FUN_055902f4(*(long *)(lVar22 + 0x28),0);
        lVar23 = *(long *)(lVar22 + 0x28);
        if ((uVar19 & 1) == 0) {
          uVar11 = FUN_055aaa14();
          FUN_055a9fdc(uVar11,lVar22,unaff_x19,uVar11,in_stack_00000050 & 1);
        }
        else {
          if ((unaff_x26 == 0) || (unaff_x23 == 0)) goto LAB_055a90bc;
          uVar4 = *(uint *)(lVar22 + 0x78);
          lVar22 = (long)(int)uVar4;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar4) {
LAB_055a90d8:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          iVar8 = *(int *)(lVar17 + lVar22 * 4);
          *(int *)(lVar17 + lVar22 * 4) = iVar8 + 1;
          if (lVar23 == 0) goto LAB_055a90bc;
          FUN_0559102c(lVar23,0);
          uVar11 = FUN_055aaa14();
          if (*(uint *)(unaff_x26 + 0x18) <= uVar4) goto LAB_055a90d8;
          FUN_055aa240(uVar11,lVar23,lVar18 + lVar22 * 8,iVar8,uVar11,1);
        }
      }
      goto LAB_055a80dc;
    }
    plVar9 = (long *)unaff_x22[3];
    if (plVar9 == (long *)0x0) goto LAB_055a90bc;
    uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    plVar9 = (long *)unaff_x22[3];
    if (plVar9 == (long *)0x0) goto LAB_055a90bc;
    uVar12 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    plVar13 = (long *)FUN_055b9394(in_stack_00000038,uVar11,uVar12,iStack0000000000000054,0);
joined_r0x055a7fd4:
    if (plVar13 == (long *)0x0) goto System_Net_WebOperation__GetResponseStream;
LAB_055a7fd8:
    plVar9 = (long *)plVar13[5];
    if ((plVar9 == (long *)0x0) || (in_stack_00000048 == 0)) goto LAB_055a90bc;
    if (*(uint *)(in_stack_00000048 + 0x18) <= *(uint *)(plVar9 + 3)) goto LAB_055a90d8;
    if (*(char *)(in_stack_00000048 + (int)*(uint *)(plVar9 + 3) + 0x20) != '\0')
    goto System_Net_WebOperation__GetResponseStream;
    if (plVar9 != plStack0000000000000018) {
      iStack0000000000000054 = *(int *)((long)plVar13 + 0x54);
      bVar3 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      plStack0000000000000018 = plVar9;
      if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
        iStack0000000000000054 = iStack0000000000000054 + 1;
      }
    }
    uVar11 = thunk_FUN_02b4c898(plVar9,0);
    uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_Remove__;
    if (*(int *)(*(long *)(puVar25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar25 + 0xe0));
    }
    uVar12 = FUN_04d8a7b0(uVar12,0);
    uVar19 = FUN_04d938a0(uVar11,uVar12,0);
    if ((uVar19 & 1) != 0) {
      if (((int)unaff_x22[0x1b] == 0) && (uVar19 = FUN_055b6730(plVar13,0), (uVar19 & 1) != 0)) {
        if (((lStack0000000000000010 == 0) || (plVar13[5] == 0)) ||
           (*(long *)(lStack0000000000000010 + 0x18) == 0)) goto LAB_055a90bc;
        if (*(uint *)(*(long *)(lStack0000000000000010 + 0x18) + 0x18) <=
            *(uint *)(plVar13[5] + 0x18)) goto LAB_055a90d8;
        uVar11 = FUN_055a5468();
        lVar22 = plVar13[5];
        if ((lVar22 == 0) || (lVar23 = *(long *)(lStack0000000000000010 + 0x18), lVar23 == 0))
        goto LAB_055a90bc;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar22 + 0x18)) goto LAB_055a90d8;
        if (*(long *)(lVar23 + (long)(int)*(uint *)(lVar22 + 0x18) * 8 + 0x20) == 0) {
          uVar19 = FUN_055aa688(uVar11,lVar22,plVar13[9],unaff_x19,in_stack_00000050 & 1);
          if ((uVar19 & 1) != 0) {
            FUN_0275e13c(plVar13);
            lVar17 = plVar13[9];
            uVar11 = FUN_0275e13c(lVar17);
            uVar11 = FUN_055a2558(uVar11,*(undefined8 *)(lVar17 + 0x38));
            goto LAB_055a9218;
          }
          FUN_055a9fdc(uVar19,plVar13[5],unaff_x19,uVar11,in_stack_00000050 & 1);
        }
        else {
          if (((plVar13[8] == 0) || (lVar22 = *(long *)(plVar13[8] + 0x58), lVar22 == 0)) ||
             (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_055a90bc;
          uVar19 = FUN_04d952d0(lVar22,0);
          if ((uVar19 & 1) == 0) {
            uVar19 = FUN_055aa688(uVar19,plVar13[5],plVar13[9],unaff_x19,in_stack_00000050 & 1);
            if ((uVar19 & 1) == 0) {
              if ((plVar13[8] == 0) || (lVar22 = *(long *)(plVar13[8] + 0x58), lVar22 == 0))
              goto LAB_055a90bc;
              uVar11 = FUN_055aa7d0(uVar19,*(undefined8 *)(lVar22 + 0x10));
              FUN_055a9fdc(uVar11,plVar13[5],unaff_x19,uVar11,in_stack_00000050 & 1);
            }
            else {
              uVar11 = FUN_055aa170(uVar19,plVar13[5],unaff_x19,in_stack_00000050 & 1);
            }
            uVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_InputDevice>_set_Item__
                                       );
            FUN_055a185c();
            if ((plVar13[5] == 0) ||
               (lVar22 = *(long *)(lStack0000000000000010 + 0x18), lVar22 == 0)) goto LAB_055a90bc;
            uVar4 = *(uint *)(plVar13[5] + 0x18);
            if (*(uint *)(lVar22 + 0x18) <= uVar4) goto LAB_055a90d8;
            unaff_x27 = unaff_x27 & 0xffffffff;
            uVar21 = *(undefined8 *)(lVar22 + (long)(int)uVar4 * 8 + 0x20);
            uVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_TryGetValue__
                                       );
            FUN_055a6158(uVar15,uVar11,uVar12,uVar21);
            FUN_055a2074();
            if ((plVar13[5] == 0) ||
               (lVar22 = *(long *)(lStack0000000000000010 + 0x18), lVar22 == 0)) goto LAB_055a90bc;
            uVar4 = *(uint *)(plVar13[5] + 0x18);
            if (*(uint *)(lVar22 + 0x18) <= uVar4) goto LAB_055a90d8;
            puVar10 = (undefined8 *)(lVar22 + (long)(int)uVar4 * 8 + 0x20);
            *puVar10 = 0;
            thunk_FUN_02bb0e9c(puVar10,0);
            puVar25 = PTR_DAT_06312310;
          }
        }
      }
      else {
        uVar19 = FUN_055aa688(uVar19,plVar13[5],plVar13[9],unaff_x19,in_stack_00000050 & 1);
        if ((uVar19 & 1) == 0) {
          if (((plVar13[8] == 0) || (lVar22 = *(long *)(plVar13[8] + 0x58), lVar22 == 0)) ||
             (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_055a90bc;
          uVar19 = FUN_04d952d0(lVar22,0);
          if ((uVar19 & 1) == 0) {
            lVar22 = FUN_055aa170(uVar19,plVar13[5],unaff_x19,in_stack_00000050 & 1);
            if (lVar22 == 0) {
              if ((plVar13[8] == 0) || (lVar22 = *(long *)(plVar13[8] + 0x58), lVar22 == 0))
              goto LAB_055a90bc;
              uVar11 = FUN_055aa7d0(0,*(undefined8 *)(lVar22 + 0x10));
              FUN_055a9fdc(uVar11,plVar13[5],unaff_x19,uVar11,in_stack_00000050 & 1);
            }
            FUN_055a94f8();
          }
          else {
            lVar22 = FUN_055a94f8();
            if ((lVar22 != 0) || ((char)plVar13[7] != '\0')) {
              FUN_055a9fdc(lVar22,plVar13[5],unaff_x19,lVar22,in_stack_00000050 & 1);
            }
          }
        }
        else {
          FUN_055aa170(uVar19,plVar13[5],unaff_x19,in_stack_00000050 & 1);
          FUN_055a94f8();
        }
      }
      if (plVar13[5] == 0) goto LAB_055a90bc;
      uVar4 = *(uint *)(plVar13[5] + 0x18);
      if (*(uint *)(in_stack_00000048 + 0x18) <= uVar4) goto LAB_055a90d8;
      *(undefined1 *)(in_stack_00000048 + (int)uVar4 + 0x20) = 1;
      goto LAB_055a80dc;
    }
    if (plVar13[5] == 0) goto LAB_055a90bc;
    uVar11 = thunk_FUN_02b4c898(plVar13[5],0);
    uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_GetEnumerator__;
    if (*(int *)(*(long *)(puVar25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar25 + 0xe0));
    }
    uVar12 = FUN_04d8a7b0(uVar12,0);
    uVar19 = FUN_04d938a0(uVar11,uVar12,0);
    plVar24 = (long *)plVar13[5];
    if ((uVar19 & 1) != 0) {
      if (plVar24 == (long *)0x0) goto LAB_055a90bc;
      bVar3 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      if ((*(byte *)(*plVar24 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
LAB_055a9118:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar24);
      }
      if ((unaff_x26 == 0) || (unaff_x23 == 0)) goto LAB_055a90bc;
      uVar4 = *(uint *)(plVar24 + 0xf);
      lVar22 = (long)(int)uVar4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar4) goto LAB_055a90d8;
      unaff_x27 = unaff_x27 & 0xffffffff;
      lVar23 = plVar24[5];
      iVar8 = *(int *)(lVar17 + lVar22 * 4);
      *(int *)(lVar17 + lVar22 * 4) = iVar8 + 1;
      uVar11 = FUN_055aa86c();
      uVar12 = FUN_055aa688(uVar11,plVar13[5],plVar13[9],unaff_x19,in_stack_00000050 & 1);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar4) goto LAB_055a90d8;
      uVar11 = FUN_055aa240(uVar12,lVar23,lVar18 + lVar22 * 8,iVar8,uVar11,
                            ((uint)uVar12 ^ 0xffffffff) & 1);
      puVar25 = PTR_DAT_06312310;
      if (plVar24[0xc] != 0) {
        if (in_stack_00000030 == 0) goto LAB_055a90bc;
        uVar4 = *(uint *)(plVar24 + 0xf);
        if ((*(uint *)(unaff_x23 + 0x18) <= uVar4) || (*(uint *)(in_stack_00000030 + 0x18) <= uVar4)
           ) goto LAB_055a90d8;
        FUN_055aa240(uVar11,plVar24[0xe],in_stack_00000030 + 0x20 + (long)(int)uVar4 * 8,
                     *(int *)(unaff_x23 + (long)(int)uVar4 * 4 + 0x20) + -1,plVar13[6],1);
      }
      goto LAB_055a80dc;
    }
    if (plVar24 == (long *)0x0) goto LAB_055a90bc;
    uVar11 = thunk_FUN_02b4c898(plVar24,0);
    uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_Add__;
    if (*(int *)(*(long *)(puVar25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar25 + 0xe0));
    }
    uVar12 = FUN_04d8a7b0(uVar12,0);
    uVar19 = FUN_04d938a0(uVar11,uVar12,0);
    plVar9 = (long *)plVar13[5];
    if ((uVar19 & 1) != 0) {
      if (plVar9 == (long *)0x0) goto LAB_055a90bc;
      bVar3 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__
                       + 0x130);
      plVar24 = plVar9;
      if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__))
      goto LAB_055a9118;
      if (plVar9[5] == 0) goto LAB_055a90bc;
      uVar19 = FUN_055902f4(plVar9[5],0);
      lVar22 = plVar9[5];
      if ((uVar19 & 1) == 0) {
        uVar14 = FUN_055aaa14();
        uVar19 = uVar14;
        goto LAB_055a7f80;
      }
      if ((unaff_x26 == 0) || (unaff_x23 == 0)) goto LAB_055a90bc;
      uVar4 = *(uint *)(plVar9 + 0xf);
      lVar23 = (long)(int)uVar4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar4) goto LAB_055a90d8;
      iVar8 = *(int *)(lVar17 + lVar23 * 4);
      *(int *)(lVar17 + lVar23 * 4) = iVar8 + 1;
      if (lVar22 == 0) goto LAB_055a90bc;
      FUN_0559102c(lVar22,0);
      uVar11 = FUN_055aaa14();
      if (*(uint *)(unaff_x26 + 0x18) <= uVar4) goto LAB_055a90d8;
      FUN_055aa240(uVar11,lVar22,lVar18 + lVar23 * 8,iVar8,uVar11,1);
      goto LAB_055a80dc;
    }
    if (plVar9 == (long *)0x0) goto LAB_055a90bc;
    uVar11 = thunk_FUN_02b4c898(plVar9,0);
    uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    if (*(int *)(*(long *)(puVar25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar25 + 0xe0));
    }
    uVar12 = FUN_04d8a7b0(uVar12,0);
    uVar19 = FUN_04d938a0(uVar11,uVar12,0);
    if ((uVar19 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar11 = thunk_FUN_02b79644();
      uVar12 = thunk_FUN_02ba3594(
                                 Method_System_Collections_Generic_Dictionary<int,_int>_TryGetValue__
                                 );
      FUN_04d7b3f4(uVar11,uVar12,0);
LAB_055a9218:
      uVar12 = thunk_FUN_02ba3594(Method_System_Collections_Generic_Dictionary<int,_int>_get_Count__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar11,uVar12);
    }
    lVar22 = plVar13[5];
    if (lVar22 == 0) goto LAB_055a90bc;
    uVar4 = *(uint *)(lVar22 + 0x18);
    if (*(uint *)(in_stack_00000048 + 0x18) <= uVar4) goto LAB_055a90d8;
    *(undefined1 *)(in_stack_00000048 + (int)uVar4 + 0x20) = 1;
    if ((int)unaff_x22[0x1b] != 0) {
      uVar11 = FUN_055aa86c();
      FUN_055a9fdc(uVar11,lVar22,unaff_x19,uVar11,in_stack_00000050 & 1);
      if (plVar13[6] != 0) {
        plVar9 = (long *)plVar13[5];
        if (plVar9 == (long *)0x0) goto LAB_055a90bc;
        bVar3 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                         0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
LAB_055a9160:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44();
        }
        FUN_055b75ac(plVar9,unaff_x19,plVar13[6],0);
      }
      goto LAB_055a80dc;
    }
    if (*(long *)(lVar22 + 0x28) == 0) goto LAB_055a90bc;
    if (*(int *)(*(long *)(lVar22 + 0x28) + 0x20) == 1) {
      if ((lStack0000000000000010 == 0) || (*(long *)(lStack0000000000000010 + 0x18) == 0))
      goto LAB_055a90bc;
      if (*(uint *)(*(long *)(lStack0000000000000010 + 0x18) + 0x18) <= uVar4) goto LAB_055a90d8;
      uVar19 = FUN_055a54cc();
    }
    else {
      if ((lStack0000000000000010 == 0) || (*(long *)(lStack0000000000000010 + 0x18) == 0))
      goto LAB_055a90bc;
      if (*(uint *)(*(long *)(lStack0000000000000010 + 0x18) + 0x18) <= uVar4) goto LAB_055a90d8;
      uVar19 = FUN_055a5468();
    }
    uVar14 = FUN_055b6730(plVar13,0);
    if ((uVar14 & 1) != 0) {
      plVar9 = (long *)plVar13[5];
      if ((plVar9 == (long *)0x0) ||
         (lVar22 = *(long *)(lStack0000000000000010 + 0x18), lVar22 == 0)) goto LAB_055a90bc;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(plVar9 + 3)) goto LAB_055a90d8;
      if (*(long *)(lVar22 + (long)(int)*(uint *)(plVar9 + 3) * 8 + 0x20) == 0) goto LAB_055a7f80;
      goto LAB_055a80dc;
    }
    if (uVar19 == 0) goto LAB_055a80dc;
    plVar9 = (long *)plVar13[5];
  }
  else {
    plVar9 = (long *)unaff_x22[3];
    if (plVar9 == (long *)0x0) goto LAB_055a90bc;
    iVar8 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
    if (iVar8 != 3) {
      plVar9 = (long *)unaff_x22[3];
      if (plVar9 != (long *)0x0) {
        iVar8 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
        if (iVar8 == 4) goto LAB_055a7cec;
LAB_055a7e18:
        FUN_055a5c54();
        FUN_055a59dc();
        goto LAB_055a80dc;
      }
      goto LAB_055a90bc;
    }
LAB_055a7cec:
    plVar9 = *(long **)(in_stack_00000038 + 0x68);
    if (plVar9 == (long *)0x0) goto LAB_055a7e18;
    lVar22 = *plVar9;
    bVar3 = *(byte *)(lVar22 + 0x130);
    bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__
                     + 0x130);
    if ((bVar2 <= bVar3) &&
       (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__)) {
      bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      if ((bVar3 < bVar2) ||
         (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
        if (plVar9[5] == 0) goto LAB_055a90bc;
        lVar22 = FUN_0559102c(plVar9[5],0);
      }
      else {
        if ((plVar9[0x10] == 0) || (lVar22 = FUN_055ba48c(plVar9[0x10],0), lVar22 == 0))
        goto LAB_055a90bc;
        lVar22 = *(long *)(lVar22 + 0x48);
      }
      if (lVar22 != 0) {
        uVar11 = *(undefined8 *)(lVar22 + 0x10);
        lVar22 = *(long *)(puVar25 + 0x90);
        if (*(int *)(*(long *)(puVar25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = FUN_04d8a7b0(lVar22 + 0x20,0);
        uVar19 = FUN_04d938a0(uVar11,uVar12,0);
        if ((uVar19 & 1) == 0) {
          uVar11 = FUN_055aaa14();
        }
        else {
          plVar24 = (long *)unaff_x22[3];
          if (plVar24 == (long *)0x0) goto LAB_055a90bc;
          uVar11 = (**(code **)(*plVar24 + 0x528))(plVar24,*(undefined8 *)(*plVar24 + 0x530));
        }
        if ((unaff_x26 != 0) && (unaff_x23 != 0)) {
          uVar4 = *(uint *)(plVar9 + 0xf);
          lVar22 = (long)(int)uVar4;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar4) goto LAB_055a90d8;
          lVar23 = plVar9[5];
          iVar8 = *(int *)(lVar17 + lVar22 * 4);
          *(int *)(lVar17 + lVar22 * 4) = iVar8 + 1;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar4) goto LAB_055a90d8;
          FUN_055aa240(uVar11,lVar23,lVar18 + lVar22 * 8,iVar8,uVar11,1);
          goto LAB_055a80dc;
        }
      }
      goto LAB_055a90bc;
    }
    bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                     0x130);
    if ((bVar3 < bVar2) ||
       (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
LAB_055a9104:
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar9);
    }
    plVar24 = (long *)FUN_055b1960(plVar9,0);
    if ((plVar24 == (long *)0x0) ||
       (plVar24 = (long *)(**(code **)(*plVar24 + 0x2e8))
                                    (plVar24,0,*(undefined8 *)(*plVar24 + 0x2f0)),
       plVar24 == (long *)0x0)) goto LAB_055a90bc;
    bVar3 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__
                     + 0x130);
    if ((*(byte *)(*plVar24 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__))
    goto LAB_055a9118;
    if (plVar24[9] == 0) goto LAB_055a90bc;
    uVar11 = *(undefined8 *)(plVar24[9] + 0x10);
    lVar22 = *(long *)(puVar25 + 0x90);
    if (*(int *)(*(long *)(puVar25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_04d8a7b0(lVar22 + 0x20,0);
    uVar19 = FUN_04d938a0(uVar11,uVar12,0);
    plVar24 = (long *)unaff_x22[3];
    if ((uVar19 & 1) == 0) {
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x528))(plVar24,*(undefined8 *)(*plVar24 + 0x530));
        uVar14 = System_Net_HttpWebResponse__System_IDisposable_Dispose();
        uVar19 = uVar14;
        goto LAB_055a7f80;
      }
      goto LAB_055a90bc;
    }
    if (plVar24 == (long *)0x0) goto LAB_055a90bc;
    uVar14 = (**(code **)(*plVar24 + 0x528))(plVar24,*(undefined8 *)(*plVar24 + 0x530));
    uVar19 = uVar14;
  }
LAB_055a7f80:
  FUN_055a9fdc(uVar14,plVar9,unaff_x19,uVar19,in_stack_00000050 & 1);
LAB_055a80dc:
  plVar9 = (long *)unaff_x22[3];
  if (plVar9 == (long *)0x0) goto LAB_055a90bc;
  (**(code **)(*plVar9 + 0x538))(plVar9,*(undefined8 *)(*plVar9 + 0x540));
  plVar9 = (long *)unaff_x22[3];
  if (plVar9 == (long *)0x0) goto LAB_055a90bc;
  goto LAB_055a7c24;
joined_r0x055a8b44:
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar18 = *plVar9;
  lVar17 = *(long *)puVar6;
  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == lVar17) {
        puVar10 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_055a8ba0;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar10 = (undefined8 *)FUN_02b7654c(plVar9,lVar17,0);
LAB_055a8ba0:
  uVar19 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar5 = PTR_DAT_06312f78;
  if ((uVar19 & 1) == 0) {
    plVar9 = (long *)thunk_FUN_02b79548(plVar9,*(undefined8 *)PTR_DAT_06312f78);
    if (plVar9 == (long *)0x0) goto LAB_055a8df0;
    lVar17 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 == 0) goto LAB_055a8db8;
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    goto LAB_055a8da0;
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar18 = *plVar9;
  lVar17 = *(long *)puVar6;
  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == lVar17) {
        puVar10 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_055a8c08;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar10 = (undefined8 *)FUN_02b7654c(plVar9,lVar17,1);
LAB_055a8c08:
  plVar24 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  bVar3 = *(byte *)(*(long *)puVar7 + 0x130);
  if ((*(byte *)(*plVar24 + 0x130) < bVar3) ||
     (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar24);
  }
  if (*(uint *)(unaff_x26 + 0x18) <= *(uint *)(plVar24 + 0xf)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  if (plVar24[5] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar17 = *(long *)(plVar24[5] + 0x10);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar13 = *(long **)(unaff_x26 + (long)(int)*(uint *)(plVar24 + 0xf) * 8 + 0x20);
  plVar16 = (long *)FUN_04d952d0(lVar17,0);
  if (((ulong)plVar16 & 1) != 0) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= *(uint *)(plVar24 + 0xf)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (plVar24[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar16 = *(long **)(plVar24[5] + 0x10);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(undefined4 *)(unaff_x23 + (long)(int)*(uint *)(plVar24 + 0xf) * 4 + 0x20);
    uVar11 = (**(code **)(*plVar16 + 0x418))(plVar16,*(undefined8 *)(*plVar16 + 0x420));
    if (plVar13 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)(puVar25 + 0xa0) + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)(puVar25 + 0xa0))
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar13);
      }
    }
    plVar16 = (long *)FUN_055a5dd8(uVar11,plVar13,uVar1,uVar11,1);
    plVar13 = plVar16;
  }
  uVar19 = FUN_055aa688(plVar16,plVar24,plVar24[5],unaff_x19,in_stack_00000050 & 1);
  if ((uVar19 & 1) == 0) {
    if (plVar24[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar17 = *(long *)(plVar24[5] + 0x10);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar19 = FUN_04d952d0(lVar17,0);
    if ((uVar19 & 1) != 0) {
      FUN_055a9fdc(uVar19,plVar24,unaff_x19,plVar13,in_stack_00000050 & 1);
    }
  }
  goto joined_r0x055a8b44;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_055a8da0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
      puVar10 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055a8dd4;
    }
  }
LAB_055a8db8:
  puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar5,0);
LAB_055a8dd4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_055a8df0:
  if (in_stack_00000030 != 0) {
    plVar9 = *(long **)(in_stack_00000038 + 0x30);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      puVar7 = Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__;
      puVar6 = PTR_DAT_06312f90;
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar18 = *plVar9;
        lVar17 = *(long *)puVar6;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055a8e8c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar10 = (undefined8 *)FUN_02b7654c(plVar9,lVar17,0);
LAB_055a8e8c:
        uVar19 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar5 = PTR_DAT_06312f78;
        if ((uVar19 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_02b79548(plVar9,*(undefined8 *)PTR_DAT_06312f78);
          if (plVar9 == (long *)0x0) goto LAB_055a9084;
          lVar17 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 == 0) goto LAB_055a904c;
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_055a9034;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar18 = *plVar9;
        lVar17 = *(long *)puVar6;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_055a8ef4;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar10 = (undefined8 *)FUN_02b7654c(plVar9,lVar17,1);
LAB_055a8ef4:
        plVar24 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        bVar3 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar24 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar24);
        }
        uVar4 = *(uint *)(plVar24 + 0xf);
        if (*(uint *)(in_stack_00000030 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar13 = *(long **)(in_stack_00000030 + (long)(int)uVar4 * 8 + 0x20);
        if (plVar13 != (long *)0x0) {
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(unaff_x23 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (plVar24[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar16 = *(long **)(plVar24[0xe] + 0x10);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar1 = *(undefined4 *)(unaff_x23 + (long)(int)uVar4 * 4 + 0x20);
          uVar11 = (**(code **)(*plVar16 + 0x418))(plVar16,*(undefined8 *)(*plVar16 + 0x420));
          bVar3 = *(byte *)(*(long *)(puVar25 + 0xa0) + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)(puVar25 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(plVar13);
          }
          uVar11 = FUN_055a5dd8(uVar11,plVar13,uVar1,uVar11,1);
          FUN_055b7064(unaff_x19,plVar24[0xc],uVar11,0);
        }
      } while( true );
    }
LAB_055a90bc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_055a9084;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_055a9034:
    if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
      puVar10 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055a9068;
    }
  }
LAB_055a904c:
  puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar5,0);
LAB_055a9068:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_055a9084:
  FUN_055aa544();
  return;
}



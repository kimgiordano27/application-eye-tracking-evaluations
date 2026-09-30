/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 04f61ea4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryVisible
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int *piVar13;
  long unaff_x19;
  int unaff_w23;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fStack0000000000000000;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined1 in_stack_00000090 [16];
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  lVar9 = in_stack_000000d0;
  if (in_stack_000000d0 != 0) {
    *(uint *)(in_stack_000000d0 + 0x10) = (uint)(unaff_w23 == 0);
    lVar7 = FUN_04f622b8(in_stack_000000d0);
    puVar4 = System_Collections_Generic_List_Enumerator<KeyValuePair<string,_object>>_TypeInfo;
    puVar3 = System_Collections_Generic_IDictionary<TKey,_TValue>_var;
    if (lVar7 != 0) {
      lVar15 = 0;
      uVar14 = 0;
      do {
        if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar14) {
          lVar9 = FUN_04f60ee4();
          if (lVar9 == 0) {
            uVar17 = 0;
            uVar14 = (ulong)DAT_01032688;
            uVar12 = FUN_05c7b824();
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uStack0000000000000084 = CONCAT44(in_stack_000000c8,fStack00000000000000c4);
            in_stack_00000078 = uStack00000000000000b8;
            in_stack_00000070 = _uStack00000000000000b0;
            uStack0000000000000080 = fStack00000000000000c0;
            FUN_04f8e3c4(&stack0x00000090 + 4,&stack0x00000070,0);
            _uStack00000000000000b0 = in_stack_00000090._4_8_;
            uVar5 = _uStack00000000000000b0;
            uStack00000000000000b0 = (undefined4)in_stack_00000090._4_8_;
            uVar16 = uStack00000000000000b0;
            uStack00000000000000b4 = SUB84(in_stack_00000090._4_8_,4);
            uVar6 = uStack00000000000000b4;
            fStack00000000000000c4 = (float)in_stack_000000a8;
            in_stack_000000c8 = (float)((ulong)in_stack_000000a8 >> 0x20);
            fStack00000000000000bc = fStack00000000000000a0;
            fStack00000000000000c0 = fStack00000000000000a4;
            uVar18 = uVar17;
            uVar19 = uVar14;
            _uStack00000000000000b0 = uVar5;
            uVar16 = FUN_05c7bd38(uVar12,uVar17,uVar14,param_4,uVar16,uVar6,0);
            fStack0000000000000000 = (float)uVar14;
            auVar26._4_4_ = fStack00000000000000c0;
            auVar26._0_4_ = fStack00000000000000bc;
            auVar26._8_4_ = fStack00000000000000c4;
            _uStack00000000000000b0 = CONCAT44((int)uVar18,uVar16);
            uStack00000000000000b8 = (undefined4)uVar19;
            fVar20 = (float)uVar12;
            fVar30 = (float)uVar17;
            auVar28._4_4_ = in_stack_000000c8;
            auVar28._0_4_ = in_stack_000000c8;
            auVar28._8_4_ = in_stack_000000c8;
            auVar28._12_4_ = in_stack_000000c8;
            fVar21 = fVar20 * fStack00000000000000c0;
            fVar22 = fVar30 * fStack00000000000000c0;
            auVar26._12_4_ = in_stack_000000c8;
            auVar26 = NEON_ext(auVar28,auVar26,4,1);
            auVar27._4_4_ = fVar21;
            auVar27._0_4_ = fStack0000000000000000 * fStack00000000000000bc;
            auVar27._8_4_ = fVar30 * fStack00000000000000c4;
            auVar27._12_4_ = fVar22;
            auVar29._4_4_ = fVar21;
            auVar29._0_4_ = fStack0000000000000000 * fStack00000000000000bc;
            auVar29._8_4_ = fVar30 * fStack00000000000000c4;
            auVar29._12_4_ = fVar22;
            auVar27 = NEON_ext(auVar27,auVar29,4,1);
            fVar23 = fStack0000000000000000 * fStack00000000000000c0;
            fVar24 = fVar20 * fStack00000000000000c4;
            fVar25 = fStack0000000000000000 * fStack00000000000000c4;
            auVar1._4_4_ = fVar23;
            auVar1._0_4_ = fVar30 * fStack00000000000000bc;
            auVar1._8_4_ = fVar24;
            auVar1._12_4_ = fVar25;
            auVar2._4_4_ = fVar23;
            auVar2._0_4_ = fVar30 * fStack00000000000000bc;
            auVar2._8_4_ = fVar24;
            auVar2._12_4_ = fVar25;
            auVar29 = NEON_ext(auVar1,auVar2,0xc,1);
            fStack00000000000000bc =
                 (fStack00000000000000bc * param_4 + fVar20 * auVar26._0_4_ + auVar27._4_4_) -
                 fVar23;
            fStack00000000000000c0 =
                 (fStack00000000000000c0 * param_4 + fVar30 * auVar26._4_4_ + auVar27._12_4_) -
                 fVar24;
            fStack00000000000000c4 =
                 (fStack00000000000000c4 * param_4 + fStack0000000000000000 * auVar26._8_4_ + fVar21
                 ) - auVar29._4_4_;
            in_stack_000000c8 =
                 ((in_stack_000000c8 * param_4 - fVar20 * auVar26._12_4_) - fVar22) - fVar25;
            goto LAB_04f620fc;
          }
          plVar10 = (long *)FUN_04f60ee4();
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            lVar9 = *(long *)puVar4;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar14 == 0) goto LAB_04f61fb0;
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_04f61f98;
          }
          break;
        }
        lVar7 = FUN_04f622b8(lVar9);
        lVar8 = FUN_04f622b8(lVar9);
        if (lVar8 == 0) break;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
LAB_04f621d8:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar16 = FUN_04f8e4b0(lVar8 + lVar15 + 0x20,0);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_04f621d8;
        lVar7 = lVar7 + lVar15;
        lVar15 = lVar15 + 0x10;
        *(undefined4 *)(lVar7 + 0x20) = uVar16;
        *(int *)(lVar7 + 0x24) = (int)param_2;
        uVar14 = uVar14 + 1;
        *(int *)(lVar7 + 0x28) = (int)param_3;
        *(float *)(lVar7 + 0x2c) = param_4;
        lVar7 = FUN_04f622b8(lVar9);
      } while (lVar7 != 0);
    }
  }
LAB_04f61f60:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar13 = piVar13 + 4;
    if (uVar14 == 0) break;
LAB_04f61f98:
    if (*(long *)(piVar13 + -2) == lVar9) {
      puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 3) * 0x10 + 0x138);
      goto LAB_04f620d4;
    }
  }
LAB_04f61fb0:
  puVar11 = (undefined8 *)FUN_02b7654c(plVar10,lVar9,3);
LAB_04f620d4:
  (*(code *)*puVar11)(&stack0x00000090 + 4,plVar10,&stack0x000000b0);
  uStack00000000000000b8 = in_stack_00000090._12_4_;
  _uStack00000000000000b0 = in_stack_00000090._4_8_;
  fStack00000000000000c4 = (float)in_stack_000000a8;
  in_stack_000000c8 = (float)((ulong)in_stack_000000a8 >> 0x20);
  fStack00000000000000bc = fStack00000000000000a0;
  fStack00000000000000c0 = fStack00000000000000a4;
LAB_04f620fc:
  FUN_04f62360();
  lVar9 = FUN_04f60ee4();
  if (lVar9 != 0) {
    plVar10 = (long *)FUN_04f60ee4();
    if ((unaff_x19 == 0) || (uVar12 = FUN_05c89410(), plVar10 == (long *)0x0)) goto LAB_04f61f60;
    lVar7 = *plVar10;
    lVar9 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 4) * 0x10 + 0x138);
          goto LAB_04f6219c;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_02b7654c(plVar10,lVar9,4);
LAB_04f6219c:
    (*(code *)*puVar11)(plVar10,uVar12,puVar11[1]);
    FUN_04f61664();
  }
  return;
}



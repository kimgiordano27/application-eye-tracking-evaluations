/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 090a20cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fStack0000000000000000;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  float fStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined1 in_stack_00000090 [16];
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  float fStack00000000000000bc;
  float in_stack_000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  FUN_04947ee4(PTR_DAT_0ac78e78);
  *(undefined1 *)(unaff_x22 + 0x282) = 1;
  in_stack_000000c8 = 0.0;
  uStack00000000000000cc = 0;
  in_stack_000000c0 = 0.0;
  fStack00000000000000c4 = 0.0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b8 = 0;
  fStack00000000000000bc = 0.0;
  _uStack00000000000000b0 = 0;
  if (((unaff_x20 != 0) && (*(char *)(unaff_x20 + 0x38) != '\0')) &&
     (*(long *)(unaff_x20 + 0x48) != 0)) {
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x48) + 0x10);
    FUN_090a2448(&stack0x000000b0);
    lVar10 = in_stack_000000d0;
    if (in_stack_000000d0 != 0) {
      *(uint *)(in_stack_000000d0 + 0x10) = (uint)(iVar1 == 0);
      lVar8 = FUN_090a2524(in_stack_000000d0);
      puVar5 = PTR_DAT_0ac78e78;
      puVar4 = PTR_DAT_0ac75880;
      if (lVar8 != 0) {
        lVar16 = 0;
        uVar15 = 0;
        do {
          if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar15) {
            lVar10 = FUN_090a1150();
            if (lVar10 == 0) {
              uVar18 = 0;
              uVar15 = (ulong)DAT_01df4ee8;
              uVar13 = FUN_0a16a898();
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              uStack0000000000000084 = CONCAT44(in_stack_000000c8,fStack00000000000000c4);
              uStack0000000000000078 = in_stack_000000b8;
              in_stack_00000070 = _uStack00000000000000b0;
              fStack000000000000007c = fStack00000000000000bc;
              uStack0000000000000080 = in_stack_000000c0;
              FUN_090ce630(&stack0x00000090 + 4,&stack0x00000070,0);
              _uStack00000000000000b0 = in_stack_00000090._4_8_;
              uVar6 = _uStack00000000000000b0;
              uStack00000000000000b0 = (undefined4)in_stack_00000090._4_8_;
              uVar17 = uStack00000000000000b0;
              uStack00000000000000b4 = SUB84(in_stack_00000090._4_8_,4);
              uVar7 = uStack00000000000000b4;
              fStack00000000000000c4 = (float)in_stack_000000a8;
              in_stack_000000c8 = (float)((ulong)in_stack_000000a8 >> 0x20);
              fStack00000000000000bc = fStack00000000000000a0;
              in_stack_000000c0 = fStack00000000000000a4;
              uVar19 = uVar18;
              uVar20 = uVar15;
              _uStack00000000000000b0 = uVar6;
              uVar17 = FUN_0a16adac(uVar13,uVar18,uVar15,param_4,uVar17,uVar7,0);
              fStack0000000000000000 = (float)uVar15;
              auVar27._4_4_ = in_stack_000000c0;
              auVar27._0_4_ = fStack00000000000000bc;
              auVar27._8_4_ = fStack00000000000000c4;
              _uStack00000000000000b0 = CONCAT44((int)uVar19,uVar17);
              in_stack_000000b8 = (undefined4)uVar20;
              fVar21 = (float)uVar13;
              fVar31 = (float)uVar18;
              auVar29._4_4_ = in_stack_000000c8;
              auVar29._0_4_ = in_stack_000000c8;
              auVar29._8_4_ = in_stack_000000c8;
              auVar29._12_4_ = in_stack_000000c8;
              fVar22 = fVar21 * in_stack_000000c0;
              fVar23 = fVar31 * in_stack_000000c0;
              auVar27._12_4_ = in_stack_000000c8;
              auVar27 = NEON_ext(auVar29,auVar27,4,1);
              auVar28._4_4_ = fVar22;
              auVar28._0_4_ = fStack0000000000000000 * fStack00000000000000bc;
              auVar28._8_4_ = fVar31 * fStack00000000000000c4;
              auVar28._12_4_ = fVar23;
              auVar30._4_4_ = fVar22;
              auVar30._0_4_ = fStack0000000000000000 * fStack00000000000000bc;
              auVar30._8_4_ = fVar31 * fStack00000000000000c4;
              auVar30._12_4_ = fVar23;
              auVar28 = NEON_ext(auVar28,auVar30,4,1);
              fVar24 = fStack0000000000000000 * in_stack_000000c0;
              fVar25 = fVar21 * fStack00000000000000c4;
              fVar26 = fStack0000000000000000 * fStack00000000000000c4;
              auVar2._4_4_ = fVar24;
              auVar2._0_4_ = fVar31 * fStack00000000000000bc;
              auVar2._8_4_ = fVar25;
              auVar2._12_4_ = fVar26;
              auVar3._4_4_ = fVar24;
              auVar3._0_4_ = fVar31 * fStack00000000000000bc;
              auVar3._8_4_ = fVar25;
              auVar3._12_4_ = fVar26;
              auVar30 = NEON_ext(auVar2,auVar3,0xc,1);
              fStack00000000000000bc =
                   (fStack00000000000000bc * param_4 + fVar21 * auVar27._0_4_ + auVar28._4_4_) -
                   fVar24;
              in_stack_000000c0 =
                   (in_stack_000000c0 * param_4 + fVar31 * auVar27._4_4_ + auVar28._12_4_) - fVar25;
              fStack00000000000000c4 =
                   (fStack00000000000000c4 * param_4 + fStack0000000000000000 * auVar27._8_4_ +
                   fVar22) - auVar30._4_4_;
              in_stack_000000c8 =
                   ((in_stack_000000c8 * param_4 - fVar21 * auVar27._12_4_) - fVar23) - fVar26;
              goto LAB_090a2368;
            }
            plVar11 = (long *)FUN_090a1150();
            if (plVar11 != (long *)0x0) {
              lVar8 = *plVar11;
              lVar10 = *(long *)puVar5;
              uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar15 == 0) goto LAB_090a221c;
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_090a2204;
            }
            break;
          }
          lVar8 = FUN_090a2524(lVar10);
          lVar9 = FUN_090a2524(lVar10);
          if (lVar9 == 0) break;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar15) {
LAB_090a2444:
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
          uVar17 = FUN_090ce71c(lVar9 + lVar16 + 0x20,0);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_090a2444;
          lVar8 = lVar8 + lVar16;
          lVar16 = lVar16 + 0x10;
          *(undefined4 *)(lVar8 + 0x20) = uVar17;
          *(int *)(lVar8 + 0x24) = (int)param_2;
          uVar15 = uVar15 + 1;
          *(int *)(lVar8 + 0x28) = (int)param_3;
          *(float *)(lVar8 + 0x2c) = param_4;
          lVar8 = FUN_090a2524(lVar10);
        } while (lVar8 != 0);
      }
    }
  }
LAB_090a21cc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar14 = piVar14 + 4;
    if (uVar15 == 0) break;
LAB_090a2204:
    if (*(long *)(piVar14 + -2) == lVar10) {
      puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 3) * 0x10 + 0x138);
      goto LAB_090a2340;
    }
  }
LAB_090a221c:
  puVar12 = (undefined8 *)FUN_04980e68(plVar11,lVar10,3);
LAB_090a2340:
  (*(code *)*puVar12)(&stack0x00000090 + 4,plVar11,&stack0x000000b0);
  in_stack_000000b8 = in_stack_00000090._12_4_;
  _uStack00000000000000b0 = in_stack_00000090._4_8_;
  fStack00000000000000c4 = (float)in_stack_000000a8;
  in_stack_000000c8 = (float)((ulong)in_stack_000000a8 >> 0x20);
  fStack00000000000000bc = fStack00000000000000a0;
  in_stack_000000c0 = fStack00000000000000a4;
LAB_090a2368:
  FUN_090a25cc();
  lVar10 = FUN_090a1150();
  if (lVar10 != 0) {
    plVar11 = (long *)FUN_090a1150();
    if ((unaff_x19 == 0) || (uVar13 = FUN_0a178414(), plVar11 == (long *)0x0)) goto LAB_090a21cc;
    lVar8 = *plVar11;
    lVar10 = *(long *)puVar5;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 4) * 0x10 + 0x138);
          goto LAB_090a2408;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar11,lVar10,4);
LAB_090a2408:
    (*(code *)*puVar12)(plVar11,uVar13,puVar12[1]);
    FUN_090a18d0();
  }
  return;
}



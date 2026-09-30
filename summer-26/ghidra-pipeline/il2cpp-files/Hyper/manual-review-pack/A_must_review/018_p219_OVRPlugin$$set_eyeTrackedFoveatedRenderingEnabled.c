/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 090a21b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,float param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  while( true ) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x24) = (int)param_3;
    unaff_x27 = unaff_x27 + 1;
    *(int *)(param_1 + 0x28) = (int)param_4;
    *(float *)(param_1 + 0x2c) = param_5;
    lVar5 = FUN_090a2524();
    if (lVar5 == 0) break;
    if ((long)*(int *)(lVar5 + 0x18) <= (long)unaff_x27) {
      lVar5 = FUN_090a1150();
      if (lVar5 == 0) {
        uVar12 = 0;
        uVar9 = (ulong)DAT_01df4ee8;
        uVar8 = FUN_0a16a898();
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uStack0000000000000084 = CONCAT44(in_stack_000000c8,fStack00000000000000c4);
        in_stack_00000078 = uStack00000000000000b8;
        in_stack_00000070 = _uStack00000000000000b0;
        uStack0000000000000080 = fStack00000000000000c0;
        FUN_090ce630(&stack0x00000090 + 4,&stack0x00000070,0);
        _uStack00000000000000b0 = in_stack_00000090._4_8_;
        uVar3 = _uStack00000000000000b0;
        uStack00000000000000b0 = (undefined4)in_stack_00000090._4_8_;
        uVar11 = uStack00000000000000b0;
        uStack00000000000000b4 = SUB84(in_stack_00000090._4_8_,4);
        uVar4 = uStack00000000000000b4;
        fStack00000000000000c4 = (float)in_stack_000000a8;
        in_stack_000000c8 = (float)((ulong)in_stack_000000a8 >> 0x20);
        fStack00000000000000bc = fStack00000000000000a0;
        fStack00000000000000c0 = fStack00000000000000a4;
        uVar13 = uVar12;
        uVar14 = uVar9;
        _uStack00000000000000b0 = uVar3;
        uVar11 = FUN_0a16adac(uVar8,uVar12,uVar9,param_5,uVar11,uVar4,0);
        fStack0000000000000000 = (float)uVar9;
        auVar21._4_4_ = fStack00000000000000c0;
        auVar21._0_4_ = fStack00000000000000bc;
        auVar21._8_4_ = fStack00000000000000c4;
        _uStack00000000000000b0 = CONCAT44((int)uVar13,uVar11);
        uStack00000000000000b8 = (undefined4)uVar14;
        fVar15 = (float)uVar8;
        fVar25 = (float)uVar12;
        auVar23._4_4_ = in_stack_000000c8;
        auVar23._0_4_ = in_stack_000000c8;
        auVar23._8_4_ = in_stack_000000c8;
        auVar23._12_4_ = in_stack_000000c8;
        fVar16 = fVar15 * fStack00000000000000c0;
        fVar17 = fVar25 * fStack00000000000000c0;
        auVar21._12_4_ = in_stack_000000c8;
        auVar21 = NEON_ext(auVar23,auVar21,4,1);
        auVar22._4_4_ = fVar16;
        auVar22._0_4_ = fStack0000000000000000 * fStack00000000000000bc;
        auVar22._8_4_ = fVar25 * fStack00000000000000c4;
        auVar22._12_4_ = fVar17;
        auVar24._4_4_ = fVar16;
        auVar24._0_4_ = fStack0000000000000000 * fStack00000000000000bc;
        auVar24._8_4_ = fVar25 * fStack00000000000000c4;
        auVar24._12_4_ = fVar17;
        auVar22 = NEON_ext(auVar22,auVar24,4,1);
        fVar18 = fStack0000000000000000 * fStack00000000000000c0;
        fVar19 = fVar15 * fStack00000000000000c4;
        fVar20 = fStack0000000000000000 * fStack00000000000000c4;
        auVar1._4_4_ = fVar18;
        auVar1._0_4_ = fVar25 * fStack00000000000000bc;
        auVar1._8_4_ = fVar19;
        auVar1._12_4_ = fVar20;
        auVar2._4_4_ = fVar18;
        auVar2._0_4_ = fVar25 * fStack00000000000000bc;
        auVar2._8_4_ = fVar19;
        auVar2._12_4_ = fVar20;
        auVar24 = NEON_ext(auVar1,auVar2,0xc,1);
        fStack00000000000000bc =
             (fStack00000000000000bc * param_5 + fVar15 * auVar21._0_4_ + auVar22._4_4_) - fVar18;
        fStack00000000000000c0 =
             (fStack00000000000000c0 * param_5 + fVar25 * auVar21._4_4_ + auVar22._12_4_) - fVar19;
        fStack00000000000000c4 =
             (fStack00000000000000c4 * param_5 + fStack0000000000000000 * auVar21._8_4_ + fVar16) -
             auVar24._4_4_;
        in_stack_000000c8 =
             ((in_stack_000000c8 * param_5 - fVar15 * auVar21._12_4_) - fVar17) - fVar20;
        goto LAB_090a2368;
      }
      plVar6 = (long *)FUN_090a1150();
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 == 0) goto LAB_090a221c;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_090a2204;
      }
      break;
    }
    param_1 = FUN_090a2524();
    lVar5 = FUN_090a2524();
    if (lVar5 == 0) break;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_x27) {
LAB_090a2444:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    param_2 = FUN_090ce71c(lVar5 + unaff_x28 + 0x20,0);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x27) goto LAB_090a2444;
    param_1 = param_1 + unaff_x28;
    unaff_x28 = unaff_x28 + 0x10;
  }
LAB_090a21cc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_090a2204:
    if (*(long *)(piVar10 + -2) == *unaff_x25) {
      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_090a2340;
    }
  }
LAB_090a221c:
  puVar7 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x25,3);
LAB_090a2340:
  (*(code *)*puVar7)(&stack0x00000090 + 4,plVar6,&stack0x000000b0);
  uStack00000000000000b8 = in_stack_00000090._12_4_;
  _uStack00000000000000b0 = in_stack_00000090._4_8_;
  fStack00000000000000c4 = (float)in_stack_000000a8;
  in_stack_000000c8 = (float)((ulong)in_stack_000000a8 >> 0x20);
  fStack00000000000000bc = fStack00000000000000a0;
  fStack00000000000000c0 = fStack00000000000000a4;
LAB_090a2368:
  FUN_090a25cc();
  lVar5 = FUN_090a1150();
  if (lVar5 != 0) {
    plVar6 = (long *)FUN_090a1150();
    if ((unaff_x19 == 0) || (uVar8 = FUN_0a178414(), plVar6 == (long *)0x0)) goto LAB_090a21cc;
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_090a2408;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x25,4);
LAB_090a2408:
    (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
    FUN_090a18d0();
  }
  return;
}



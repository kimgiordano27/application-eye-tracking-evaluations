/*
FUNCTION_NAME: FUN_030917f4
ENTRY_POINT: 030917f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_030917f4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char acStack_54 [4];
  
  if ((bRam00000000072373fb & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dfe010);
    thunk_FUN_0159f088(PTR_DAT_06db92d8);
    thunk_FUN_0159f088(PTR_DAT_06e4cc90);
    thunk_FUN_0159f088(PTR_DAT_06da3e88);
    thunk_FUN_0159f088(PTR_DAT_06e35b68);
    thunk_FUN_0159f088(PTR_DAT_06e36c00);
    thunk_FUN_0159f088(PTR_DAT_06dafe40);
    thunk_FUN_0159f088(PTR_DAT_06e02590);
    thunk_FUN_0159f088(PTR_DAT_06e57508);
    bRam00000000072373fb = 1;
  }
  acStack_54[0] = '\0';
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_d0 = 0;
  lVar12 = FUN_03091110(param_5);
  if (lVar12 != 0) {
    if ((char)param_5[7] != '\0') {
      FUN_02bcd844(param_5,param_5[8],0);
      *(undefined1 *)(param_5 + 7) = 0;
    }
    acStack_54[0] = '\x01';
    uVar17 = FUN_0365a36c(param_5[8],acStack_54,0);
    uStack_90 = CONCAT44(param_2,uVar17);
    uStack_88 = CONCAT44(param_4,param_3);
    lVar12 = FUN_03091110(param_5);
    if ((lVar12 == 0) || (lVar12 = FUN_036e1350(lVar12,0), lVar12 == 0)) goto LAB_03091dd4;
    uVar11 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
    if (uVar11 < 2) {
      FUN_030916d8(param_5);
      uVar13 = FUN_051dc32c(&uStack_90,1,0);
      if ((uVar13 & 1) == 0) {
        uVar17 = FUN_051dc09c(0);
        uStack_90 = CONCAT44(param_2,uVar17);
        uStack_88 = CONCAT44(param_4,param_3);
        acStack_54[0] = '\0';
      }
    }
    puVar7 = PTR_DAT_06e57508;
    puVar6 = PTR_DAT_06e4cc90;
    puVar5 = PTR_DAT_06e02590;
    puVar4 = PTR_DAT_06dfe010;
    puVar3 = PTR_DAT_06db92d8;
    puVar2 = PTR_DAT_06dafe40;
    puVar1 = PTR_DAT_06da3e88;
    uVar13 = FUN_051dc3c0(uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,
                          uStack_88._4_4_,(int)param_5[9],*(undefined4 *)((long)param_5 + 0x4c),
                          (int)param_5[10],*(undefined4 *)((long)param_5 + 0x54),0);
    if ((uVar13 & 1) == 0) {
      if ((char)param_5[0xb] == '\0') {
        if (param_5[5] == 0) goto LAB_03091dd4;
        FUN_02112e64(&uStack_e8,param_5[5],*(undefined8 *)puVar5);
        uStack_c8 = uStack_e0;
        uStack_d0 = uStack_e8;
        plStack_c0 = plStack_d8;
        while (uVar13 = FUN_03e1b434(&uStack_d0,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
          if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          (**(code **)(*plStack_c0 + 0x4e8))
                    (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,
                     plStack_c0,acStack_54[0],*(undefined8 *)(*plStack_c0 + 0x4f0));
        }
      }
      else {
        if (param_5[6] == 0) goto LAB_03091dd4;
        FUN_02112e64(&uStack_e8,param_5[6],*(undefined8 *)puVar2);
        uStack_a8 = uStack_e0;
        uStack_b0 = uStack_e8;
        plStack_a0 = plStack_d8;
        while (uVar13 = FUN_03e1b434(&uStack_b0,*(undefined8 *)puVar1), cVar10 = acStack_54[0],
              plVar8 = plStack_a0, (uVar13 & 1) != 0) {
          if (plStack_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar15 = *plStack_a0;
          uVar18 = uStack_88 & 0xffffffff;
          uVar9 = uStack_88._4_4_;
          uVar19 = uStack_90 & 0xffffffff;
          uVar17 = uStack_90._4_4_;
          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
          lVar12 = *(long *)puVar7;
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar14 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_03091bd8;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_015c2a80(plStack_a0,lVar12,4);
LAB_03091bd8:
          (*(code *)*puVar14)(uVar19,uVar17,uVar18,uVar9,plVar8,cVar10 != '\0',puVar14[1]);
        }
        FUN_03e1b430(&uStack_b0,*(undefined8 *)puVar4);
        if (param_5[5] == 0) goto LAB_03091dd4;
        FUN_02112e64(&uStack_e8,param_5[5],*(undefined8 *)puVar5);
        uStack_c8 = uStack_e0;
        uStack_d0 = uStack_e8;
        plStack_c0 = plStack_d8;
        while (uVar13 = FUN_03e1b434(&uStack_d0,*(undefined8 *)puVar6), plVar8 = plStack_c0,
              (uVar13 & 1) != 0) {
          if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          (**(code **)(*plStack_c0 + 0x4f8))
                    (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,
                     plStack_c0,acStack_54[0],*(undefined8 *)(*plStack_c0 + 0x500));
          lVar12 = FUN_03663ff0(plVar8,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar13 = FUN_036e0058(lVar12,0);
          if ((uVar13 & 1) != 0) {
            (**(code **)(*plVar8 + 0x4e8))
                      (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_
                       ,plVar8,acStack_54[0],*(undefined8 *)(*plVar8 + 0x4f0));
          }
        }
      }
    }
    else {
      if (param_5[6] == 0) {
LAB_03091dd4:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_02112e64(&uStack_e8,param_5[6],*(undefined8 *)puVar2);
      uStack_a8 = uStack_e0;
      uStack_b0 = uStack_e8;
      plStack_a0 = plStack_d8;
      while (uVar13 = FUN_03e1b434(&uStack_b0,*(undefined8 *)puVar1), cVar10 = acStack_54[0],
            plVar8 = plStack_a0, (uVar13 & 1) != 0) {
        if (plStack_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar15 = *plStack_a0;
        uVar18 = uStack_88 & 0xffffffff;
        uVar9 = uStack_88._4_4_;
        uVar19 = uStack_90 & 0xffffffff;
        uVar17 = uStack_90._4_4_;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lVar12 = *(long *)puVar7;
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar14 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
              goto LAB_03091a40;
            }
            uVar13 = uVar13 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_015c2a80(plStack_a0,lVar12,4);
LAB_03091a40:
        (*(code *)*puVar14)(uVar19,uVar17,uVar18,uVar9,plVar8,cVar10 != '\0',puVar14[1]);
      }
      FUN_03e1b430(&uStack_b0,*(undefined8 *)puVar4);
      if (param_5[5] == 0) goto LAB_03091dd4;
      FUN_02112e64(&uStack_e8,param_5[5],*(undefined8 *)puVar5);
      uStack_c8 = uStack_e0;
      uStack_d0 = uStack_e8;
      plStack_c0 = plStack_d8;
      while (uVar13 = FUN_03e1b434(&uStack_d0,*(undefined8 *)puVar6), plVar8 = plStack_c0,
            (uVar13 & 1) != 0) {
        if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        (**(code **)(*plStack_c0 + 0x4f8))
                  (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,
                   plStack_c0,acStack_54[0],*(undefined8 *)(*plStack_c0 + 0x500));
        lVar12 = *plVar8;
        (**(code **)(lVar12 + 0x4e8))
                  (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,
                   plVar8,acStack_54[0],*(undefined8 *)(lVar12 + 0x4f0));
      }
    }
    FUN_03e1b430(&uStack_d0,*(undefined8 *)puVar3);
    *(undefined1 *)(param_5 + 0xb) = 0;
    param_5[10] = uStack_88;
    param_5[9] = uStack_90;
    (**(code **)(*param_5 + 0x288))(param_5,*(undefined8 *)(*param_5 + 0x290));
  }
  return;
}



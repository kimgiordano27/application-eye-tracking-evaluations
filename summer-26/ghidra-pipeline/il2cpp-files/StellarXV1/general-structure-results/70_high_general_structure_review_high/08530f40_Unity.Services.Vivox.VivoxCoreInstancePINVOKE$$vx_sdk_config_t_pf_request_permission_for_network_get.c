/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_pf_request_permission_for_network_get
ENTRY_POINT: 08530f40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_request_permission_for_network_get
               (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong unaff_x19;
  long lVar12;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong unaff_x29;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long in_stack_00000010;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  ulong in_stack_00000108;
  
  while( true ) {
    FUN_0845979c();
    if (*(long *)(unaff_x20 + 0x140) == 0) break;
    if (*(uint *)(*(long *)(unaff_x20 + 0x140) + 0x18) <= unaff_x19) goto LAB_085314f0;
    if (*(long *)(unaff_x20 + 0x138) == 0) break;
    if (*(uint *)(*(long *)(unaff_x20 + 0x138) + 0x18) <= unaff_x19) goto LAB_085314f0;
    FUN_0845979c();
    uVar19 = (undefined4)param_2;
    if (*(long *)(unaff_x20 + 0x138) == 0) break;
    if (*(uint *)(*(long *)(unaff_x20 + 0x138) + 0x18) <= unaff_x19) goto LAB_085314f0;
    unaff_x19 = unaff_x19 + 1;
    if (unaff_x29 == unaff_x19) {
      uVar3 = (int)unaff_x29 - 2;
      if ((int)uVar3 < 0) goto LAB_08531128;
      in_stack_00000108 = (ulong)uVar3 + 1;
      lVar16 = 0;
      lVar12 = (ulong)uVar3 + 4;
      lVar15 = in_stack_00000108 << 0x20;
      iVar6 = (int)in_stack_00000108;
      goto LAB_08530ff4;
    }
    if (*(long *)(unaff_x20 + 0x140) == 0) break;
    if (*(uint *)(*(long *)(unaff_x20 + 0x140) + 0x18) <= unaff_x19) goto LAB_085314f0;
    if (*(int *)(*(long *)PTR_DAT_09326db8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
  }
  goto LAB_085314ec;
  while( true ) {
    uVar14 = lVar12 - 4;
    if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_085314f0;
    if (*(long *)(unaff_x20 + 0x140) == 0) goto LAB_085314ec;
    if (*(uint *)(*(long *)(unaff_x20 + 0x140) + 0x18) <= uVar14) goto LAB_085314f0;
    uVar13 = *(undefined8 *)(lVar11 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0932db68 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08447f84(&stack0x00000078,uVar13,0);
    if (unaff_x21 == 0) goto LAB_085314ec;
    uVar13 = in_stack_00000088;
    FUN_089fc178();
    uVar19 = (undefined4)uVar13;
    if (*(int *)(*(long *)PTR_DAT_09326db8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0845979c();
    lVar12 = lVar12 + -1;
    lVar16 = lVar16 + 1;
    lVar15 = lVar15 + -0x100000000;
    if ((long)uVar14 < 1) break;
LAB_08530ff4:
    if (lVar16 == 0) {
      lVar10 = *(long *)(unaff_x20 + 0x138);
      if (lVar10 == 0) goto LAB_085314ec;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_00000108) goto LAB_085314f0;
      lVar11 = lVar10 + (long)iVar6 * 8;
    }
    else {
      lVar11 = *(long *)(unaff_x20 + 0x140);
      if (lVar11 == 0) goto LAB_085314ec;
      if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar12 - 3U) goto LAB_085314f0;
      lVar10 = *(long *)(unaff_x20 + 0x138);
      if (lVar10 == 0) goto LAB_085314ec;
      lVar11 = lVar11 + (lVar15 >> 0x1d);
    }
  }
LAB_08531128:
  puVar5 = PTR_DAT_0932db68;
  puVar4 = PTR_DAT_09327778;
  if ((*(long *)(unaff_x20 + 0x1d0) != 0) &&
     (plVar8 = *(long **)(*(long *)(unaff_x20 + 0x1d0) + 0x60), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
    fVar17 = (float)FUN_089b32b8(0);
    fVar18 = (float)FUN_089b32b8(uVar19,0);
    fStack00000000000000b8 = (float)FUN_089b32b8(param_3,0);
    fStack00000000000000b0 = fVar17;
    fStack00000000000000b4 = fVar18;
    fStack00000000000000bc = param_4;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar17 = (float)FUN_0845b1d4(&stack0x000000b0,0);
    if (fVar17 <= 0.0) {
      fStack00000000000000b0 = 1.0;
      fStack00000000000000b4 = 1.0;
      fStack00000000000000b8 = 1.0;
      fStack00000000000000bc = 1.0;
    }
    else {
      fVar17 = 1.0 / fVar17;
      fStack00000000000000b0 = fStack00000000000000b0 * fVar17;
      fStack00000000000000b4 = fStack00000000000000b4 * fVar17;
      fStack00000000000000b8 = fStack00000000000000b8 * fVar17;
      fStack00000000000000bc = fStack00000000000000bc * fVar17;
    }
    if ((*(long *)(unaff_x20 + 0x1d0) != 0) &&
       (plVar8 = *(long **)(*(long *)(unaff_x20 + 0x1d0) + 0x48), plVar8 != (long *)0x0)) {
      uVar19 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
      fVar22 = fStack00000000000000b8;
      fVar18 = fStack00000000000000b4;
      fVar17 = fStack00000000000000b0;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (in_stack_00000010 != 0) {
        thunk_FUN_089972fc(uVar19,fVar17,fVar18,fVar22,in_stack_00000010,
                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50),0);
        lVar12 = *(long *)(unaff_x20 + 0x140);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) == 0) {
LAB_085314f0:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          FUN_08447f84(&stack0x00000078,*(undefined8 *)(lVar12 + 0x20),0);
          if (unaff_x21 != 0) {
            FUN_089fc178();
            puVar4 = PTR_DAT_09285bb0;
            if ((*(long *)(unaff_x20 + 0x1d0) != 0) &&
               (plVar8 = *(long **)(*(long *)(unaff_x20 + 0x1d0) + 0x80), plVar8 != (long *)0x0)) {
              uVar13 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_040d65a8(*(long *)puVar4);
              }
              uVar14 = FUN_089cc398(uVar13,0,0);
              if ((uVar14 & 1) == 0) {
                if ((*(long *)(unaff_x20 + 0x1d0) == 0) ||
                   (plVar8 = *(long **)(*(long *)(unaff_x20 + 0x1d0) + 0x80), plVar8 == (long *)0x0)
                   ) goto LAB_085314ec;
                plVar8 = (long *)(**(code **)(*plVar8 + 0x218))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x220));
              }
              else {
                plVar8 = (long *)FUN_089a5960(0);
              }
              if (plVar8 != (long *)0x0) {
                iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                iVar7 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                if ((*(long *)(unaff_x20 + 0x1d0) != 0) &&
                   (plVar9 = *(long **)(*(long *)(unaff_x20 + 0x1d0) + 0x88), plVar9 != (long *)0x0)
                   ) {
                  fVar18 = (float)iVar6 / (float)iVar7;
                  fVar22 = (float)*(int *)(unaff_x20 + 0xb8) / (float)*(int *)(unaff_x20 + 0xbc);
                  fVar17 = (float)(**(code **)(*plVar9 + 0x218))
                                            (plVar9,*(undefined8 *)(*plVar9 + 0x220));
                  if (fVar18 <= fVar22) {
                    fVar20 = 0.0;
                    fVar21 = 1.0;
                    if (fVar22 <= fVar18) {
                      fVar22 = 0.0;
                      fVar18 = 1.0;
                    }
                    else {
                      fVar18 = fVar18 / fVar22;
                      fVar22 = (1.0 - fVar18) * 0.5;
                    }
                  }
                  else {
                    fVar21 = fVar22 / fVar18;
                    fVar18 = 1.0;
                    fVar22 = 0.0;
                    fVar20 = (1.0 - fVar21) * 0.5;
                  }
                  lVar12 = *(long *)puVar5;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar12 = *(long *)puVar5;
                  }
                  thunk_FUN_089972fc(fVar21,fVar18,fVar20,fVar22,in_stack_00000010,
                                     *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x5c),0);
                  thunk_FUN_089971ec(fVar17,in_stack_00000010,
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60),0);
                  thunk_FUN_0899751c(in_stack_00000010,
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58),
                                     plVar8,0);
                  puVar2 = (undefined8 *)PTR_DAT_0932dcc0;
                  puVar5 = PTR_DAT_0932dcb8;
                  puVar1 = (undefined8 *)PTR_DAT_0932dcb0;
                  puVar4 = PTR_DAT_0932dca8;
                  if ((*(long *)(unaff_x20 + 0x1d0) != 0) &&
                     (plVar8 = *(long **)(*(long *)(unaff_x20 + 0x1d0) + 0x68),
                     plVar8 != (long *)0x0)) {
                    uVar14 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220))
                    ;
                    if ((uVar14 & 1) == 0) {
                      puVar1 = (undefined8 *)puVar4;
                      puVar2 = (undefined8 *)puVar5;
                    }
                    if (fVar17 <= 0.0) {
                      puVar2 = puVar1;
                    }
                    FUN_08995630(in_stack_00000010,*puVar2,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_085314ec:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



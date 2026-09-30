/*
FUNCTION_NAME: Cognitive3D.ActiveSession.EventCanvas.<CalcSizeEndOfFrame>d__9$$System.IDisposable.Dispose
ENTRY_POINT: 04310674
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Cognitive3D_ActiveSession_EventCanvas_<CalcSizeEndOfFrame>d__9__System_IDisposable_Dispose
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined1 auVar12 [16];
  
  FUN_075273c0(param_1,0);
  lVar4 = *unaff_x26;
  uVar8 = *(undefined8 *)(unaff_x21 + 0x20);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar4 = *unaff_x26;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar5[4];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar5 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar11 = *puVar5;
    lVar9 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73648);
    FUN_05344da8(lVar9,uVar11,*(undefined8 *)PTR_DAT_08f73690,0);
    *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20) = lVar9;
  }
  uVar3 = FUN_04af0c90(uVar8,lVar9,*(undefined8 *)PTR_DAT_08f73630);
  puVar2 = PTR_DAT_08f73650;
  if (param_1 != 0) {
    uVar11 = *(undefined8 *)(unaff_x21 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar8 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
    FUN_053442e0(uVar8,param_1,*(undefined8 *)PTR_DAT_08f736a0,0);
    lVar4 = FUN_04aeb7d8(uVar11,uVar8,*(undefined8 *)PTR_DAT_08f73628);
    puVar2 = PTR_DAT_08f65598;
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if (lVar9 != 0) {
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar10 = 0;
        uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar10) goto LAB_04310a30;
          uVar8 = *(undefined8 *)(lVar9 + 0x20 + uVar10 * 8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar6 = FUN_0858816c(uVar8,lVar4,0);
          if ((uVar6 & 1) != 0) {
            if (unaff_x19 == 0) goto LAB_04310a2c;
            lVar7 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_04310a2c;
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
            }
            else {
              FUN_057d53ac();
            }
          }
          uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      if (lVar4 != 0) {
        lVar9 = *unaff_x26;
        lVar4 = *(long *)(lVar4 + 0x28);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar9 = *unaff_x26;
        }
        puVar5 = *(undefined8 **)(lVar9 + 0xb8);
        if (puVar5[5] == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar5 = *(undefined8 **)(*unaff_x26 + 0xb8);
          }
          uVar11 = *puVar5;
          uVar8 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f69290);
          FUN_05348598(uVar8,uVar11,*(undefined8 *)PTR_DAT_08f73698,0);
          *(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x28) = uVar8;
        }
        auVar12 = FUN_04ae8158();
        if (lVar4 == 0) goto LAB_04310a2c;
        FUN_04311284(lVar4,auVar12._0_8_,auVar12._8_8_);
      }
      if (unaff_x20 != 0) {
        if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
          uVar10 = 0;
          uVar6 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
          puVar5 = (undefined8 *)(unaff_x20 + 0x28);
          do {
            if (uVar6 <= uVar10) {
LAB_04310a30:
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            uVar8 = puVar5[-1];
            if ((int)uVar8 != 1) {
              if (unaff_x19 == 0) goto LAB_04310a2c;
              uVar11 = *puVar5;
              lVar4 = FUN_057d50ec();
              if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_04310a2c;
              FUN_04311284(*(long *)(lVar4 + 0x28),uVar8,uVar11);
              FUN_057d6af4();
              if (*(int *)(unaff_x19 + 0x18) == 0) {
                return;
              }
            }
            uVar6 = (ulong)*(uint *)(unaff_x20 + 0x18);
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 2;
          } while ((long)uVar10 < (long)(int)*(uint *)(unaff_x20 + 0x18));
        }
        return;
      }
    }
  }
LAB_04310a2c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



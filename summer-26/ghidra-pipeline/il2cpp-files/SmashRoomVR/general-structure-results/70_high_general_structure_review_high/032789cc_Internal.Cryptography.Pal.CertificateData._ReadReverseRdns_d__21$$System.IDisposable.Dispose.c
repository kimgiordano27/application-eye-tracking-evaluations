/*
FUNCTION_NAME: Internal.Cryptography.Pal.CertificateData.<ReadReverseRdns>d__21$$System.IDisposable.Dispose
ENTRY_POINT: 032789cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Internal_Cryptography_Pal_CertificateData_<ReadReverseRdns>d__21__System_IDisposable_Dispose
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  uVar5 = FUN_0303f0f0();
  FUN_02ee6d10(param_1,*unaff_x26,uVar5,*unaff_x24,0);
  (**(code **)(*unaff_x20 + 0x5e8))();
  FUN_038f2acc(*unaff_x27,0);
  lVar6 = FUN_02fa887c(*(undefined8 *)(unaff_x19 + 0x50),*unaff_x28,0);
  plVar14 = *(long **)(unaff_x19 + 0x30);
  if ((plVar14 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0)),
     puVar2 = PTR_DAT_03d84f20, puVar1 = PTR_DAT_03d84f18, lVar6 != 0)) {
    in_stack_00000008._4_4_ = (uint)*(undefined8 *)(lVar6 + 0x18);
    uVar7 = FUN_0303de64((long)&stack0x00000008 + 4,0);
    uVar5 = FUN_02ee6d10(uVar5,*(undefined8 *)puVar1,uVar7,*(undefined8 *)puVar2,0);
    (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 0x5f0));
    if ((in_stack_00000010 != 0) &&
       (lVar8 = FUN_02b59714(in_stack_00000010,0,*unaff_x23), puVar2 = PTR_DAT_03d84f08,
       puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar8 != 0))
    {
      uVar5 = FUN_02eea5ec(lVar8,0);
      uVar5 = FUN_02edd6e8(*(undefined8 *)puVar2,uVar5,0);
      puVar4 = PTR_DAT_03d84ee0;
      puVar3 = PTR_DAT_03d84ed8;
      puVar2 = PTR_DAT_03d84eb8;
      in_stack_00000008._4_4_ = 0;
      uVar12 = *(uint *)(lVar6 + 0x18);
      if ((int)uVar12 < 1) {
        lVar8 = 0;
      }
      else {
        lVar15 = 0;
        do {
          if (uVar12 <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar9 = FUN_038e8d58(*(undefined8 *)
                                (lVar6 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_0391f968(lVar9,0,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2e04(*(undefined8 *)puVar4,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
          }
          else {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar7 = FUN_039230bc(lVar9,0);
            lVar8 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d84ee8,uVar7,0);
            if (lVar8 == 0) {
              uVar7 = *(undefined8 *)StringLiteral_2367;
            }
            else {
              uVar7 = FUN_039230bc(lVar9,0);
            }
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2acc(uVar7,0);
            lVar8 = *(long *)(unaff_x19 + 0x60);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar12 = *(uint *)(lVar8 + 0x18);
            if (uVar12 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar12 + 1;
              plVar14 = (long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
              *plVar14 = lVar9;
              thunk_FUN_01b4f09c(plVar14,lVar9);
            }
            else {
              FUN_02b599e4(lVar8,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar7 = FUN_039230bc(lVar9,0);
          uVar10 = thunk_FUN_02ee6388(uVar7,uVar5,0);
          lVar8 = lVar9;
          if ((uVar10 & 1) == 0) {
            lVar8 = lVar15;
          }
          uVar7 = FUN_039230bc(lVar9,0);
          uVar10 = thunk_FUN_02ee6388(uVar7,*(undefined8 *)puVar3,0);
          if ((uVar10 & 1) != 0) {
            FUN_032771ac(lVar9);
          }
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          uVar12 = *(uint *)(lVar6 + 0x18);
          lVar15 = lVar8;
        } while ((int)in_stack_00000008._4_4_ < (int)uVar12);
      }
      puVar2 = PTR_DAT_03d84f30;
      plVar14 = *(long **)(unaff_x19 + 0x30);
      if (plVar14 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0));
        uVar5 = FUN_02edd6e8(uVar5,*(undefined8 *)puVar2,0);
        (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 0x5f0));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_0391f968(lVar8,0,0);
        plVar14 = *(long **)(unaff_x19 + 0x30);
        if (plVar14 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0));
          if ((uVar10 & 1) == 0) {
            uVar5 = FUN_02edd6e8(uVar5,*(undefined8 *)PTR_DAT_03d84f00,0);
            (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 0x5f0));
            return;
          }
          uVar5 = FUN_02edd6e8(uVar5,*(undefined8 *)PTR_DAT_03d84ef0,0);
          (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 0x5f0));
          plVar14 = *(long **)(unaff_x19 + 0x30);
          if (plVar14 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0));
            *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
            thunk_FUN_01b4f09c();
            if ((lVar8 != 0) && (lVar6 = FUN_038e9044(lVar8,0), lVar6 != 0)) {
              if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar5 = *(undefined8 *)(lVar6 + 0x20);
              if (*(int *)(*(long *)
                            Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__
                                  );
              }
              uVar5 = FUN_02fbaa54(uVar5,0);
              if (*(int *)(*(long *)Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__);
              }
              lVar6 = FUN_0392ff54(uVar5,0);
              plVar14 = (long *)(unaff_x19 + 0x38);
              *plVar14 = lVar6;
              thunk_FUN_01b4f09c(plVar14,lVar6);
              lVar6 = *plVar14;
              uVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d84eb0);
              FUN_02518558();
              if (lVar6 != 0) {
                FUN_0391a930(lVar6,uVar5,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



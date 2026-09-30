/*
FUNCTION_NAME: FUN_03132934
ENTRY_POINT: 03132934
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03132934(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  if ((DAT_03ff1ea1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f6b0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6b8);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6c0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6c8);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6d0);
    thunk_FUN_01ad9084(StringLiteral_2657);
    thunk_FUN_01ad9084(StringLiteral_2658);
    thunk_FUN_01ad9084(StringLiteral_2659);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6d8);
    thunk_FUN_01ad9084(StringLiteral_3877);
    thunk_FUN_01ad9084(PTR_DAT_03d7f6e0);
    thunk_FUN_01ad9084(StringLiteral_2660);
    thunk_FUN_01ad9084(StringLiteral_2294);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1ea1 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar7 = FUN_025bc544(*(long *)(param_1 + 0x90),param_2,*(undefined8 *)PTR_DAT_03d7f6c8);
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (FUN_025bdac0(*(long *)(param_1 + 0x90),param_2,*(undefined8 *)PTR_DAT_03d7f6b8),
       param_2 != (long *)0x0)) {
      lVar11 = *param_2;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_3877) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto FUN_03132ac4;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)StringLiteral_3877,1);
FUN_03132ac4:
      (*(code *)*puVar8)(param_2,uVar7,puVar8[1]);
      puVar3 = StringLiteral_2294;
      puVar2 = 
      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
      ;
      if (*(long *)(param_1 + 0x78) != 0) {
        uVar7 = FUN_0255aae0(*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_03d7f6d0);
        lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
        FUN_02b2c1b0(lVar11,uVar7,*(undefined8 *)puVar3);
        puVar6 = PTR_DAT_03d7f6d8;
        puVar5 = PTR_DAT_03d7f6c0;
        puVar4 = PTR_DAT_03d7f6b0;
        puVar3 = StringLiteral_2658;
        puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (lVar11 != 0) {
          FUN_02b2d2d4(&local_98,lVar11,*(undefined8 *)StringLiteral_2660);
          uStack_78 = uStack_90;
          local_80 = local_98;
          local_70 = local_88;
          do {
            uVar9 = System_Collections_Generic_EqualityComparer<Vector3>___ctor
                              (&local_80,*(undefined8 *)puVar3);
            uVar15 = local_70;
            if ((uVar9 & 1) == 0) {
              FUN_02734648(&local_80,*(undefined8 *)StringLiteral_2657);
              return;
            }
            if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar11 = FUN_0255aca0(*(long *)(param_1 + 0x78),local_70 & 0xffffffff,
                                  *(undefined8 *)puVar5);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar12 = *param_2;
            uVar7 = *(undefined8 *)(lVar11 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03132bf0;
                }
                uVar9 = uVar9 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar9 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)puVar6,0);
LAB_03132bf0:
            uVar10 = (*(code *)*puVar8)(param_2,puVar8[1]);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar9 = FUN_0391f968(uVar7,uVar10,0);
            if ((uVar9 & 1) == 0) {
              FUN_03132da8(uVar9,*(undefined8 *)(lVar11 + 0x10));
              FUN_0313506c(lVar11,0);
              lVar12 = *(long *)(param_1 + 0x88);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar16 = *(long *)PTR_DAT_03d7f6e0;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                *plVar14 = lVar11;
                thunk_FUN_01b4f09c(plVar14,lVar11);
              }
              else {
                FUN_02b599e4(lVar12,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              FUN_0255c1c8(*(long *)(param_1 + 0x78),uVar15 & 0xffffffff,*(undefined8 *)puVar4);
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



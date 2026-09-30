/*
FUNCTION_NAME: FUN_058e0748
ENTRY_POINT: 058e0748
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_058e0748(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  long *local_100;
  ulong uStack_f8;
  long local_f0;
  undefined4 local_e4;
  ulong local_e0;
  undefined4 local_d8;
  long *local_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *local_b0;
  ulong uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  
  puVar2 = PTR_DAT_0678a358;
  if ((DAT_06b80b5b & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_91_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0678a358);
    FUN_02d6084c(PTR_DAT_0678a360);
    FUN_02d6084c(PTR_DAT_0678a368);
    FUN_02d6084c(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_3_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_96_0_TypeInfo);
    DAT_06b80b5b = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_3_0_TypeInfo;
  local_d8 = 0;
  local_e0 = 0;
  local_e4 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar9 = (long *)FUN_0617c4fc(param_2,0);
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar14);
    lVar14 = *(long *)puVar4;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
  if (lVar14 != 0) {
    iVar19 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar19) {
      FUN_05029664(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
    }
    puVar5 = OVRPlugin_OVRP_1_93_0_TypeInfo;
    puVar3 = PTR_DAT_0678a368;
    puVar2 = PTR_DAT_0678a360;
    if (plVar9 != (long *)0x0) {
      iVar19 = 0;
      do {
        lVar14 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_058e0908;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,0);
LAB_058e0908:
        iVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (iVar8 <= iVar19) {
          lVar14 = *(long *)puVar4;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar14);
            lVar14 = *(long *)puVar4;
          }
          puVar2 = OVRPlugin_OVRP_1_96_0_TypeInfo;
          lVar15 = *(long *)OVRPlugin_OVRP_1_96_0_TypeInfo;
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar15 = *(long *)puVar2;
          }
          lVar18 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
          if (lVar18 == 0) {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar15 = *(long *)puVar2;
            }
            uVar12 = **(undefined8 **)(lVar15 + 0xb8);
            lVar18 = thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_91_0_TypeInfo);
            FUN_0466361c(lVar18,uVar12,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar9 = lVar18;
            thunk_FUN_02dd37b4(plVar9,lVar18);
          }
          if (lVar14 != 0) {
            FUN_03c19108(lVar14,lVar18,*(undefined8 *)OVRPlugin_OVRP_1_94_0_TypeInfo);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (param_4 != 0) {
              FUN_03c176c8(param_4,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),
                           *(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              return;
            }
          }
          break;
        }
        lVar14 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_058e0968;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,0);
LAB_058e0968:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,iVar19,puVar10[1]);
        if (plVar11 == (long *)0x0) break;
        iVar8 = FUN_061784cc(plVar11,0);
        if (iVar8 != -1) {
          uVar12 = FUN_06177bfc(plVar11,0);
          local_a0 = param_3[2];
          uStack_a8 = param_3[1];
          local_b0 = (long *)*param_3;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar4);
          }
          uStack_f8 = uStack_a8;
          local_100 = local_b0;
          local_f0 = local_a0;
          uVar16 = FUN_058e0c44(uVar12,&local_100,&local_e0,&local_e4);
          if ((uVar16 & 1) != 0) {
            lVar14 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
            uVar7 = local_d8;
            uVar16 = local_e0;
            if (lVar14 == 0) break;
            uVar21 = local_e0 >> 0x20;
            uVar20 = FUN_0601e4a4(local_e0 & 0xffffffff,uVar21,local_d8,lVar14,0);
            uVar12 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
            uVar13 = (**(code **)(*plVar11 + 0x418))
                               (uVar20,uVar21,plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x420));
            if ((uVar13 & 1) != 0) {
              lVar14 = *(long *)puVar4;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar14 = *(long *)puVar4;
              }
              uVar6 = local_e4;
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
              uStack_118 = 0;
              local_108 = 0;
              local_110 = 0;
              local_120 = plVar11;
              thunk_FUN_02dd37b4(&local_120,plVar11);
              uStack_118 = uVar16;
              local_110 = CONCAT44((int)uVar20,uVar7);
              local_108 = CONCAT44(uVar6,(int)uVar21);
              if (lVar14 == 0) break;
              lVar18 = *(long *)puVar5;
              local_d0 = local_120;
              lStack_c0 = local_110;
              lVar15 = *(long *)(lVar14 + 0x10);
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              uStack_c8 = uStack_118;
              uStack_b8 = local_108;
              if (lVar15 == 0) break;
              uVar1 = *(uint *)(lVar14 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                lVar15 = lVar15 + (long)(int)uVar1 * 0x20;
                *(ulong *)(lVar15 + 0x28) = uVar16;
                *(long **)(lVar15 + 0x20) = local_120;
                *(undefined8 *)(lVar15 + 0x38) = local_108;
                *(long *)(lVar15 + 0x30) = local_110;
                thunk_FUN_02dd37b4(lVar15 + 0x20,0);
              }
              else {
                local_b0 = local_120;
                local_a0 = local_110;
                uStack_a8 = uStack_118;
                uStack_98 = local_108;
                FUN_03c1746c(lVar14,&local_b0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        iVar19 = iVar19 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



/*
FUNCTION_NAME: FUN_053d0134
ENTRY_POINT: 053d0134
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_053d0134(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ulong *puVar16;
  int iVar17;
  ulong local_d8;
  ulong *puStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong *puStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong *puStack_98;
  ulong local_90;
  ulong local_80;
  ulong *puStack_78;
  ulong local_70;
  
                    /* try { // try from 053d014c to 054d014f has its CatchHandler @ 053d0150 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d014c with catch @ 053d0150
                       try { // try from 053d0150 to 054d016b has its CatchHandler @ 053d00b8 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d00fc with catch @ 053d0154
                        */
  if ((DAT_066d09ba & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_117_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_118_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_11_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_120_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_122_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_123_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_126_0_TypeInfo);
    DAT_066d09ba = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_123_0_TypeInfo;
  local_c0 = 0;
  puStack_b8 = (ulong *)0x0;
  local_b0 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  lVar6 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo);
  FUN_039a2904(lVar6,*(undefined8 *)puVar1);
  puVar3 = OVRPlugin_OVRP_1_120_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_118_0_TypeInfo;
  if (param_2 != 0) {
    FUN_037a6fdc(&local_80,param_2,*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo);
    local_b0 = local_70;
    puStack_d0 = &local_c0;
    puStack_b8 = puStack_78;
    local_c0 = local_80;
    local_d8 = 0;
    while (uVar7 = FUN_0472eaf4(&local_c0,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      puVar16 = *(ulong **)(*(long *)(param_1 + 0x28) + 0x18);
      puStack_78 = (ulong *)0x0;
      local_70 = 0;
      local_80 = local_b0;
      thunk_FUN_02bb0e9c(&local_80);
      puStack_78 = puVar16;
      thunk_FUN_02bb0e9c(&puStack_78,puVar16);
      local_70 = local_70 & 0xffffffff00000000;
      if (lVar6 == 0) {
LAB_053d0788:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar12 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_053d0788;
      uVar5 = *(uint *)(lVar6 + 0x18);
      if (uVar5 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar5 * 0x18;
        *(uint *)(lVar6 + 0x18) = uVar5 + 1;
        *(ulong *)(lVar11 + 0x30) = local_70;
        *(ulong **)(lVar11 + 0x28) = puStack_78;
        *(ulong *)(lVar11 + 0x20) = local_80;
        thunk_FUN_02bb0e9c(lVar11 + 0x20,0);
      }
      else {
        puStack_98 = puStack_78;
        local_a0 = local_80;
        local_90 = local_70;
        FUN_039a3228(lVar6,&local_a0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0472eaf0(&local_c0,*(undefined8 *)puVar1);
    lVar11 = *(long *)(param_1 + 0x48);
    if (lVar11 != 0) {
      iVar17 = 0;
      do {
        if ((*(long *)(lVar11 + 0x48) == 0) ||
           (lVar12 = *(long *)(*(long *)(lVar11 + 0x48) + 0x50), lVar12 == 0)) goto LAB_053d0784;
        iVar17 = iVar17 + 1;
        FUN_037a6fdc(&local_d8,lVar12,*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo);
        puStack_b8 = puStack_d0;
        local_c0 = local_d8;
        local_b0 = local_c8;
        while (uVar8 = FUN_0472eaf4(&local_c0,*(undefined8 *)puVar2), uVar7 = local_b0,
              (uVar8 & 1) != 0) {
          lVar12 = FUN_053d699c(lVar11,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          puVar16 = *(ulong **)(lVar12 + 0x18);
          puStack_d0 = (ulong *)0x0;
          local_c8 = 0;
          local_d8 = uVar7;
          thunk_FUN_02bb0e9c(&local_d8,uVar7);
          puStack_d0 = puVar16;
          thunk_FUN_02bb0e9c(&puStack_d0,puVar16);
          local_c8 = CONCAT44(local_c8._4_4_,iVar17);
          if (lVar6 == 0) {
LAB_053d0494:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar12 = *(long *)(lVar6 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_053d0494;
          uVar5 = *(uint *)(lVar6 + 0x18);
          if (uVar5 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar5 * 0x18;
            *(uint *)(lVar6 + 0x18) = uVar5 + 1;
            *(ulong *)(lVar12 + 0x30) = local_c8;
            *(ulong **)(lVar12 + 0x28) = puStack_d0;
            *(ulong *)(lVar12 + 0x20) = local_d8;
            thunk_FUN_02bb0e9c(lVar12 + 0x20,0);
          }
          else {
            puStack_78 = puStack_d0;
            local_80 = local_d8;
            local_70 = local_c8;
            FUN_039a3228(lVar6,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0472eaf0(&local_c0,*(undefined8 *)puVar1);
        if (*(long *)(lVar11 + 0x48) == 0) goto LAB_053d0784;
        lVar11 = *(long *)(*(long *)(lVar11 + 0x48) + 0x48);
      } while (lVar11 != 0);
    }
    puVar1 = OVRPlugin_OVRP_1_117_0_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_117_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar6 != 0) {
      FUN_039a4f04(lVar6,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                   *(undefined8 *)OVRPlugin_OVRP_1_122_0_TypeInfo);
      puVar2 = OVRPlugin_OVRP_1_125_0_TypeInfo;
      puVar1 = PTR_DAT_06312310;
      iVar17 = *(int *)(lVar6 + 0x18);
      if (iVar17 + -1 < 1) {
        return;
      }
      iVar14 = 0;
      do {
        iVar15 = iVar14;
        if (iVar14 < iVar17 + -1) {
          uVar5 = 0;
          do {
            FUN_039a2e9c(&local_d8,lVar6,iVar15,*(undefined8 *)puVar2);
            if (local_d8 == 0) goto LAB_053d0784;
            uVar9 = FUN_053e52fc(local_d8,0);
            iVar17 = iVar15 + 1;
            FUN_039a2e9c(&local_d8,lVar6,iVar17,*(undefined8 *)puVar2);
            if (local_d8 == 0) goto LAB_053d0784;
            uVar10 = FUN_053e52fc(local_d8,0);
            iVar4 = FUN_04c07ea0(uVar9,uVar10,0);
            if (iVar4 != 0) break;
            FUN_039a2e9c(&local_d8,lVar6,iVar15,*(undefined8 *)puVar2);
            puVar16 = puStack_d0;
            FUN_039a2e9c(&local_d8,lVar6,iVar17,*(undefined8 *)puVar2);
            iVar4 = FUN_04c07ea0(puVar16,puStack_d0,0);
            if (iVar4 != 0) break;
            FUN_039a2e9c(&local_d8,lVar6,iVar15,*(undefined8 *)puVar2);
            uVar7 = local_d8;
            FUN_039a2e9c(&local_d8,lVar6,iVar17,*(undefined8 *)puVar2);
            if (uVar7 == 0) goto LAB_053d0784;
            FUN_053e5668(uVar7,local_d8,0);
            if ((uVar5 & 1) == 0) {
              FUN_039a2e9c(&local_d8,lVar6,iVar17,*(undefined8 *)puVar2);
              if (local_d8 == 0) goto LAB_053d0784;
              uVar7 = FUN_053e561c(local_d8,0);
              if ((uVar7 & 1) != 0) goto LAB_053d0674;
              FUN_039a2e9c(&local_d8,lVar6,iVar15,*(undefined8 *)puVar2);
              if (local_d8 == 0) goto LAB_053d0784;
              uVar9 = FUN_053e542c(local_d8,0);
              FUN_039a2e9c(&local_d8,lVar6,iVar17,*(undefined8 *)puVar2);
              if (local_d8 == 0) goto LAB_053d0784;
              uVar10 = FUN_053e542c(local_d8,0);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
              }
              uVar5 = FUN_04d94540(uVar9,uVar10,0);
            }
            else {
LAB_053d0674:
              uVar5 = 1;
            }
            iVar15 = iVar17;
          } while (iVar17 < *(int *)(lVar6 + 0x18) + -1);
          if ((iVar14 <= iVar15) && ((uVar5 & 1) != 0)) {
            do {
              FUN_039a2e9c(&local_d8,lVar6,iVar14,*(undefined8 *)puVar2);
              if (local_d8 == 0) goto LAB_053d0784;
              FUN_053e5634(local_d8,1,0);
              iVar14 = iVar14 + 1;
            } while (iVar14 <= iVar15);
          }
        }
        iVar17 = *(int *)(lVar6 + 0x18);
        iVar14 = iVar15 + 2;
        if (iVar17 + -1 <= iVar14) {
          return;
        }
      } while( true );
    }
  }
LAB_053d0784:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



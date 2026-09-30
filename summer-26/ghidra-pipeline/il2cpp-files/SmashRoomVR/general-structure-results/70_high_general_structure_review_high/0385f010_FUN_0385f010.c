/*
FUNCTION_NAME: FUN_0385f010
ENTRY_POINT: 0385f010
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_0385f010(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 )

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar14 = param_3;
  if ((DAT_03ff8680 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8680 = 1;
  }
  uVar12 = (undefined4)uVar14;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  if (*(char *)(param_4 + 0x31) == '\0') {
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_0385f31c;
    iVar4 = FUN_03afa68c(*(long *)(param_4 + 0x38),0);
    if (iVar4 == 2) {
      fVar22 = *(float *)(param_4 + 0x50);
      fVar7 = (float)FUN_03925cf4(0);
      fVar22 = fVar22 + fVar7;
      uVar18 = 0x3f000000;
      *(float *)(param_4 + 0x50) = fVar22;
      if (0.5 <= fVar22) {
        *(undefined4 *)(param_4 + 0x50) = 0;
        if ((*(long *)(param_4 + 0x38) != 0) &&
           (lVar5 = FUN_0391c27c(*(long *)(param_4 + 0x38),0), param_5 != 0)) {
          uVar13 = FUN_03928d34(param_5,0);
          uVar17 = uVar18;
          uVar11 = uVar12;
          uVar8 = FUN_039291ac(param_5,0);
          if (lVar5 != 0) {
            uVar19 = uVar17;
            uVar20 = uVar11;
            uVar14 = FUN_03928d34(lVar5,0);
            uVar15 = uVar19;
            uVar21 = uVar20;
            uVar9 = FUN_039291ac(lVar5,0);
            uVar16 = uVar18;
            uVar2 = uVar12;
            uVar10 = FUN_035a0b10(uVar13,0);
            local_68 = uVar2;
            local_70 = CONCAT44(uVar16,uVar10);
            uVar16 = uVar17;
            uVar2 = uVar11;
            uVar10 = FUN_035a0b10(uVar8,0);
            local_78 = uVar2;
            local_80 = CONCAT44(uVar16,uVar10);
            uVar16 = uVar19;
            uVar2 = uVar20;
            uVar10 = FUN_035a0b10(uVar14,0);
            local_88 = uVar2;
            local_90 = CONCAT44(uVar16,uVar10);
            uVar6 = FUN_03857c34(param_1,&local_70,&local_80,&local_90);
            if ((uVar6 & 1) == 0) {
              uVar8 = FUN_035a0b10(uVar8,0);
              local_98 = uVar11;
              local_a0 = CONCAT44(uVar17,uVar8);
              uVar11 = FUN_035a0b10(uVar9,0);
              local_a8 = uVar21;
              local_b0 = CONCAT44(uVar15,uVar11);
              uVar6 = FUN_03857d04(param_2,&local_a0,&local_b0);
              if ((uVar6 & 1) == 0) {
                uVar11 = FUN_035a0b10(uVar13 & 0xffffffff,0);
                local_b8 = uVar12;
                local_c0 = CONCAT44(uVar18,uVar11);
                uVar12 = FUN_035a0b10(uVar14,0);
                local_c8 = uVar20;
                local_d0 = CONCAT44(uVar19,uVar12);
                bVar3 = FUN_03857da8(param_3,&local_c0,&local_d0);
              }
              else {
                bVar3 = 0;
              }
            }
            else {
              bVar3 = 1;
            }
            if (*(byte *)(param_4 + 0x32) == (bVar3 & 1)) {
              return;
            }
            *(byte *)(param_4 + 0x32) = bVar3 & 1;
            puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            uVar14 = *(undefined8 *)(param_4 + 0x40);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_0391f968(uVar14,0,0);
            if ((uVar13 & 1) != 0) {
              if (*(long *)(param_4 + 0x40) == 0) goto LAB_0385f31c;
              FUN_0391b78c(*(long *)(param_4 + 0x40),*(char *)(param_4 + 0x32) == '\0',0);
            }
            uVar14 = *(undefined8 *)(param_4 + 0x48);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_0391f968(uVar14,0,0);
            if ((uVar13 & 1) == 0) {
              return;
            }
            if (*(long *)(param_4 + 0x48) != 0) {
              FUN_0391b78c(*(long *)(param_4 + 0x48),*(char *)(param_4 + 0x32) == '\0',0);
              return;
            }
          }
        }
LAB_0385f31c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
  return;
}



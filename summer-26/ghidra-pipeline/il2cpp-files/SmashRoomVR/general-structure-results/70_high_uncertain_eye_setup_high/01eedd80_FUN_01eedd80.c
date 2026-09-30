/*
FUNCTION_NAME: FUN_01eedd80
ENTRY_POINT: 01eedd80
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01eedd80(void *param_1,long param_2,undefined8 *param_3,long param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  long local_128 [3];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2515);
    thunk_FUN_01ad9084(StringLiteral_2516);
    thunk_FUN_01ad9084(StringLiteral_2501);
    thunk_FUN_01ad9084(StringLiteral_2517);
    thunk_FUN_01ad9084(StringLiteral_2518);
    thunk_FUN_01ad9084(StringLiteral_2519);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ae9ed0(param_5);
    }
  }
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_f4 = 0;
  if ((*(long *)(param_2 + 0x10) == 0) ||
     (uVar16 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18), uVar16 == 0)) {
    uStack_98 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    local_e0 = 0x3f00000000000000;
    goto LAB_01eee424;
  }
  FUN_02993a94(&local_90,4,uVar16 & 0xffffffff,*(undefined8 *)StringLiteral_2519);
  iVar15 = (int)uVar16;
  if (0 < iVar15) {
    uVar19 = 0;
    fVar20 = 0.0;
    bVar4 = 0;
    bVar3 = 0;
    bVar1 = 1;
    bVar13 = 1;
LAB_01eedebc:
    lVar12 = *(long *)(param_2 + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar5 = FUN_0347aa34(lVar12 + uVar19 * 0x10 + 0x20,0);
    lVar12 = *(long *)(param_2 + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar6 = FUN_0347a880(lVar12 + uVar19 * 0x10 + 0x20,0);
    if ((bVar4 & bVar5) == 0) {
      lVar12 = *(long *)(param_2 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar17 = *(undefined8 *)(lVar12 + uVar19 * 0x10 + 0x20);
      uVar8 = FUN_02ee6cf0(uVar17,0);
      if ((uVar8 & 1) == 0) {
        iVar18 = 0;
        do {
          lVar12 = **(long **)(param_5 + 0x38);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ae9e74();
          }
          local_128[1] = 0xffffffffffffffff;
          uStack_110 = param_3[1];
          local_128[2] = *param_3;
          uStack_100 = param_3[3];
          uStack_108 = param_3[2];
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
          local_128[0] = lVar12;
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2515) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01eedffc;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(local_128,*(long *)StringLiteral_2515,0);
LAB_01eedffc:
          iVar7 = (*(code *)*puVar9)(local_128,puVar9[1]);
          param_3[1] = uStack_110;
          *param_3 = local_128[2];
          param_3[3] = uStack_100;
          param_3[2] = uStack_108;
          if (iVar7 <= iVar18) {
            lVar12 = 0;
            goto LAB_01eee25c;
          }
          lVar12 = **(long **)(param_5 + 0x38);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ae9e74();
          }
          local_128[1] = 0xffffffffffffffff;
          uStack_110 = param_3[1];
          local_128[2] = *param_3;
          uStack_100 = param_3[3];
          uStack_108 = param_3[2];
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
          local_128[0] = lVar12;
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2516) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01eee088;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(local_128,*(long *)StringLiteral_2516,0);
LAB_01eee088:
          lVar10 = (*(code *)*puVar9)(local_128,iVar18,puVar9[1]);
          param_3[1] = uStack_110;
          *param_3 = local_128[2];
          param_3[3] = uStack_100;
          param_3[2] = uStack_108;
          lVar12 = lVar10;
          if (((param_4 != 0) && (lVar12 = param_4, iVar18 != 0)) &&
             (lVar12 = lVar10, lVar10 == param_4)) {
            lVar12 = **(long **)(param_5 + 0x38);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ae9e74();
            }
            local_128[1] = 0xffffffffffffffff;
            uStack_110 = param_3[1];
            local_128[2] = *param_3;
            uStack_100 = param_3[3];
            uStack_108 = param_3[2];
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            local_128[0] = lVar12;
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2516) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ae9f78(local_128,*(long *)StringLiteral_2516,0);
System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>:
            lVar12 = (*(code *)*puVar9)(local_128,0,puVar9[1]);
            param_3[1] = uStack_110;
            *param_3 = local_128[2];
            param_3[3] = uStack_100;
            param_3[2] = uStack_108;
          }
          lVar12 = FUN_03479fb0(lVar12,uVar17,0,0);
          if ((lVar12 != 0) &&
             (uVar8 = FUN_02994a58(&local_90,lVar12,*(undefined8 *)StringLiteral_2518),
             (uVar8 & 1) == 0)) goto LAB_01eee194;
          iVar18 = iVar18 + 1;
        } while( true );
      }
      FUN_029940fc(&local_90,0,*(undefined8 *)StringLiteral_2517);
      fVar20 = fVar20 + 1.0;
    }
    else {
      FUN_029940fc(&local_90,0,*(undefined8 *)StringLiteral_2517);
      bVar4 = 1;
    }
    goto LAB_01eee384;
  }
  fVar20 = 0.0;
  bVar13 = 1;
LAB_01eee3e4:
  uVar11 = 0;
LAB_01eee3f4:
  local_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  if (bVar13 == 0) {
    uVar11 = 1;
  }
  local_e0 = (ulong)uVar11;
  uStack_b0 = uStack_88;
  uStack_b8 = local_90;
  local_a0 = uStack_78;
  uStack_a8 = uStack_80;
  uStack_98 = *(undefined8 *)(param_2 + 0x10);
  thunk_FUN_01b4f09c(&uStack_98);
  local_e0 = CONCAT44(fVar20,(undefined4)local_e0);
LAB_01eee424:
  memcpy(param_1,&local_e0,0x50);
  return;
LAB_01eee194:
  uVar17 = FUN_03486fdc(uVar17,0);
  FUN_034654e4(&local_f0,uVar17,0);
  uVar8 = FUN_0346dce4(&local_f0,0);
  if ((uVar8 & 1) == 0) {
    lVar10 = *(long *)(lVar12 + 0x78);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar17 = *(undefined8 *)(lVar10 + 0x58);
    uVar2 = *(undefined8 *)(lVar10 + 0x60);
    lVar10 = *(long *)StringLiteral_2501;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)StringLiteral_2501;
    }
    uVar8 = FUN_0352f118(*(long *)(lVar10 + 0xb8) + 0x10,local_f0,uStack_e8,uVar17,uVar2,&local_f4,0
                        );
    iVar18 = local_f4;
    if ((uVar8 & 1) == 0) goto LAB_01eee258;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar7 = -iVar18;
    if (-1 < iVar18) {
      iVar7 = iVar18;
    }
    fVar20 = fVar20 + 1.0 / (float)(iVar7 + 1) + 1.0;
  }
  else {
LAB_01eee258:
    fVar20 = fVar20 + 1.0;
  }
LAB_01eee25c:
  uVar8 = uVar19 + 1;
  if ((long)uVar8 < (long)iVar15) {
    lVar10 = *(long *)(param_2 + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar8 = FUN_0347aa34(lVar10 + uVar8 * 0x10 + 0x20,0);
    if ((uVar8 & 1) != 0) {
      bVar3 = bVar3 | lVar12 == 0 & (bVar6 ^ 1);
      bVar4 = bVar4 | lVar12 != 0;
      goto LAB_01eee36c;
    }
  }
  if (uVar19 == iVar15 - 1 && ((bVar5 ^ 0xff) & 1) == 0) {
    if (lVar12 != 0) goto LAB_01eee36c;
  }
  else {
    bVar1 = bVar1 & (bVar6 ^ 1 | lVar12 != 0);
    bVar13 = bVar13 & (bVar6 | lVar12 != 0);
    if (uVar19 == 0) goto LAB_01eee36c;
    lVar10 = *(long *)(param_2 + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar10 + 0x18) <= (uint)(uVar19 - 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar8 = FUN_0347aa34(lVar10 + (uVar19 - 1) * 0x10 + 0x20,0);
    if ((uVar8 & 1) == 0) goto LAB_01eee36c;
    if (bVar4 != 0) {
      bVar4 = 0;
      goto LAB_01eee36c;
    }
    bVar4 = 0;
  }
  bVar1 = bVar3 & bVar1;
  bVar13 = bVar13 & (bVar3 ^ 1);
LAB_01eee36c:
  FUN_029940fc(&local_90,lVar12,*(undefined8 *)StringLiteral_2517);
LAB_01eee384:
  uVar19 = uVar19 + 1;
  if (uVar19 == (uVar16 & 0xffffffff)) goto code_r0x01eee394;
  goto LAB_01eedebc;
code_r0x01eee394:
  if (bVar1 != 0) goto LAB_01eee3e4;
  uVar11 = 2;
  goto LAB_01eee3f4;
}



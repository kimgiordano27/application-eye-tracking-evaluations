/*
FUNCTION_NAME: FUN_05f9a0b4
ENTRY_POINT: 05f9a0b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_7
*/


undefined8 FUN_05f9a0b4(long param_1,long *param_2,undefined4 param_3,char param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_06762bd8(5);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_05f99fd4(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar10 = *(long **)(param_1 + 0x30);
  lVar13 = *(long *)(param_1 + 0x18);
  if (plVar10 == (long *)0x0) {
    if (param_2 == (long *)0x0)
    goto 
    Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
    ;
    uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_05f9a1b0;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar10,lVar4,1);
LAB_05f9a1b0:
    uVar2 = (*(code *)*puVar3)(plVar10,param_2,puVar3[1]);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0)
  goto 
  Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
  ;
  uVar14 = *(uint *)(lVar4 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar9 = 0;
  if (uVar14 != 0) {
    iVar9 = (int)uVar2 / (int)uVar14;
  }
  uVar11 = uVar2 - iVar9 * uVar14;
  if (uVar14 <= uVar11) {
LAB_05f9a52c:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  piVar15 = (int *)(lVar4 + (ulong)uVar11 * 4 + 0x20);
  uVar14 = *piVar15 - 1;
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)FUN_04036464(*(undefined8 *)
                                    (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
    if (lVar13 == 0)
    goto 
    Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
    ;
    uVar12 = *(undefined8 *)(lVar13 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar14 < uVar11) {
      lVar4 = lVar13 + 0x20;
      iVar9 = 0;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar4 + (long)(int)uVar14 * 0x18) == uVar2) {
          if (plVar10 == (long *)0x0)
          goto 
          Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
          ;
          uVar7 = (**(code **)(*plVar10 + 0x1b8))
                            (plVar10,*(undefined8 *)(lVar4 + (long)(int)uVar14 * 0x18 + 8),param_2,
                             *(undefined8 *)(*plVar10 + 0x1c0));
          if ((uVar7 & 1) != 0) {
            if (param_4 == '\x02') goto LAB_05f9a518;
            if (param_4 != '\x01') {
              return 0;
            }
            if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_05f9a52c;
            lVar4 = lVar4 + (long)(int)uVar14 * 0x18;
            goto LAB_05f9a50c;
          }
          uVar11 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar11 <= uVar14) goto LAB_05f9a52c;
        uVar14 = *(uint *)(lVar4 + (long)(int)uVar14 * 0x18 + 4);
        if ((int)uVar11 <= iVar9) {
          FUN_067723dc(0);
        }
        uVar12 = *(undefined8 *)(lVar13 + 0x18);
        iVar9 = iVar9 + 1;
        uVar11 = (uint)uVar12;
      } while (uVar14 < uVar11);
    }
  }
  else {
    if (lVar13 == 0)
    goto 
    Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
    ;
    uVar12 = *(undefined8 *)(lVar13 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar14 < uVar11) {
      lVar4 = lVar13 + 0x20;
      iVar9 = 0;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar4 + (long)(int)uVar14 * 0x18) == uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
          uVar12 = *(undefined8 *)(lVar4 + (long)(int)uVar14 * 0x18 + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03ac4090(lVar5);
          }
          lVar6 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_05f9a2a4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_03ac43c4(plVar10,lVar5,0);
LAB_05f9a2a4:
          uVar7 = (*(code *)*puVar3)(plVar10,uVar12,param_2,puVar3[1]);
          if ((uVar7 & 1) != 0) {
            if (param_4 == '\x02') {
LAB_05f9a518:
              FUN_067722d8(param_2,0);
              return 0;
            }
            if (param_4 != '\x01') {
              return 0;
            }
            if (uVar14 < *(uint *)(lVar13 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar14 * 0x18;
LAB_05f9a50c:
              *(undefined4 *)(lVar4 + 0x10) = param_3;
              return 1;
            }
            goto LAB_05f9a52c;
          }
          uVar11 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar11 <= uVar14) goto LAB_05f9a52c;
        uVar14 = *(uint *)(lVar4 + (long)(int)uVar14 * 0x18 + 4);
        if ((int)uVar11 <= iVar9) {
          FUN_067723dc(0);
        }
        uVar12 = *(undefined8 *)(lVar13 + 0x18);
        iVar9 = iVar9 + 1;
        uVar11 = (uint)uVar12;
      } while (uVar14 < uVar11);
    }
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar14 = *(uint *)(param_1 + 0x20);
    if (uVar14 == uVar11) {
      FUN_05f9a8f8(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b8));
      lVar4 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x20) = uVar11 + 1;
      if (lVar4 == 0)
      goto 
      Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      ;
      uVar11 = *(uint *)(lVar4 + 0x18);
      iVar9 = 0;
      if (uVar11 != 0) {
        iVar9 = (int)uVar2 / (int)uVar11;
      }
      uVar1 = uVar2 - iVar9 * uVar11;
      if (uVar11 <= uVar1) goto LAB_05f9a52c;
      lVar13 = *(long *)(param_1 + 0x18);
      piVar15 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar14 + 1;
    }
    if (lVar13 == 0) {
Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      :
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_05f9a52c;
    lVar13 = lVar13 + (long)(int)uVar14 * 0x18;
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x24);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    if (uVar11 <= uVar14) goto LAB_05f9a52c;
    lVar13 = lVar13 + (long)(int)uVar14 * 0x18;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar13 + 0x24);
  }
  *(uint *)(lVar13 + 0x20) = uVar2;
  iVar9 = *piVar15;
  *(long *)(lVar13 + 0x28) = (long)param_2;
  *(int *)(lVar13 + 0x24) = iVar9 + -1;
  thunk_FUN_03afed3c((long *)(lVar13 + 0x28),param_2);
  *(undefined4 *)(lVar13 + 0x30) = param_3;
  *piVar15 = uVar14 + 1;
  return 1;
}



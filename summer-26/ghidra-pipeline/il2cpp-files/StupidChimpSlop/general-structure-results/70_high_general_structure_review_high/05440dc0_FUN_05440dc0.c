/*
FUNCTION_NAME: FUN_05440dc0
ENTRY_POINT: 05440dc0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05441318) */
/* WARNING: Removing unreachable block (ram,0x0544130c) */

void FUN_05440dc0(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 local_130;
  byte *pbStack_128;
  undefined8 *local_120;
  long *plStack_118;
  undefined1 *local_110;
  long **pplStack_108;
  long **local_100;
  undefined8 *puStack_f8;
  undefined4 *local_f0;
  int *piStack_e8;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined4 *local_d0;
  undefined8 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  int local_4c;
  undefined1 local_48 [4];
  byte local_44 [4];
  long local_38;
  
  local_38 = param_1;
  if ((DAT_06a53829 & 1) == 0) {
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    DAT_06a53829 = 1;
  }
  puVar11 = (undefined8 *)(param_1 + 0x60);
  local_58 = *puVar11;
  local_5c[0] = *(undefined1 *)(param_1 + 0x68);
  pbStack_128 = local_44;
  plStack_118 = &local_38;
  local_130 = 0;
  local_120 = &local_58;
  local_110 = local_5c;
  pplStack_108 = &local_68;
  local_100 = &local_70;
  puStack_f8 = &local_78;
  local_f0 = &local_7c;
  piStack_e8 = &local_4c;
  local_e0 = &uStack_a0;
  puStack_d8 = &local_a8;
  local_d0 = &local_ac;
  puStack_c8 = &local_88;
  local_c0 = auStack_98;
  puStack_b8 = local_48;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_ac = 0;
  local_44[0] = 0;
  local_48[0] = 0;
  local_4c = 0;
  *puVar11 = param_2;
  thunk_FUN_02dc1ef0(puVar11,param_2);
  plVar5 = *(long **)(local_38 + 0x28);
  *(byte *)(local_38 + 0x68) = param_3 & 1;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  puVar3 = PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var;
  puVar2 = PTR_DAT_066479b0;
  do {
    local_68 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar8 = *plVar5;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05440f68;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d87540(plVar5,lVar7,0);
LAB_05440f68:
    uVar9 = (*(code *)*puVar11)(plVar5,puVar11[1]);
    plVar5 = local_68;
    puVar1 = PTR_DAT_066479a8;
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_02d8a53c(local_68,*(undefined8 *)PTR_DAT_066479a8);
      local_70 = plVar5;
      if (plVar5 == (long *)0x0) goto LAB_054410b8;
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_05441090;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar8 = *local_68;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto System_Xml_HtmlEncodedRawTextWriter__WriteEndAttribute;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d87540(local_68,lVar7,1);
System_Xml_HtmlEncodedRawTextWriter__WriteEndAttribute:
    plVar6 = (long *)(*(code *)*puVar11)(plVar5,puVar11[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    bVar4 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268();
    }
    plVar5 = local_68;
    if ((char)plVar6[0x18] == '\0') {
      FUN_0541c6b0(plVar6,param_2,0,0,0);
      plVar5 = local_68;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_054410ac;
    }
  }
LAB_05441090:
  puVar11 = (undefined8 *)FUN_02d87540(plVar5,*(long *)puVar1,0);
LAB_054410ac:
  (*(code *)*puVar11)(plVar5,puVar11[1]);
LAB_054410b8:
  bVar4 = FUN_054414f0(local_38);
  local_44[0] = bVar4 & 1;
  if ((bVar4 & 1) != 0) {
    local_44[0] = 0;
    plVar5 = *(long **)(local_38 + 0x28);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    puVar3 = PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var;
    puVar2 = PTR_DAT_066479b0;
    do {
      local_68 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar8 = *plVar5;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05441164;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(plVar5,lVar7,0);
LAB_05441164:
      uVar9 = (*(code *)*puVar11)(plVar5,puVar11[1]);
      plVar5 = local_68;
      if ((uVar9 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_02d8a53c(local_68,*(undefined8 *)puVar1);
        local_70 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_054412b8;
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_05441290;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_05441278;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar8 = *local_68;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_054411cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(local_68,lVar7,1);
LAB_054411cc:
      plVar6 = (long *)(*(code *)*puVar11)(plVar5,puVar11[1]);
      if (plVar6 == (long *)0x0) {
        local_4c = local_4c + 1;
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      bVar4 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268();
      }
      local_4c = local_4c + 1;
      plVar5 = local_68;
      if ((char)plVar6[0x18] == '\0') {
        FUN_0541c6b0(plVar6,param_2,0,1,0);
        plVar5 = local_68;
      }
    } while( true );
  }
  goto LAB_054412c4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_05441278:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto FUN_054412ac;
    }
  }
LAB_05441290:
  puVar11 = (undefined8 *)FUN_02d87540(plVar5,*(long *)puVar1,0);
FUN_054412ac:
  (*(code *)*puVar11)(plVar5,puVar11[1]);
LAB_054412b8:
  local_44[0] = 1;
LAB_054412c4:
  FUN_02cc14e8(&local_130);
  return;
}



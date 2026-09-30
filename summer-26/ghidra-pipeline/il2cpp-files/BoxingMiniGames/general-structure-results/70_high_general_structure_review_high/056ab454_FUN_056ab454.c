/*
FUNCTION_NAME: FUN_056ab454
ENTRY_POINT: 056ab454
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x056ab90c) */

void FUN_056ab454(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  long **pplStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *local_38;
  
  if ((DAT_07edc5df & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079f49a8);
                    /* try { // try from 056ab49c to 057ab4a7 has its CatchHandler @ 056ab4b4 */
    DAT_07edc5df = 1;
  }
                    /* try { // try from 056ab4a8 to 057ab4b3 has its CatchHandler @ 056ab4c0 */
  local_38 = (long *)0x0;
  uVar5 = 0;
  if (param_2 != (long *)0x0) {
    uVar5 = param_1;
  }
                    /* catch() { ... } // from try @ 056ab3d0 with catch @ 056ab4b4
                       catch() { ... } // from try @ 056ab49c with catch @ 056ab4b4
                       try { // try from 056ab4b4 to 057ab4db has its CatchHandler @ 056ab370 */
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_056ab538;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(param_2,lVar7,0);
LAB_056ab538:
    uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  FUN_056ab3a8(uVar5,uVar3,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(1,0);
  }
  uVar5 = thunk_FUN_03652da4(param_2,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
  }
  uVar11 = FUN_05e26f18(uVar11,0);
  uVar9 = FUN_05e30794(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      puVar4 = (undefined8 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (-1 < *(int *)(puVar4 + -2)) {
          uStack_d8 = puVar4[1];
          local_e0 = *puVar4;
          uStack_c8 = puVar4[3];
          local_d0 = puVar4[2];
          uStack_b8 = puVar4[5];
          local_c0 = puVar4[4];
          uStack_a8 = puVar4[7];
          local_b0 = puVar4[6];
          FUN_056ac950(param_1,puVar4[-1],&local_e0,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0x110));
        }
        uVar9 = uVar9 + 1;
        puVar4 = puVar4 + 10;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto System_EmptyArray<BeatSequenceChange>___cctor;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(param_2,lVar7,0);
System_EmptyArray<BeatSequenceChange>___cctor:
  plVar6 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = PTR_DAT_079f49a8;
  pplStack_88 = &local_38;
  local_90 = 0;
  do {
    local_38 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_056ab774;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar2,0);
LAB_056ab774:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar6 = local_38;
    if ((uVar9 & 1) == 0) {
      if (local_38 == (long *)0x0) {
        return;
      }
      lVar7 = *local_38;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_056ab8a8;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_056ab7f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar6,lVar7,0);
LAB_056ab7f8:
    (*(code *)*puVar4)(&local_e0,plVar6,puVar4[1]);
    uStack_50 = uStack_a8;
    uStack_58 = local_b0;
    local_60 = uStack_b8;
    uStack_68 = local_c0;
    uStack_70 = uStack_c8;
    uStack_78 = local_d0;
    local_80 = uStack_d8;
    uVar5 = local_e0;
    uStack_d8 = local_d0;
    local_e0 = local_80;
    uStack_c8 = local_c0;
    local_d0 = uStack_70;
    uStack_b8 = local_b0;
    local_c0 = local_60;
    uStack_a8 = uStack_a0;
    local_b0 = uStack_50;
    uStack_48 = uStack_a0;
    FUN_056ac950(param_1,uVar5,&local_e0,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                                      + 0x20) + 0xc0) + 0x110));
    plVar6 = local_38;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_056ab8c4;
    }
  }
LAB_056ab8a8:
  puVar4 = (undefined8 *)FUN_0367cd30(local_38,*(long *)PTR_DAT_079f4598,0);
LAB_056ab8c4:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}



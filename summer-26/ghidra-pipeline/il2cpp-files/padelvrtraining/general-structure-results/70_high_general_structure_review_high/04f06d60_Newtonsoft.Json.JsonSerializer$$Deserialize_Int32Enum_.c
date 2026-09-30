/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 04f06d60
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04f07138) */

void Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>
               (long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong __n;
  void *__src;
  void *__s;
  ulong uVar11;
  void *__s_00;
  undefined8 *puVar12;
  void *__s_01;
  long unaff_x29;
  undefined8 auStack_30 [6];
  
  lVar4 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x28) = param_3;
  *(long *)(unaff_x29 + -0x20) = lVar4;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar4 + 0x28);
  plVar10 = *(long **)(param_4 + 0x38);
  if (plVar10 == (long *)0x0) {
    FUN_03d2d2b0(PTR_DAT_091a14e0);
    FUN_03d2d2b0(PTR_DAT_091a1508);
    plVar10 = *(long **)(param_4 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_03d8f2c8(param_4);
      plVar10 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar10[5] + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)auStack_30 - uVar11);
  puVar12 = (undefined8 *)((long)__src - uVar11);
  __s_01 = (void *)((long)puVar12 - uVar11);
  memset(__s_01,0,__n);
  __s = (void *)((long)__s_01 - uVar11);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar11);
  memset(__s_00,0,__n);
  puVar3 = PTR_DAT_091ae728;
  if ((param_1 == (long *)0x0) || (puVar3 = PTR_DAT_091f9708, param_2 == 0)) {
    uVar2 = thunk_FUN_03d1e194(puVar3);
    uVar2 = FUN_07796684(uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar2,param_4);
  }
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c(lVar4);
  }
  lVar6 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04f06e98;
      }
      uVar11 = uVar11 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar11 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(param_1,lVar4,0);
LAB_04f06e98:
  plVar10 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
  puVar3 = PTR_DAT_091a1508;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar4 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04f06f00;
        }
        uVar11 = uVar11 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar11 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)puVar3,0);
LAB_04f06f00:
    uVar11 = (*(code *)*puVar1)(plVar10,puVar1[1]);
    if ((uVar11 & 1) == 0) {
      iVar9 = 0xb;
      iVar8 = 0xb;
      goto joined_r0x04f07028;
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar4);
    }
    lVar6 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_04f06f74;
        }
        uVar11 = uVar11 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar11 != 0);
    }
    lVar4 = FUN_03d8f370(plVar10,lVar4,0);
LAB_04f06f74:
    *(void **)(unaff_x29 + -0x18) = __src;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar10,unaff_x29 + -0x18,__src);
    memcpy(__s_01,__src,__n);
    memcpy(puVar12,__s_01,__n);
    puVar1 = puVar12;
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x28) + 0x28)) {
      puVar1 = (undefined8 *)*puVar12;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*(code *)puVar5[2])(uVar2,puVar5,param_2,unaff_x29 + -0x18,unaff_x29 + -0xc);
  } while (*(char *)(unaff_x29 + -0xc) == '\0');
  memcpy(__src,__s_01,__n);
  memcpy(__s,__src,__n);
  iVar9 = 10;
  iVar8 = 10;
joined_r0x04f07028:
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar12 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04f07080;
        }
        uVar11 = uVar11 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_091a14e0,0);
LAB_04f07080:
    (*(code *)*puVar12)(plVar10,puVar12[1]);
    iVar8 = iVar9;
  }
  if (iVar8 == 0xb) {
LAB_04f070a4:
    memset(__s_00,0,__n);
    __s = __s_00;
  }
  else if (iVar8 != 10) {
    if (iVar8 != 0) goto LAB_04f070d8;
    goto LAB_04f070a4;
  }
  memcpy(__src,__s,__n);
  memcpy(*(void **)(unaff_x29 + -0x28),__src,__n);
LAB_04f070d8:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/*
FUNCTION_NAME: FUN_02bad714
ENTRY_POINT: 02bad714
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02badc70) */
/* WARNING: Removing unreachable block (ram,0x02badd54) */

undefined8 FUN_02bad714(long param_1,long *param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  void *__s;
  int iVar12;
  ulong __n;
  undefined8 *puVar13;
  void *__s_00;
  long alStack_90 [2];
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80 = param_3;
  if ((DAT_0453141d & 1) == 0) {
    FUN_01c5d288(
                UnityEngine_ResourceManagement_ResourceProviders_ProviderLoadRequestOptions_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(PTR_DAT_04232bd8);
    DAT_0453141d = 1;
  }
  lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x98) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  puVar6 = (undefined8 *)((long)alStack_90 - uVar8);
  puVar13 = (undefined8 *)((long)puVar6 - uVar8);
  __s_00 = (void *)((long)puVar13 - uVar8);
  memset(__s_00,0,__n);
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (long *)0x0) {
LAB_02badd50:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar11 = *(long *)(lVar11 + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01c72394(lVar11);
    }
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02bad8cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(param_2,lVar11,0);
LAB_02bad8cc:
    plVar5 = (long *)(*(code *)*puVar13)(param_2,puVar13[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar11 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04230960) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02bad934;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_04230960,0);
LAB_02bad934:
    uVar8 = (*(code *)*puVar13)(plVar5,puVar13[1]);
    if ((uVar8 & 1) == 0) {
      iVar10 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01c72394(lVar11);
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar11) {
            lVar11 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_02badc80;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar11 = FUN_01c72498(plVar5,lVar11,0);
LAB_02badc80:
      lVar11 = *(long *)(lVar11 + 8);
      local_78 = puVar6;
      (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar5,&local_78,puVar6);
      iVar10 = 1;
    }
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0422fce8) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02badcfc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_0422fce8,0);
LAB_02badcfc:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    iVar12 = 0;
  }
  else {
    uVar1 = FUN_03651ac0(*(undefined4 *)(param_1 + 0x24),0);
    uVar8 = (ulong)uVar1;
    alStack_90[1] = lVar3;
    if ((int)uVar1 < 0x65) {
      uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
      if (uVar1 == 0) {
        __s = (void *)0x0;
      }
      else {
        __s = (void *)((long)__s_00 - (uVar8 + 0xf & 0xfffffffffffffff0));
      }
      memset(__s,0,uVar8);
      lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                  UnityEngine_ResourceManagement_ResourceProviders_ProviderLoadRequestOptions_TypeInfo
                                );
      FUN_03651958(lVar3,__s,uVar1,0);
    }
    else {
      uVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,uVar8);
      lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                  UnityEngine_ResourceManagement_ResourceProviders_ProviderLoadRequestOptions_TypeInfo
                                );
      FUN_03651990(lVar3,uVar2,uVar8,0);
    }
    if (param_2 == (long *)0x0) goto LAB_02badd50;
    lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01c72394(lVar11);
    }
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar11) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02bada50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(param_2,lVar11,0);
LAB_02bada50:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    iVar10 = 0;
    local_7c = 0;
LAB_02bada68:
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04230960) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto System_Collections_Generic_List<NativeArray<NudgeJobData>>__Sort;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_04230960,0);
System_Collections_Generic_List<NativeArray<NudgeJobData>>__Sort:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar8 & 1) == 0) break;
      lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01c72394(lVar11);
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar11) {
            lVar11 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_02badb38;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar11 = FUN_01c72498(plVar5,lVar11,0);
LAB_02badb38:
      lVar11 = *(long *)(lVar11 + 8);
      local_78 = puVar6;
      (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar5,&local_78,puVar6);
      memcpy(__s_00,puVar6,__n);
      memcpy(puVar13,__s_00,__n);
      lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      local_78 = puVar13;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x98) + 0x28)) {
        local_78 = (undefined8 *)*puVar13;
      }
      puVar4 = *(undefined8 **)(lVar11 + 0x198);
      (*(code *)puVar4[2])(*puVar4,puVar4,param_1,&local_78,&local_6c);
      iVar12 = local_6c;
      if (-1 < local_6c) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar8 = FUN_03651a3c(lVar3,local_6c,0);
        if ((uVar8 & 1) == 0) {
          FUN_036519c0(lVar3,iVar12,0);
          local_7c = local_7c + 1;
        }
        goto LAB_02bada68;
      }
      iVar10 = iVar10 + 1;
    } while ((local_80 & 1) == 0);
    iVar12 = local_7c;
    lVar3 = alStack_90[1];
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0422fce8) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02badc60;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_0422fce8,0);
LAB_02badc60:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar10,iVar12);
}



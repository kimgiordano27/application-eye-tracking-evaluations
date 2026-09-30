/*
FUNCTION_NAME: FUN_027188b8
ENTRY_POINT: 027188b8
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02718d20) */
/* WARNING: Removing unreachable block (ram,0x02718d68) */

void FUN_027188b8(long *param_1,uint param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  if ((DAT_03a2427a & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3288);
    FUN_017fc350(PTR_DAT_037f3298);
    DAT_03a2427a = 1;
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(6,0);
  }
  if (*(uint *)(param_1 + 3) < param_2) {
    FUN_02befaf4(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  plVar4 = (long *)thunk_FUN_01861ac0(param_3,lVar6);
  if (plVar4 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0185daa4(lVar6);
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02718b70;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0185dba8(param_3,lVar6,0);
LAB_02718b70:
      plVar4 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
      puVar2 = PTR_DAT_037f3298;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      do {
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto 
              System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__EnsureCapacity
              ;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar2,0);
System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__EnsureCapacity:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) goto LAB_02718ca8;
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0185daa4(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02718c50;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar4,lVar6,0);
LAB_02718c50:
        (*(code *)*puVar5)(auStack_90,plVar4,puVar5[1]);
        memcpy(auStack_e0,auStack_90,0x50);
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150);
        memcpy(auStack_90,auStack_e0,0x50);
        FUN_02718608(param_1,param_2,auStack_90,uVar11);
        param_2 = param_2 + 1;
      } while( true );
    }
    FUN_027196a8(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40)
                );
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02718a30;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar4,lVar6,0);
LAB_02718a30:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Capacity
                (param_1,(int)param_1[3] + iVar3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        FUN_02bf1608(param_1[2],param_2,param_1[2],iVar3 + param_2,iVar1,0);
      }
      if (param_1 == plVar4) {
        FUN_02bf1608(param_1[2],0,param_1[2],param_2,param_2,0);
        FUN_02bf1608(param_1[2],iVar3 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0)
        ;
      }
      else {
        lVar7 = param_1[2];
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0185daa4(lVar6);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_02718b40;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar4,lVar6,5);
LAB_02718b40:
        (*(code *)*puVar5)(plVar4,lVar7,param_2,puVar5[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
    }
  }
LAB_02718d3c:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
LAB_02718ca8:
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_037f3288) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02718d08;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)PTR_DAT_037f3288,0);
LAB_02718d08:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_02718d3c;
}



/*
FUNCTION_NAME: FUN_04c52134
ENTRY_POINT: 04c52134
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c52568) */
/* WARNING: Removing unreachable block (ram,0x04c525bc) */

void FUN_04c52134(long *param_1,uint param_2,long *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_086daa73 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cc7a8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cc870,1);
    DataMemoryBarrier(2,3);
    DAT_086daa73 = 1;
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_06842340(6,0);
  }
  if (*(uint *)(param_1 + 3) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_068519bc(0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618(lVar5);
  }
  plVar3 = (long *)FUN_0339898c(param_3,lVar5);
  if (plVar3 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0338f618(lVar5);
      }
      lVar6 = *param_3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04c523e0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c(param_3,lVar5,0);
LAB_04c523e0:
      plVar3 = (long *)(*(code *)*puVar4)(param_3,puVar4[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      do {
        lVar5 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_083cc870) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04c52444;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,0);
LAB_04c52444:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) goto LAB_04c524f4;
        lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0338f618(lVar5);
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04c524bc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c(plVar3,lVar5,0);
LAB_04c524bc:
        auVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        FUN_04c51f1c(param_1,param_2,auVar10._0_8_,auVar10._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
        param_2 = param_2 + 1;
      } while( true );
    }
    FUN_04c52d68(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40)
                );
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618(lVar5);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04c522a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(plVar3,lVar5,0);
LAB_04c522a0:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (0 < iVar2) {
      FUN_04c51868(param_1,(int)param_1[3] + iVar2,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        FUN_068537e0(param_1[2],param_2,param_1[2],iVar2 + param_2,iVar1,0);
      }
      if (param_1 == plVar3) {
        FUN_068537e0(param_1[2],0,param_1[2],param_2,param_2,0);
        FUN_068537e0(param_1[2],iVar2 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0)
        ;
      }
      else {
        lVar6 = param_1[2];
        lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0338f618(lVar5);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
              goto 
              System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__BinarySearch;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c(plVar3,lVar5,5);
System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__BinarySearch:
        (*(code *)*puVar4)(plVar3,lVar6,param_2,puVar4[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar2;
    }
  }
LAB_04c52584:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
LAB_04c524f4:
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083cc7a8) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04c52550;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc7a8,0);
LAB_04c52550:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  goto LAB_04c52584;
}



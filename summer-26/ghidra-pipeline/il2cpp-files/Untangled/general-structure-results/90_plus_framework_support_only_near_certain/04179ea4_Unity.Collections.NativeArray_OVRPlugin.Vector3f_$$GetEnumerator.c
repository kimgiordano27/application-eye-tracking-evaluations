/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetEnumerator
ENTRY_POINT: 04179ea4
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0417a2e4) */
/* WARNING: Removing unreachable block (ram,0x0417a32c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetEnumerator
               (long *param_1,uint param_2,long *param_3,long param_4)

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
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
                    /* try { // try from 04179eb8 to 04279edf has its CatchHandler @ 04179ef4 */
  if ((DAT_071bdd43 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01f60);
    FUN_02f07e70(PTR_DAT_06d02048);
                    /* try { // try from 04179ee0 to 04279eeb has its CatchHandler @ 041799b0 */
    DAT_071bdd43 = 1;
  }
  if (param_3 == (long *)0x0) {
                    /* try { // try from 04179eec to 04279ef3 has its CatchHandler @ 04179ef4 */
                    /* WARNING: Subroutine does not return */
    FUN_056138a8(6,0);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04179eb8 with catch @ 04179ef4
                       catch(type#2 @ 00000000) { ... } // from try @ 04179eec with catch @ 04179ef4
                        */
  if (*(uint *)(param_1 + 3) < param_2) {
    FUN_05623504(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768(lVar6);
  }
  plVar4 = (long *)thunk_FUN_02ef170c(param_3,lVar6);
  if (plVar4 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768(lVar6);
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0417a14c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(param_3,lVar6,0);
LAB_0417a14c:
      plVar4 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
      puVar2 = PTR_DAT_06d02048;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      do {
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0417a1b4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar2,0);
LAB_0417a1b4:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) goto LAB_0417a26c;
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02eea768(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02eea86c(plVar4,lVar6,0);
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy:
        (*(code *)*puVar5)(&stack0x00000020,plVar4,puVar5[1]);
        FUN_04179c1c(param_1,param_2,&stack0x00000020,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
        param_2 = param_2 + 1;
      } while( true );
    }
    FUN_0417abd0(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40)
                );
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0417a00c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar4,lVar6,0);
LAB_0417a00c:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_0417944c(param_1,(int)param_1[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        FUN_0562505c(param_1[2],param_2,param_1[2],iVar3 + param_2,iVar1,0);
      }
      if (param_1 == plVar4) {
        FUN_0562505c(param_1[2],0,param_1[2],param_2,param_2,0);
        FUN_0562505c(param_1[2],iVar3 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0)
        ;
      }
      else {
        lVar7 = param_1[2];
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02eea768(lVar6);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_0417a11c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02eea86c(plVar4,lVar6,5);
LAB_0417a11c:
        (*(code *)*puVar5)(plVar4,lVar7,param_2,puVar5[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
    }
  }
LAB_0417a300:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
LAB_0417a26c:
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d01f60) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0417a2cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d01f60,0);
LAB_0417a2cc:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_0417a300;
}



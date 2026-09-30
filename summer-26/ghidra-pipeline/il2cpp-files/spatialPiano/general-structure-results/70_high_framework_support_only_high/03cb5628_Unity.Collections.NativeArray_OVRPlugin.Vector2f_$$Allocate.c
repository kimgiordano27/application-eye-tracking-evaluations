/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 03cb5628
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb5a9c) */
/* WARNING: Removing unreachable block (ram,0x03cb5ae4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate
               (long *param_1,uint param_2,long *param_3)

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
  long unaff_x20;
  long unaff_x23;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long *in_stack_000000a8;
  
  if ((*(byte *)(unaff_x23 + 0xc84) & 1) == 0) {
    FUN_02f08768(&DAT_068ed850);
    FUN_02f08768(&DAT_068ed8f8);
    *(undefined1 *)(unaff_x23 + 0xc84) = 1;
  }
  in_stack_000000a8 = (long *)0x0;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(6,0);
  }
  if (*(uint *)(param_1 + 3) < param_2) {
    FUN_050f6388(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  plVar4 = (long *)thunk_FUN_02f45174(param_3,lVar6);
  if (plVar4 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c(lVar6);
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03cb58d8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(param_3,lVar6,0);
LAB_03cb58d8:
      plVar4 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
      puVar2 = PTR_DAT_067c91b8;
      in_stack_00000050 = &stack0x000000a8;
      in_stack_00000048 = 0;
      do {
        in_stack_000000a8 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03cb594c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,0);
LAB_03cb594c:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar4 = in_stack_000000a8;
        if ((uVar9 & 1) == 0) {
          if (in_stack_000000a8 == (long *)0x0) goto LAB_03cb5ab8;
          lVar6 = *in_stack_000000a8;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_03cb5a68;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03cb5a50;
        }
        if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03cb59d0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar6,0);
LAB_03cb59d0:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        memcpy(&stack0x00000058,&stack0x00000000,0x48);
        FUN_03cb53a8(param_1,param_2,&stack0x00000058,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x150));
        param_2 = param_2 + 1;
        plVar4 = in_stack_000000a8;
      } while( true );
    }
    FUN_03cb63e0(param_1,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cb5794;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar6,0);
LAB_03cb5794:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_03cb4b24(param_1,(int)param_1[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        FUN_050f7d68(param_1[2],param_2,param_1[2],iVar3 + param_2,iVar1,0);
      }
      lVar6 = param_1[2];
      if (plVar4 == param_1) {
        FUN_050f7d68(lVar6,0,lVar6,param_2,param_2,0);
        FUN_050f7d68(param_1[2],iVar3 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0)
        ;
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_03cb58a8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar7,5);
LAB_03cb58a8:
        (*(code *)*puVar5)(plVar4,lVar6,param_2,puVar5[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
    }
  }
LAB_03cb5ab8:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03cb5a50:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03cb5a84;
    }
  }
LAB_03cb5a68:
  puVar5 = (undefined8 *)FUN_02f421d0(in_stack_000000a8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb5a84:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_03cb5ab8;
}



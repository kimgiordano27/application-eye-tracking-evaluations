/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<ARPointCloudManager.PointCloudRaycastJob>$$Invoke
ENTRY_POINT: 04ec5ffc
PROGRAM: cac-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long * Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<ARPointCloudManager_PointCloudRaycastJob>__Invoke
                 (long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  long unaff_x25;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8(param_1);
  }
  puVar3 = PTR_DAT_09120010;
  plVar5 = (long *)FUN_074c4a14();
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_04ec65c0;
  }
  uVar6 = FUN_074c4a14(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar7 = FUN_074ce748(plVar5,uVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar6 = FUN_074c4a14(lVar8 + 0x20,0);
    uVar7 = FUN_074ce748(plVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      plVar5 = (long *)thunk_FUN_03f4e68c(DAT_092c3e58);
      FUN_07460950(plVar5,0);
      goto LAB_04ec60e8;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f4b260();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)(unaff_x25 + 0xe0));
    }
    plVar11 = (long *)FUN_074c4a14(uVar6,0);
    if (plVar11 == (long *)0x0) {
LAB_04ec65c8:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar7 = (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2e0));
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_04ec65c8;
      uVar7 = (**(code **)(*plVar5 + 0x3f8))(plVar5,*(undefined8 *)(*plVar5 + 0x400));
      if ((uVar7 & 1) != 0) {
        uVar6 = (**(code **)(*plVar5 + 0x488))(plVar5,*(undefined8 *)(*plVar5 + 0x490));
        uVar13 = *(undefined8 *)PTR_DAT_09121188;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)(unaff_x25 + 0xe0));
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar7 = FUN_074ce748(uVar6,uVar13,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = (**(code **)(*plVar5 + 0x4a8))(plVar5,*(undefined8 *)(*plVar5 + 0x4b0));
          if (lVar8 == 0) goto LAB_04ec65c8;
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_04ec65cc:
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
          plVar11 = *(long **)(lVar8 + 0x20);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f139ac(plVar11);
            }
          }
          uVar6 = *(undefined8 *)PTR_DAT_09123388;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          plVar9 = (long *)FUN_074c4a14(uVar6,0);
          plVar10 = (long *)FUN_03f13470(*(undefined8 *)PTR_DAT_09116b58,1);
          if (plVar10 == (long *)0x0) goto LAB_04ec65c8;
          if ((plVar11 != (long *)0x0) &&
             (lVar8 = thunk_FUN_03f4e590(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
            FUN_03f134f0(uVar6,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_04ec65cc;
          plVar10[4] = (long)plVar11;
          thunk_FUN_03f86000(plVar10 + 4,plVar11);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x9b8))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x9c0)),
             plVar9 == (long *)0x0)) goto LAB_04ec65c8;
          uVar7 = (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2e0));
          if ((uVar7 & 1) != 0) {
            uVar6 = *(undefined8 *)PTR_DAT_091233a0;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar6 = FUN_074c4a14(uVar6,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03f6fea8(*(long *)puVar3);
            }
            goto LAB_04ec64fc;
          }
        }
      }
      uVar7 = (**(code **)(*plVar5 + 0x5f8))(plVar5,*(undefined8 *)(*plVar5 + 0x600));
      if ((uVar7 & 1) == 0) goto LAB_04ec655c;
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar6 = FUN_074eaf74(plVar5,0);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)(unaff_x25 + 0xe0));
      }
      uVar4 = FUN_074d102c(uVar6,0);
      if (uVar4 < 0xd) {
        uVar2 = 1 << (ulong)(uVar4 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar4 != 7)
            goto 
            Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob>__Invoke
            ;
            lVar8 = *(long *)(unaff_x25 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_091233b0;
          }
          else {
            lVar8 = *(long *)(unaff_x25 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_09123398;
          }
        }
        else {
          lVar8 = *(long *)(unaff_x25 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_09123378;
        }
      }
      else {

        Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob>__Invoke
        :
        if (uVar4 != 5) {
LAB_04ec655c:
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f4b260();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03f4b260();
          }
          plVar5 = (long *)thunk_FUN_03f4e68c();
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f4b260(lVar8);
          }
          FUN_05be7598(plVar5,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
          return plVar5;
        }
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_091233a8;
      }
      uVar6 = *puVar12;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar6 = FUN_074c4a14(uVar6,0);
      plVar11 = plVar5;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)puVar3);
      }
LAB_04ec64fc:
      uVar6 = FUN_074f8338(uVar6,plVar11,0);
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f4b260(lVar8);
      }
      lVar8 = **(long **)(lVar8 + 0xc0);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f4b260(lVar8);
      }
      plVar5 = (long *)FUN_0395118c(uVar6,lVar8);
      return plVar5;
    }
    uVar6 = *(undefined8 *)PTR_DAT_09123380;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar6 = FUN_074c4a14(uVar6,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_074f8338(uVar6,plVar5,0);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f4b260(lVar8);
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  else {
    plVar5 = (long *)thunk_FUN_03f4e68c(DAT_092bf110);
    FUN_07460850(plVar5,0);
LAB_04ec60e8:
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f4b260();
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  lVar8 = *plVar11;
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f4b260(lVar8);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
LAB_04ec65c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac(plVar5);
    }
  }
  return plVar5;
}



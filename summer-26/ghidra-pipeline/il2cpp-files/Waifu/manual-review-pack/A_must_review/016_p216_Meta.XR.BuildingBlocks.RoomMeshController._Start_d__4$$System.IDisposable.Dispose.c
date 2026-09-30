/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 06342678
PROGRAM: Waifu-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose
               (ulong param_1,long *param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int unaff_w20;
  long unaff_x21;
  long lVar11;
  char cVar12;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083dfcb0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e2140,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ce708,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083fac18,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083fac10,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083fac20,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x85a) = 1;
  }
  *(undefined4 *)((long)param_2 + 0x9d) = 0;
  uVar6 = (**(code **)(*param_2 + 0x2b8))(param_2,*(undefined8 *)(*param_2 + 0x2c0));
  plVar9 = (long *)param_2[6];
  if (plVar9 == (long *)0x0) goto LAB_06342a9c;
  if ((int)plVar9[7] == 1) {
LAB_06342758:
    if ((uVar6 & 1) == 0) goto LAB_063427fc;
LAB_0634275c:
    if (unaff_w20 == 1) {
      lVar10 = FUN_05b961dc(DAT_083dfcb0);
      if ((((lVar10 == 0) || (lVar10 = FUN_06317920(lVar10,0), lVar10 == 0)) ||
          (*(long *)(lVar10 + 0x118) == 0)) ||
         (lVar10 = FUN_05cb5ba0(*(long *)(lVar10 + 0x118),(int)param_2[7],DAT_083e2140), lVar10 == 0
         )) goto LAB_06342a9c;
      if ((*(byte *)(lVar10 + 0x11) & 1) == 0) goto LAB_063427fc;
    }
    if (*(char *)((long)param_2 + 0x9c) == '\0') {
      bVar5 = true;
      cVar12 = '\x01';
    }
    else {
      cVar12 = '\0';
      bVar5 = true;
      *(undefined1 *)((long)param_2 + 0x9c) = 0;
    }
  }
  else {
    lVar10 = param_2[5];
    if (lVar10 == 0) goto LAB_06342a9c;
    if ((*(char *)(lVar10 + 0x17) == '\0') || (*(char *)(lVar10 + 0x16) != '\0')) goto LAB_06342758;
    if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_083ce708 + 0x130)) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_083ce708 + 0x130) * 8 + -8) !=
        DAT_083ce708)) {
      if ((uVar6 & 1) != 0) goto LAB_0634275c;
    }
    else if ((int)plVar9[10] != 0) {
      if ((int)plVar9[10] == 10) {
        return;
      }
      goto LAB_06342758;
    }
LAB_063427fc:
    bVar5 = false;
    cVar12 = '\0';
  }
  if (*(char *)((long)param_2 + 0x9b) != cVar12) {
    lVar10 = param_2[0xd];
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a11b14(lVar10,0);
    if ((uVar6 & 1) == 0) {
      lVar10 = param_2[0xe];
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_07a11b14(lVar10,0);
      if ((uVar6 & 1) != 0) {
        lVar10 = param_2[0xe];
        if (lVar10 == 0) goto LAB_06342a9c;
        plVar9 = param_2 + 0x11;
        if (cVar12 == '\0') {
          plVar9 = param_2 + 10;
        }
        lVar11 = *plVar9;
        if (DAT_086ee570 == (code *)0x0) {
          DAT_086ee570 = (code *)FUN_033d1b68(
                                             "UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)"
                                             );
        }
        (*DAT_086ee570)(lVar10,lVar11);
        lVar10 = param_2[0xe];
        if (lVar10 == 0) goto LAB_06342a9c;
        plVar9 = param_2 + 0x10;
        if (cVar12 == '\0') {
          plVar9 = param_2 + 0xf;
        }
        lVar11 = *plVar9;
        pcVar7 = DAT_086ee560;
        if (DAT_086ee560 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68(
                                       "UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])"
                                       );
          DAT_086ee560 = pcVar7;
        }
        goto LAB_06342920;
      }
    }
    else {
      lVar10 = param_2[0xd];
      if (lVar10 == 0) goto LAB_06342a9c;
      plVar9 = param_2 + 0x11;
      if (cVar12 == '\0') {
        plVar9 = param_2 + 10;
      }
      lVar11 = *plVar9;
      pcVar7 = DAT_086ee520;
      if (DAT_086ee520 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)");
        DAT_086ee520 = pcVar7;
      }
LAB_06342920:
      (*pcVar7)(lVar10,lVar11);
    }
    *(char *)((long)param_2 + 0x9b) = cVar12;
    if (cVar12 == '\0') {
      plVar9 = param_2 + 0x12;
      if (*plVar9 != 0) {
        FUN_079e4dc4(*plVar9,0);
        *plVar9 = 0;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
    }
    else {
      *(undefined2 *)(param_2 + 0x13) = 0x101;
      *(undefined1 *)((long)param_2 + 0x9a) = 1;
    }
  }
  if (bVar5) {
    iVar2 = (int)param_2[9];
    if (((iVar2 != 2) && (*(char *)((long)param_2 + 0x99) != '\0')) && (1 < iVar2 - 1U)) {
      if (param_2[10] == 0) {
LAB_06342a9c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar10 = param_2[0x11];
      uVar8 = FUN_079e81b4(param_2[10],0);
      if (lVar10 == 0) goto LAB_06342a9c;
      FUN_079e8204(lVar10,uVar8,0);
      if (param_2[10] == 0) goto LAB_06342a9c;
      lVar10 = param_2[0x11];
      uVar8 = FUN_079e8268(param_2[10],0);
      if (lVar10 == 0) goto LAB_06342a9c;
      FUN_079e82b8(lVar10,uVar8,0);
      *(undefined1 *)((long)param_2 + 0x99) = 0;
    }
    if ((cVar12 != '\0') || ((char)param_2[0x13] != '\0')) {
      *(undefined1 *)((long)param_2 + 0x9d) = 1;
      if (iVar2 - 1U < 2) {
        *(undefined1 *)((long)param_2 + 0x9f) = 1;
      }
      if (iVar2 == 2) {
        *(undefined1 *)(param_2 + 0x14) = 1;
      }
      *(undefined1 *)(param_2 + 0x13) = 0;
      if (((cVar12 != '\0') && (uVar6 = FUN_0633d928(param_2), (uVar6 & 1) != 0)) &&
         (*(char *)((long)param_2 + 0x9a) != '\0')) {
        *(undefined1 *)((long)param_2 + 0x9e) = 1;
        *(undefined1 *)((long)param_2 + 0x9a) = 0;
      }
    }
  }
  return;
}



/*
FUNCTION_NAME: UnityEngine.Networking.DownloadHandlerAudioClip$$InternalCreateAudioClip
ENTRY_POINT: 04196554
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0419679c) */
/* WARNING: Removing unreachable block (ram,0x041968f0) */

void UnityEngine_Networking_DownloadHandlerAudioClip__InternalCreateAudioClip(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  float fVar11;
  undefined4 uVar12;
  float unaff_s8;
  float fVar13;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_0458ddd0);
  thunk_FUN_01efb3a4(PTR_DAT_0458ddb8);
  thunk_FUN_01efb3a4(PTR_DAT_0458de60);
  *(undefined1 *)(unaff_x20 + 0xc7e) = 1;
  in_stack_00000008 = 0;
  if (((*(long *)(unaff_x19 + 0x78) != 0) &&
      (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x20), lVar5 != 0)) &&
     (plVar6 = (long *)FUN_041a7930(lVar5,0), plVar6 != (long *)0x0)) {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04196604;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
LAB_04196604:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar1 = (long *)(unaff_x19 + 0x58);
    fVar13 = 0.0;
    do {
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04196684;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_04196684:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_04196790;
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 == 0) goto LAB_04196768;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_04196750;
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_041966e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_041966e0:
      lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      fVar11 = (float)FUN_041a9d80(*(long *)(unaff_x19 + 0x78),lVar5,0);
      fVar13 = fVar13 + fVar11;
      if ((unaff_s8 < fVar13) && (*plVar1 == 0)) {
        *plVar1 = lVar5;
        thunk_FUN_01f51358(plVar1,lVar5);
      }
    } while( true );
  }
  goto LAB_041968e8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04196750:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04196784;
    }
  }
LAB_04196768:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_04196784:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_04196790:
  puVar3 = PTR_DAT_0458ddd0;
  puVar2 = PTR_DAT_0458ddb8;
  if (*(char *)(unaff_x19 + 0x39) != '\x01') {
    lVar5 = *(long *)(unaff_x19 + 0x88);
    *(undefined1 *)(unaff_x19 + 0x39) = 1;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    }
  }
  *(float *)(unaff_x19 + 0x34) = unaff_s8;
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_04194548();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x48),uVar8);
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_0419468c();
  *(undefined8 *)(unaff_x19 + 0x50) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x50),uVar8);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x378);
    FUN_04231a28(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x48),0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) &&
       (((lVar5 = FUN_02452bb4(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_0458de60),
         lVar5 != 0 && (lVar5 = FUN_04224d30(lVar5,0), lVar5 != 0)) ||
        (lVar5 = *(long *)(unaff_x19 + 0x40), lVar5 != 0)))) {
      in_stack_00000008 = *(undefined8 *)(lVar5 + 0x378);
      FUN_04231a28(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x50),0);
      if (*(long *)(unaff_x19 + 0x78) != 0) {
        uVar12 = FUN_041ab0a4(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x58),0);
        *(undefined4 *)(unaff_x19 + 0x60) = uVar12;
        if (*(long *)(unaff_x19 + 0x78) != 0) {
          uVar12 = FUN_041a9d80(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x58),0);
          *(undefined4 *)(unaff_x19 + 100) = uVar12;
          FUN_041969b8();
          return;
        }
      }
    }
  }
LAB_041968e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



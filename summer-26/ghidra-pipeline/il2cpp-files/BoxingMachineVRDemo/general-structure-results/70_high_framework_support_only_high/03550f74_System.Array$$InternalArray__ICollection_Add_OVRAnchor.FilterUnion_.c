/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRAnchor.FilterUnion>
ENTRY_POINT: 03550f74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 System_Array__InternalArray__ICollection_Add<OVRAnchor_FilterUnion>(undefined8 param_1)

{
  bool bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar8;
  
  lVar4 = FUN_0505261c(param_1,0);
  puVar3 = PTR_DAT_0675e258;
  iVar8 = unaff_w22;
  if (7 < unaff_w22) {
    do {
      uVar2 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) goto LAB_03551360;
      lVar6 = FUN_05052640(lVar4,1,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0)
      goto System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>;
      lVar6 = FUN_05052640(lVar4,2,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0)
      goto System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>;
      lVar6 = FUN_05052640(lVar4,3,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) goto LAB_03551350;
      lVar6 = FUN_05052640(lVar4,4,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 4;
LAB_035512f8:
        uVar7 = FUN_05052640(lVar4,uVar7,0);
        uVar7 = FUN_05052634(uVar7,0);
        return uVar7;
      }
      lVar6 = FUN_05052640(lVar4,5,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 5;
        goto LAB_035512f8;
      }
      lVar6 = FUN_05052640(lVar4,6,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 6;
        goto LAB_035512f8;
      }
      lVar6 = FUN_05052640(lVar4,7,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 7;
        goto LAB_035512f8;
      }
      unaff_w22 = iVar8 + -8;
      lVar4 = FUN_05052640(lVar4,8,0);
      bVar1 = 0xf < iVar8;
      iVar8 = unaff_w22;
    } while (bVar1);
  }
  puVar3 = PTR_DAT_0675e258;
  if (unaff_w22 < 4) {
LAB_035511a8:
    puVar3 = PTR_DAT_0675e258;
    if (0 < unaff_w22) {
      iVar8 = unaff_w22 + 1;
      do {
        uVar2 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
        if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar5 & 1) != 0) goto LAB_03551360;
        lVar4 = FUN_05052640(lVar4,1,0);
        iVar8 = iVar8 + -1;
      } while (1 < iVar8);
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar5 & 1) == 0) {
      lVar6 = FUN_05052640(lVar4,1,0);
      uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar5 & 1) == 0) {
        lVar6 = FUN_05052640(lVar4,2,0);
        uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
        if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar5 & 1) == 0) {
          lVar6 = FUN_05052640(lVar4,3,0);
          uVar2 = *(undefined2 *)(unaff_x21 + lVar6 * 2);
          if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_04f83484(&stack0x0000000c,uVar2,
                               *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
          if ((uVar5 & 1) == 0) {
            lVar4 = FUN_05052640(lVar4,4,0);
            unaff_w22 = unaff_w22 + -4;
            goto LAB_035511a8;
          }
LAB_03551350:
          uVar7 = 3;
        }
        else {
System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>:
          uVar7 = 2;
        }
      }
      else {
System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>:
        uVar7 = 1;
      }
      lVar4 = FUN_05052640(lVar4,uVar7,0);
    }
LAB_03551360:
    uVar7 = FUN_05052634(lVar4,0);
  }
  return uVar7;
}



/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRDisplay.EyeRenderDesc>
ENTRY_POINT: 03550fbc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 System_Array__InternalArray__ICollection_Add<OVRDisplay_EyeRenderDesc>(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar6;
  long unaff_x24;
  
  do {
    lVar3 = FUN_05052640(unaff_x19,1,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar4 & 1) != 0) {
System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>:
      uVar5 = 1;
LAB_03551354:
      unaff_x19 = FUN_05052640(unaff_x19,uVar5,0);
      goto LAB_03551360;
    }
    lVar3 = FUN_05052640(unaff_x19,2,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar4 & 1) != 0) {
System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>:
      uVar5 = 2;
      goto LAB_03551354;
    }
    lVar3 = FUN_05052640(unaff_x19,3,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar4 & 1) != 0) {
LAB_03551350:
      uVar5 = 3;
      goto LAB_03551354;
    }
    lVar3 = FUN_05052640(unaff_x19,4,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar4 & 1) != 0) {
      uVar5 = 4;
LAB_035512f8:
      uVar5 = FUN_05052640(unaff_x19,uVar5,0);
      uVar5 = FUN_05052634(uVar5,0);
      return uVar5;
    }
    lVar3 = FUN_05052640(unaff_x19,5,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar4 & 1) != 0) {
      uVar5 = 5;
      goto LAB_035512f8;
    }
    lVar3 = FUN_05052640(unaff_x19,6,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar4 & 1) != 0) {
      uVar5 = 6;
      goto LAB_035512f8;
    }
    lVar3 = FUN_05052640(unaff_x19,7,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar4 & 1) != 0) {
      uVar5 = 7;
      goto LAB_035512f8;
    }
    iVar6 = unaff_w22 + -8;
    unaff_x19 = FUN_05052640(unaff_x19,8,0);
    puVar2 = PTR_DAT_0675e258;
    if (unaff_w22 < 0x10) {
      if (3 < iVar6) {
        uVar1 = *(undefined2 *)(unaff_x21 + unaff_x19 * 2);
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar4 & 1) != 0) goto LAB_03551360;
        lVar3 = FUN_05052640(unaff_x19,1,0);
        uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar4 & 1) != 0)
        goto System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>;
        lVar3 = FUN_05052640(unaff_x19,2,0);
        uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar4 & 1) != 0)
        goto System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>;
        lVar3 = FUN_05052640(unaff_x19,3,0);
        uVar1 = *(undefined2 *)(unaff_x21 + lVar3 * 2);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar4 & 1) != 0) goto LAB_03551350;
        unaff_x19 = FUN_05052640(unaff_x19,4,0);
        iVar6 = unaff_w22 + -0xc;
      }
      puVar2 = PTR_DAT_0675e258;
      if (iVar6 < 1) {
        return 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      while( true ) {
        uVar1 = *(undefined2 *)(unaff_x21 + unaff_x19 * 2);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar4 & 1) != 0) break;
        unaff_x19 = FUN_05052640(unaff_x19,1,0);
        iVar6 = iVar6 + -1;
        if (iVar6 < 2) {
          return 0xffffffff;
        }
      }
LAB_03551360:
      uVar5 = FUN_05052634(unaff_x19,0);
      return uVar5;
    }
    uVar1 = *(undefined2 *)(unaff_x21 + unaff_x19 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    unaff_w22 = iVar6;
    if ((uVar4 & 1) != 0) goto LAB_03551360;
  } while( true );
}



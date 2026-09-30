/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 03551124
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__ICollection_Add<OVRLocatable_TrackingSpacePose>(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar6;
  uint unaff_w23;
  long unaff_x24;
  
  do {
    uVar3 = FUN_04f83484(&stack0x0000000c,unaff_w23,
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar3 & 1) != 0) {
      uVar5 = 6;
LAB_035512f8:
      uVar5 = FUN_05052640(unaff_x19,uVar5,0);
      uVar5 = FUN_05052634(uVar5,0);
      return uVar5;
    }
    lVar4 = FUN_05052640(unaff_x19,7,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar3 & 1) != 0) {
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
        uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar3 & 1) != 0) goto LAB_03551360;
        lVar4 = FUN_05052640(unaff_x19,1,0);
        uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar3 & 1) != 0)
        goto System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>;
        lVar4 = FUN_05052640(unaff_x19,2,0);
        uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar3 & 1) != 0)
        goto System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>;
        lVar4 = FUN_05052640(unaff_x19,3,0);
        uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
        if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar3 & 1) != 0) goto LAB_03551350;
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
        uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar3 & 1) != 0) break;
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
    uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar3 & 1) != 0) goto LAB_03551360;
    lVar4 = FUN_05052640(unaff_x19,1,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar3 & 1) != 0) {
System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>:
      uVar5 = 1;
LAB_03551354:
      unaff_x19 = FUN_05052640(unaff_x19,uVar5,0);
      goto LAB_03551360;
    }
    lVar4 = FUN_05052640(unaff_x19,2,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar3 & 1) != 0) {
System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>:
      uVar5 = 2;
      goto LAB_03551354;
    }
    lVar4 = FUN_05052640(unaff_x19,3,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar3 & 1) != 0) {
LAB_03551350:
      uVar5 = 3;
      goto LAB_03551354;
    }
    lVar4 = FUN_05052640(unaff_x19,4,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar3 & 1) != 0) {
      uVar5 = 4;
      goto LAB_035512f8;
    }
    lVar4 = FUN_05052640(unaff_x19,5,0);
    uVar1 = *(undefined2 *)(unaff_x21 + lVar4 * 2);
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04f83484(&stack0x0000000c,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20))
    ;
    if ((uVar3 & 1) != 0) {
      uVar5 = 5;
      goto LAB_035512f8;
    }
    lVar4 = FUN_05052640(unaff_x19,6,0);
    unaff_w23 = (uint)*(ushort *)(unaff_x21 + lVar4 * 2);
    unaff_w22 = iVar6;
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
  } while( true );
}



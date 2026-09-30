/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03551484
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar4;
  
  do {
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + param_2 * 4),
                         *(undefined8 *)(param_1 + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar3 = 4;
LAB_03551624:
      uVar3 = FUN_05052640(unaff_x19,uVar3,0);
      uVar3 = FUN_05052634(uVar3,0);
      return uVar3;
    }
    lVar2 = FUN_05052640(unaff_x19,5,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar3 = 5;
      goto LAB_03551624;
    }
    lVar2 = FUN_05052640(unaff_x19,6,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar3 = 6;
      goto LAB_03551624;
    }
    lVar2 = FUN_05052640(unaff_x19,7,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar3 = 7;
      goto LAB_03551624;
    }
    iVar4 = unaff_w22 + -8;
    unaff_x19 = FUN_05052640(unaff_x19,8,0);
    if (unaff_w22 < 0x10) {
      if (3 < iVar4) {
        uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + unaff_x19 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar1 & 1) != 0) goto FUN_03551674;
        lVar2 = FUN_05052640(unaff_x19,1,0);
        uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar1 & 1) != 0) goto LAB_035515d0;
        lVar2 = FUN_05052640(unaff_x19,2,0);
        uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar1 & 1) != 0) goto LAB_03551600;
        lVar2 = FUN_05052640(unaff_x19,3,0);
        uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar1 & 1) != 0) goto LAB_03551664;
        unaff_x19 = FUN_05052640(unaff_x19,4,0);
        iVar4 = unaff_w22 + -0xc;
      }
      if (iVar4 < 1) {
        return 0xffffffff;
      }
      iVar4 = iVar4 + 1;
      while (uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + unaff_x19 * 4),
                                  *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20)),
            (uVar1 & 1) == 0) {
        unaff_x19 = FUN_05052640(unaff_x19,1,0);
        iVar4 = iVar4 + -1;
        if (iVar4 < 2) {
          return 0xffffffff;
        }
      }
FUN_03551674:
      uVar3 = FUN_05052634(unaff_x19,0);
      return uVar3;
    }
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + unaff_x19 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) goto FUN_03551674;
    lVar2 = FUN_05052640(unaff_x19,1,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
LAB_035515d0:
      uVar3 = 1;
LAB_03551668:
      unaff_x19 = FUN_05052640(unaff_x19,uVar3,0);
      goto FUN_03551674;
    }
    lVar2 = FUN_05052640(unaff_x19,2,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
LAB_03551600:
      uVar3 = 2;
      goto LAB_03551668;
    }
    lVar2 = FUN_05052640(unaff_x19,3,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar2 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
LAB_03551664:
      uVar3 = 3;
      goto LAB_03551668;
    }
    param_2 = FUN_05052640(unaff_x19,4,0);
    param_1 = *(long *)(unaff_x20 + 0x38);
    unaff_w22 = iVar4;
  } while( true );
}



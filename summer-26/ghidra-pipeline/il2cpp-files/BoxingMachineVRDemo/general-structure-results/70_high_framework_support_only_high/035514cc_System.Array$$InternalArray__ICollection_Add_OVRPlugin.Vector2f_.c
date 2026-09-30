/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector2f>
ENTRY_POINT: 035514cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector2f>
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar4;
  
  do {
    lVar1 = FUN_05052640(param_1,param_2,param_3);
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) != 0) {
      uVar3 = 6;
LAB_03551624:
      uVar3 = FUN_05052640(unaff_x19,uVar3,0);
      uVar3 = FUN_05052634(uVar3,0);
      return uVar3;
    }
    lVar1 = FUN_05052640(unaff_x19,7,0);
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) != 0) {
      uVar3 = 7;
      goto LAB_03551624;
    }
    iVar4 = unaff_w22 + -8;
    param_1 = FUN_05052640(unaff_x19,8,0);
    if (unaff_w22 < 0x10) {
      if (3 < iVar4) {
        uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + param_1 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar2 & 1) != 0) goto FUN_03551674;
        lVar1 = FUN_05052640(param_1,1,0);
        uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar2 & 1) != 0) goto LAB_035515d0;
        lVar1 = FUN_05052640(param_1,2,0);
        uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar2 & 1) != 0) goto LAB_03551600;
        lVar1 = FUN_05052640(param_1,3,0);
        uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar2 & 1) != 0) goto LAB_03551664;
        param_1 = FUN_05052640(param_1,4,0);
        iVar4 = unaff_w22 + -0xc;
      }
      if (iVar4 < 1) {
        return 0xffffffff;
      }
      iVar4 = iVar4 + 1;
      while (uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + param_1 * 4),
                                  *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20)),
            (uVar2 & 1) == 0) {
        param_1 = FUN_05052640(param_1,1,0);
        iVar4 = iVar4 + -1;
        if (iVar4 < 2) {
          return 0xffffffff;
        }
      }
FUN_03551674:
      uVar3 = FUN_05052634(param_1,0);
      return uVar3;
    }
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + param_1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) != 0) goto FUN_03551674;
    lVar1 = FUN_05052640(param_1,1,0);
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) != 0) {
LAB_035515d0:
      uVar3 = 1;
LAB_03551668:
      param_1 = FUN_05052640(param_1,uVar3,0);
      goto FUN_03551674;
    }
    lVar1 = FUN_05052640(param_1,2,0);
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) != 0) {
LAB_03551600:
      uVar3 = 2;
      goto LAB_03551668;
    }
    lVar1 = FUN_05052640(param_1,3,0);
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) != 0) {
LAB_03551664:
      uVar3 = 3;
      goto LAB_03551668;
    }
    lVar1 = FUN_05052640(param_1,4,0);
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    unaff_x19 = param_1;
    if ((uVar2 & 1) != 0) {
      uVar3 = 4;
      goto LAB_03551624;
    }
    lVar1 = FUN_05052640(param_1,5,0);
    uVar2 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar1 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) != 0) {
      uVar3 = 5;
      goto LAB_03551624;
    }
    param_2 = 6;
    param_3 = 0;
    unaff_w22 = iVar4;
  } while( true );
}



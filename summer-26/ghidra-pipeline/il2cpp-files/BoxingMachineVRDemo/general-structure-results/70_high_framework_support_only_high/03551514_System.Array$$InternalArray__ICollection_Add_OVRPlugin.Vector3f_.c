/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector3f>
ENTRY_POINT: 03551514
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>
          (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar4;
  
  while( true ) {
    iVar4 = unaff_w22 + -8;
    unaff_x19 = FUN_05052640(unaff_x19,param_2,0);
    if (unaff_w22 < 0x10) break;
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + unaff_x19 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) goto FUN_03551674;
    lVar3 = FUN_05052640(unaff_x19,1,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) goto LAB_035515d0;
    lVar3 = FUN_05052640(unaff_x19,2,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) goto LAB_03551600;
    lVar3 = FUN_05052640(unaff_x19,3,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) goto LAB_03551664;
    lVar3 = FUN_05052640(unaff_x19,4,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar2 = 4;
LAB_03551624:
      uVar2 = FUN_05052640(unaff_x19,uVar2,0);
      uVar2 = FUN_05052634(uVar2,0);
      return uVar2;
    }
    lVar3 = FUN_05052640(unaff_x19,5,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar2 = 5;
      goto LAB_03551624;
    }
    lVar3 = FUN_05052640(unaff_x19,6,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar2 = 6;
      goto LAB_03551624;
    }
    lVar3 = FUN_05052640(unaff_x19,7,0);
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) != 0) {
      uVar2 = 7;
      goto LAB_03551624;
    }
    param_2 = 8;
    unaff_w22 = iVar4;
  }
  if (iVar4 < 4) {
LAB_0355153c:
    if (0 < iVar4) {
      iVar4 = iVar4 + 1;
      do {
        uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + unaff_x19 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar1 & 1) != 0) goto FUN_03551674;
        unaff_x19 = FUN_05052640(unaff_x19,1,0);
        iVar4 = iVar4 + -1;
      } while (1 < iVar4);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + unaff_x19 * 4),
                         *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_05052640(unaff_x19,1,0);
      uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                           *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_05052640(unaff_x19,2,0);
        uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                             *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_05052640(unaff_x19,3,0);
          uVar1 = FUN_050048a4(&stack0x0000000c,*(undefined4 *)(unaff_x21 + lVar3 * 4),
                               *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
          if ((uVar1 & 1) == 0) {
            unaff_x19 = FUN_05052640(unaff_x19,4,0);
            iVar4 = unaff_w22 + -0xc;
            goto LAB_0355153c;
          }
LAB_03551664:
          uVar2 = 3;
        }
        else {
LAB_03551600:
          uVar2 = 2;
        }
      }
      else {
LAB_035515d0:
        uVar2 = 1;
      }
      unaff_x19 = FUN_05052640(unaff_x19,uVar2,0);
    }
FUN_03551674:
    uVar2 = FUN_05052634(unaff_x19,0);
  }
  return uVar2;
}



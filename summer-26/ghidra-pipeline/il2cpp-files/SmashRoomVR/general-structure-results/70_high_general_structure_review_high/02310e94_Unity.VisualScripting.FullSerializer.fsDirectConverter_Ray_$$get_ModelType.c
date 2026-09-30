/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$get_ModelType
ENTRY_POINT: 02310e94
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__get_ModelType
          (long param_1,undefined1 param_2 [16])

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  long lStack0000000000000020;
  long lStack0000000000000030;
  
  lStack0000000000000020 = param_2._0_8_;
  unaff_x19[8] = param_1;
  unaff_x19[7] = param_2._8_8_;
  unaff_x19[6] = lStack0000000000000020;
  lStack0000000000000030 = param_1;
  thunk_FUN_01b4f09c(unaff_x19 + 6,0);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  while( true ) {
    uVar1 = FUN_02701e98(unaff_x19 + 6,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68));
    if ((uVar1 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x1f8))();
      return 0;
    }
    lVar2 = unaff_x19[5];
    if (lVar2 == 0) break;
    lVar3 = unaff_x19[8];
    uVar1 = (**(code **)(lVar2 + 0x18))
                      (*(undefined8 *)(lVar2 + 0x40),lVar3,*(undefined8 *)(lVar2 + 0x28));
    if ((uVar1 & 1) != 0) {
      unaff_x19[3] = lVar3;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



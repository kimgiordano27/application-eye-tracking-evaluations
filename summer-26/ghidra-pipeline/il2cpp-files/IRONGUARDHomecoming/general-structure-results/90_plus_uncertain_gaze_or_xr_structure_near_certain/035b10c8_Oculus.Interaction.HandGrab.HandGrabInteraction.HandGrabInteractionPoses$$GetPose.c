/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteraction.HandGrabInteractionPoses$$GetPose
ENTRY_POINT: 035b10c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 179
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x035b1258) */

long Oculus_Interaction_HandGrab_HandGrabInteraction_HandGrabInteractionPoses__GetPose
               (long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x21;
  long unaff_x23;
  int iVar8;
  ulong unaff_x24;
  long *unaff_x25;
  
  while( true ) {
    FUN_03410500(param_1,param_2,param_3,0);
    uVar3 = thunk_FUN_0340e318();
    if ((uVar3 & 1) != 0) break;
    do {
      lVar4 = (**(code **)(*unaff_x21 + 0x208))();
      if (lVar4 == 0) {
        lVar4 = 0;
        iVar1 = 0xb;
        goto LAB_035b1198;
      }
      param_1 = FUN_03412ab4(lVar4,0);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = FUN_03412f70(param_1,0x3d,0);
      param_3 = (ulong)uVar2;
    } while ((int)uVar2 < 9);
    param_2 = 0;
    unaff_x23 = param_1;
    unaff_x24 = param_3;
  }
  lVar4 = FUN_0341265c(unaff_x23,(int)unaff_x24 + 1,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_03412bf4(lVar4,0x22,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_03415b44(lVar4,*(undefined8 *)
                              Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_3__
                       ,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_03415b44(lVar4,*(undefined8 *)
                                Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                         ,0);
    if ((uVar3 & 1) != 0) goto LAB_035b118c;
  }
  else {
    FUN_0341265c(lVar4,6,0);
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = System_Threading_OSSpecificSynchronizationContext__Post();
LAB_035b118c:
  iVar8 = 10;
  iVar1 = 10;
  if (unaff_x21 != (long *)0x0) {
LAB_035b1198:
    iVar8 = iVar1;
    lVar6 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_035b11ec;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_035b11ec:
    (*(code *)*puVar5)();
  }
  if ((iVar8 != 0) && (iVar8 != 0xb)) {
    return lVar4;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = System_Threading_OSSpecificSynchronizationContext__Post();
  return lVar4;
}



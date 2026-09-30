/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorRequestCanceled_get
ENTRY_POINT: 07881fb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorRequestCanceled_get(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  lVar6 = *unaff_x21;
                    /* try { // try from 07881fcc to 07981fdb has its CatchHandler @ 078821b4 */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
         ) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07882018;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 07881ffc to 0798200b has its CatchHandler @ 078821d8 */
  puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07882018:
  lVar6 = (*(code *)*puVar2)();
  if (lVar6 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_IEnumerator<Claim>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fef3f0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar3 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Collections_Generic_IEnumerator<char>_TypeInfo);
      uVar4 = FUN_04719738(uVar3,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)System_Linq_IGrouping<int,_SocketPose>_TypeInfo);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Linq_IGrouping<string,_QosAnnotatedResult>_TypeInfo);
      FUN_057509cc(uVar5,uVar3,uVar4,
                   *(undefined8 *)
                    System_Linq_IGrouping<string,_ValueTuple<QosServer,_IQosMeasurements>>_TypeInfo)
      ;
      puVar1 = 
      System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
      ;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



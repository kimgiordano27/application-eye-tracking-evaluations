/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_sessiongroup_updated
ENTRY_POINT: 078f3fe4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_sessiongroup_updated
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  uVar2 = FUN_0587c6c4();
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fd4400(unaff_x19 + 2,&stack0x00000018);
  }
  else {
                    /* try { // try from 078f3ff4 to 079f400b has its CatchHandler @ 078f4090 */
    uVar3 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
                    /* try { // try from 078f400c to 079f407f has its CatchHandler @ 078f3be8 */
    uVar4 = FUN_0471a930(uVar3,*(undefined8 *)(unaff_x19 + 0x10),
                         *(undefined8 *)System_Tuple<TextWriter,_string>_TypeInfo);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Tuple<Vector3,_Vector3>_TypeInfo);
    FUN_05750c4c(uVar5,uVar3,uVar4,*(undefined8 *)System_Tuple<Vector3,_float>_TypeInfo);
    puVar1 = System_Tuple<TextReader,_Memory<char>>_TypeInfo;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  }
  return;
}



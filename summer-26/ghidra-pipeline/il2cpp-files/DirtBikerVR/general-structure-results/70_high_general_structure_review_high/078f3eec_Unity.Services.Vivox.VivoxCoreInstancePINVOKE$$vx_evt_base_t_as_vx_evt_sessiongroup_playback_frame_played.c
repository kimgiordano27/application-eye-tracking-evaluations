/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_sessiongroup_playback_frame_played
ENTRY_POINT: 078f3eec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_sessiongroup_playback_frame_played
               (void)

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
  long *unaff_x20;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_078efde4(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe));
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
                    /* try { // try from 078f3f2c to 079f3f33 has its CatchHandler @ 078f3fa4 */
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 078f3f40 to 079f3f5f has its CatchHandler @ 078f3fa8 */
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_078f3f9c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_078f3f9c:
  lVar6 = (*(code *)*puVar2)();
  if (lVar6 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4400(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar3 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)
                            UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



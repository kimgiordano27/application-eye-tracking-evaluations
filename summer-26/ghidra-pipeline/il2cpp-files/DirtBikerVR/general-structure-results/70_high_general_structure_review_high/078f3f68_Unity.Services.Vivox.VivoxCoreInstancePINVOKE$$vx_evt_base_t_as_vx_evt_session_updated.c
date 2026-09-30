/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_session_updated
ENTRY_POINT: 078f3f68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_session_updated(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *unaff_x19;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  puVar2 = (undefined8 *)FUN_03ac43c4();
                    /* catch() { ... } // from try @ 078f3eb4 with catch @ 078f3f9c */
                    /* catch() { ... } // from try @ 078f3e50 with catch @ 078f3fa0 */
                    /* catch() { ... } // from try @ 078f3f2c with catch @ 078f3fa4 */
                    /* catch() { ... } // from try @ 078f3f40 with catch @ 078f3fa8 */
                    /* catch() { ... } // from try @ 078f3e88 with catch @ 078f3fac */
                    /* catch() { ... } // from try @ 078f3e0c with catch @ 078f3fb0 */
                    /* catch() { ... } // from try @ 078f3df8 with catch @ 078f3fb4 */
                    /* catch() { ... } // from try @ 078f3f8c with catch @ 078f3fb8 */
  lVar3 = (*(code *)*puVar2)();
                    /* catch() { ... } // from try @ 078f3f88 with catch @ 078f3fbc */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 078f3f84 with catch @ 078f3fc0 */
                    /* catch() { ... } // from try @ 078f3f80 with catch @ 078f3fc4 */
                    /* catch() { ... } // from try @ 078f3ee0 with catch @ 078f3fc8 */
                    /* catch() { ... } // from try @ 078f3ec8 with catch @ 078f3fcc */
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
                    /* catch() { ... } // from try @ 078f3f7c with catch @ 078f3fd0 */
                    /* catch() { ... } // from try @ 078f3e24 with catch @ 078f3fd4
                       catch() { ... } // from try @ 078f3f78 with catch @ 078f3fd4 */
                    /* catch() { ... } // from try @ 078f3db4 with catch @ 078f3fd8
                       catch() { ... } // from try @ 078f3f94 with catch @ 078f3fd8 */
                    /* catch() { ... } // from try @ 078f3d34 with catch @ 078f3fdc
                       catch() { ... } // from try @ 078f3f90 with catch @ 078f3fdc */
    uVar4 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4400(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar5 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)
                            UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
      uVar6 = FUN_0471a930(uVar5,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)System_Tuple<TextWriter,_string>_TypeInfo);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)System_Tuple<Vector3,_Vector3>_TypeInfo);
      FUN_05750c4c(uVar7,uVar5,uVar6,*(undefined8 *)System_Tuple<Vector3,_float>_TypeInfo);
      puVar1 = System_Tuple<TextReader,_Memory<char>>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



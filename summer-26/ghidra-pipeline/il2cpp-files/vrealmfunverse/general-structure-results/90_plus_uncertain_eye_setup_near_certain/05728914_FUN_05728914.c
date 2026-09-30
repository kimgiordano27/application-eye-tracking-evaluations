/*
FUNCTION_NAME: FUN_05728914
ENTRY_POINT: 05728914
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_05728914(long param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long local_38;
  
  if ((DAT_066d2401 & 1) == 0) {
    FUN_02b3c81c(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<Color>__ctor__);
    DAT_066d2401 = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<Color>__ctor__;
  puVar4 = 
  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__;
  local_38 = 0;
                    /* try { // try from 05728964 to 0582896b has its CatchHandler @ 05728a80 */
  if (param_1 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar3 = thunk_FUN_02b79644();
    uVar2 = thunk_FUN_02ba3594(PTR_DAT_0631f580);
    FUN_04cee07c(uVar3,uVar2,0);
  }
  else {
                    /* try { // try from 0572896c to 05828a17 has its CatchHandler @ 057287c0 */
    if ((*(byte *)(param_1 + 0xa0) >> 5 & 1) != 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05728a20 with catch @ 05728a7c
                        */
      uVar2 = thunk_FUN_02ba3594(Method_System_Collections_Generic_List<Collision>_Clear__);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05728964 with catch @ 05728a80
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05728a1c with catch @ 05728a84
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05728904 with catch @ 05728a88
                        */
      uVar2 = FUN_04c00984(uVar2,param_1,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0572889c with catch @ 05728a8c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05728a18 with catch @ 05728a90
                       catch(type#1 @ 05fbf508) { ... } // from try @ 05728a24 with catch @ 05728a90
                        */
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar3 = thunk_FUN_02b79644();
                    /* try { // try from 05728aac to 05828aaf has its CatchHandler @ 05728abc */
      FUN_04d7b3f4(uVar3,uVar2,0);
      uVar2 = thunk_FUN_02ba3594(Method_System_Collections_Generic_List<Color>__ctor__);
                    /* catch() { ... } // from try @ 05728aac with catch @ 05728abc */
                    /* try { // try from 05728ac0 to 05828ac7 has its CatchHandler @ 05728ad0 */
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,uVar2);
    }
    if (param_2 < 1) {
                    /* try { // try from 05728ac8 to 05828ad3 has its CatchHandler @ 057287c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05728ac0 with catch @ 05728ad0
                        */
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar3 = thunk_FUN_02b79644();
      puVar4 = Method_System_Collections_Generic_List<Color>_Add__;
    }
    else if (param_3 < 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar3 = thunk_FUN_02b79644();
      puVar4 = Method_System_Collections_Generic_List<Color>_Clear__;
    }
    else {
      if (-1 < param_4) {
        *(long *)(param_1 + 0x78) = param_1;
        thunk_FUN_02bb0e9c(param_1 + 0x78,param_1);
        uVar2 = FUN_02b3c908(*(undefined8 *)puVar4,param_2);
        *(undefined8 *)(param_1 + 0x150) = uVar2;
        thunk_FUN_02bb0e9c(param_1 + 0x150,uVar2);
        if (param_3 != 0) {
          uVar2 = FUN_02b3c908(*(undefined8 *)puVar1,param_3);
          *(undefined8 *)(param_1 + 0x140) = uVar2;
          thunk_FUN_02bb0e9c(param_1 + 0x140,uVar2);
          uVar2 = FUN_02b3c908(*(undefined8 *)puVar4,param_3);
          *(undefined8 *)(param_1 + 0x148) = uVar2;
          thunk_FUN_02bb0e9c(param_1 + 0x148,uVar2);
        }
        if (param_4 != 0) {
          uVar2 = FUN_02b3c908(*(undefined8 *)puVar1,param_4);
          *(undefined8 *)(param_1 + 0x138) = uVar2;
          thunk_FUN_02bb0e9c(param_1 + 0x138,uVar2);
        }
        local_38 = param_1;
        thunk_FUN_02bb0e9c(&local_38,param_1);
        return local_38;
      }
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar3 = thunk_FUN_02b79644();
      puVar4 = Method_System_Collections_Generic_List<Color>_get_Count__;
    }
    uVar2 = thunk_FUN_02ba3594(puVar4);
    FUN_04cf60a0(uVar3,uVar2,0);
  }
  uVar2 = thunk_FUN_02ba3594(Method_System_Collections_Generic_List<Color>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar3,uVar2);
}



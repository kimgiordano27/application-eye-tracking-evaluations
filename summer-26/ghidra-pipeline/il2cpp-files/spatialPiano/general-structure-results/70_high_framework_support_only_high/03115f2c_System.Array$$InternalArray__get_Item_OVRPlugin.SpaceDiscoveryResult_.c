/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03115f2c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115f08 with catch @ 03115f2c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115ef0 with catch @ 03115f30
                        */
                    /* try { // try from 03115f4c to 03215f4f has its CatchHandler @ 03115f68 */
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
                    /* try { // try from 03115f50 to 03215f6b has its CatchHandler @ 03115e8c */
  uVar1 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
  if (param_3 < uVar1) {
                    /* catch() { ... } // from try @ 03115f4c with catch @ 03115f68 */
                    /* try { // try from 03115f6c to 03215f73 has its CatchHandler @ 03115f7c */
                    /* try { // try from 03115f74 to 03215f7f has its CatchHandler @ 03115e8c */
    memcpy(&stack0x00000000,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20),
           (ulong)*(uint *)(*param_2 + 0x104));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03115f6c with catch @ 03115f7c
                        */
                    /* try { // try from 03115f80 to 03215fbb has its CatchHandler @ 03115f80
                       catch() { ... } // from try @ 03115f80 with catch @ 03115f80
                       catch() { ... } // from try @ 031160f8 with catch @ 03115f80
                       catch() { ... } // from try @ 0311615c with catch @ 03115f80
                       catch() { ... } // from try @ 031161bc with catch @ 03115f80 */
    param_1[1] = uStack0000000000000008;
    *param_1 = uStack0000000000000000;
    param_1[3] = uStack0000000000000018;
    param_1[2] = uStack0000000000000010;
    return;
  }
  thunk_FUN_02f6ef30(&DAT_068ea508);
  uVar2 = thunk_FUN_02f45270();
  uVar3 = thunk_FUN_02f6ef30(&DAT_0695e338);
                    /* try { // try from 03115fbc to 03215fc3 has its CatchHandler @ 03116128 */
  FUN_05056bc4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar2,param_4);
}



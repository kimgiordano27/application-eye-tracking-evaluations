/*
FUNCTION_NAME: FUN_016818d8
ENTRY_POINT: 016818d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_016818d8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 01681860 with catch @ 016818e4
                       catch() { ... } // from try @ 016818d4 with catch @ 016818e4 */
                    /* try { // try from 016818e8 to 017818eb has its CatchHandler @ 016818f4 */
                    /* try { // try from 016818ec to 017818f7 has its CatchHandler @ 016816b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 016818e8 with catch @ 016818f4
                        */
  if ((DAT_03778487 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Quaternion>_Add__);
    DAT_03778487 = 1;
  }
  if ((param_4 < 1) || (param_2 < 1)) {
                    /* try { // try from 01681978 to 01781af3 has its CatchHandler @ 01681978
                       catch() { ... } // from try @ 01681978 with catch @ 01681978
                       catch() { ... } // from try @ 01681d98 with catch @ 01681978
                       catch() { ... } // from try @ 01681e04 with catch @ 01681978
                       catch() { ... } // from try @ 01681e90 with catch @ 01681978
                       catch() { ... } // from try @ 01681f10 with catch @ 01681978 */
    puVar1 = PTR_DAT_033f5398;
    if (0 < param_2) {
      puVar1 = StringLiteral_2667;
    }
    uVar4 = thunk_FUN_00d48444(puVar1);
    uVar5 = thunk_FUN_00d48444(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    uVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016efd4c(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_146__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar4);
  }
  if (param_3 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyToObject__);
    FUN_016ec5b8(uVar4,uVar5,0);
    uVar5 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_146__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Collections_Generic_List<Quaternion>_Add__
                            );
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(long *)(lVar2 + 0x10) = param_4;
    *(long *)(lVar2 + 0x18) = param_3;
    *(undefined4 *)(lVar2 + 0x20) = 1;
    FUN_01681284(param_1,lVar2,param_2,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: FUN_0208b7d0
ENTRY_POINT: 0208b7d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0208b7d0(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
                    /* try { // try from 0208b7f8 to 0218b7fb has its CatchHandler @ 0208b818 */
  if ((DAT_0482f75c & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Color,_float,_Color>__ctor__
                      );
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0208b7f8 with catch @ 0208b818
                        */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Matrix4x4,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
                    /* try { // try from 0208b82c to 0218b9e3 has its CatchHandler @ 0208b82c
                       catch() { ... } // from try @ 0208b82c with catch @ 0208b82c
                       catch() { ... } // from try @ 0208b9e8 with catch @ 0208b82c
                       catch() { ... } // from try @ 0208ba14 with catch @ 0208b82c */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Matrix4x4,_Matrix4x4>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Vector4,_Vector4>__ctor__
                      );
    DAT_0482f75c = 1;
  }
  puVar3 = Method_Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Vector4,_Vector4>__ctor__;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Matrix4x4,_bool>__ctor__;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  local_68 = 0;
  if ((param_3 & 1) == 0) {
    local_80 = param_2[2];
    uStack_88 = param_2[1];
    local_90 = *param_2;
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Matrix4x4,_Matrix4x4>__ctor__
                               ,&local_90);
    FUN_03406290(*(undefined8 *)puVar3,uVar6,0);
    FUN_0208b5e0();
  }
  else {
    FUN_037bdc7c(&local_90,param_2,0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = FUN_023aaa3c(local_90 & 0xffffffff,local_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_
                         ,local_80 & 0xffffffff,local_80._4_4_,local_78,uVar6,*(undefined8 *)puVar2)
    ;
    FUN_037be198(param_2,lVar4,0);
    if (lVar4 == 0) {
LAB_0208b97c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = FUN_022c6ae8(lVar4,&local_68,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<Color,_float,_Color>__ctor__
                        );
    if ((uVar5 & 1) != 0) {
      if ((local_68 == 0) || (*(long *)(local_68 + 0x48) == 0)) goto LAB_0208b97c;
      FUN_04073314(*(long *)(local_68 + 0x48),1,0);
    }
  }
  return;
}



/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 0170f110
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    plVar2 = *(long **)(param_1 + 0x78);
    if (plVar2 == (long *)0x0) goto LAB_0170f184;
    param_2 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
  }
  lVar3 = FUN_0170f0bc(param_1);
  if (lVar3 != 0) {
    uVar1 = param_2 - 1;
    if (((int)uVar1 < 0) || (*(int *)(lVar3 + 0x18) <= (int)uVar1)) {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar4 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar5 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_high_s16__);
      uVar6 = thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<OverlayCanvas>__);
      FUN_016efd4c(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Item__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,uVar5);
    }
    lVar3 = *(long *)(param_1 + 0x120);
    if (lVar3 != 0) {
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        return *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_0170f184:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



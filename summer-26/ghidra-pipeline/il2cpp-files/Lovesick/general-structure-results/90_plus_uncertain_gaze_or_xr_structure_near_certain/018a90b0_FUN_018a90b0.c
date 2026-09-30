/*
FUNCTION_NAME: FUN_018a90b0
ENTRY_POINT: 018a90b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_018a90b0(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  long *local_38;
  undefined *puVar7;
  
  puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_68__;
  local_38 = param_3;
  if ((DAT_0377988d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<List<STMTextInfo>>>_get_Count__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_68__);
    DAT_0377988d = 1;
  }
  FUN_01865608(param_2,*(undefined8 *)puVar7,0);
  if (param_2 == (long *)0x0) {
LAB_018a91d4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar2 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  if (iVar2 == 4) {
    lVar8 = *(long *)Method_System_Collections_Generic_List<List<List<STMTextInfo>>>_get_Count__;
    bVar1 = *(byte *)(lVar8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2);
    }
    if (param_3 != (long *)0x0) {
      if ((*(byte *)(*param_3 + 300) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_3);
      }
      uVar3 = thunk_FUN_015fe514(param_2[0xc],param_3[0xc],0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_018a91d4;
    uVar3 = FUN_018a92cc(*(long *)(param_1 + 0x58),param_2[0xc],&local_38);
    if ((uVar3 & 1) == 0) {
      return;
    }
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar4 = FUN_01731954(0);
    FUN_00ac2be8(param_2);
    lVar8 = param_2[0xc];
    uVar5 = thunk_FUN_00d93c64(param_1,0);
    puVar7 = 
    Method_UnityEngine_XR_Interaction_Toolkit_BaseTeleportationInteractable_<>c_<_ctor>b__45_0__;
  }
  else {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar4 = FUN_01731954(0);
    FUN_00ac2be8(param_2);
    lVar8 = thunk_FUN_00d93c64(param_2,0);
    uVar5 = thunk_FUN_00d93c64(param_1,0);
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<byte[]>>_Create__
    ;
  }
  uVar6 = thunk_FUN_00d48444(puVar7);
  uVar4 = FUN_018652e8(uVar6,uVar4,lVar8,uVar5,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar5,uVar4,0);
  uVar4 = thunk_FUN_00d48444(
                            System_Linq_Expressions_Interpreter_LoadLocalFromClosureBoxedInstruction_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar4);
}



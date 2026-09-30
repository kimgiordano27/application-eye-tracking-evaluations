/*
FUNCTION_NAME: FUN_030f8888
ENTRY_POINT: 030f8888
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_030f8888(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_44 [4];
  undefined4 local_38;
  undefined1 local_34 [4];
  
  puVar3 = 
  System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TypeInfo;
  if ((DAT_0412ba04 & 1) == 0) {
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<VRMirrorVisibility,_NativeArray<byte>>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03ccfa10);
    FUN_01ab69ac(PTR_DAT_03cbeb20);
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    DAT_0412ba04 = 1;
  }
  iVar4 = FUN_02145104(param_2,*(undefined8 *)puVar3);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (iVar4 == 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_02144748(param_2,*(undefined8 *)
                                  System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_TypeInfo
                        );
    local_38 = FUN_02145104(param_2,*(undefined8 *)puVar3);
    uVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03ccfa10,&local_38);
    FUN_02144ffc(param_2,local_34,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    local_44[0] = local_34[0];
    uVar6 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,local_44);
    uVar7 = FUN_025be8b0(*(undefined8 *)
                          System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                         ,uVar7,uVar5,uVar6,0);
  }
  if (lVar1 != 0) {
    FUN_02142954(lVar1,uVar2,iVar4 == 1,uVar7,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<VRMirrorVisibility,_NativeArray<byte>>_TypeInfo
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



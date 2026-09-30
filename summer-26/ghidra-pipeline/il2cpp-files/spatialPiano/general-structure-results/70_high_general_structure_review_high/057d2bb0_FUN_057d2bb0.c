/*
FUNCTION_NAME: FUN_057d2bb0
ENTRY_POINT: 057d2bb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


undefined8 FUN_057d2bb0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_067c9070;
  if ((DAT_06bc0c5e & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9b80);
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Unity_Collections_NativeArray<Pose>_TypeInfo);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    DAT_06bc0c5e = 1;
  }
  lVar4 = FUN_02f0880c(*(undefined8 *)puVar1,2);
  puVar1 = Unity_Collections_NativeArray<Pose>_TypeInfo;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = param_1;
      local_48 = *(undefined8 *)puVar1;
      uStack_40 = 0xffffffffffffffff;
      local_38 = param_2;
      uVar5 = FUN_0510aa48(&local_48,0);
      puVar3 = 
      Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
      ;
      puVar1 = 
      Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        puVar2 = PTR_DAT_067c9b80;
        uVar5 = FUN_0581c1a8(*(undefined8 *)puVar3,lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar1);
        }
        uVar5 = FUN_057d2ef8(uVar5,param_3);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_050d5404(uVar6,uVar5,0);
        return uVar6;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



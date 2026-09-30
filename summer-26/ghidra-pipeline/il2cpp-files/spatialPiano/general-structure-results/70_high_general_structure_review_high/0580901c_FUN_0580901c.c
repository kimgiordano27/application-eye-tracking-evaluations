/*
FUNCTION_NAME: FUN_0580901c
ENTRY_POINT: 0580901c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


undefined8 FUN_0580901c(long param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_06bc0de5 & 1) == 0) {
    FUN_02f08768(
                System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                );
    DAT_06bc0de5 = 1;
  }
  if (*(char *)(param_1 + 0x55) != '\0') {
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    if (2 < iVar2) {
      if (iVar2 == 10) {
        FUN_05808858(param_1,param_2);
        uVar4 = FUN_05808b38(param_1,param_2);
        return uVar4;
      }
      if (iVar2 == 0x11) {
        FUN_05808858(param_1,param_2);
        uVar4 = FUN_058089a0(param_1,param_2);
        return uVar4;
      }
LAB_05809178:
      thunk_FUN_02f6ef30(PTR_DAT_067c9678);
      uVar4 = thunk_FUN_02f45270();
      uVar5 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<SerializableGuid,_LoadAllSharedAnchors_LoadRequest>_get_Current__
                                );
      FUN_05056bc4(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<SerializableGuid,_SingleEraseAnchor_EraseRequest>_MoveNext__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,uVar5);
    }
    if (iVar2 == 1) {
      FUN_05808858(param_1,param_2);
      plVar3 = *(long **)(param_1 + 0x10);
    }
    else {
      if (iVar2 != 2) goto LAB_05809178;
      FUN_05808858(param_1,param_2);
      plVar3 = *(long **)(param_1 + 0x18);
    }
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      bVar1 = *(byte *)(*(long *)
                         System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                       + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
      lVar6 = (**(code **)(lVar6 + 0x228))(plVar3,*(undefined8 *)(lVar6 + 0x230));
      if ((lVar6 != 0) && (plVar3 = (long *)FUN_057f3f9c(lVar6,param_2), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0580916c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



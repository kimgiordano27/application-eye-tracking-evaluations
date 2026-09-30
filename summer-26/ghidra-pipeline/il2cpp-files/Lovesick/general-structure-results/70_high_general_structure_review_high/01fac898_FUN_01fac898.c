/*
FUNCTION_NAME: FUN_01fac898
ENTRY_POINT: 01fac898
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_01fac898(long param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((DAT_03780609 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Convert_FromBase64_ComputeResultLength__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(StringLiteral_7841);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_OVRSceneAnchor>_set_Item__
                      );
    thunk_FUN_00d48444(Method_System_Data_Common_BigIntegerStorage_ConvertFromBigInteger__);
    thunk_FUN_00d48444(System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_DeserializeMember<Font>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ManifestEntity>_get_Current__
                      );
    thunk_FUN_00d48444(Method_Messenger<Grabbable>_Broadcast__);
    DAT_03780609 = 1;
  }
  if ((param_3 == (long *)0x0) || (param_3[2] == 0)) {
LAB_01faccf4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(param_3[2] + 0x10) == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_01faccf4;
  plVar3 = (long *)FUN_01ec1550(param_2,param_3,0);
  if (plVar3 == (long *)0x0) {
    FUN_01ec0fec(param_2,param_3,param_4,0);
    return;
  }
  if (plVar3 == param_4) {
    return;
  }
  uVar9 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<Guid,_OVRSceneAnchor>_set_Item__;
  if (param_4 == (long *)0x0) goto LAB_01faccc0;
  lVar7 = *param_4;
  bVar1 = *(byte *)(lVar7 + 300);
  bVar2 = *(byte *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__ + 300
                   );
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__)) {
    bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_033f19d8)) {
        bVar2 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                           + 300);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
             )) {
            bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo + 300);
            if ((bVar1 < bVar2) ||
               (puVar8 = (undefined8 *)
                         Method_System_Data_Common_BigIntegerStorage_ConvertFromBigInteger__,
               *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
               *(long *)OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo)) {
              bVar2 = *(byte *)(*(long *)Method_System_Convert_FromBase64_ComputeResultLength__ +
                               300);
              if ((bVar1 < bVar2) ||
                 (puVar8 = (undefined8 *)
                           Method_FullSerializer_fsBaseConverter_DeserializeMember<Font>__,
                 *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)Method_System_Convert_FromBase64_ComputeResultLength__))
              goto LAB_01faccc0;
            }
            goto LAB_01faccbc;
          }
          uVar5 = FUN_01facf48(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)Method_Messenger<Grabbable>_Broadcast__;
        }
        else {
          uVar5 = FUN_01face20(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
        }
      }
      else {
        uVar5 = FUN_01face20(plVar3,plVar3,param_4,param_2);
        puVar8 = (undefined8 *)System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_TypeInfo;
      }
joined_r0x01facc6c:
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) goto LAB_01faccf4;
      uVar9 = (**(code **)(*plVar4 + 0x198))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1a0));
      uVar5 = FUN_01f5dcc0(uVar9,*(undefined8 *)(param_1 + 0x38),0);
      puVar8 = (undefined8 *)
               Method_System_Collections_Generic_List_Enumerator<ManifestEntity>_get_Current__;
      if ((uVar5 & 1) != 0) {
        lVar7 = FUN_01e6fe58(0);
        if ((lVar7 == 0) || (lVar7 = FUN_01eb7fd8(lVar7,0), lVar7 == 0)) goto LAB_01faccf4;
        plVar4 = (long *)FUN_01ec1550(lVar7,param_3,0);
        puVar8 = (undefined8 *)
                 Method_System_Collections_Generic_List_Enumerator<ManifestEntity>_get_Current__;
        goto joined_r0x01facbe4;
      }
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_01faccf4;
    uVar9 = (**(code **)(*plVar4 + 0x198))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1a0));
    uVar5 = FUN_01f5dcc0(uVar9,*(undefined8 *)(param_1 + 0x38),0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_01faccf8(uVar5,plVar3,param_4,param_2);
      puVar8 = (undefined8 *)StringLiteral_7841;
      goto joined_r0x01facc6c;
    }
    lVar7 = FUN_01e6fe58(0);
    if ((lVar7 == 0) || (lVar7 = FUN_01eb8044(lVar7,0), lVar7 == 0)) goto LAB_01faccf4;
    plVar4 = (long *)FUN_01ec1550(lVar7,param_3,0);
    puVar8 = (undefined8 *)StringLiteral_7841;
joined_r0x01facbe4:
    if (plVar3 == plVar4) {
      FUN_01ec1088(param_2,param_3,param_4,0);
      return;
    }
    if (plVar4 == param_4) {
      return;
    }
  }
LAB_01faccbc:
  uVar9 = *puVar8;
LAB_01faccc0:
  uVar6 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
  FUN_01fad05c(param_1,uVar9,uVar6,param_4);
  return;
}



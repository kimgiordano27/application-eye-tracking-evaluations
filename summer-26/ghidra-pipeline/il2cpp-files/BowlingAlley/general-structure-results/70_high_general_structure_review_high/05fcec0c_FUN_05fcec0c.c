/*
FUNCTION_NAME: FUN_05fcec0c
ENTRY_POINT: 05fcec0c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


long FUN_05fcec0c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 05fcea8c with catch @ 05fcec0c */
  puVar2 = PTR_DAT_07283280;
  if ((DAT_076dce61 & 1) == 0) {
    thunk_FUN_032e1da0(OVRSemanticLabels_var);
    thunk_FUN_032e1da0(OVRSharable_var);
    thunk_FUN_032e1da0(OVRStorable_var);
    thunk_FUN_032e1da0(OVRTriangleMesh_var);
    thunk_FUN_032e1da0(System_Runtime_Remoting_ObjRef_var);
    thunk_FUN_032e1da0(object_var);
    thunk_FUN_032e1da0(UnityEngine_Object_var);
    thunk_FUN_032e1da0(UnityEngine_Rendering_ObjectParameter<T>_var);
    thunk_FUN_032e1da0(System_ObsoleteAttribute_var);
    thunk_FUN_032e1da0(System_Runtime_Serialization_OnDeserializedAttribute_var);
    thunk_FUN_032e1da0(System_Runtime_Serialization_OnDeserializingAttribute_var);
    thunk_FUN_032e1da0(Newtonsoft_Json_Serialization_OnErrorAttribute_var);
    thunk_FUN_032e1da0(System_Runtime_Serialization_OnSerializedAttribute_var);
    thunk_FUN_032e1da0(System_Runtime_Serialization_OnSerializingAttribute_var);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_Composites_OneModifierComposite_var);
    thunk_FUN_032e1da0(System_Runtime_Remoting_Messaging_OneWayAttribute_var);
    thunk_FUN_032e1da0(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var);
    thunk_FUN_032e1da0(System_Runtime_InteropServices_OptionalAttribute_var);
    thunk_FUN_032e1da0(System_Runtime_Serialization_OptionalFieldAttribute_var);
    thunk_FUN_032e1da0(System_OrdinalComparer_var);
    thunk_FUN_032e1da0(System_Runtime_InteropServices_OutAttribute_var);
    thunk_FUN_032e1da0(System_OutOfMemoryException_var);
    thunk_FUN_032e1da0(ReadyPlayerMe_Core_OutfitGender_var);
    thunk_FUN_032e1da0(Oculus_Avatar2_OvrAvatarSocket_var);
    thunk_FUN_032e1da0(UnityEngine_UIElements_PanelEventHandler_var);
    thunk_FUN_032e1da0(PTR_DAT_07283278);
    thunk_FUN_032e1da0(PTR_DAT_07283280);
    DAT_076dce61 = 1;
  }
  puVar1 = PTR_DAT_07283278;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_05fe3e74(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  iVar3 = FUN_05fe3d80(uVar4,0);
  puVar2 = UnityEngine_Rendering_ObjectParameter<T>_var;
  if ((param_2 & 1) == 0) {
    switch(iVar3 + -3) {
    case 0:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) + 8)
      ;
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)OVRSemanticLabels_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar6;
      break;
    case 1:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x20);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_Runtime_Remoting_ObjRef_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar5 = lVar6;
      break;
    case 2:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x10);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar5 = lVar6;
      break;
    case 3:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x38);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)OVRStorable_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *plVar5 = lVar6;
      break;
    case 4:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x18);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Runtime_Serialization_OnDeserializedAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar5 = lVar6;
      break;
    case 5:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x40);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_Runtime_InteropServices_OutAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
      *plVar5 = lVar6;
      break;
    case 6:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x28);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)Newtonsoft_Json_Serialization_OnErrorAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      *plVar5 = lVar6;
      break;
    case 7:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x48);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)ReadyPlayerMe_Core_OutfitGender_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
      *plVar5 = lVar6;
      break;
    case 8:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x30);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Runtime_Serialization_OnSerializingAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      *plVar5 = lVar6;
      break;
    case 9:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x50);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_UIElements_PanelEventHandler_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
      *plVar5 = lVar6;
      break;
    case 10:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x58);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Runtime_Serialization_OptionalFieldAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
      *plVar5 = lVar6;
      break;
    case 0xb:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x60);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_Object_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
      *plVar5 = lVar6;
      break;
    default:
      if (**(long **)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) != 0) {
        return **(long **)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8);
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_InputSystem_Composites_OneModifierComposite_var);
      FUN_05fa8738(lVar6,0);
      **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
      plVar5 = *(long **)(*(long *)puVar2 + 0xb8);
    }
  }
  else {
    switch(iVar3 + -3) {
    case 0:
      lVar6 = FUN_05fa7784(param_1,0);
      return lVar6;
    case 1:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x78);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)OVRTriangleMesh_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
      *plVar5 = lVar6;
      break;
    case 2:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x68);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Runtime_Remoting_Messaging_OneWayAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
      *plVar5 = lVar6;
      break;
    case 3:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x90);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)OVRSharable_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
      *plVar5 = lVar6;
      break;
    case 4:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x70);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_ObsoleteAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
      *plVar5 = lVar6;
      break;
    case 5:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x98);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_OrdinalComparer_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
      *plVar5 = lVar6;
      break;
    case 6:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x80);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Runtime_Serialization_OnDeserializingAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
      *plVar5 = lVar6;
      break;
    case 7:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0xa0);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_OutOfMemoryException_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
      *plVar5 = lVar6;
      break;
    case 8:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0x88);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Runtime_Serialization_OnSerializedAttribute_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
      *plVar5 = lVar6;
      break;
    case 9:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0xa8);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)Oculus_Avatar2_OvrAvatarSocket_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
      *plVar5 = lVar6;
      break;
    case 10:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0xb0);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_Runtime_InteropServices_OptionalAttribute_var
                                );
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0);
      *plVar5 = lVar6;
      break;
    default:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_Rendering_ObjectParameter<T>_var + 0xb8) +
                       0xb8);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)object_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
      *plVar5 = lVar6;
    }
  }
  thunk_FUN_0333a630(plVar5,lVar6);
  return lVar6;
}



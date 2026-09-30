/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimming
ENTRY_POINT: 033a0834
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimming(void)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *plVar5;
  
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__);
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
              );
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__);
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<KeyDownEvent>_SetCreateFunction__);
  FUN_01c5d288(Oculus_Platform_Models_InstalledApplicationList_TypeInfo);
  *(undefined1 *)(unaff_x26 + 0x6da) = 1;
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033a094c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x288))();
      return;
    }
    goto LAB_033a0dd8;
  }
  if ((((unaff_x24 == 0) || (plVar5 = *(long **)(unaff_x24 + 0x78), plVar5 == (long *)0x0)) &&
      ((unaff_x21 == 0 || (plVar5 = *(long **)(unaff_x21 + 0xd0), plVar5 == (long *)0x0)))) &&
     ((unaff_x22 == 0 || (plVar5 = *(long **)(unaff_x22 + 0xa0), plVar5 == (long *)0x0)))) {
    if (unaff_x20 == (long *)0x0) goto LAB_033a0dd8;
    plVar5 = (long *)unaff_x20[0xe];
    if (plVar5 != (long *)0x0) goto LAB_033a08dc;
    if (*(long *)(unaff_x25 + 0x20) == 0) goto LAB_033a0dd8;
    plVar5 = (long *)FUN_0335fe0c(*(long *)(unaff_x25 + 0x20),unaff_x20[0xc],0);
    if ((plVar5 != (long *)0x0) || (plVar5 = (long *)unaff_x20[0xf], plVar5 != (long *)0x0))
    goto LAB_033a08dc;
  }
  else {
LAB_033a08dc:
    uVar2 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      FUN_033a15ac();
      return;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_033a0dd8;
  }
  switch(*(undefined4 *)((long)unaff_x20 + 0x24)) {
  case 1:
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__))
    {
      FUN_033a1ac4();
      return;
    }
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
      if ((char)unaff_x20[0x19] == '\0') {
        lVar4 = thunk_FUN_01c495e4();
        if (lVar4 != 0) {
          FUN_033a2208();
          return;
        }
        goto LAB_033a0dec;
      }
      bVar1 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*unaff_x23 + 0x130)) &&
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) {
        FUN_033a28f0();
        return;
      }
      goto LAB_033a0de4;
    }
    break;
  case 3:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__)) {
      FUN_033a0f98();
      return;
    }
    break;
  case 4:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<KeyDownEvent>_SetCreateFunction__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<KeyDownEvent>_SetCreateFunction__)) {
      FUN_033a2ae4();
      return;
    }
    break;
  case 5:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
      lVar4 = thunk_FUN_01c495e4();
      if (lVar4 == 0) {
        OVRPlugin_Sizei___cctor();
      }
      if (unaff_x25 != 0) {
        FUN_033a2b64();
        return;
      }
LAB_033a0dd8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    break;
  case 6:
    lVar4 = thunk_FUN_01c495e4();
    if (lVar4 == 0) {
LAB_033a0dec:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__)) {
      FUN_033a3410();
      return;
    }
    break;
  case 7:
    lVar4 = thunk_FUN_01c495e4();
    if (lVar4 == 0) goto LAB_033a0dec;
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__ + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__)) {
      FUN_033a3ba0();
      return;
    }
    break;
  case 8:
    plVar5 = *(long **)(unaff_x25 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_033a0dd8;
    uVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
    FUN_02355b80(uVar3,*(undefined8 *)
                        Method_System_Collections_Generic_HashSet<RTHandle>_get_Count__);
    lVar4 = *unaff_x23;
    bVar1 = *(byte *)(*(long *)PTR_DAT_042307f8 + 0x130);
    if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_042307f8)) {
                    /* WARNING: Could not recover jumptable at 0x033a0d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x248))();
      return;
    }
LAB_033a0de4:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  default:
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}



/*
FUNCTION_NAME: FUN_0351bba0
ENTRY_POINT: 0351bba0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_1;telemetry_or_network_hits_8
*/


void FUN_0351bba0(long param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_04833015 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_17__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_1__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_AllocatorManager_Managed_UnregisterDelegate__);
    DAT_04833015 = 1;
  }
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  if (0xd < param_3) {
    if (param_3 == 0xe) goto switchD_0351bc40_caseD_3;
    if (param_3 == 0x16) {
      plVar8 = (long *)(param_1 + 0x40);
      lVar5 = *plVar8;
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
        if ((int)*(long *)(lVar5 + 0x18) == 0) goto LAB_0351bed4;
        uVar4 = FUN_0340eec4(*(undefined8 *)(lVar5 + 0x20),0);
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
      lVar5 = *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x40) = lVar5;
      goto FUN_0351be1c;
    }
    if (param_3 == 0x17) goto switchD_0351bc40_caseD_6;
    goto switchD_0351bc40_caseD_5;
  }
  switch(param_3) {
  case 1:
    lVar5 = *(long *)(param_1 + 0x40);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
      if ((int)*(long *)(lVar5 + 0x18) == 0) goto LAB_0351bed4;
      uVar4 = FUN_0340eec4(*(undefined8 *)(lVar5 + 0x20),0);
      if ((uVar4 & 1) == 0) {
        return;
      }
    }
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,1);
    if (lVar5 == 0) goto LAB_0351bed0;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0351bed4;
    *(undefined8 *)(lVar5 + 0x20) =
         *(undefined8 *)Method_Unity_Collections_AllocatorManager_Managed_UnregisterDelegate__;
    thunk_FUN_01f51358();
    *(long *)(param_1 + 0x40) = lVar5;
    goto LAB_0351be14;
  case 3:
switchD_0351bc40_caseD_3:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_04833019 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        );
      DAT_04833019 = '\x01';
    }
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar3;
    }
    if (**(char **)(lVar5 + 0xb8) != '\0') {
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider>__);
      uVar6 = thunk_FUN_01f117cc();
      FUN_0357b574(uVar6,0);
      uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_19__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar7);
    }
  case 5:
switchD_0351bc40_caseD_5:
    lVar5 = *(long *)(param_1 + 0x38);
    plVar8 = (long *)(param_1 + 0x40);
    *plVar8 = lVar5;
    break;
  case 4:
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,1);
    plVar8 = (long *)(param_1 + 0x40);
    *plVar8 = lVar5;
    thunk_FUN_01f51358(plVar8,lVar5);
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) goto LAB_0351bed0;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0351bed4;
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar5 == 0) goto LAB_0351bed0;
    lVar9 = *plVar8;
    if (*(int *)(lVar5 + 0x10) == 4) {
      lVar5 = FUN_03410500(lVar5,2,2,0);
      if (lVar9 == 0) goto LAB_0351bed0;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0351bed4;
      plVar8 = (long *)(lVar9 + 0x20);
      *plVar8 = lVar5;
    }
    else {
      if (lVar9 == 0) goto LAB_0351bed0;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0351bed4;
      plVar8 = (long *)(lVar9 + 0x20);
      *plVar8 = lVar5;
    }
    break;
  case 6:
switchD_0351bc40_caseD_6:
    uVar4 = thunk_FUN_0340e318(param_2,*(undefined8 *)
                                        Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_1__,
                               0);
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,1);
    if (lVar5 == 0) goto LAB_0351bed0;
    if ((uVar4 & 1) == 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      puVar2 = (undefined8 *)Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_17__;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x18);
      puVar2 = (undefined8 *)Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_18__;
    }
    goto joined_r0x0351bdbc;
  default:
    if (param_3 != 0xd) goto switchD_0351bc40_caseD_5;
  case 2:
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,1);
    if (lVar5 == 0) {
LAB_0351bed0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    puVar2 = (undefined8 *)Method_Unity_Collections_AllocatorManager_Managed_UnregisterDelegate__;
joined_r0x0351bdbc:
    if (iVar1 == 0) {
LAB_0351bed4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar5 + 0x20) = *puVar2;
    thunk_FUN_01f51358();
    *(long *)(param_1 + 0x40) = lVar5;
LAB_0351be14:
    plVar8 = (long *)(param_1 + 0x40);
  }
FUN_0351be1c:
  thunk_FUN_01f51358(plVar8,lVar5);
  return;
}



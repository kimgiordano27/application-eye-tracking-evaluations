/*
FUNCTION_NAME: FUN_01884254
ENTRY_POINT: 01884254
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


void FUN_01884254(long param_1,long *param_2,long *param_3,long *param_4,long param_5,long param_6,
                 long param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_03779783 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f6ef8);
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_XDR_BuildAttribute_Type__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(PTR_DAT_033eae58);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo);
    thunk_FUN_00d48444(sbyte___var);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_Clipper_Execute__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_633);
    thunk_FUN_00d48444(Method_System_Text_UTF8Encoding_GetByteCount__);
    thunk_FUN_00d48444(FullSerializer_Internal_fsEnumConverter_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    DAT_03779783 = 1;
  }
  if (param_3 == (long *)0x0) {
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01884408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
      return;
    }
    goto LAB_01884894;
  }
  if ((((param_5 == 0) || (plVar7 = *(long **)(param_5 + 0x78), plVar7 == (long *)0x0)) &&
      ((param_7 == 0 || (plVar7 = *(long **)(param_7 + 0xd0), plVar7 == (long *)0x0)))) &&
     ((param_6 == 0 || (plVar7 = *(long **)(param_6 + 0xa0), plVar7 == (long *)0x0)))) {
    if (param_4 == (long *)0x0) goto LAB_01884894;
    plVar7 = (long *)param_4[0xe];
    if (plVar7 != (long *)0x0) goto LAB_01884398;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01884894;
    plVar7 = (long *)FUN_0180e798(*(long *)(param_1 + 0x20),param_4[0xc],0);
    if ((plVar7 != (long *)0x0) || (plVar7 = (long *)param_4[0xf], plVar7 != (long *)0x0))
    goto LAB_01884398;
  }
  else {
LAB_01884398:
    uVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if ((uVar4 & 1) != 0) {
      FUN_01885200(param_1,param_2,plVar7,param_3,param_4,param_6,param_7);
      return;
    }
    if (param_4 == (long *)0x0) goto LAB_01884894;
  }
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar2 = PTR_DAT_033f6ef8;
  switch(*(undefined4 *)((long)param_4 + 0x24)) {
  case 1:
    bVar1 = *(byte *)(*(long *)StringLiteral_633 + 300);
    if ((bVar1 <= *(byte *)(*param_4 + 300)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_633))
    {
      FUN_018856dc(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300);
    if ((bVar1 <= *(byte *)(*param_4 + 300)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
      if ((char)param_4[0x19] == '\0') {
        uVar5 = *(undefined8 *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
        lVar6 = thunk_FUN_00d6225c(param_3,uVar5);
        if (lVar6 != 0) {
          FUN_01885e78(param_1,param_2,lVar6,param_4,param_5,param_6,param_7);
          return;
        }
        goto LAB_018848a8;
      }
      bVar1 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo + 300
                       );
      if ((bVar1 <= *(byte *)(*param_3 + 300)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo)) {
        FUN_0188653c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        return;
      }
      goto LAB_018848a0;
    }
    break;
  case 3:
    bVar1 = *(byte *)(*(long *)Method_System_Text_UTF8Encoding_GetByteCount__ + 300);
    if ((bVar1 <= *(byte *)(*param_4 + 300)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Text_UTF8Encoding_GetByteCount__)) {
      FUN_01884ad8(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
    break;
  case 4:
    bVar1 = *(byte *)(*(long *)FullSerializer_Internal_fsEnumConverter_TypeInfo + 300);
    if ((bVar1 <= *(byte *)(*param_4 + 300)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)FullSerializer_Internal_fsEnumConverter_TypeInfo)) {
      FUN_018866f0(param_1,param_2,param_3,param_4);
      return;
    }
    break;
  case 5:
    bVar1 = *(byte *)(*(long *)sbyte___var + 300);
    if ((bVar1 <= *(byte *)(*param_4 + 300)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)sbyte___var)) {
      lVar6 = thunk_FUN_00d6225c(param_3,*(undefined8 *)
                                          System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
      if (lVar6 == 0) {
        lVar6 = FUN_0187467c(param_4,param_3,0);
      }
      if (param_1 != 0) {
        FUN_01886770(param_1,param_2,lVar6,param_4,param_5,param_6,param_7);
        return;
      }
LAB_01884894:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    break;
  case 6:
    uVar5 = *(undefined8 *)Method_System_Xml_Schema_XdrBuilder_XDR_BuildAttribute_Type__;
    lVar6 = thunk_FUN_00d6225c(param_3,uVar5);
    if (lVar6 == 0) {
LAB_018848a8:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_3,uVar5);
    }
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_Rendering_Universal_Clipper_Execute__ + 300);
    if ((bVar1 <= *(byte *)(*param_4 + 300)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_Rendering_Universal_Clipper_Execute__)) {
      FUN_01886fac(param_1,param_2,lVar6,param_4,param_5,param_6,param_7);
      return;
    }
    break;
  case 7:
    uVar5 = *(undefined8 *)PTR_DAT_033eae58;
    lVar6 = thunk_FUN_00d6225c(param_3,uVar5);
    if (lVar6 == 0) goto LAB_018848a8;
    bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo +
                     300);
    if ((bVar1 <= *(byte *)(*param_4 + 300)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo)) {
      FUN_01887724(param_1,param_2,lVar6,param_4,param_5,param_6,param_7);
      return;
    }
    break;
  case 8:
    plVar7 = *(long **)(param_1 + 0x20);
    if (plVar7 == (long *)0x0) goto LAB_01884894;
    uVar5 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
    uVar5 = FUN_010df6b8(uVar5,*(undefined8 *)puVar2);
    lVar6 = *param_3;
    bVar1 = *(byte *)(*(long *)puVar3 + 300);
    if ((bVar1 <= *(byte *)(lVar6 + 300)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0188467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x2b8))(param_3,param_2,uVar5,*(undefined8 *)(lVar6 + 0x2c0));
      return;
    }
LAB_018848a0:
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(param_3);
  default:
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(param_4);
}



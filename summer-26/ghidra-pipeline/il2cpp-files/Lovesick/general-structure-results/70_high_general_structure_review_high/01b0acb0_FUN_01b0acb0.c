/*
FUNCTION_NAME: FUN_01b0acb0
ENTRY_POINT: 01b0acb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_01b0acb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_44;
  
  puVar6 = StringLiteral_2628;
  puVar5 = Method_Obi_ObiList<Oni_Contact>_get_Data__;
  puVar4 = Method_System_Collections_Generic_List<FocusController_FocusedElement>_Add__;
  puVar3 = System_Data_DataColumnCollection_TypeInfo;
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  puVar1 = PTR_DAT_033f6fa8;
  if ((DAT_0377d235 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VA_Triangle>__ctor__);
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass31_0_<GetFieldsAndProperties>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<VoiceServiceRequest>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_AddDevice__);
    thunk_FUN_00d48444(StringLiteral_2628);
    thunk_FUN_00d48444(Method_Obi_ObiList<Oni_Contact>_get_Data__);
    thunk_FUN_00d48444(PTR_DAT_033f6fa8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<FocusController_FocusedElement>_Add__)
    ;
    DAT_0377d235 = 1;
  }
  lVar7 = *(long *)puVar3;
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar8 + 0xf8) = 0xffffffff;
  *(undefined2 *)(lVar8 + 0x100) = 0x100;
  uVar10 = DAT_0294cbc0;
  *(undefined8 *)(lVar8 + 0x108) = *(undefined8 *)puVar4;
  uVar9 = *(undefined8 *)puVar5;
  *(undefined1 *)(lVar8 + 0x11c) = 0;
  *(undefined4 *)(lVar8 + 0x120) = 0;
  *(undefined8 *)(lVar8 + 0x110) = uVar9;
  *(undefined8 *)(lVar8 + 0x124) = uVar10;
  *(undefined4 *)(lVar8 + 300) = 0;
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar8 + 0x130) = uVar10;
  *(undefined4 *)(lVar8 + 0x138) = 0;
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar8 + 0x13c) = DAT_0294cbc8;
  *(undefined4 *)(lVar8 + 0x144) = 0xbd570a3d;
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar8 + 0x148) = DAT_0294cbd0;
  *(undefined4 *)(lVar8 + 0x150) = 0xbd570a3d;
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined1 *)(lVar8 + 0x17c) = 0;
  *(undefined8 *)(lVar8 + 0x174) = 0;
  uVar10 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined1 *)(lVar8 + 400) = 0;
  *(undefined8 *)(lVar8 + 0x198) = 0;
  *(undefined8 *)(lVar8 + 0x1a0) = 0;
  *(undefined8 *)(lVar8 + 0x180) = uVar10;
  *(undefined8 *)(lVar8 + 0x188) = uVar10;
  lVar7 = *(long *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar7 + 0x1a8) = *(undefined8 *)puVar1;
  *(undefined4 *)(lVar7 + 0x1b0) = 1;
  *(undefined1 *)(lVar7 + 0x1b4) = 0;
  *(undefined2 *)(lVar7 + 0x1d0) = 0;
  *(undefined8 *)(lVar7 + 0x1d8) = 0;
  *(undefined2 *)(lVar7 + 0x1e0) = 0;
  *(undefined8 *)(lVar7 + 0x1e8) = 0;
  *(undefined1 *)(lVar7 + 0x1f0) = 0;
  puVar1 = Method_System_Collections_Generic_List<VA_Triangle>__ctor__;
  lVar7 = *(long *)puVar6;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar6;
  }
  uVar10 = **(undefined8 **)(lVar7 + 0xb8);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_HashSet<VoiceServiceRequest>__ctor__;
  if (lVar7 != 0) {
    FUN_011c181c(lVar7,uVar10,*(undefined8 *)Method_UnityEngine_InputSystem_InputSystem_AddDevice__,
                 0);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar8 != 0) {
      local_44 = 0;
      FUN_01361f38(lVar8,&local_44,lVar7,
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass31_0_<GetFieldsAndProperties>b__1__
                  );
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x200) = lVar8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



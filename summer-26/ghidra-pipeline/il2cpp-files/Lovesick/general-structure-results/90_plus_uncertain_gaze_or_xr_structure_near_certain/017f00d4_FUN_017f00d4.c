/*
FUNCTION_NAME: FUN_017f00d4
ENTRY_POINT: 017f00d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


long FUN_017f00d4(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  local_38 = param_2;
  if ((DAT_0377926f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__);
    thunk_FUN_00d48444(PTR_DAT_033f58e0);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnRestingHandAxis2DPerformed__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eeca0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_11__);
    DAT_0377926f = 1;
  }
  puVar1 = PTR_DAT_033f58e0;
  if (param_1 < -1) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlByte_get_Value__);
    uVar8 = thunk_FUN_00d48444(System_Collections_Generic_List<Rect>_TypeInfo);
    FUN_016efd4c(uVar10,uVar7,uVar8,0);
    uVar7 = thunk_FUN_00d48444(PTR_DAT_033f4678);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_033f58e0 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  uVar4 = FUN_017d61e0(&local_38,0);
  uVar10 = local_38;
  if ((uVar4 & 1) == 0) {
    if (param_1 == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03777b33 == '\0') {
        thunk_FUN_00d48444(
                          Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                          );
        DAT_03777b33 = '\x01';
      }
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar3;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    }
    else {
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
      if (lVar5 == 0) {
LAB_017f044c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_017f0450(lVar5,uVar10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_11__;
      uVar4 = FUN_017d6228(&local_38,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar3;
        }
        puVar2 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
        lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar9 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar3;
          }
          uVar10 = **(undefined8 **)(lVar6 + 0xb8);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar9 == 0) goto LAB_017f044c;
          FUN_011c181c(lVar9,uVar10,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar9;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017d659c(&local_78,&local_38,lVar9,lVar5,0);
        local_50 = local_68;
        uStack_58 = uStack_70;
        local_60 = local_78;
        *(undefined8 *)(lVar5 + 0x70) = local_68;
        *(undefined8 *)(lVar5 + 0x68) = uStack_70;
        *(undefined8 *)(lVar5 + 0x60) = local_78;
      }
      if (param_1 != -1) {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar3;
        }
        puVar1 = 
        Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnRestingHandAxis2DPerformed__
        ;
        lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar9 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar3;
          }
          uVar10 = **(undefined8 **)(lVar6 + 0xb8);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar9 == 0) goto LAB_017f044c;
          FUN_017e7614(lVar9,uVar10,*(undefined8 *)PTR_DAT_033eeca0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar9;
        }
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                                  );
        if (lVar6 == 0) goto LAB_017f044c;
        FUN_017b69bc(lVar6,0);
        FUN_017e6598(lVar6,lVar9,lVar5,(long)param_1,0xffffffffffffffff);
        *(long *)(lVar5 + 0x78) = lVar6;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_017efc34(uVar10);
  }
  return lVar5;
}



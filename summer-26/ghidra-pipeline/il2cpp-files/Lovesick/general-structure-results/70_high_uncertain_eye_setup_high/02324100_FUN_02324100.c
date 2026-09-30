/*
FUNCTION_NAME: FUN_02324100
ENTRY_POINT: 02324100
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02324100(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if ((DAT_03781c62 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_1350);
    thunk_FUN_00d48444(StringLiteral_7967);
    thunk_FUN_00d48444(StringLiteral_2441);
    thunk_FUN_00d48444(UnityEngine_UI_DefaultControls_DefaultRuntimeFactory_TypeInfo);
    thunk_FUN_00d48444(Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
    DAT_03781c62 = 1;
  }
  plVar3 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = StringLiteral_1350;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (plVar3 != (long *)0x0) {
    FUN_0160aa4c(plVar3,0);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(uVar6,0,0);
    uVar7 = *(undefined8 *)puVar2;
    uVar6 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0232435c;
      uVar6 = FUN_0268b6ac(*(long *)(param_1 + 0x10),0);
    }
    puVar2 = StringLiteral_2441;
    uVar6 = FUN_015f5b28(uVar7,uVar6,0);
    FUN_0160c8e8(plVar3,uVar6,0);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(uVar6,0,0);
    uVar7 = *(undefined8 *)puVar2;
    uVar6 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0232435c;
      uVar6 = FUN_0268b6ac(*(long *)(param_1 + 0x18),0);
    }
    puVar1 = StringLiteral_7967;
    uVar6 = FUN_015f5b28(uVar7,uVar6,0);
    FUN_0160c8e8(plVar3,uVar6,0);
    plVar5 = *(long **)(param_1 + 0x30);
    uVar6 = *(undefined8 *)puVar1;
    if (plVar5 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    uVar6 = FUN_015f5b28(uVar6,uVar7,0);
    FUN_0160c8e8(plVar3,uVar6,0);
    puVar2 = Method_OVRSceneManager_OVRManager_SceneCaptureComplete__;
    puVar1 = UnityEngine_UI_DefaultControls_DefaultRuntimeFactory_TypeInfo;
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      uVar6 = FUN_015f5b28(*(undefined8 *)puVar1,uVar6,0);
      FUN_0160c8e8(plVar3,uVar6,0);
      plVar5 = *(long **)(param_1 + 0x20);
      uVar6 = *(undefined8 *)puVar2;
      if (plVar5 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      uVar6 = FUN_015f5b28(uVar6,uVar7,0);
      FUN_0160c8e8(plVar3,uVar6,0);
                    /* WARNING: Could not recover jumptable at 0x02324358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      return;
    }
  }
LAB_0232435c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: Unity.VisualScripting.Unit$$GetAnalyticsIdentifier
ENTRY_POINT: 05cc65e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_11;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Unit__GetAnalyticsIdentifier(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_System_Collections_Generic_List<RenderGraphPass>_Clear__);
    FUN_02d6084c(PTR_DAT_06767ea8);
    FUN_02d6084c(Method_System_Collections_Generic_List<PanelRaycaster>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<RenderGraphPass>_GetEnumerator__);
    FUN_02d6084c(PTR_DAT_06780f90);
    *(undefined1 *)(unaff_x23 + 0x803) = 1;
  }
  puVar1 = PTR_DAT_06780f90;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = FUN_05cb90e8(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    FUN_0338fda4();
    if (unaff_x20 == (long *)0x0) {
      uVar6 = *(undefined8 *)Method_System_Collections_Generic_List<RenderGraphPass>_GetEnumerator__
      ;
      if (unaff_x19 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*unaff_x19 + 0x168))();
      }
      uVar6 = FUN_04e83184(uVar6,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
      }
      FUN_060223e8(uVar6,0);
      return;
    }
    lVar4 = (**(code **)(*unaff_x20 + 0x178))();
    uVar5 = Unity_VisualScripting_Unit_<>c__<RemoveUnconnectedInvalidPorts>b__22_0();
    puVar1 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__;
    puVar2 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__;
    if ((uVar5 & 1) == 0) {
      FUN_05cc64c4();
      puVar1 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__;
      puVar2 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__;
    }
    while (Method_System_Collections_Generic_List<PanelRaycaster>__ctor__ = puVar2,
          puVar2 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__,
          Method_System_Collections_Generic_List<PanelRaycaster>__ctor__ = puVar1, lVar4 != 0) {
      iVar3 = FUN_05cc31c0(lVar4);
      if (iVar3 < 2) {
        return;
      }
      uVar6 = FUN_05cc34e8(lVar4);
      lVar4 = FUN_05cc5204(lVar4,1);
      lVar7 = thunk_FUN_02d9d438(uVar6,*(undefined8 *)puVar2);
      puVar1 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__;
      if ((lVar7 != 0) &&
         (uVar5 = Unity_VisualScripting_Unit_<>c__<RemoveUnconnectedInvalidPorts>b__22_0(),
         puVar1 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__, (uVar5 & 1) == 0))
      {
        FUN_05cc64c4(lVar7,lVar4);
        puVar1 = Method_System_Collections_Generic_List<PanelRaycaster>__ctor__;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



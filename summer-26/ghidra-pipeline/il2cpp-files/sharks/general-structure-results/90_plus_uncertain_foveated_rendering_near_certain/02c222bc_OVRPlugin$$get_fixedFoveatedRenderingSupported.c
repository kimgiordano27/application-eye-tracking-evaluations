/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 02c222bc
PROGRAM: sharks-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined1  [16] OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 (*pauVar5) [12];
  undefined1 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  undefined1 auVar6 [16];
  
  while( true ) {
    (**(code **)(param_1 + 0x1d8))(param_2,*(undefined8 *)(param_1 + 0x1e0));
    FUN_02c21778();
    while( true ) {
      while( true ) {
        plVar4 = (long *)FUN_02c219a4();
        if (plVar4 != (long *)0x0) goto LAB_02c222e0;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        iVar2 = thunk_FUN_01847714(0x96);
        if (iVar2 < 1) break;
        do {
          plVar4 = *(long **)(unaff_x20 + 0x60);
          if (plVar4 == (long *)0x0) goto LAB_02c2232c;
          (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          FUN_02c21778();
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          iVar2 = thunk_FUN_01847714(0);
        } while (0 < iVar2);
      }
      if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_02c2232c;
      uVar3 = FUN_02b293f4(*(long *)(unaff_x20 + 0x60),0);
      if ((uVar3 & 1) == 0) break;
      do {
        plVar4 = *(long **)(unaff_x20 + 0x60);
        if (plVar4 == (long *)0x0) goto LAB_02c2232c;
        (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        FUN_02c21778();
        if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_02c2232c;
        uVar3 = FUN_02b293f4(*(long *)(unaff_x20 + 0x60),0);
      } while ((uVar3 & 1) != 0);
    }
    plVar4 = (long *)FUN_02c219a4();
    if (plVar4 != (long *)0x0) break;
    param_2 = *(long **)(unaff_x20 + 0x60);
    if (param_2 == (long *)0x0) {
LAB_02c2232c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    param_1 = *param_2;
  }
  unaff_w22 = 1;
LAB_02c222e0:
  puVar1 = PTR_DAT_0380a480;
  *unaff_x19 = unaff_w22;
  if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
  pauVar5 = (undefined1 (*) [12])thunk_FUN_01861d10();
  auVar6._12_4_ = 0;
  auVar6._0_12_ = *pauVar5;
  return auVar6;
}



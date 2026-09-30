/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodePose2
ENTRY_POINT: 02c4ea90
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_8_0__ovrp_GetNodePose2(ulong param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int unaff_w19;
  long unaff_x20;
  char *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  char *pcVar6;
  char *pcVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2c00);
    FUN_017fc350(PTR_DAT_03800540);
    *(undefined1 *)(unaff_x23 + 0x118) = 1;
  }
  if (unaff_x20 == 0) {
    plVar3 = *(long **)(unaff_x22 + 0x30);
  }
  else {
    plVar3 = *(long **)(unaff_x20 + 0x10);
  }
  if (((plVar3 == (long *)0x0) || (lVar5 = *(long *)PTR_DAT_03800540, *plVar3 != lVar5)) ||
     (iVar2 = (**(code **)(lVar5 + 0x188))(plVar3,*(undefined8 *)(lVar5 + 400)), iVar2 != 1)) {
    lVar4 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,1);
    plVar3 = (long *)0x0;
    lVar5 = (long)unaff_w19;
    pcVar6 = unaff_x21;
    while (pcVar6 < unaff_x21 + lVar5) {
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
      if (cVar1 < '\0') {
        if (plVar3 == (long *)0x0) {
          if (unaff_x20 == 0) {
            plVar3 = *(long **)(unaff_x22 + 0x30);
            if (plVar3 == (long *)0x0) goto LAB_02c4ebac;
            plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180))
            ;
          }
          else {
            plVar3 = (long *)FUN_02c4ebb4();
          }
          if (plVar3 == (long *)0x0) goto LAB_02c4ebac;
          plVar3[2] = (long)unaff_x21;
          plVar3[3] = 0;
        }
        if (lVar4 == 0) {
LAB_02c4ebac:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        *(char *)(lVar4 + 0x20) = cVar1;
        iVar2 = (**(code **)(*plVar3 + 0x1c8))(plVar3,lVar4,pcVar7,*(undefined8 *)(*plVar3 + 0x1d0))
        ;
        unaff_w19 = unaff_w19 + iVar2 + -1;
      }
    }
  }
  return unaff_w19;
}



/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 070969e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


int Newtonsoft_Json_JsonSerializer__get_TypeNameAssemblyFormatHandling(long param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined2 *unaff_x19;
  undefined2 *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  bool bVar8;
  long *unaff_x24;
  bool bVar9;
  int iVar10;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x3f0));
  *(undefined1 *)(unaff_x21 + 0xdf2) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  plVar7 = (long *)FUN_070c20bc(0);
  if (plVar7 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    bVar9 = 0 < unaff_w23;
    bVar8 = 0 < unaff_w22;
    if ((0 < unaff_w23) && (0 < unaff_w22)) {
      if (plVar7 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__set_MissingMemberHandling;
      iVar6 = unaff_w22;
      if (unaff_w23 - 1U <= unaff_w22 - 1U) {
        iVar6 = unaff_w23;
      }
      bVar8 = true;
      iVar10 = -1;
      bVar9 = true;
      do {
        sVar2 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*unaff_x20,*(undefined8 *)(*plVar7 + 0x1d0));
        sVar3 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*unaff_x19,*(undefined8 *)(*plVar7 + 0x1d0));
        if (sVar2 != sVar3) break;
        iVar1 = iVar10 + 2;
        iVar10 = iVar10 + 1;
        bVar9 = iVar1 < unaff_w23;
        unaff_x20 = unaff_x20 + 1;
        bVar8 = iVar1 < unaff_w22;
        unaff_x19 = unaff_x19 + 1;
      } while (iVar6 + -1 != iVar10);
    }
    if (bVar9) {
      if (bVar8) {
        if (plVar7 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__set_MissingMemberHandling;
        uVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*unaff_x20,*(undefined8 *)(*plVar7 + 0x1d0));
        uVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*unaff_x19,*(undefined8 *)(*plVar7 + 0x1d0));
        iVar6 = (uVar4 & 0xffff) - (uVar5 & 0xffff);
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = -(uint)bVar8;
    }
    return iVar6;
  }
Newtonsoft_Json_JsonSerializer__set_MissingMemberHandling:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



/*
FUNCTION_NAME: FUN_059b0d0c
ENTRY_POINT: 059b0d0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_8
*/


long FUN_059b0d0c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_06dc149b & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_105_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17eb0);
    DAT_06dc149b = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_105_0_TypeInfo;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar4 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_10_0_TypeInfo);
    uVar5 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_110_0_TypeInfo);
    uVar6 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_111_0_TypeInfo);
    uVar4 = FUN_0534f2b8(uVar4,uVar5,uVar6,0);
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar5 = thunk_FUN_02dd3144();
    FUN_054e8008(uVar5,uVar4,0);
    uVar4 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_112_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar4);
  }
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_105_0_TypeInfo) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto System_Xml_Schema_ListFacetsChecker___ctor;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)OVRPlugin_OVRP_1_105_0_TypeInfo,0);
System_Xml_Schema_ListFacetsChecker___ctor:
    lVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x38) != 0) {
        return *(long *)(lVar7 + 0x38);
      }
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_059b0e14;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar1,0);
LAB_059b0e14:
        lVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
        lVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a17eb0);
        FUN_05c8ad34(lVar3,0);
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x38) = lVar3;
          LeanTween__value((long *)(lVar7 + 0x38),lVar3);
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



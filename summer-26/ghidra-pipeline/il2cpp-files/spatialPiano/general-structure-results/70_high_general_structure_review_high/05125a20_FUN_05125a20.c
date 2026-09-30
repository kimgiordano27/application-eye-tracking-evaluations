/*
FUNCTION_NAME: FUN_05125a20
ENTRY_POINT: 05125a20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05125b8c) */

void FUN_05125a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_06bb9ebf & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9320);
    FUN_02f08768(PTR_DAT_067c91b0);
    DAT_06bb9ebf = 1;
  }
  plVar2 = (long *)FUN_05099808(param_3,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
  if (0x1000 < lVar3) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar5 = thunk_FUN_02f45270();
    uVar6 = thunk_FUN_02f6ef30(
                              UnityEngine_XR_OpenXR_Features_Meta_SingleEraseAnchor_EraseRequest_var
                              );
    FUN_0510bee0(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleLoadAnchor_LoadRequest_var)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,uVar6);
  }
  lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320);
  *(long *)(param_1 + 0x20) = lVar3;
  if ((lVar3 == 0) || (plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar1 = (**(code **)(*plVar2 + 0x338))
                    (plVar2,lVar3,0,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(*plVar2 + 0x340));
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (iVar1 != *(int *)(lVar3 + 0x18)) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar5 = thunk_FUN_02f45270();
    uVar6 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleSaveAnchor_SaveRequest_var)
    ;
    FUN_0510bee0(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleLoadAnchor_LoadRequest_var)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,uVar6);
  }
  FUN_0512b53c(param_1,lVar3,param_1 + 0x28);
  FUN_0512b5fc(param_1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05125b68;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar2,*(long *)PTR_DAT_067c91b0,0);
LAB_05125b68:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}



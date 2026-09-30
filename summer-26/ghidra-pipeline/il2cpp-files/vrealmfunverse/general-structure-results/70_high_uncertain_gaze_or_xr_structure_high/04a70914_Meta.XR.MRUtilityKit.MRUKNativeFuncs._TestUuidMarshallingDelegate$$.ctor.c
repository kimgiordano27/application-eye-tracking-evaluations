/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs._TestUuidMarshallingDelegate$$.ctor
ENTRY_POINT: 04a70914
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x04a70d70) */
/* WARNING: Removing unreachable block (ram,0x04a70d80) */

long Meta_XR_MRUtilityKit_MRUKNativeFuncs__TestUuidMarshallingDelegate___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x26;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02b7654c();
      goto LAB_04a70940;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_04a70940:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    plVar6 = *(long **)(unaff_x29 + -0x10);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a70e6c;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate__Invoke;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar6,lVar3,0);
Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate__Invoke:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
    lVar3 = 1;
  }
  plVar6 = *(long **)(unaff_x29 + -0x10);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04a70cd8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06312f78,0);
LAB_04a70cd8:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return lVar3 << 0x20;
  }
LAB_04a70e6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



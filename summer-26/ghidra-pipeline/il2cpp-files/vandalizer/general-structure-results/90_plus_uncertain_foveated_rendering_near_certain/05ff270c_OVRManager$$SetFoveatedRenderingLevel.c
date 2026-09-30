/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 05ff270c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar7;
  
  FUN_031f20f4(PTR_DAT_0759b378);
  *(undefined1 *)(unaff_x19 + 0xa82) = 1;
  plVar6 = *(long **)(unaff_x21 + 0x28);
  uVar7 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8) + 1);
  *(undefined8 *)(unaff_x21 + 0x6c) = **(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  *(undefined4 *)(unaff_x21 + 0x74) = uVar7;
  uVar1 = thunk_FUN_0322f148(*unaff_x22);
  System_Collections_Generic_Dictionary<object,_Guid>__Clear();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f3f38) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_05ff27cc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075f3f38,1);
LAB_05ff27cc:
                    /* WARNING: Could not recover jumptable at 0x05ff27e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}



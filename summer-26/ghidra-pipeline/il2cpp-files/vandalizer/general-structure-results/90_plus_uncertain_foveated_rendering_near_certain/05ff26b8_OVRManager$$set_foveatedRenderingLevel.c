/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 05ff26b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined4 uVar8;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xf38));
  FUN_031f20f4(PTR_DAT_075f6cc8);
  *(undefined1 *)(unaff_x19 + 0x872) = 1;
  if (*(char *)(unaff_x21 + 0x68) == '\0') {
    return;
  }
  lVar4 = *(long *)(unaff_x21 + 0x30);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x4c) = 0;
    *(undefined4 *)(lVar4 + 0x74) = 0x43b40000;
    puVar1 = PTR_DAT_075f3f40;
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    plVar7 = *(long **)(unaff_x21 + 0x28);
    uVar8 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8) + 1);
    *(undefined8 *)(unaff_x21 + 0x6c) = **(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    *(undefined4 *)(unaff_x21 + 0x74) = uVar8;
    uVar2 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary<object,_Guid>__Clear();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f3f38) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_05ff27cc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_075f3f38,1);
LAB_05ff27cc:
                    /* WARNING: Could not recover jumptable at 0x05ff27e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



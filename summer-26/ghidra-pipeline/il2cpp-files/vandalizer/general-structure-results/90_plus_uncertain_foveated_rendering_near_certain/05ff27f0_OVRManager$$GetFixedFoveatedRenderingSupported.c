/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 05ff27f0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_07a46873 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f3f40);
    FUN_031f20f4(PTR_DAT_075f3f38);
    FUN_031f20f4(PTR_DAT_075f6cc8);
    DAT_07a46873 = 1;
  }
  puVar2 = PTR_DAT_075f6cc8;
  puVar1 = PTR_DAT_075f3f40;
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_06e547e8(*(long *)(param_1 + 0x30),0,0);
    plVar8 = *(long **)(param_1 + 0x28);
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary<object,_Guid>__Clear
              (uVar3,param_1,*(undefined8 *)puVar2,0);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_075f3f38) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_05ff28ec;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075f3f38,2);
LAB_05ff28ec:
                    /* WARNING: Could not recover jumptable at 0x05ff2904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


